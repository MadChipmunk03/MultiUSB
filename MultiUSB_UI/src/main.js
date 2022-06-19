import Vue from "vue";
import App from "./App.vue";
import vuetify from "./plugins/vuetify";
import { default as i18n } from "./plugins/i18n";
import "@/plugins/veeValidate";
import Vuex from "vuex";
import router from './plugins/router'

Vue.config.productionTip = false;

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


new Vue({
  vuetify,
  i18n,
  router,
  render: (h) => h(App),
}).$mount("#app");
