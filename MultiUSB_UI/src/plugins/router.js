import Vue from 'vue'
import Router from 'vue-router'
import VideoController from '../components/pages/VideoController'
import MainFeatures from '../components/pages/MainFeatures'

Vue.use(Router)

export default new Router({
  mode: 'history',
  routes: [
    {
      path: '/',
      name: 'MainFeatures',
      component: MainFeatures
    },
    {
      path: '/videocontroller',
      name: 'VideoController',
      component: VideoController
    }
  ]
})
