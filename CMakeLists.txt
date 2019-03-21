cmake_minimum_required(VERSION 2.8.12)
project(zm)
find_package(zeda REQUIRED)
add_definitions("-Wall -g -O3")

set(CMAKE_C_COMPILER "gcc")

include_directories(include)

# Build
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
    src/zm_nle_dm.c
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
target_link_libraries(zm zeda m)

add_executable(deg2rad app/deg2rad.c)
target_link_libraries(deg2rad zeda ${PROJECT_NAME})

add_executable(le app/le.c)
target_link_libraries(le zeda ${PROJECT_NAME})

add_executable(pexp app/pexp.c)
target_link_libraries(pexp zeda ${PROJECT_NAME})

add_executable(psolve app/pexp.c)
target_link_libraries(psolve zeda ${PROJECT_NAME})

add_executable(rad2deg app/rad2deg.c)
target_link_libraries(rad2deg zeda ${PROJECT_NAME})

add_executable(seqmod app/seqmod.c)
target_link_libraries(seqmod zeda ${PROJECT_NAME})

# Install
install (
    DIRECTORY ${CMAKE_SOURCE_DIR}/include/
    DESTINATION include
    FILES_MATCHING PATTERN "*.h*")

install (TARGETS 
    deg2rad
    le
    pexp
    psolve
    rad2deg
    seqmod
    RUNTIME DESTINATION bin)

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