
<script>
export default {
  data() {
    return {
      message: "mouse and keyboard works!",
    };
  },
  created() {
    this.$store.commit('changeAppBarTitle', 'Myš a klávesnice');
  }
};
</script>

<template>
  <h1>{{ message }}</h1>
</template>

<style></style>