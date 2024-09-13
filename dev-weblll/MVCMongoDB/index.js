const express = require('express');
const bodyParset = require('body-parser');
const app = express();

// o body parset deve estar sempre acima da rota.
app.use(bodyParset.json());
app.use(bodyParset.urlencoded({ extended: false }));

const userRoute = require('./src/routes/userRoute');

// Configurando o acesso ao banco de dados
const mongoose = require('mongoose')
let url = 'mongodb://localhost:27017/Fatec'
let mongoDB = process.env.MONGODB_URI || url;
mongoose.connect(mongoDB);
mongoose.Promisse = global.Promise;
let db = mongoose.connection;
db.on('error', console.error.bind(console, 'Erro ao conectar ao MongoDB'));


app.listen(3000, () => {
    console.log('Servidor em execução na porta 3000')
})

app.use(userRoute)

