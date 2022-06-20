
<script>
export default {
  data() {
    return {
      message: "Settings works!",
    };
  },
  created() {
    this.$store.commit('changeAppBarTitle', 'Nastavení');
  }
};
</script>

<template>
  <h1>{{ message }}</h1>
</template>

<style></style>