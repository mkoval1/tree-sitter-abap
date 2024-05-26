module.exports = grammar({
  name: "abap",

  word: $ => $.name,

  rules: {
    program: $ => repeat($._statement),

    _statement: $ =>
      choice(
        $.class_declaration,
        $.class_implementation,
        $.class_publication,
        $.class_local_friend_publication,
        $.interface_declaration,
        $.variable_declaration,
        $.chained_variable_declaration,
        $.chained_structure_declaration,
        $.comment,
        $.loop_statement,
        $.field_symbol_declaration,
        $.chained_field_symbol_declaration,
        $.exit_statement,
        $.continue_statement,
        $.report_statement,
        $.if_statement,
        $.return_statement,
        $.check_statement,
        $.assignment,
        $.select_statement_obsolete,
        $.read_table_statement
      ),

    class_declaration: $ =>
      seq(
        /class/i,
        field("name", $.name),
        /definition/i,
        optional(/public/i),
        optional(seq(/inheriting from/i, field("superclass", $.name))),
        optional(/abstract/i),
        optional(/final/i),
        optional(seq(/create/i, choice(/public/i, /protected/i, /private/i))),
        optional(/shared memory enabled/i),
        optional(
          seq(
            optional(/global/i),
            /friends/i,
            field("friends", repeat1($.name))
          )
        ),
        ".",
        optional($.public_section),
        optional($.protected_section),
        optional($.private_section),
        /endclass/i,
        "."
      ),

    public_section: $ =>
      seq(/public section/i, ".", repeat($._class_components)),

    protected_section: $ =>
      seq(/protected section/i, ".", repeat($._class_components)),

    private_section: $ =>
      seq(/private section/i, ".", repeat($._class_components)),

    _class_components: $ =>
      choice(
        $.variable_declaration,
        alias($.method_declaration_class, $.method_declaration),
        $.constructor_declaration,
        $.method_redefinition,
        alias($.class_method_declaration_class, $.class_method_declaration),
        $.class_constructor_declaration
      ),

    class_implementation: $ =>
      seq(
        /class/i,
        field("name", $.name),
        /implementation/i,
        ".",
        repeat($.method_implementation),
        /endclass/i,
        "."
      ),

    method_declaration_class: $ =>
      seq(
        /methods/i,
        field("name", $.name),
        optional(choice(/abstract/i, /final/i)),
        field(
          "importing_parameters",
          optional($._method_declaration_importing)
        ),
        field(
          "exporting_parameters",
          optional($._method_declaration_exporting)
        ),
        field("changing_parameters", optional($._method_declaration_changing)),
        optional($.returning_parameter),
        field("raising", optional($._method_declaration_raising)),
        field("exceptions", optional($._method_declaration_exceptions)),
        "."
      ),

    _method_declaration_importing: $ =>
      seq(/importing/i, repeat1($.method_parameters)),

    _method_declaration_exporting: $ =>
      seq(/exporting/i, repeat1($.method_parameters)),

    _method_declaration_changing: $ =>
      seq(/changing/i, repeat1($.method_parameters)),

    _method_declaration_raising: $ =>
      seq(
        /raising/i,
        repeat1(choice($.name, seq(/resumable/i, "(", $.name, ")")))
      ),

    _method_declaration_exceptions: $ => seq(/exceptions/i, repeat1($.name)),

    method_parameters: $ =>
      seq(
        choice(
          seq(/value/i, "(", $.name, ")"),
          seq(/reference/i, "(", $.name, ")"),
          $.name
        ),
        $._typing,
        optional(choice(/optional/i, seq(/default/i, $.name)))
      ),

    returning_parameter: $ =>
      seq(/returning/i, /value/i, "(", $.name, ")", $.complete_typing),

    constructor_declaration: $ =>
      seq(
        /methods/i,
        /constructor/i,
        optional(/final/i),
        field(
          "importing_parameters",
          optional($._method_declaration_importing)
        ),
        field("raising", optional($._method_declaration_raising)),
        field("exceptions", optional($._method_declaration_exceptions)),
        "."
      ),

    class_constructor_declaration: $ =>
      seq(/class-methods/i, /class_constructor/, "."),

    method_redefinition: $ =>
      seq(/methods/i, $.name, optional(/final/i), /redefinition/i, "."),

    class_method_declaration_class: $ =>
      seq(
        /class-methods/i,
        field("name", $.name),
        field(
          "importing_parameters",
          optional($._method_declaration_importing)
        ),
        field(
          "exporting_parameters",
          optional($._method_declaration_exporting)
        ),
        field("changing_parameters", optional($._method_declaration_changing)),
        optional($.returning_parameter),
        field("raising", optional($._method_declaration_raising)),
        field("exceptions", optional($._method_declaration_exceptions)),
        "."
      ),

    class_method_declaration_interface: $ =>
      seq(
        /class-methods/i,
        field("name", $.name),
        optional(seq(/default/i, choice(/ignore/i, /fail/i))),
        field(
          "importing_parameters",
          optional($._method_declaration_importing)
        ),
        field(
          "exporting_parameters",
          optional($._method_declaration_exporting)
        ),
        field("changing_parameters", optional($._method_declaration_changing)),
        optional($.returning_parameter),
        field("raising", optional($._method_declaration_raising)),
        field("exceptions", optional($._method_declaration_exceptions)),
        "."
      ),

    method_implementation: $ =>
      seq(
        /method/i,
        field("name", $.name),
        ".",
        optional($.method_body),
        /endmethod/i,
        "."
      ),

    method_body: $ =>
      repeat1(
        choice(
          $.variable_declaration,
          $.chained_variable_declaration,
          $.chained_structure_declaration
        )
      ),

    class_publication: $ =>
      seq(
        /class/i,
        field("name", $.name),
        /definition/i,
        /deferred/i,
        optional(/public/i),
        "."
      ),

    class_local_friend_publication: $ =>
      seq(
        /class/i,
        field("name", $.name),
        /definition/i,
        /local/i,
        /friends/i,
        field("friends", repeat1($.name)),
        "."
      ),

    interface_declaration: $ =>
      seq(
        /interface/i,
        field("name", $.name),
        optional(/public/i),
        ".",
        repeat($._interface_components),
        /endinterface/i,
        "."
      ),

    _interface_components: $ =>
      choice(
        $.variable_declaration,
        alias($.method_declaration_interface, $.method_declaration),
        alias($.class_method_declaration_interface, $.class_method_declaration)
      ),

    method_declaration_interface: $ =>
      seq(
        /methods/i,
        field("name", $.name),
        optional(seq(/default/i, choice(/ignore/i, /fail/i))),
        field(
          "importing_parameters",
          optional($._method_declaration_importing)
        ),
        field(
          "exporting_parameters",
          optional($._method_declaration_exporting)
        ),
        field("changing_parameters", optional($._method_declaration_changing)),
        optional($.returning_parameter),
        field("raising", optional($._method_declaration_raising)),
        field("exceptions", optional($._method_declaration_exceptions)),
        "."
      ),

    _typing: $ => choice($.generic_typing, $.complete_typing),

    generic_typing: $ =>
      choice(seq(/type/i, $.generic_type), seq(/like/i, $.name)),

    complete_typing: $ => seq(/type/i, alias($.name, $.type)),

    generic_type: $ => choice(/any/i, /any table/i),

    _data_object_typing: $ =>
      choice(
        //$._data_object_typing_built_in,
        $._data_object_typing_normal,
        //$._data_object_typing_enumerated,
        $._data_object_typing_reference,
        $._data_object_typing_itabs
        //$._data_object_typing_ranges
      ),

    _data_object_typing_normal: $ =>
      seq(
        choice(
          seq(/type/i, optional(seq(/line/i, /of/i)), alias($.name, $.type)),
          seq(/like/i, optional(seq(/line/i, /of/i)), $.name)
        ),
        optional(seq(/value/i, choice($.name, seq(/is/i, /initial/i)))),
        optional(/read-only/i)
      ),

    _data_object_typing_reference: $ =>
      seq(
        choice(
          seq(/type/i, /ref/i, /to/i, alias($.name, $.type)),
          seq(/like/i, /ref/i, /to/i, $.name)
        ),
        optional(seq(/value/i, /is/i, /initial/i)),
        optional(/read-only/i)
      ),

    _data_object_typing_itabs: $ =>
      seq(
        choice(
          seq(
            /type/i,
            choice(optional(/standard/i), /sorted/i, /hashed/i),
            /table/i,
            /of/i,
            optional(seq(/ref/i, /to/i)),
            alias($.name, $.type)
          ),
          seq(
            /like/i,
            choice(optional(/standard/i), /sorted/i, /hashed/i),
            /table/i,
            /of/i,
            $.name
          )
        )
      ),

    variable_declaration: $ =>
      seq(
        /data/i,
        field("name", $.name),
        field("typing", alias($._data_object_typing, $.typing)),
        "."
      ),

    chained_variable_declaration: $ =>
      seq(/data/i, ":", repeat1(choice($.variable, seq(",", $.variable))), "."),

    variable: $ => seq($.name, alias($._data_object_typing, $.typing)),

    chained_structure_declaration: $ =>
      seq(
        /data/i,
        ":",
        /begin/i,
        /of/i,
        alias($.name, $.strucure_name),
        optional(/read-only/i),
        ",",
        alias(repeat1($.structure_component), $.structure_components),
        /end/i,
        /of/i,
        alias($.name, $.strucure_name),
        "."
      ),

    structure_component: $ => seq($.name, $._typing, ","),

    field_symbol_declaration: $ =>
      seq(/field-symbols/i, alias($.field_symbol_name, $.name), $._typing, "."),

    chained_field_symbol_declaration: $ =>
      seq(
        /field-symbols/i,
        ":",
        repeat1(choice($.field_symbol, seq(",", $.field_symbol))),
        "."
      ),

    field_symbol: $ => seq(alias($.field_symbol_name, $.name), $._typing),

    loop_statement: $ =>
      seq(
        /loop/i,
        /at/i,
        alias($.name, $.itab),
        choice(
          seq(/into/i, alias($.name, $.result)),
          seq(/assigning/i, alias($.field_symbol_name, $.result))
        ),
        optional(
          seq(
            optional(seq(/from/i, $._general_expression_position)),
            optional(seq(/to/i, $._general_expression_position)),
            optional(seq(/step/i, $._general_expression_position))
          )
        ),
        ".",
        // FIXME: not all statements are allowed in loop body
        repeat($._statement),
        /endloop/i,
        "."
      ),

    exit_statement: $ => seq(/exit/i, "."),

    continue_statement: $ => seq(/continue/i, "."),

    return_statement: $ => seq(/return/i, "."),

    report_statement: $ => seq(kw("report"), $.name, "."),

    if_statement: $ =>
      seq(
        /if/i,
        $._logical_expression,
        ".",
        //FIXME: not all statements are allowed in statement_block
        repeat($._statement),
        /endif/i,
        "."
      ),

    check_statement: $ => seq(/check/i, $._logical_expression, "."),

    _logical_expression: $ =>
      choice(
        $.comparison_expression,
        prec.right(4, seq(/not/i, $._logical_expression)),
        prec.left(1, seq($._logical_expression, /or/i, $._logical_expression)),
        prec.left(2, seq($._logical_expression, /and/i, $._logical_expression))
      ),

    comparison_expression: $ =>
      seq(
        $._general_expression_position,
        choice("=", /eq/i, "<>", /ne/i),
        $._general_expression_position
      ),

    _general_expression_position: $ =>
      choice($.numeric_literal, $._data_object, $._calculation_expression),

    _calculation_expression: $ => choice($.arithmetic_expression),

    arithmetic_expression: $ =>
      choice(
        prec.left(
          1,
          seq(
            $._general_expression_position,
            "+",
            $._general_expression_position
          )
        ),
        prec.left(
          1,
          seq(
            $._general_expression_position,
            "-",
            $._general_expression_position
          )
        ),
        prec.left(
          2,
          seq(
            $._general_expression_position,
            "*",
            $._general_expression_position
          )
        ),
        prec.left(
          2,
          seq(
            $._general_expression_position,
            "/",
            $._general_expression_position
          )
        ),
        prec.left(
          2,
          seq(
            $._general_expression_position,
            "DIV",
            $._general_expression_position
          )
        ),
        prec.left(
          2,
          seq(
            $._general_expression_position,
            "MOD",
            $._general_expression_position
          )
        ),
        prec.left(
          3,
          seq(
            $._general_expression_position,
            "**",
            $._general_expression_position
          )
        )
      ),

    select_statement_obsolete: $ =>
      seq(
        /select/i,
        $.select_list,
        optional(seq(/up/i, /to/i, $._general_expression_position, /rows/i)),
        /from/i,
        alias($.name, $.data_source),
        alias($._select_target, $.target),
        optional(
          seq(optional($.for_all_entries), alias($._where_clause, $.where))
        ),
        "."
      ),

    select_list: $ => choice("*"),

    _select_target: $ =>
      choice(
        seq(/into/i, " ( ", $.name, repeat(seq(",", $.name)), " ) "),
        seq(/into/i, optional(seq(/corresponding/i, /fields/i, /of/i)), $.name),
        seq(
          choice(/into/i, /appending/i),
          optional(seq(/corresponding/i, /fields/i, /of/i)),
          /table/i,
          $.name
        )
      ),

    for_all_entries: $ => seq(/for/i, /all/i, /entries/i, /in/i, $.name),

    _where_clause: $ => seq(/where/i, $._sql_condition),

    _sql_condition: $ => $._logical_expression,

    read_table_statement: $ =>
      seq(
        /read/i,
        /table/i,
        $.name,
        choice(
          seq($.line_spec, $._read_table_result),
          seq($._read_table_result, $.line_spec)
        ),
        "."
      ),

    line_spec: $ =>
      seq(
        /with/i,
        /key/i,
        repeat1(seq($.name, "=", $._general_expression_position)),
        optional(seq(/binary/i, /search/i))
      ),

    _read_table_result: $ =>
      choice(seq(/into/i, $.name), seq(/transporting/i, /no/i, /fields/i)),

    _data_object: $ =>
      choice($.name, $.field_symbol_name, $.structured_data_object),

    structured_data_object: $ =>
      seq(
        alias(choice($.name, $.field_symbol_name), $.structure_name),
        repeat1(seq(token.immediate("-"), alias($.name, $.component_name)))
      ),

    assignment: $ => seq($.name, "=", $._general_expression_position, "."),

    numeric_literal: $ => /[0-9]+/,

    comment: $ => choice(seq("*", /[^\n]*/), seq(/"/, /[^\n]*/)),

    name: $ => /[a-zA-Z_][a-zA-Z0-9_]{0,29}/i,

    field_symbol_name: $ => /<[a-zA-Z0-9_]{0,28}>/i,
  },
});


/**
 * ABAP word/keyword
 * @param {string} word - ABAP word as string
 */
function kw(word){
  return alias(new RegExp(word, "i"), word)
}