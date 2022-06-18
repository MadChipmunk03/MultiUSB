<script>
export default {
  data() {
    return {
      message: "Hello Wrold!",
      features: [
        {
          icon: "mdi-file-code",
          title: "Makra",
          text: "Spusť sequnci příkazů pro automatizaci rutinních prací",
        },
        {
          icon: "mdi-gesture-tap-button",
          title: "Makro klávesnice",
          text: "Jednoduchý přístup pro neusále používené akce (zkraty, spuštění programu...)",
        },
        {
          icon: "mdi-youtube-tv",
          title: "Video controller",
          text: "Ovladač pro přehrávání na YouTube",
        },
        {
          icon: "mdi-presentation",
          title: "Prezentér",
          text: "Pro prezentování powerPointu nebo google slides",
        },
        {
          icon: "mdi-dip-switch",
          title: "USB tlačítko",
          text: "Nastavení kombinací přepínačů pro tlačítko na zařízení",
        },
        
      ],
    };
  },
  methods: {
    removeThis(value) {
      console.log(value);
      this.$router.push("/" + value);
    },
  },
};
</script>

<template>
  <v-container class="lighten-5 pa-4">
    <h1 class="my-7 text-h3 font-weight-bold">Vítej v aplikaci MultiUSB!</h1>

    <v-card
      v-for="feature in features"
      :key="feature.text"
      @click="removeThis(feature.text)"
      class="mb-6 px-8"
      elevation="3"
    >
      <v-row>
        <v-col class="my-auto px-1" cols="2">
          <v-icon size="60" color="primary">{{ feature.icon }}</v-icon>
        </v-col>
        <v-col cols="10">
          <v-card-title class="py-1">{{ feature.title }}</v-card-title>
          <v-card-text class="pb-1">{{ feature.text }}</v-card-text>
        </v-col>
      </v-row>
    </v-card>
  </v-container>
</template>

<style></style>
