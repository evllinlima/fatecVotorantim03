const express = require('express')
const router = express.Router()

const loginController = require('../controllers/loginController')

// marcar as rotas
router.get("/login", loginController.getLogin)
router.get('/logged', loginController.getIsLogged)
router.post("/create", loginController.createUser);
router.get('/user/:id', loginController.getbyId);


module.exports = router