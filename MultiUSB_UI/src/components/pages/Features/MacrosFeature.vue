<script>
export default {
  data() {
    return {
      message: "Macros works!",
    };
  },
  created() {
    this.$store.commit('changeAppBarTitle', 'Makra');
  }
};
</script>

<template>
  <h1>{{ message }}</h1>
</template>

<style></style>
