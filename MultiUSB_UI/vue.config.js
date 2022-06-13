// const { defineConfig } = require("@vue/cli-service");
module.exports = {
  publicPath: "",
  transpileDependencies: ["vuetify"],
  devServer: {
    allowedHosts: "all",
    proxy: {
      "^/api": {
        target: "http://esp8266",
        changeOrigin: true,
      },
    },
  },
}
