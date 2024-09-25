const homeModel = require("../models/homeModel")

exports.getHome = ((req, res) => {
    /* 
        #swagger.tags = ['Home']
        #swagger.summary = 'Exibe a página inicial'
        #swagger.description = 'Mostra a página inicial com os campos para efetuar registro'
        #swagger.responses[200] = {
            description: 'Página carregada com sucesso'
        }
    */
    let cadastros = ''
    res.render("homeRaidersView", { cadastros })
})

exports.salvarFormulario = ((req, res) => {
    /* 
        #swagger.tags = ['Home']
        #swagger.summary = 'Salva um novo cadastro'
        #swagger.description = 'Pega os dados do formulário de cadastro e envia para ser salvo'
        #swagger.responses[200] = {
            description: 'Cadastro efetuado com sucesso'
        }
    */
    let nome = req.body.nome
    let email = req.body.email

    homeModel.salvarFormulario(nome, email)
    res.redirect('/')
})