module.exports = grammar({
  name: 'YOUR_LANGUAGE_NAME',

  rules: {
    source_file: $ => repeat($._definition),

    _definition: $ => choice(
      $.identifier,
      $.block
      // TODO: other kinds of definitions
    ),

    function_definition: $ => seq(
      'apt',
      $.identifier,
      $.parameter_list,
      $._type,
      $.block
    ),

    parameter_list: $ => seq(
      '(',
       // TODO: parameters
      ')'
    ),

    _type: $ => choice(
      'bool',
      // TODO: other kinds of types
      'int'
    ),

    block: $ => seq(
      '{',
      repeat($._statement),
      '}'
    ),

    _statement: $ => choice(
      $.return_statement,
      $.frequency,
      $.title
      // TODO: other kinds of statements
    ),

    return_statement: $ => seq(
      'return',
      $._expression,
      ';'
    ),

    _expression: $ => choice(
      $.identifier,
      $.week,
      // TODO: other kinds of expressions
    ),

    title: $ => /\W+/,

    frequency: $ => /\d[M|W|Y]/,

    identifier: $ => /[a-z]+/,

    week: $ => /\d+/
  }
});
