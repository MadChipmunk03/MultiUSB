
<script>
export default {
  data() {
    return {
      message: "Presenter works!",
    };
  },
  created() {
    this.$store.commit('changeAppBarTitle', 'Prezentér');
  }
};
</script>

<template>
  <h1>{{ message }}</h1>
</template>

<style></style>