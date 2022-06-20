
<script>
export default {
  data() {
    return {
      message: "Macro keyboard works!",
    };
  },
  created() {
    this.$store.commit('changeAppBarTitle', 'Makro klávesnice');
  }
};
</script>

<template>
  <h1>{{ message }}</h1>
</template>

<style></style>