import Vue from "vue";
import Vuetify from "vuetify/lib/framework";
import colors from "vuetify/lib/util/colors";
// import { cs, en } from 'vuetify/src/locale'

Vue.use(Vuetify);

export default new Vuetify({
  theme: {
    themes: {
      light: {
        primary: colors.amber,
      },
      dark: {
        primary: colors.amber,
      },
    },
  },
  // lang: {
  //   locales: { cs, en },
  //   current: "cs",
  // },
});
