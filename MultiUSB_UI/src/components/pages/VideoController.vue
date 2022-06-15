<script>
export default {
  data() {
    return {
      message: "Hello Wrold!",
    };
  },
};
</script>

<template>
  <v-container class="lighten-5">
    <v-subheader>YouTube volume</v-subheader>
    <v-row>
      <v-col cols="12">
        <v-btn-toggle class="d-flex justify-center mybtn">
          <v-btn class="px-5">
            <v-icon size="50">mdi-volume-plus</v-icon>
          </v-btn>
          <v-btn class="px-5">
            <v-icon size="50">mdi-volume-off</v-icon>
          </v-btn>
          <v-btn class="px-5">
            <v-icon size="50">mdi-volume-minus</v-icon>
          </v-btn>
        </v-btn-toggle>
      </v-col>
    </v-row>
    <v-subheader>Master volume</v-subheader>
    <v-row>
      <v-col cols="12">
        <v-btn-toggle class="d-flex justify-center mybtn">
          <v-btn class="px-5">
            <v-icon size="50">mdi-volume-plus</v-icon>
          </v-btn>
          <v-btn class="px-5">
            <v-icon size="50">mdi-volume-off</v-icon>
          </v-btn>
          <v-btn  class="px-5">
            <v-icon size="50">mdi-volume-minus</v-icon>
          </v-btn>
        </v-btn-toggle>
      </v-col>
    </v-row>
  </v-container>
</template>

<style lang="scss" scope>
.v-btn.v-btn.v-size--default {
  height: 50px;
}
</style>
