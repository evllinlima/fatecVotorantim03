const adminModel = require("../models/adminModel")
const HomeModel = require("../models/homeModel")

exports.getAdmin = ((req, res) => {
    /* 
        #swagger.tags = ['Admin']
        #swagger.summary = 'Exibe a área de administração'
        #swagger.description = 'Mostra uma lista de todos cadastros, salvos com opção de exclusão.'
        #swagger.responses[200] = {
            description: 'Página carregada com sucesso'
        }
    */
    let cadastros = HomeModel.listaCadastro
    res.render("adminView", { cadastros })
})

exports.excluirCadastro = ((req, res) => {
    /* 
        #swagger.tags = ['Admin']
        #swagger.summary = 'Exclui um Cadastro'
        #swagger.description = 'Exclui o cadastro em que foi clicado no excluir atraves do email cadastrado.'
        #swagger.responses[200] = {
            description: 'Cadastro excluido com sucesso'
        }
    */
    let email = req.body.email
    adminModel.excluirCadastro(email)
    res.redirect("/admin")
})

exports.totalCadastros = ((req, res) => {
    /* 
        #swagger.tags = ['Admin']
        #swagger.summary = 'Lista o total de cadastros'
        #swagger.description = 'Exibe a lista de cadastros e o seu total'
        #swagger.responses[200] = {
            description: 'Dados carregados com sucesso'
        }
    */
    let total = adminModel.totalCadastros();
    let cadastros = HomeModel.listaCadastro;
    res.render('adminView', { cadastros, total });
})
