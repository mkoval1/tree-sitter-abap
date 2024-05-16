module.exports = grammar({
  name: "abap",

  rules: {
    source_file: $ => repeat(choice($._statement, $._compound_statement)),
  },
});
