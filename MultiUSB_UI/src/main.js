import Vue from "vue";
import App from "./App.vue";
import vuetify from "./plugins/vuetify";
import { default as i18n } from "./plugins/i18n";
import { default as msalPlugin } from "vue-msal-browser";
import "@/plugins/veeValidate";
import Vuex from "vuex";

Vue.config.productionTip = false;
const msalConfig = {
  auth: {
    clientId: "02cf92d8-5daf-4e39-ac64-5524014de541",
    authority:
      "https://login.microsoftonline.com/01577ff7-9547-463b-9816-c75d21327bbd",
    redirectUri: "http://localhost:8088",
    scopes: ["02cf92d8-5daf-4e39-ac64-5524014de541/.default"],
  },
  cache: {
    cacheLocation: "localStorage",
  },
  mode: "redirect",
};

Vue.use(Vuex);

const store = new Vuex.Store({
  state: {
    count: 0,
  },
  mutations: {
    increment(state) {
      state.count++;
    },
  },
});

store.commit("increment");
console.log(store.state.count);

i18n.locale = "cs";

// java@seftest.onmicrosoft.com
// Testheslo123
Vue.use(msalPlugin, msalConfig);
new Vue({
  vuetify,
  i18n,
  render: (h) => h(App),
}).$mount("#app");
