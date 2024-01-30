/* 定义项目名称,也是所有生成的源码文件名前缀 */

/*
 * Generated by erpcgen 1.12.0 on Tue Jan 30 06:17:59 2024.
 *
 * AUTOGENERATED - DO NOT EDIT
 */


#if !defined(_c_erpcdemo_client_h_)
#define _c_erpcdemo_client_h_

#include "erpcdemo_common.h"
#include "erpc_client_manager.h"

#if defined(__cplusplus)
extern "C"
{
#endif

#if !defined(ERPC_FUNCTIONS_DEFINITIONS)
#define ERPC_FUNCTIONS_DEFINITIONS


/*! @brief DEMO identifiers */
enum _DEMO_ids
{
    kDEMO_service_id = 1,
    kDEMO_RD_demoHello_id = 1,
};

/*! 定义服务接口函数 */
//! @name DEMO
//@{
binary_t * RD_demoHello(const binary_t * txInput);
//@}

#endif // ERPC_FUNCTIONS_DEFINITIONS

void initDEMO_client(erpc_client_t client);

void deinitDEMO_client(void);

#if defined(__cplusplus)
}
#endif

#endif // _c_erpcdemo_client_h_
