<script>
export default {
  methods: {
    toggleDrawer() {
      this.$store.commit("toggleDrawer");
    },
  },
};
</script>

<template>
  <v-app-bar light color="primary" elevation="4" height="65" app>
    <v-app-bar-nav-icon @click="toggleDrawer"></v-app-bar-nav-icon>
    <v-app-bar-title>{{ this.$store.state.appBarTitle }}</v-app-bar-title>
  </v-app-bar>
</template>

<style></style>
