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
          routeName: "MacrosFeature",
        },
        {
          icon: "mdi-gesture-tap-button",
          title: "Makro klávesnice",
          text: "Jednoduchý přístup pro neusále používené akce (zkraty, spuštění programu...)",
          routeName: "MacroKeyboardFeature",
        },
        {
          icon: "mdi-youtube-tv",
          title: "Video přehrávač",
          text: "Ovladač pro přehrávání na YouTube",
          routeName: "VideoController",
        },
        {
          icon: "mdi-presentation",
          title: "Prezentér",
          text: "Pro prezentování powerPointu nebo google slides",
          routeName: "PresenterFeature",
        },
        {
          icon: "mdi-dip-switch",
          title: "USB tlačítko",
          text: "Nastavení kombinací přepínačů pro tlačítko na zařízení",
          routeName: "ButtonFeature",
        },
        {
          icon: "mdi-usb",
          title: "Myš a klávesnice",
          routeName: "MouseAndKeyboardFeature",
        },
        {
          icon: "mdi-account-multiple-plus",
          title: "2. Hráč",
          text: "Jednoduché klávesnicové rozložení pro druhého hráče ve hře",
          routeName: "SecondPlayerFeature",
        },
      ],
    };
  },
  methods: {
    changeRoute(routeName) {
      console.log(routeName)
      this.$router.push({ name: routeName });
    },
  },
  created() {
    this.$store.commit('changeAppBarTitle', 'Vlastnosti');
  }
};
</script>

<template>
  <v-container class="lighten-5 pa-4">
    <h1 class="my-7 text-h3 font-weight-bold">Vítej v aplikaci MultiUSB!</h1>

    <v-card
      v-for="feature in features"
      :key="feature.text"
      @click="changeRoute(feature.routeName)"
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
