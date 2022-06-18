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
  <v-container class="lighten-5 pa-4">
    <v-card class="mb-6 px-8">
      <v-card-title class="pl-0">Volume</v-card-title>
      <v-subheader class="pl-0">Youtube</v-subheader>
      <v-row align="center" class="py-5">
        <v-btn x-large><v-icon large>mdi-volume-plus</v-icon></v-btn>
        <v-spacer></v-spacer>
        <v-btn x-large><v-icon large>mdi-volume-off</v-icon></v-btn>
        <v-spacer></v-spacer>
        <v-btn x-large><v-icon large>mdi-volume-minus</v-icon></v-btn>
      </v-row>
      <v-subheader class="pl-0">Master</v-subheader>
      <v-row align="center" class="py-5">
        <v-btn x-large><v-icon large>mdi-volume-plus</v-icon></v-btn>
        <v-spacer></v-spacer>
        <v-btn x-large><v-icon large>mdi-volume-off</v-icon></v-btn>
        <v-spacer></v-spacer>
        <v-btn x-large><v-icon large>mdi-volume-minus</v-icon></v-btn>
      </v-row>
    </v-card>
    <v-card class="px-8">
      <v-card-title class="pl-0">Controls</v-card-title>
      <v-row align="center" class="py-5">
        <v-btn x-large><v-icon large>mdi-rewind</v-icon></v-btn>
        <v-spacer></v-spacer>
        <v-btn x-large><v-icon large>mdi-play-pause</v-icon></v-btn>
        <v-spacer></v-spacer>
        <v-btn x-large><v-icon large>mdi-fast-forward</v-icon></v-btn>
      </v-row>
      <v-row align="center" class="py-5">
        <v-btn x-large><v-icon large>mdi-fullscreen</v-icon></v-btn>
        <v-spacer></v-spacer>
        <v-btn x-large><v-icon large>mdi-closed-caption</v-icon></v-btn>
        <v-spacer></v-spacer>
        <v-btn x-large><v-icon large>mdi-skip-next</v-icon></v-btn>
      </v-row>
      <v-row align="center" justify="space-around" class="py-5">
        <v-btn x-large block>
          <v-icon large>mdi-mouse</v-icon>
          <v-icon class="px-3">mdi-ampersand</v-icon>
          <v-icon large>mdi-keyboard</v-icon>
        </v-btn>
      </v-row>
    </v-card>
  </v-container>
</template>

<style scope></style>
