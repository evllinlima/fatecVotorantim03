// para confugurar a página inicial do express
const express = require('express')
const app = express()
// para criar a documentação do swagger. O body-parset é para a criação do json
const swaggerUi = require('swagger-ui-express');
const swaggerFile = require('./swagger-output.json')
const bodyParser = require('body-parser');

const homeRoute = require('./src/routes/homeRoute')

app.use(bodyParser.urlencoded({ extended: false }))
app.use(homeRoute)

app.use(bodyParser.json());
app.use('/docs', swaggerUi.serve, swaggerUi.setup(swaggerFile));

app.set('view engine', 'ejs')
app.set('views', './src/views')

app.listen(3000, function () {
    console.log('App rodando na porta 3000')
})