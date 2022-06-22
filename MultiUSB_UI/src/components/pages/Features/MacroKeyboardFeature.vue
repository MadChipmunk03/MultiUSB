<script>
import { keys } from "vuetify/lib/util/helpers";

export default {
  data() {
    return {
      message: "Macro keyboard works!",
      Keys: ["wow", "ok", "book"],
      verticalOrientation: false,
      btnHeight: "5px",
      NumOfRows: keys.count > 8 ? 3 : 2,
      NumOfCols: keys.count > 8 ? 5 : 4,
    };
  },
  created() {
    this.$store.commit("changeAppBarTitle", "Makro klávesnice");
  },
  mounted() {
    console.log(top.innerHeight);
      this.btnHeight = (top.innerHeight - 57 - (12 * 2 * this.NumOfRows)) / this.NumOfRows
    if (window.screen.orientation.type === "portrait-primary") {
      this.flipRowsAndCols();
    }
    window.addEventListener("orientationchange", this.flipRowsAndCols);
  },
  methods: {
    flipRowsAndCols() {
      const tempRows = this.NumOfRows;
      this.NumOfRows = this.NumOfCols;
      this.NumOfCols = tempRows;

      // const deviceHeight = this.NumOfRows > this.NumOfCols ? top.innerHeight : top.innerWidth
      this.btnHeight = (top.innerHeight - 57 - (12 * 2 * this.NumOfRows)) / this.NumOfRows
    },
  },
};
</script>

<template>
  <v-container fill-height class="lighten-5 pa-4">
    <!-- <p>{{NumOfRows}}</p> -->
    <v-row align="center" v-for="y in NumOfRows" :key="y">
      <v-col v-for="x in NumOfCols" :key="x">
        <v-btn block :height="btnHeight"> {{ x }}:{{ y }} </v-btn>
      </v-col>
    </v-row>
  </v-container>
</template>

<style scope></style>
