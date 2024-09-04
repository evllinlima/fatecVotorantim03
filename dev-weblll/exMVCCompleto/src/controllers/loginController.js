const loginModel = require('../models/loginModel')
const login = new loginModel()
const logged = login.isLogged()

// o req ele pega uma informação do body. E o resp ele envia uma informação para o body
exports.getLogin = ((req, resp) => {
    /* #swagger.tags = ['Login'] 
    #swagger.summary = 'Call some function'
    #swagger.description = 'This endponit will show if user is logged'*/
    resp.send(`<h1>${logged}</h1>`)
})
exports.getIsLogged = ((req, res) => {

    /*
    #swagger.ignore = true
    */

    res.render("loginView", { logged: logged })
})

exports.createUser = ((req, res) => {
    //#swagger.tags = ['Create User]
    const { email, password } = req.body
    res.status(200).json("User add sucessfully")
});

exports.getbyId = ((req, res) => {
    const filter = rep.query.filter;
    const version = req.headers.version;
    return req.status(200).send("Getting User");
});