import Vue from "vue";
import Router from "vue-router";
import MainFeatures from "../components/pages/MainFeatures";
import MacrosFeature from "../components/pages/Features/MacrosFeature";
import MacroKeyboardFeature from "../components/pages/Features/MacroKeyboardFeature";
import VideoControllerFeature from "../components/pages/Features/VideoControllerFeature";
import PresenterFeature from "../components/pages/Features/PresenterFeature";
import ButtonFeature from "../components/pages/Features/ButtonFeature";
import MouseAndKeyboardFeature from "../components/pages/Features/MouseAndKeyboardFeature";
import SecondPlayerFeature from "../components/pages/Features/SecondPlayerFeature";
import MainSettings from "../components/pages/MainSettings";
import MainExtensions from "../components/pages/MainExtensions";
import MainContacts from "../components/pages/MainContacts";

Vue.use(Router);

export default new Router({
  routes: [
    {
      path: "/",
      alias: "/features",
      name: "MainFeatures",
      component: MainFeatures,
    },
    {
      path: "macrosfeature",
      name: "MacrosFeature",
      component: MacrosFeature,
    },
    {
      path: "macrokeyboardfeature",
      name: "MacroKeyboardFeature",
      component: MacroKeyboardFeature,
    },
    {
      path: "videocontroller",
      name: "VideoController",
      component: VideoControllerFeature,
    },
    {
      path: "presenterfeature",
      name: "PresenterFeature",
      component: PresenterFeature,
    },
    {
      path: "buttonfeature",
      name: "ButtonFeature",
      component: ButtonFeature,
    },
    {
      path: "mouseandkeyboardfeature",
      name: "MouseAndKeyboardFeature",
      component: MouseAndKeyboardFeature,
    },
    {
      path: "secondplayerfeature",
      name: "SecondPlayerFeature",
      component: SecondPlayerFeature,
    },
    /////////// OTHER MAIN ///////////////
    {
      path: "/settings",
      name: "MainSettings",
      component: MainSettings,
    },
    {
      path: "/extensions",
      name: "MainExtensions",
      component: MainExtensions,
    },
    {
      path: "/contacts",
      name: "MainContacts",
      component: MainContacts,
    },
  ],
});
