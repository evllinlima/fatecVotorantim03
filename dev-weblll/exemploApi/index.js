const express = require('express')
const app = express()
const port = 3000

app.use(express.json())

//vetor para salvar os nomes
let nomes = [];

app.get('/', (req, res) => {
  //converte o json recebido e mostra os dados
  res.json(nomes)
})

app.post('/', (req, res) => {
  //ao enviar os dados, serão armazenados na variavel nome, e depois adicionados ao vetor
  let nome = req.body.nome
  nomes.push(nome)
  res.send(`Nome: ${req.body.nome}`)
})

app.post('/exercicio', (req, res) => {
  let newTemp = Converter(req.body.type, req.body.temperature)
  if (newTemp == 0) {
    res.send('Invalid Type')
    return
  }
  let newType = req.body.type.toUpperCase() == 'C' ? 'F' : 'C'
  res.send(`Temperature in ${newType} = ${newTemp}`)
});

function Converter(type, temperature) {
  let newTemp
  switch (type.toUpperCase()) {
    case "C":
      newTemp = (9 * temperature / 5) + 32
      break;

    case "F":
      newTemp = 5 * (temperature - 32) / 9
      break;

    default:
      newTemp = 0;
      break;
  }
  return newTemp
}

app.listen(port, () => {
  console.log(`Example app listening on port ${port}`)
})