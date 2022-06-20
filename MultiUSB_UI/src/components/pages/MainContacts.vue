
<script>
export default {
  data() {
    return {
      message: "contacts works!",
    };
  },
  created() {
    this.$store.commit('changeAppBarTitle', 'Kontakty');
  }
};
</script>

<template>
  <h1>{{ message }}</h1>
</template>

<style></style>