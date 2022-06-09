<template>
  <v-app>
    <NavigationDrawer />
    <AppBar />

    <v-main>

    </v-main>
  </v-app>
</template>

<script>
import NavigationDrawer from "./components/NavigationDrawer.vue";
import AppBar from "./components/AppBar.vue";

export default {
  name: "App",
  components: {
    NavigationDrawer,
    AppBar,
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
