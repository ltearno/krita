set(kritaanimationrenderer_SOURCES AnimationRenderer.cpp DlgAnimationRenderer.cpp )
ki18n_wrap_ui(kritaanimationrenderer_SOURCES wdg_animationrenderer.ui )
add_library(kritaanimationrenderer MODULE ${kritaanimationrenderer_SOURCES})
target_link_libraries(kritaanimationrenderer kritaui)
install(TARGETS kritaanimationrenderer  DESTINATION ${KRITA_PLUGIN_INSTALL_DIR})
