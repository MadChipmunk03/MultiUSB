<template>
  <v-app>
    <NavigationDrawer />
    <AppBar />

    <v-main>
      <!-- <v-btn @click="sendTestGET">Send GET on esp8266/helloWorld</v-btn> -->
      <router-view></router-view>
    </v-main>
  </v-app>
</template>

<script>
import axios from "axios";

import NavigationDrawer from "./components/NavigationDrawer.vue";
import AppBar from "./components/AppBar.vue";

export default {
  name: "App",
  components: {
    NavigationDrawer,
    AppBar,
  },
  methods: {
    async sendTestGET() {
      const res = await axios.get("/api/helloWorld");
      console.log("💌", res);
    },
  },
  // beforeMount() {
  //   //check if browser supports dark mode.
  //   this.$vuetify.theme.isDark = false;
  //   if (window.matchMedia && window.matchMedia("(prefers-color-scheme)").media !== "not all") {
  //     //if user prefers light mode switch to light mode
  //     if (!window.matchMedia("(prefers-color-scheme: light)").matches) {
  //       this.$vuetify.theme.isDark = true;
  //     }
  //   }
  // },
};
</script>

<style scope>
html {
  overflow-y: auto;
}
body {
  min-height: 100vh;
}
</style>
