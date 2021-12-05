//index.js
const nodecpp = require('./build/Release/nodecpp.node');


console.log('addon', nodecpp.hello());

+console.log('add ', nodecpp.add(5, 10));

module.exports = nodecpp;