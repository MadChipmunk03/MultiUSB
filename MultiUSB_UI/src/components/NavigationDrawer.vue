<script>
export default {};
</script>

<template>
  <v-navigation-drawer v-model="$store.state.drawer" app>
    <v-divider></v-divider>
    <v-img class="ma-4" src="../assets/drawer.png"></v-img>
    <v-divider></v-divider>
    <v-list nav>
      <v-list-item-group>
        <router-link to="features">
          <v-list-item>
            <v-list-item-icon>
              <v-icon>mdi-home</v-icon>
            </v-list-item-icon>
            <v-list-item-title>Domů</v-list-item-title>
          </v-list-item>
        </router-link>

        <router-link to="settings">
          <v-list-item>
            <v-list-item-icon>
              <v-icon>mdi-tune</v-icon>
            </v-list-item-icon>
            <v-icon></v-icon>
            <v-list-item-title>Nastavení</v-list-item-title>
          </v-list-item>
        </router-link>

        <router-link to="extensions">
          <v-list-item>
            <v-list-item-icon>
              <v-icon>mdi-view-grid-plus</v-icon>
            </v-list-item-icon>
            <v-list-item-title>Rozšíření</v-list-item-title>
          </v-list-item>
        </router-link>

        <v-divider></v-divider>

        <router-link to="contacts">
          <v-list-item>
            <v-list-item-icon>
              <v-icon>mdi-phone</v-icon>
            </v-list-item-icon>
            <v-list-item-title>Kontakt</v-list-item-title>
          </v-list-item>
        </router-link>

        <router-link to="features">
          <v-list-item>
            <v-list-item-icon>
              <v-icon>mdi-account-off</v-icon>
            </v-list-item-icon>
            <v-list-item-title>Odhlásit se</v-list-item-title>
          </v-list-item>
        </router-link>
      </v-list-item-group>
    </v-list>
  </v-navigation-drawer>
</template>

<style scope>
a {
  text-decoration: none;
}
</style>
