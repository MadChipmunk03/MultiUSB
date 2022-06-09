// const { defineConfig } = require("@vue/cli-service");
module.exports = {
  publicPath: "",
  transpileDependencies: ["vuetify"],
  devServer: {
    allowedHosts: "all",
    proxy: {
      "^/api": {
        target: "http://localhost:8080",
        changeOrigin: true,
      },
    },
  },
}
