var User = require('../models/userModel');

exports.getUser = async function (req, res) {
    try {
        const result = await User.find();
        res.status(200).json(result);
    } catch (err) {
        res.status(500).json(err);
    }
};
//o promise é para quando não quer que espere o processo aconteça. Ao usar o try/catch não é preciso esperar
exports.create = function (req, res) {
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
    try {
        const result = await User.findById(req.params.id);
        res.status(200).json(result);
    } catch (err) {
        res.status(500).json(err);
    }
};