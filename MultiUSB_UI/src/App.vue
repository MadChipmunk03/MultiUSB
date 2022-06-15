<template>
  <v-app>
    <NavigationDrawer />
    <AppBar />

    <v-main>
      <!-- <v-btn @click="sendTestGET">Send GET on esp8266/helloWorld</v-btn> -->
      <video-controller />
    </v-main>
  </v-app>
</template>

<script>
import axios from "axios";

import NavigationDrawer from "./components/NavigationDrawer.vue";
import AppBar from "./components/AppBar.vue";
import VideoController from './components/pages/VideoController.vue';

export default {
  name: "App",
  components: {
    NavigationDrawer,
    AppBar,
    VideoController,
  },
  methods: {
    async sendTestGET() {
      const res = await axios.get("/api/helloWorld");
      console.log("💌", res);
    },
  },
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
