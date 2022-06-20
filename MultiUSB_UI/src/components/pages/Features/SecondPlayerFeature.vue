<script>
export default {
  data() {
    return {
      message: "Second player works!",
    };
  },
  created() {
    this.$store.commit('changeAppBarTitle', 'Druhý hráč');
  }
};
</script>

<template>
  <h1>{{ message }}</h1>
</template>

<style></style>
