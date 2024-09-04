const swaggerAutogen = require('swagger-autogen')({ openapi: '3.1.0' });

const doc = {
    info: {
        version: "1.0.0",
        title: "MVC Example",
        description: "showing how to use mcv"
    },

    servers: [
        {
            url: 'http://localhost:3000'
        }
    ],
};

const outputFile = './swagger-output.json';
const endpointFiles = ['./index.js'];

swaggerAutogen(outputFile, endpointFiles, doc).then(() => {
    require('./')
});