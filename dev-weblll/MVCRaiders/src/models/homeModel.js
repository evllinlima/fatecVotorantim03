module.exports = class HomeModel {

    static listaCadastro = []

    constructor(email, nome) {
        this.email = email
        this.nome = nome
    }

    static salvarFormulario(nome, email){
        let novo = new HomeModel(email, nome)
        this.listaCadastro.push(novo)
    }
}