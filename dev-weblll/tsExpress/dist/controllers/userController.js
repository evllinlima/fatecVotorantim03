"use strict";
Object.defineProperty(exports, "__esModule", { value: true });
exports.getUser = void 0;
// o _ faz com que não de erro no parametro, como parametro não utilizado
const getUser = (_require, response) => {
    const user = {
        id: 1,
        name: "Evellin",
        age: 23
    };
    response.json(user);
};
exports.getUser = getUser;
