idf_component_register(SRCS "main.c"
                    INCLUDE_DIRS ".")


set(ulp_app_name ulp_${AudioDriver})
set(ulp_s_sources ulp/audiodriver.S)
set(ulp_exp_dep_srcs "main.c")

ulp_embed_binary(${ulp_app_name} "${ulp_s_sources}" "${ulp_exp_dep_srcs}")