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
