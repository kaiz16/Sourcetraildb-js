const fs = require('fs');
const recast = require("recast");
// const flow = require("flow-parser");
const { Parser } = require("acorn");
const bfs = require("acorn-bfs");
const test = fs.readFileSync('file.js').toString()
const ast = Parser.parse(test)

bfs(ast).forEach(function(node) {
   console.log(node.type + " " + node.name + " " + node.start +  " " +node.end);
   console.log(node)
  });