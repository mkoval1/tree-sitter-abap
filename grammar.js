module.exports = grammar({
  name: "abap",

  rules: {
    source_file: $ => repeat(choice($._statement, $._compound_statement)),

    word: $ => $.identifier,

    _statement: $ =>
      seq(
        choice(
          $.write_statement,
          $.clear_statement,
          $.assignment,
          $.add_statement,
          $.assert_statement,
          $.data_statement
        ),
        "."
      ),

    _compound_statement: $ => choice($.class_definition),

    clear_statement: $ => seq(/clear/i, $.identifier),

    write_statement: $ => seq(/write/i, $._expression),

    add_statement: $ =>
      seq(
        /add/i,
        field("dobj1", $.identifier),
        /to/i,
        field("dobj2", $.identifier)
      ),

    assert_statement: $ =>
      seq(
        /assert/i,
        optional(
          seq(
            /id/i,
            $.checkpoint_group,
            optional(seq(/subkey/i, $._general_expression_position)),
            /condition/i
          )
        ),
        $._logical_expression
      ),

    checkpoint_group: $ => $.identifier,

    data_statement: $ => seq(/data/i, $.variable, $.type_declaration),

    class_definition: $ =>
      seq(
        /class/i,
        field("name", $.class_name),
        /definition/i,
        ".",
        optional(seq(/public section/i, $.class_components)),
        optional(seq(/protected section/i, $.class_components)),
        optional(seq(/private section/i, $.class_components)),
        /endclass/i,
        "."
      ),
    
    class_name: $ => /[a-zA-Z_][0-9a-zA-Z_]{1,29}/,
    
    class_components: $ => repeat($.data_statement),

    variable: $ => $.identifier,

    type_declaration: $ =>
      choice(seq(/type/i, $.abap_type), seq(/like/i, $._data_object)),

    abap_type: $ =>
      choice(
        /c/i,
        /n/i,
        /string/i,
        /b/i,
        /s/i,
        /i/i,
        /int8/i,
        /p/i,
        /decfloat16/i,
        /decfloat34/i,
        /f/i,
        /x/i,
        /xstring/i,
        /d/i,
        /t/i,
        /utclong/i
      ),

    _logical_expression: $ => choice($.comparison_expression),

    comparison_expression: $ =>
      seq(
        field("operand1", $._general_expression_position),
        choice(
          "=",
          "EQ",
          "<>",
          "NE",
          ">",
          "GT",
          "<",
          "LT",
          ">=",
          "GE",
          "<=",
          "LE"
        ),
        field("operand2", $._general_expression_position)
      ),

    _general_expression_position: $ => choice($._data_object),

    _data_object: $ => choice($._literal, $.identifier),

    _literal: $ => choice($.character_literal, $.numeric_literal),

    assignment: $ =>
      seq(field("left", $.identifier), "=", field("right", $._expression)),

    identifier: _ => /[a-zA-Z_][0-9a-zA-Z_]*/,

    _expression: $ =>
      choice($.character_literal, $.binary_expression, $.identifier),

    binary_expression: $ =>
      choice(
        prec.left(
          1,
          seq(
            field("left", $._expression),
            field("operator", "+"),
            field("right", $._expression)
          )
        ),
        prec.left(
          1,
          seq(
            field("left", $._expression),
            field("operator", "-"),
            field("right", $._expression)
          )
        ),
        prec.left(
          2,
          seq(
            field("left", $._expression),
            field("operator", "*"),
            field("right", $._expression)
          )
        )
      ),

    character_literal: $ =>
      seq(
        "'",
        // supposed to be 7-bit ASCII
        repeat(/[\x20-\x7E]/),
        "'"
      ),

    numeric_literal: _ => /[0-9]+/,
  },
});
