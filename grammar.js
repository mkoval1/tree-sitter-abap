module.exports = grammar({
  name: "abap",

  rules: {
    program: $ => repeat($._statement),

    _statement: $ =>
      choice(
        $.class_declaration,
        $.class_implementation,
        $.class_publication,
        $.class_local_friend_publication,
        $.interface_declaration
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
      repeat1(choice($.variable_declaration, $.chained_variable_declaration)),

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

    complete_typing: $ => seq(/type/i, $.name),

    generic_type: $ => choice(/any/i, /any table/i),

    variable_declaration: $ =>
      seq(/data/i, field("name", $.name), field("typing", $._typing), "."),

    chained_variable_declaration: $ =>
      seq(/data/i, ":", repeat1(choice($.variable, seq(",", $.variable))), "."),

    variable: $ => seq($.name, $._typing),

    name: $ => /[a-zA-Z_][a-zA-Z0-9_]{0,29}/i,
  },
});
