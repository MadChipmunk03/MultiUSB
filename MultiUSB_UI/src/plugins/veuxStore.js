import Vue from "vue";
import Vuex from "vuex";

Vue.use(Vuex);

export default new Vuex.Store({
  state: {
    count: 0,
    appBarTitle: "",
    drawer: true
  },
  mutations: {
    increment(state) {
      state.count++;
    },
    changeAppBarTitle(state, title) {
      state.appBarTitle = title;
    },
    toggleDrawer(state){
      state.drawer = !state.drawer
    }
  },
});
