"use strict";
const express = require("express");
const route = require("./routes/user");
const app = express();
app.use("/api/v1", route);
app.listen(3000, () => {
    console.info("Server is running on port 3000");
});
