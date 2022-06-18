<script>

export default {
  data() {
    return {
      drawer: false,
    };
  },
};
</script>

<template>
  <v-navigation-drawer v-model="drawer" app>
    <v-divider></v-divider>
    <v-list nav>
      <v-list-item-group>
        <v-list-item>
          <v-list-item-icon>
            <v-icon>mdi-home</v-icon>
          </v-list-item-icon>
          <v-list-item-title>Domů</v-list-item-title>
        </v-list-item>

        <v-list-item>
          <v-list-item-icon>
            <v-icon>mdi-tune</v-icon>
          </v-list-item-icon>
          <v-icon></v-icon>
          <v-list-item-title>Nastavení</v-list-item-title>
        </v-list-item>

        <v-list-item>
          <v-list-item-icon>
            <v-icon>mdi-puzzle</v-icon>
          </v-list-item-icon>
          <v-list-item-title>Rozšíření</v-list-item-title>
        </v-list-item>

        <v-divider></v-divider>

        <v-list-item>
          <v-list-item-icon>
            <v-icon>mdi-phone</v-icon>
          </v-list-item-icon>
          <v-list-item-title>Kontakt</v-list-item-title>
        </v-list-item>

        <v-list-item>
          <v-list-item-icon>
            <v-icon>mdi-account-off</v-icon>
          </v-list-item-icon>
          <v-list-item-title>Odhlásit se</v-list-item-title>
        </v-list-item>
      </v-list-item-group>
    </v-list>
  </v-navigation-drawer>
</template>

<style></style>
