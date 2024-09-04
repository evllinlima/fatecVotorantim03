const express = require('express')
const router = express.Router()

// utilizado para exportar para outro arquivo
module.exports = router

const homeController = require('../controllers/homeController')

// marcar as rotas
router.get("/", homeController.getHome)
router.post("/save", homeController.salvarFormulario)
