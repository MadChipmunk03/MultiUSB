import Vue from 'vue'
import Router from 'vue-router'
import MainFeatures from '../components/pages/MainFeatures'
import VideoControllerFeature from '../components/pages/Features/VideoControllerFeature'
import MainSettings from '../components/pages/MainSettings'
import MainExtensions from '../components/pages/MainExtensions'
import MainContacts from '../components/pages/MainContacts'

Vue.use(Router)

export default new Router({
  routes: [
    {
      path: '/',
      alias: '/features',
      name: 'MainFeatures',
      component: MainFeatures,
      children: [
        {
          path: 'videocontroller',
          name: 'VideoController',
          component: VideoControllerFeature
        }
      ]
    },
    {
      path: '/settings',
      name: 'MainSettings',
      component: MainSettings
    },
    {
      path: '/extensions',
      name: 'MainExtensions',
      component: MainExtensions
    },
    {
      path: '/contacts',
      name: 'MainContacts',
      component: MainContacts
    },
  ]
})

