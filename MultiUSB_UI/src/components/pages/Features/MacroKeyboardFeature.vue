<script>
import { keys } from "vuetify/lib/util/helpers";

export default {
  data() {
    return {
      message: "Macro keyboard works!",
      Keys: ["wow", "ok", "book"],
    };
  },
  computed: {
    // 3x5=12 else 2x4=8
    NumOfRows() {
      return keys.count > 8 ? 3 : 2;
    },
    NumOfCols() {
      return keys.count > 8 ? 5 : 4;
    },
  },
  created() {
    this.$store.commit("changeAppBarTitle", "Makro klávesnice");
  },
};
</script>

<template>
  <v-container fill-height class="lighten-5 pa-4">
    <v-row align="center" v-for="y in NumOfRows" :key="y">
      <v-col v-for="x in NumOfCols" :key="x">
        <v-btn block height="120"> {{ x }}:{{ y }} </v-btn>
      </v-col>
    </v-row>
  </v-container>
</template>

<style scope>
</style>
