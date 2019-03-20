cmake_minimum_required(VERSION 2.8.12)
project(zm)
find_package(zeda REQUIRED)
add_definitions("-Wall -g -O3")

include_directories(include)

# Build
add_library(zm_ieee src/zm_ieee.c)
add_library(zm_misc src/zm_misc.c)
add_library(zm_sf_erf src/zm_sf_erf.c)
add_library(zm_sf_gamma src/zm_sf_gamma.c)
add_library(zm_sf_bessel src/zm_sf_bessel.c)
add_library(zm_rand src/zm_rand.c)
add_library(zm_stat src/zm_stat.c)
add_library(zm_complex src/zm_complex.c)
add_library(zm_complex_arith src/zm_complex_arith.c)
add_library(zm_complex_pe src/zm_complex_pe.c)
add_library(zm_raw_vec src/zm_raw_vec.c)
add_library(zm_raw_mat src/zm_raw_mat.c)
add_library(zm_vec src/zm_vec.c)
add_library(zm_vec_array src/zm_vec_array.c)
add_library(zm_vec_list src/zm_vec_list.c)
add_library(zm_vec_tree src/zm_vec_tree.c)
add_library(zm_vec_ring src/zm_vec_ring.c)
add_library(zm_mat src/zm_mat.c)
add_library(zm_cvec src/zm_cvec.c)
add_library(zm_cmat src/zm_cmat.c)
add_library(zm_le src/zm_le.c)
add_library(zm_le_pivot src/zm_le_pivot.c)
add_library(zm_le_lu src/zm_le_lu.c)
add_library(zm_le_lq src/zm_le_lq.c)
add_library(zm_le_minv src/zm_le_minv.c)
add_library(zm_le_mpinv src/zm_le_mpinv.c)
add_library(zm_le_tridiag src/zm_le_tridiag.c)
add_library(zm_le_gen src/zm_le_gen.c)
add_library(zm_le_lyapnov src/zm_le_lyapnov.c)
add_library(zm_eig src/zm_eig.c)
add_library(zm_mca src/zm_mca.c)
add_library(zm_mca_cluster src/zm_mca_cluster.c)
add_library(zm_mca_gmm src/zm_mca_gmm.c)
add_library(zm_seq src/zm_seq.c)
add_library(zm_pex src/zm_pex.c)
add_library(zm_pex_eq src/zm_pex_eq.c)
add_library(zm_ip src/zm_ip.c)
add_library(zm_ip_lin src/zm_ip_lin.c)
add_library(zm_ip_lagrange src/zm_ip_lagrange.c)
add_library(zm_ip_spline src/zm_ip_spline.c)
add_library(zm_ip_akima src/zm_ip_akima.c)
add_library(zm_ip_pex src/zm_ip_pex.c)
add_library(zm_ip_ipio src/zm_ip_ipio.c)
add_library(zm_nurbs src/zm_nurbs.c)
add_library(zm_opt_line src/zm_opt_line.c)
add_library(zm_opt_lp_stdcnv src/zm_opt_lp_stdcnv.c)
add_library(zm_opt_lp_simplex src/zm_opt_lp_simplex.c)
add_library(zm_opt_lp_pdip src/zm_opt_lp_pdip.c)
add_library(zm_opt_lcp_lemke src/zm_opt_lcp_lemke.c)
add_library(zm_opt_lcp_ip src/zm_opt_lcp_ip.c)
add_library(zm_opt_qp src/zm_opt_qp.c)
add_library(zm_opt_nm src/zm_opt_nm.c)
add_library(zm_opt_ga src/zm_opt_ga.c)
add_library(zm_opt_dm src/zm_opt_dm.c)
add_library(zm_nle_se src/zm_nle_se.c)
add_library(zm_nle_dm src/zm_nle_dm.c)
add_library(zm_nle_ss src/zm_nle_ss.c)
add_library(zm_ode src/zm_ode.c)
add_library(zm_ode_dc src/zm_ode_dc.c)
add_library(zm_ode_euler src/zm_ode_euler.c)
add_library(zm_ode_heun src/zm_ode_heun.c)
add_library(zm_ode_rk4 src/zm_ode_rk4.c)
add_library(zm_ode_rkg src/zm_ode_rkg.c)
add_library(zm_ode_erk src/zm_ode_erk.c)
add_library(zm_ode_adams src/zm_ode_adams.c)
add_library(zm_ode_beuler src/zm_ode_beuler.c)
add_library(zm_ode_bk4 src/zm_ode_bk4.c)
add_library(zm_ode_gear src/zm_ode_gear.c)
add_library(zm_ode2 src/zm_ode2.c)
add_library(zm_fft src/zm_fft.c)
add_library(zm_intg src/zm_intg.c)
add_library(zm_oscil_vdp src/zm_oscil_vdp.c)
add_library(zm_oscil_kura src/zm_oscil_kura.c)
add_library(zm_graph src/zm_graph.c)
add_library(zm_graph_search src/zm_graph_search.c)
add_library(zm_rrt src/zm_rrt.c)
add_library(zm_parse src/zm_parse.c)

add_library(${PROJECT_NAME} SHARED
    src/zm_ieee.c
    src/zm_misc.c
    src/zm_sf_erf.c
    src/zm_sf_gamma.c
    src/zm_sf_bessel.c
    src/zm_rand.c
    src/zm_stat.c
    src/zm_complex.c
    src/zm_complex_arith.c
    src/zm_complex_pe.c
    src/zm_raw_vec.c
    src/zm_raw_mat.c
    src/zm_vec.c
    src/zm_vec_array.c
    src/zm_vec_list.c
    src/zm_vec_tree.c
    src/zm_vec_ring.c
    src/zm_mat.c
    src/zm_cvec.c
    src/zm_cmat.c
    src/zm_le.c
    src/zm_le_pivot.c
    src/zm_le_lu.c
    src/zm_le_lq.c
    src/zm_le_minv.c
    src/zm_le_mpinv.c
    src/zm_le_tridiag.c
    src/zm_le_gen.c
    src/zm_le_lyapnov.c
    src/zm_eig.c
    src/zm_mca.c
    src/zm_mca_cluster.c
    src/zm_mca_gmm.c
    src/zm_seq.c
    src/zm_pex.c
    src/zm_pex_eq.c
    src/zm_ip.c
    src/zm_ip_lin.c
    src/zm_ip_lagrange.c
    src/zm_ip_spline.c
    src/zm_ip_akima.c
    src/zm_ip_pex.c
    src/zm_ip_ipio.c
    src/zm_nurbs.c
    src/zm_opt_line.c
    src/zm_opt_lp_stdcnv.c
    src/zm_opt_lp_simplex.c
    src/zm_opt_lp_pdip.c
    src/zm_opt_lcp_lemke.c
    src/zm_opt_lcp_ip.c
    src/zm_opt_qp.c
    src/zm_opt_nm.c
    src/zm_opt_ga.c
    src/zm_opt_dm.c
    src/zm_nle_se.c
    src/zm_nle_ss.c
    src/zm_ode.c
    src/zm_ode_dc.c
    src/zm_ode_euler.c
    src/zm_ode_heun.c
    src/zm_ode_rk4.c
    src/zm_ode_rkg.c
    src/zm_ode_erk.c
    src/zm_ode_adams.c
    src/zm_ode_beuler.c
    src/zm_ode_bk4.c
    src/zm_ode_gear.c
    src/zm_ode2.c
    src/zm_fft.c
    src/zm_intg.c
    src/zm_oscil_vdp.c
    src/zm_oscil_kura.c
    src/zm_graph.c
    src/zm_graph_search.c
    src/zm_rrt.c
    src/zm_parse.c)

# Install
INSTALL (
    DIRECTORY ${CMAKE_SOURCE_DIR}/include/
    DESTINATION include
    FILES_MATCHING PATTERN "*.h*")

install(TARGETS ${PROJECT_NAME} LIBRARY DESTINATION lib)

install(TARGETS ${PROJECT_NAME}
    EXPORT ${PROJECT_NAME}-export
    LIBRARY        DESTINATION lib
    INCLUDES       DESTINATION include
    PUBLIC_HEADER  DESTINATION include/${PROJECT_NAME})

install(EXPORT ${PROJECT_NAME}-export
    FILE ${PROJECT_NAME}-config.cmake
    DESTINATION share/cmake/${PROJECT_NAME}
    EXPORT_LINK_INTERFACE_LIBRARIES)