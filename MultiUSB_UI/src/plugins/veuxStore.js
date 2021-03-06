import Vue from "vue";
import Vuex from "vuex";

Vue.use(Vuex);

export default new Vuex.Store({
  state: {
    appBarTitle: "",
    drawer: false,
  },
  mutations: {
    changeAppBarTitle(state, title) {
      state.appBarTitle = title;
    },
    toggleDrawer(state) {
      state.drawer = !state.drawer;
    },
  },
});
