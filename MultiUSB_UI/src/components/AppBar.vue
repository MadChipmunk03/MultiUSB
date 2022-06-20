<script>
export default {
  created() {
    console.log('abc', this.$store.state.count);
  },
  data() {
    return {
      drawer: true,
    };
  },
};
</script>

<template>
  <v-app-bar color="primary" elevation="4" height="65" app>
    <v-app-bar-nav-icon></v-app-bar-nav-icon>
    <v-toolbar-title>{{this.$store.state.appBarTitle}}</v-toolbar-title>
  </v-app-bar>
</template>

<style></style>
