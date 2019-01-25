
#include <stdio.h>
#include <openssl/err.h>
#include "e_4758cca_err.h"

/* BEGIN ERROR CODES */
#ifndef OPENSSL_NO_ERR

# define ERR_FUNC(func) ERR_PACK(0,func,0)
# define ERR_REASON(reason) ERR_PACK(0,0,reason)

static ERR_STRING_DATA CCA4758_str_functs[] = {
    {ERR_FUNC(CCA4758_F_CCA_RSA_SIGN), "CCA_RSA_SIGN"},
    {ERR_FUNC(CCA4758_F_CCA_RSA_VERIFY), "CCA_RSA_VERIFY"},
    {ERR_FUNC(CCA4758_F_IBM_4758_CCA_CTRL), "IBM_4758_CCA_CTRL"},
    {ERR_FUNC(CCA4758_F_IBM_4758_CCA_FINISH), "IBM_4758_CCA_FINISH"},
    {ERR_FUNC(CCA4758_F_IBM_4758_CCA_INIT), "IBM_4758_CCA_INIT"},
    {ERR_FUNC(CCA4758_F_IBM_4758_LOAD_PRIVKEY), "IBM_4758_LOAD_PRIVKEY"},
    {ERR_FUNC(CCA4758_F_IBM_4758_LOAD_PUBKEY), "IBM_4758_LOAD_PUBKEY"},
    {0, NULL}
};

static ERR_STRING_DATA CCA4758_str_reasons[] = {
    {ERR_REASON(CCA4758_R_ALREADY_LOADED), "already loaded"},
    {ERR_REASON(CCA4758_R_ASN1_OID_UNKNOWN_FOR_MD),
     "asn1 oid unknown for md"},
    {ERR_REASON(CCA4758_R_COMMAND_NOT_IMPLEMENTED),
     "command not implemented"},
    {ERR_REASON(CCA4758_R_DSO_FAILURE), "dso failure"},
    {ERR_REASON(CCA4758_R_FAILED_LOADING_PRIVATE_KEY),
     "failed loading private key"},
    {ERR_REASON(CCA4758_R_FAILED_LOADING_PUBLIC_KEY),
     "failed loading public key"},
    {ERR_REASON(CCA4758_R_NOT_LOADED), "not loaded"},
    {ERR_REASON(CCA4758_R_SIZE_TOO_LARGE_OR_TOO_SMALL),
     "size too large or too small"},
    {ERR_REASON(CCA4758_R_UNIT_FAILURE), "unit failure"},
    {ERR_REASON(CCA4758_R_UNKNOWN_ALGORITHM_TYPE), "unknown algorithm type"},
    {0, NULL}
};

#endif

#ifdef CCA4758_LIB_NAME
static ERR_STRING_DATA CCA4758_lib_name[] = {
    {0, CCA4758_LIB_NAME},
    {0, NULL}
};
#endif

static int CCA4758_lib_error_code = 0;
static int CCA4758_error_init = 1;

static void ERR_load_CCA4758_strings(void)
{
    if (CCA4758_lib_error_code == 0)
        CCA4758_lib_error_code = ERR_get_next_error_library();

    if (CCA4758_error_init) {
        CCA4758_error_init = 0;
#ifndef OPENSSL_NO_ERR
        ERR_load_strings(CCA4758_lib_error_code, CCA4758_str_functs);
        ERR_load_strings(CCA4758_lib_error_code, CCA4758_str_reasons);
#endif

#ifdef CCA4758_LIB_NAME
        CCA4758_lib_name->error = ERR_PACK(CCA4758_lib_error_code, 0, 0);
        ERR_load_strings(0, CCA4758_lib_name);
#endif
    }
}

static void ERR_unload_CCA4758_strings(void)
{
    if (CCA4758_error_init == 0) {
#ifndef OPENSSL_NO_ERR
        ERR_unload_strings(CCA4758_lib_error_code, CCA4758_str_functs);
        ERR_unload_strings(CCA4758_lib_error_code, CCA4758_str_reasons);
#endif

#ifdef CCA4758_LIB_NAME
        ERR_unload_strings(0, CCA4758_lib_name);
#endif
        CCA4758_error_init = 1;
    }
}

static void ERR_CCA4758_error(int function, int reason, char *file, int line)
{
    if (CCA4758_lib_error_code == 0)
        CCA4758_lib_error_code = ERR_get_next_error_library();
    ERR_PUT_error(CCA4758_lib_error_code, function, reason, file, line);
}