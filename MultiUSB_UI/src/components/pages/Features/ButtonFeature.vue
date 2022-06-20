<script>
export default {
  data() {
    return {
      message: "Button Works!",
    };
  },
  created() {
    this.$store.commit('changeAppBarTitle', 'USB tlačítko');
  }
};
</script>

<template>
  <h1>{{ message }}</h1>
</template>

<style></style>
