const homeModel = require('../models/homeModel')
let cadastros = homeModel.listaCadastro

module.exports = class adminModel {
    static excluirCadastro(email) {
        cadastros = cadastros.filter(cadastro => cadastro.email !== email)
        homeModel.listaCadastro = cadastros
    }

    static getCadastros() {
        return homeModel.listaCadastro
    }
    
    static totalCadastros() {
        return homeModel.listaCadastro.length
    }
}