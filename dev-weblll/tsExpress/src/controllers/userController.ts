import { Request, Response } from "express";
import { IUser } from "./userInterface";

// o _ faz com que não de erro no parametro, como parametro não utilizado
export const getUser = (_require: Request, response: Response) => {
    const user: IUser = {
        id: 1,
        name: "Evellin",
        age: 23
    };
    response.json(user)
};