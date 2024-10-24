var User = require('../models/userModel');

exports.getUser = async function (req, res) {
    /*
    #swagger.tags = ['User']
    #swagger.summary = 'Retorna a lista de usuários'
    #swagger.responses[200] = {
        description: 'Lista de usuários retornada com sucesso'
    }
        #swagger.responses[500] = {
            description: 'Erro ao buscra a lista de usuários'}
    */

    try {
        const result = await User.find();
        res.status(200).json(result);
    } catch (err) {
        res.status(500).json(err);
    }
};

//o promise é para quando não quer que espere o processo aconteça. Ao usar o try/catch não é preciso esperar
exports.create = function (req, res) {
    /* 
        #swagger.tags = ['User']
        #swagger.summary = 'Cria um novo usuário'
        #swagger.requestBody = {
            required: true,
            content: {
                'application/json': {
                    schema: {
                        type: 'object',
                        properties: {
                            name: { type: 'string' },
                            age: { type: 'integer' }
                        }
                    }
                }
            }
        }
        #swagger.responses[201] = {
            description: 'Usuário criado com sucesso'
        }
        #swagger.responses[500] = {
            description: 'Erro ao cadastrar o usuário'
        }
    */

    let user = new User({
        name: req.body.name,
        age: req.body.age
    });

    user.save()
        .then(res.status(201).send(user.toJSON()))
        .catch((err) => {
            res.status(500).send({ message: `${err.message} - falha ao cadastrar usuário.` });
        });
};

exports.details = async function (req, res) {
    /*#swagger.tags = ['User']#swagger.summary = 'Retorna os detalhes de um usuário específico'#swagger.parameters['id'] = {
          description: 'ID do usuário',
          required: true,
          type: 'string'}#swagger.responses[200] = {
          description: 'Usuário encontrado'}#swagger.responses[404] = {
          description: 'Usuário não encontrado'}#swagger.responses[500] = {
          description: 'Erro ao buscar usuário'}*/

    try {
        const result = await User.findById(req.params.id);
        res.status(200).json(result);
    } catch (err) {
        res.status(500).json(err);
    }
};

exports.updateUser = async function (req, res) {
    /* 
        #swagger.tags = ['User']
        #swagger.summary = 'Atualiza um usuário existente'
        #swagger.parameters['id'] = {
            description: 'ID do usuário',
            required: true,
            type: 'string'
        }
        #swagger.requestBody = {
            required: true,
            content: {
                'application/json': {
                    schema: {
                        type: 'object',
                        properties: {
                            name: { type: 'string' },
                            age: { type: 'integer' }
                        }
                    }
                }
            }
        }
        #swagger.responses[200] = {
            description: 'Usuário atualizado com sucesso'
        }
        #swagger.responses[404] = {
            description: 'Usuário não encontrado'
        }
        #swagger.responses[500] = {
            description: 'Erro ao atualizar usuário'
        }
    */

    try {
        //findByIdAndUpdate(id, dados, {new: true} (retorna o documento atualizado))
        const user = await User.findByIdAndUpdate(req.params.id, req.body, { new: true })
        if (user) {
            res.status(200).json(user);
        }
        else {
            res.status(404).json({ message: 'Usuário não encontrado' });
        }

    } catch (err) {
        //esta definindo o status para 500 e passando o erro.
        res.status(500).send({ message: `${err.message} - Erro ao atualizar usuário.` });
    }
}
exports.deleteUser = async function (req, res) {
    /* 
        #swagger.tags = ['User']
        #swagger.summary = 'Remove um usuário existente'
        #swagger.parameters['id'] = {
            description: 'ID do usuário',
            required: true,
            type: 'string'
        }
        #swagger.responses[200] = {
            description: 'Usuário deletado com sucesso'
        }
        #swagger.responses[404] = {
            description: 'Usuário não encontrado'
        }
        #swagger.responses[500] = {
            description: 'Erro ao deletar usuário'
        }
    */
    try {
        const user = await User.findByIdAndDelete(req.params.id);
        if (user) {
            res.status(200).json({ message: 'Deletado com sucesso' });
        }
        else {
            res.status(404).json({ message: `${err.message} - Usuário não encontrado` })
        }
    } catch (err) {
        res.status(500).send({ message: `${err.message} - Erro ao deletar usuário` })
    }

}