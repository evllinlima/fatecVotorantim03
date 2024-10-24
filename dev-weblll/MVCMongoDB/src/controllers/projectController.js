var Project = require('../models/projectModel');

exports.getProject = async function (req, res) {
    /* 
        #swagger.tags = ['Project']
        #swagger.summary = 'Retorna a lista de projetos'
        #swagger.responses[200] = {
            description: 'Lista de projetos retornada com sucesso'
        }
        #swagger.responses[500] = {
            description: 'Erro ao buscar a lista de projetos'
        }
    */

    try {
        const result = await Project.find().populate('assignedTo');
        res.status(200).json(result)
    } catch (err) {
        res.status(500).json(err);
    }
};

exports.create = function (req, res) {
    /* 
        #swagger.tags = ['Project']
        #swagger.summary = 'Cria um novo projeto'
        #swagger.requestBody = {
            required: true,
            content: {
                'application/json': {
                    schema: {
                        type: 'object',
                        properties: {
                            title: { type: 'string' },
                            description: { type: 'string' },
                            assignedTo: { type: 'string' }
                        }
                    }
                }
            }
        }
        #swagger.responses[201] = {
            description: 'Projeto criado com sucesso'
        }
        #swagger.responses[500] = {
            description: 'Erro ao cadastrar o projeto'
        }
    */
    let project = new Project(
        {
            title: req.body.title,
            description: req.body.description,
            assignedTo: req.body.assignedTo
        }
    );

    project.save()
        .then(res.status(201).send(project.toJSON()))
        .catch((err) => {
            res.status(500).send({ message: `${err.message} - Falaha ao cadastrar projeto` })
        })
};

exports.details = async function (req, res) {
    /* 
        #swagger.tags = ['Project']
        #swagger.summary = 'Retorna os detalhes de um projeto específico'
        #swagger.parameters['id'] = {
            description: 'ID do projeto',
            required: true,
            type: 'string'
        }
        #swagger.responses[200] = {
            description: 'Projeto encontrado'
        }
        #swagger.responses[404] = {
            description: 'Projeto não encontrado'
        }
        #swagger.responses[500] = {
            description: 'Erro ao buscar projeto'
        }
    */
    try {
        const result = await Project.findById(req.params.id);
        res.status(200).json(result)
    } catch (err) {
        res.status(500).json(err);
    }

};

exports.updateProject = async function (req, res) {
    /* 
        #swagger.tags = ['Project']
        #swagger.summary = 'Atualiza um projeto existente'
        #swagger.parameters['id'] = {
            description: 'ID do projeto',
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
                            title: { type: 'string' },
                            description: { type: 'string' },
                            assignedTo: { type: 'string' }
                        }
                    }
                }
            }
        }
        #swagger.responses[200] = {
            description: 'Projeto atualizado com sucesso'
        }
        #swagger.responses[404] = {
            description: 'Projeto não encontrado'
        }
        #swagger.responses[500] = {
            description: 'Erro ao atualizar projeto'
        }
    */
    try {
        //findByIdAndUpdate(id, dados, {new: true} (retorna o documento atualizado))
        const project = await Project.findByIdAndUpdate(req.params.id, req.body, { new: true })
        if (project) {
            res.status(200).json(project);
        }
        else {
        res.status(404).json({ message: 'Projeto não encontrado' });
        }

    } catch (err) {
        //esta definindo o status para 500 e passando o erro.
        res.status(500).send({ message: `${err.message} - Erro ao atualizar projeto.` });
    }
}
exports.deleteProject = async function (req, res) {
    /* 
        #swagger.tags = ['Project']
        #swagger.summary = 'Remove um projeto existente'
        #swagger.parameters['id'] = {
            description: 'ID do projeto',
            required: true,
            type: 'string'
        }
        #swagger.responses[200] = {
            description: 'Projeto deletado com sucesso'
        }
        #swagger.responses[404] = {
            description: 'Projeto não encontrado'
        }
        #swagger.responses[500] = {
            description: 'Erro ao deletar projeto'
        }
    */
    try {
        const project = await Project.findByIdAndDelete(req.params.id);
        if (project) {
            res.status(200).json({ message: 'Deletado com sucesso' });
        }
        else {
            res.status(404).json({ message: `${err.message} - Projeto não encontrado` })
        }
    } catch (err) {
        res.status(500).send({ message: `${err.message} - Erro ao deletar projeto` })
    }

}