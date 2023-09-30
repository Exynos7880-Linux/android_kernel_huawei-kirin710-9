/*
 * Copyright (C) Huawei Technologies Co., Ltd. 2012-2015. All rights reserved.
 * foss@huawei.com
 *
 * If distributed as part of the Linux kernel, the following license terms
 * apply:
 *
 * * This program is free software; you can redistribute it and/or modify
 * * it under the terms of the GNU General Public License version 2 and
 * * only version 2 as published by the Free Software Foundation.
 * *
 * * This program is distributed in the hope that it will be useful,
 * * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * * GNU General Public License for more details.
 * *
 * * You should have received a copy of the GNU General Public License
 * * along with this program; if not, write to the Free Software
 * * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307, USA
 *
 * Otherwise, the following license terms apply:
 *
 * * Redistribution and use in source and binary forms, with or without
 * * modification, are permitted provided that the following conditions
 * * are met:
 * * 1) Redistributions of source code must retain the above copyright
 * *    notice, this list of conditions and the following disclaimer.
 * * 2) Redistributions in binary form must reproduce the above copyright
 * *    notice, this list of conditions and the following disclaimer in the
 * *    documentation and/or other materials provided with the distribution.
 * * 3) Neither the name of Huawei nor the names of its contributors may
 * *    be used to endorse or promote products derived from this software
 * *    without specific prior written permission.
 *
 * * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 */



#ifndef __CPROC_ERRLOG_CFG_H__
#define __CPROC_ERRLOG_CFG_H__

/*****************************************************************************
  1 其他头文件包含
*****************************************************************************/
#include "vos.h"

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif


#pragma pack(4)

/*****************************************************************************
  2 宏定义
*****************************************************************************/

/*****************************************************************************
  3 枚举定义
*****************************************************************************/
/** ****************************************************************************
 * Name        :CPROC_1X_ERR_LOG_ALRAM_ENUM_UINT8
 *
 * Description :CHR Alarm ID range from 0x00 to 0x7F
 * (1)CPROC_1X_ERR_LOG_NO_RESOURCE:
 *      --apply resource failed
 *      --resource suspended
 * (2)CPROC_1X_ERR_LOG_FSM_ABNORMAL
 *      --cproc can't receive message to drive fsm
 *      --cproc can't process received message
 *      --cproc received cas_rel_all_req
 * (3)CPROC_1X_ERR_LOG_PILOT_SEARCH_FAIL
 *      --pilot bad rssi
 *      --pilot not found by csdr
 *      --pilot found but energy bad
 * (4)CPROC_1X_ERR_LOG_TIME_ABNORMAL
 *      --cproc wake up late in drx
 *      --cproc miss 10ms interrupt
 * (5)CPROC_1X_ERR_LOG_TCH_ABNORMAL
 *      --fch goodframe false
 *      --sch goodframe false

 * (7)CPROC_1X_ERR_LOG_MEASURE_INFO
 *      --Phase change more than 15 chip
 *
 * (8)CPROC_1X_ERR_LOG_QPCH_ABNORMAL
 *      --QPCH next event time is before now
 *      --2nd PI comes before rxoff_cnf of 1st PI does
 *******************************************************************************/
enum CPROC_1X_ERR_LOG_ALARM_ENUM
{
    CPROC_1X_ERR_LOG_NO_RESOURCE               = 0x01,            /* CPROC_1X_ERR_LOG_NO_RESOURCE_STRU */
    CPROC_1X_ERR_LOG_FSM_ABNORMAL              = 0x02,            /* CPROC_1X_ERR_LOG_FSM_ABNORMAL_STRU */
    CPROC_1X_ERR_LOG_PILOT_SEARCH_FAIL         = 0x03,            /* CPROC_1X_ERR_LOG_PILOT_SEARCH_FAIL_STRU */
    CPROC_1X_ERR_LOG_TIME_ABNORMAL             = 0x04,            /* CPROC_1X_ERR_LOG_TIME_ABNORMAL_STRU */
    CPROC_1X_ERR_LOG_TCH_ABNORMAL              = 0x05,            /* CPROC_1X_ERR_LOG_TCH_ABNORMAL_STRU */
    CPROC_1X_ERR_LOG_PAGING_RESULT             = 0x06,            /* CPROC_1X_ERR_LOG_PAGING_WAKEUP_INFO_STRU */
    CPROC_1X_ERR_LOG_MEASURE_INFO              = 0x07,            /* CPROC_1X_ERR_LOG_MEASURE_INFO_STRU */
    CPROC_1X_ERR_LOG_QPCH_ABNORMAL             = 0x08,            /* CPROC_1X_ERR_LOG_QPCH_ABNORMAL_INFO_STRU */

    CPROC_1X_ERR_LOG_ALARM_BUTT                = 0x7F
};
typedef VOS_UINT8 CPROC_1X_ERR_LOG_ALARM_ENUM_UINT8;

/** ****************************************************************************
 * Name        :CPROC_HRPD_ERR_LOG_ALRAM_ENUM_UINT8
 *
 * Description :CHR Alarm ID range from 0x80 to 0xFF
 * (1)CPROC_HRPD_ERR_LOG_NO_RESOURCE:
 *      --apply resource failed
 *      --resource suspended
 * (2)CPROC_HRPD_ERR_LOG_FSM_ABNORMAL
 *      --cproc can't receive message to drive fsm
 *      --cproc can't process received message
 *      --cproc received cas_rel_all_req
 * (3)CPROC_HRPD_ERR_LOG_PILOT_SEARCH_FAIL
 *      --pilot bad rssi
 *      --pilot not found by csdr
 *      --pilot found but energy bad
 * (4)CPROC_HRPD_ERR_LOG_TIME_ABNORMAL
 *      --cproc wake up late in drx
 *      --cproc miss interrupt
 *******************************************************************************/
enum CPROC_HRPD_ERR_LOG_ALARM_ENUM
{
    CPROC_HRPD_ERR_LOG_NO_RESOURCE                     = 0x81,            /* CPROC_HRPD_ERR_LOG_NO_RESOURCE_SRTU */
    CPROC_HRPD_ERR_LOG_FSM_ABNORMAL                    = 0x82,            /* CPROC_HRPD_ERR_LOG_FSM_ABNORMAL_STRU */
    CPROC_HRPD_ERR_LOG_PILOT_SEARCH_FAIL               = 0x83,            /* CPROC_HRPD_ERR_LOG_PILOT_SEARCH_FAIL_STRU */
    CPROC_HRPD_ERR_LOG_TIME_ABNORMAL                   = 0x84,            /* CPROC_HRPD_ERR_LOG_TIME_ABNORMAL_STRU */
    CPROC_HRPD_ERR_LOG_PAGING_RESULT                   = 0x85,            /* CPROC_HRPD_ERR_LOG_PAGING_WAKEUP_INFO_STRU */
    CPROC_HRPD_ERR_LOG_SLAVE_MEAS_INFO                 = 0x86,            /* CPROC_HRPD_ERR_LOG_SLAVE_MEAS_INFO_STRU */

    CPROC_HRPD_ERR_LOG_BUTT                            = 0xFF
};
typedef VOS_UINT8 CPROC_HRPD_ERR_LOG_ALARM_ENUM_UINT8;


/*****************************************************************************
  4 全局变量声明
*****************************************************************************/


/*****************************************************************************
  5 消息头定义
*****************************************************************************/


/*****************************************************************************
  6 消息定义
*****************************************************************************/


/*****************************************************************************
  7 STRUCT定义
*****************************************************************************/


#if (VOS_OS_VER == VOS_WIN32)
#pragma pack()
#else
#pragma pack(0)
#endif

#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

#endif /* end of cas_errlog_cfg.h */


