
<script>
export default {
  data() {
    return {
      message: "Extensions works!",
    };
  },
  created() {
    this.$store.commit('changeAppBarTitle', 'Rozšíření');
  }
};
</script>

<template>
  <h1>{{ message }}</h1>
</template>

<style></style>