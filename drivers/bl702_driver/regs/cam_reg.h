/**
  ******************************************************************************
  * @file    cam_reg.h
  * @version V1.2
  * @date    2020-03-30
  * @brief   This file is the description of.IP register
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; COPYRIGHT(c) 2019 Bouffalo Lab</center></h2>
  *
  * Redistribution and use in source and binary forms, with or without modification,
  * are permitted provided that the following conditions are met:
  *   1. Redistributions of source code must retain the above copyright notice,
  *      this list of conditions and the following disclaimer.
  *   2. Redistributions in binary form must reproduce the above copyright notice,
  *      this list of conditions and the following disclaimer in the documentation
  *      and/or other materials provided with the distribution.
  *   3. Neither the name of Bouffalo Lab nor the names of its contributors
  *      may be used to endorse or promote products derived from this software
  *      without specific prior written permission.
  *
  * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
  * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
  * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
  * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
  * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
  * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
  * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
  * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
  */
#ifndef  __CAM_REG_H__
#define  __CAM_REG_H__

#include "bl702.h"

/* 0x0 : dvp2axi_configue */
#define CAM_DVP2AXI_CONFIGUE_OFFSET                             (0x0)
#define CAM_REG_DVP_ENABLE                                      CAM_REG_DVP_ENABLE
#define CAM_REG_DVP_ENABLE_POS                                  (0U)
#define CAM_REG_DVP_ENABLE_LEN                                  (1U)
#define CAM_REG_DVP_ENABLE_MSK                                  (((1U<<CAM_REG_DVP_ENABLE_LEN)-1)<<CAM_REG_DVP_ENABLE_POS)
#define CAM_REG_DVP_ENABLE_UMSK                                 (~(((1U<<CAM_REG_DVP_ENABLE_LEN)-1)<<CAM_REG_DVP_ENABLE_POS))
#define CAM_REG_SW_MODE                                         CAM_REG_SW_MODE
#define CAM_REG_SW_MODE_POS                                     (1U)
#define CAM_REG_SW_MODE_LEN                                     (1U)
#define CAM_REG_SW_MODE_MSK                                     (((1U<<CAM_REG_SW_MODE_LEN)-1)<<CAM_REG_SW_MODE_POS)
#define CAM_REG_SW_MODE_UMSK                                    (~(((1U<<CAM_REG_SW_MODE_LEN)-1)<<CAM_REG_SW_MODE_POS))
#define CAM_REG_FRAM_VLD_POL                                    CAM_REG_FRAM_VLD_POL
#define CAM_REG_FRAM_VLD_POL_POS                                (2U)
#define CAM_REG_FRAM_VLD_POL_LEN                                (1U)
#define CAM_REG_FRAM_VLD_POL_MSK                                (((1U<<CAM_REG_FRAM_VLD_POL_LEN)-1)<<CAM_REG_FRAM_VLD_POL_POS)
#define CAM_REG_FRAM_VLD_POL_UMSK                               (~(((1U<<CAM_REG_FRAM_VLD_POL_LEN)-1)<<CAM_REG_FRAM_VLD_POL_POS))
#define CAM_REG_LINE_VLD_POL                                    CAM_REG_LINE_VLD_POL
#define CAM_REG_LINE_VLD_POL_POS                                (3U)
#define CAM_REG_LINE_VLD_POL_LEN                                (1U)
#define CAM_REG_LINE_VLD_POL_MSK                                (((1U<<CAM_REG_LINE_VLD_POL_LEN)-1)<<CAM_REG_LINE_VLD_POL_POS)
#define CAM_REG_LINE_VLD_POL_UMSK                               (~(((1U<<CAM_REG_LINE_VLD_POL_LEN)-1)<<CAM_REG_LINE_VLD_POL_POS))
#define CAM_REG_HBURST                                          CAM_REG_HBURST
#define CAM_REG_HBURST_POS                                      (4U)
#define CAM_REG_HBURST_LEN                                      (2U)
#define CAM_REG_HBURST_MSK                                      (((1U<<CAM_REG_HBURST_LEN)-1)<<CAM_REG_HBURST_POS)
#define CAM_REG_HBURST_UMSK                                     (~(((1U<<CAM_REG_HBURST_LEN)-1)<<CAM_REG_HBURST_POS))
#define CAM_REG_DVP_MODE                                        CAM_REG_DVP_MODE
#define CAM_REG_DVP_MODE_POS                                    (8U)
#define CAM_REG_DVP_MODE_LEN                                    (3U)
#define CAM_REG_DVP_MODE_MSK                                    (((1U<<CAM_REG_DVP_MODE_LEN)-1)<<CAM_REG_DVP_MODE_POS)
#define CAM_REG_DVP_MODE_UMSK                                   (~(((1U<<CAM_REG_DVP_MODE_LEN)-1)<<CAM_REG_DVP_MODE_POS))
#define CAM_REG_HW_MODE_FWRAP                                   CAM_REG_HW_MODE_FWRAP
#define CAM_REG_HW_MODE_FWRAP_POS                               (11U)
#define CAM_REG_HW_MODE_FWRAP_LEN                               (1U)
#define CAM_REG_HW_MODE_FWRAP_MSK                               (((1U<<CAM_REG_HW_MODE_FWRAP_LEN)-1)<<CAM_REG_HW_MODE_FWRAP_POS)
#define CAM_REG_HW_MODE_FWRAP_UMSK                              (~(((1U<<CAM_REG_HW_MODE_FWRAP_LEN)-1)<<CAM_REG_HW_MODE_FWRAP_POS))
#define CAM_REG_DROP_EN                                         CAM_REG_DROP_EN
#define CAM_REG_DROP_EN_POS                                     (12U)
#define CAM_REG_DROP_EN_LEN                                     (1U)
#define CAM_REG_DROP_EN_MSK                                     (((1U<<CAM_REG_DROP_EN_LEN)-1)<<CAM_REG_DROP_EN_POS)
#define CAM_REG_DROP_EN_UMSK                                    (~(((1U<<CAM_REG_DROP_EN_LEN)-1)<<CAM_REG_DROP_EN_POS))
#define CAM_REG_DROP_EVEN                                       CAM_REG_DROP_EVEN
#define CAM_REG_DROP_EVEN_POS                                   (13U)
#define CAM_REG_DROP_EVEN_LEN                                   (1U)
#define CAM_REG_DROP_EVEN_MSK                                   (((1U<<CAM_REG_DROP_EVEN_LEN)-1)<<CAM_REG_DROP_EVEN_POS)
#define CAM_REG_DROP_EVEN_UMSK                                  (~(((1U<<CAM_REG_DROP_EVEN_LEN)-1)<<CAM_REG_DROP_EVEN_POS))
#define CAM_REG_SUBSAMPLE_EN                                    CAM_REG_SUBSAMPLE_EN
#define CAM_REG_SUBSAMPLE_EN_POS                                (14U)
#define CAM_REG_SUBSAMPLE_EN_LEN                                (1U)
#define CAM_REG_SUBSAMPLE_EN_MSK                                (((1U<<CAM_REG_SUBSAMPLE_EN_LEN)-1)<<CAM_REG_SUBSAMPLE_EN_POS)
#define CAM_REG_SUBSAMPLE_EN_UMSK                               (~(((1U<<CAM_REG_SUBSAMPLE_EN_LEN)-1)<<CAM_REG_SUBSAMPLE_EN_POS))
#define CAM_REG_SUBSAMPLE_EVEN                                  CAM_REG_SUBSAMPLE_EVEN
#define CAM_REG_SUBSAMPLE_EVEN_POS                              (15U)
#define CAM_REG_SUBSAMPLE_EVEN_LEN                              (1U)
#define CAM_REG_SUBSAMPLE_EVEN_MSK                              (((1U<<CAM_REG_SUBSAMPLE_EVEN_LEN)-1)<<CAM_REG_SUBSAMPLE_EVEN_POS)
#define CAM_REG_SUBSAMPLE_EVEN_UMSK                             (~(((1U<<CAM_REG_SUBSAMPLE_EVEN_LEN)-1)<<CAM_REG_SUBSAMPLE_EVEN_POS))
#define CAM_REG_INTERLV_MODE                                    CAM_REG_INTERLV_MODE
#define CAM_REG_INTERLV_MODE_POS                                (16U)
#define CAM_REG_INTERLV_MODE_LEN                                (1U)
#define CAM_REG_INTERLV_MODE_MSK                                (((1U<<CAM_REG_INTERLV_MODE_LEN)-1)<<CAM_REG_INTERLV_MODE_POS)
#define CAM_REG_INTERLV_MODE_UMSK                               (~(((1U<<CAM_REG_INTERLV_MODE_LEN)-1)<<CAM_REG_INTERLV_MODE_POS))
#define CAM_REG_DVP_PIX_CLK_CG                                  CAM_REG_DVP_PIX_CLK_CG
#define CAM_REG_DVP_PIX_CLK_CG_POS                              (20U)
#define CAM_REG_DVP_PIX_CLK_CG_LEN                              (1U)
#define CAM_REG_DVP_PIX_CLK_CG_MSK                              (((1U<<CAM_REG_DVP_PIX_CLK_CG_LEN)-1)<<CAM_REG_DVP_PIX_CLK_CG_POS)
#define CAM_REG_DVP_PIX_CLK_CG_UMSK                             (~(((1U<<CAM_REG_DVP_PIX_CLK_CG_LEN)-1)<<CAM_REG_DVP_PIX_CLK_CG_POS))
#define CAM_REG_DVP_WAIT_CYCLE                                  CAM_REG_DVP_WAIT_CYCLE
#define CAM_REG_DVP_WAIT_CYCLE_POS                              (24U)
#define CAM_REG_DVP_WAIT_CYCLE_LEN                              (8U)
#define CAM_REG_DVP_WAIT_CYCLE_MSK                              (((1U<<CAM_REG_DVP_WAIT_CYCLE_LEN)-1)<<CAM_REG_DVP_WAIT_CYCLE_POS)
#define CAM_REG_DVP_WAIT_CYCLE_UMSK                             (~(((1U<<CAM_REG_DVP_WAIT_CYCLE_LEN)-1)<<CAM_REG_DVP_WAIT_CYCLE_POS))

/* 0x4 : dvp2ahb_addr_start_0 */
#define CAM_DVP2AHB_ADDR_START_0_OFFSET                         (0x4)
#define CAM_REG_ADDR_START_0                                    CAM_REG_ADDR_START_0
#define CAM_REG_ADDR_START_0_POS                                (0U)
#define CAM_REG_ADDR_START_0_LEN                                (32U)
#define CAM_REG_ADDR_START_0_MSK                                (((1U<<CAM_REG_ADDR_START_0_LEN)-1)<<CAM_REG_ADDR_START_0_POS)
#define CAM_REG_ADDR_START_0_UMSK                               (~(((1U<<CAM_REG_ADDR_START_0_LEN)-1)<<CAM_REG_ADDR_START_0_POS))

/* 0x8 : dvp2ahb_mem_bcnt_0 */
#define CAM_DVP2AHB_MEM_BCNT_0_OFFSET                           (0x8)
#define CAM_REG_MEM_BURST_CNT_0                                 CAM_REG_MEM_BURST_CNT_0
#define CAM_REG_MEM_BURST_CNT_0_POS                             (0U)
#define CAM_REG_MEM_BURST_CNT_0_LEN                             (32U)
#define CAM_REG_MEM_BURST_CNT_0_MSK                             (((1U<<CAM_REG_MEM_BURST_CNT_0_LEN)-1)<<CAM_REG_MEM_BURST_CNT_0_POS)
#define CAM_REG_MEM_BURST_CNT_0_UMSK                            (~(((1U<<CAM_REG_MEM_BURST_CNT_0_LEN)-1)<<CAM_REG_MEM_BURST_CNT_0_POS))

/* 0xC : dvp2ahb_frame_bcnt_0 */
#define CAM_DVP2AHB_FRAME_BCNT_0_OFFSET                         (0xC)
#define CAM_REG_FRAME_BURST_CNT_0                               CAM_REG_FRAME_BURST_CNT_0
#define CAM_REG_FRAME_BURST_CNT_0_POS                           (0U)
#define CAM_REG_FRAME_BURST_CNT_0_LEN                           (32U)
#define CAM_REG_FRAME_BURST_CNT_0_MSK                           (((1U<<CAM_REG_FRAME_BURST_CNT_0_LEN)-1)<<CAM_REG_FRAME_BURST_CNT_0_POS)
#define CAM_REG_FRAME_BURST_CNT_0_UMSK                          (~(((1U<<CAM_REG_FRAME_BURST_CNT_0_LEN)-1)<<CAM_REG_FRAME_BURST_CNT_0_POS))

/* 0x10 : dvp2ahb_addr_start_1 */
#define CAM_DVP2AHB_ADDR_START_1_OFFSET                         (0x10)
#define CAM_REG_ADDR_START_1                                    CAM_REG_ADDR_START_1
#define CAM_REG_ADDR_START_1_POS                                (0U)
#define CAM_REG_ADDR_START_1_LEN                                (32U)
#define CAM_REG_ADDR_START_1_MSK                                (((1U<<CAM_REG_ADDR_START_1_LEN)-1)<<CAM_REG_ADDR_START_1_POS)
#define CAM_REG_ADDR_START_1_UMSK                               (~(((1U<<CAM_REG_ADDR_START_1_LEN)-1)<<CAM_REG_ADDR_START_1_POS))

/* 0x14 : dvp2ahb_mem_bcnt_1 */
#define CAM_DVP2AHB_MEM_BCNT_1_OFFSET                           (0x14)
#define CAM_REG_MEM_BURST_CNT_1                                 CAM_REG_MEM_BURST_CNT_1
#define CAM_REG_MEM_BURST_CNT_1_POS                             (0U)
#define CAM_REG_MEM_BURST_CNT_1_LEN                             (32U)
#define CAM_REG_MEM_BURST_CNT_1_MSK                             (((1U<<CAM_REG_MEM_BURST_CNT_1_LEN)-1)<<CAM_REG_MEM_BURST_CNT_1_POS)
#define CAM_REG_MEM_BURST_CNT_1_UMSK                            (~(((1U<<CAM_REG_MEM_BURST_CNT_1_LEN)-1)<<CAM_REG_MEM_BURST_CNT_1_POS))

/* 0x18 : dvp2ahb_frame_bcnt_1 */
#define CAM_DVP2AHB_FRAME_BCNT_1_OFFSET                         (0x18)
#define CAM_REG_FRAME_BURST_CNT_1                               CAM_REG_FRAME_BURST_CNT_1
#define CAM_REG_FRAME_BURST_CNT_1_POS                           (0U)
#define CAM_REG_FRAME_BURST_CNT_1_LEN                           (32U)
#define CAM_REG_FRAME_BURST_CNT_1_MSK                           (((1U<<CAM_REG_FRAME_BURST_CNT_1_LEN)-1)<<CAM_REG_FRAME_BURST_CNT_1_POS)
#define CAM_REG_FRAME_BURST_CNT_1_UMSK                          (~(((1U<<CAM_REG_FRAME_BURST_CNT_1_LEN)-1)<<CAM_REG_FRAME_BURST_CNT_1_POS))

/* 0x1C : dvp_status_and_error */
#define CAM_DVP_STATUS_AND_ERROR_OFFSET                         (0x1C)
#define CAM_STS_NORMAL_INT_0                                    CAM_STS_NORMAL_INT_0
#define CAM_STS_NORMAL_INT_0_POS                                (0U)
#define CAM_STS_NORMAL_INT_0_LEN                                (1U)
#define CAM_STS_NORMAL_INT_0_MSK                                (((1U<<CAM_STS_NORMAL_INT_0_LEN)-1)<<CAM_STS_NORMAL_INT_0_POS)
#define CAM_STS_NORMAL_INT_0_UMSK                               (~(((1U<<CAM_STS_NORMAL_INT_0_LEN)-1)<<CAM_STS_NORMAL_INT_0_POS))
#define CAM_STS_NORMAL_INT_1                                    CAM_STS_NORMAL_INT_1
#define CAM_STS_NORMAL_INT_1_POS                                (1U)
#define CAM_STS_NORMAL_INT_1_LEN                                (1U)
#define CAM_STS_NORMAL_INT_1_MSK                                (((1U<<CAM_STS_NORMAL_INT_1_LEN)-1)<<CAM_STS_NORMAL_INT_1_POS)
#define CAM_STS_NORMAL_INT_1_UMSK                               (~(((1U<<CAM_STS_NORMAL_INT_1_LEN)-1)<<CAM_STS_NORMAL_INT_1_POS))
#define CAM_STS_MEM_INT_0                                       CAM_STS_MEM_INT_0
#define CAM_STS_MEM_INT_0_POS                                   (2U)
#define CAM_STS_MEM_INT_0_LEN                                   (1U)
#define CAM_STS_MEM_INT_0_MSK                                   (((1U<<CAM_STS_MEM_INT_0_LEN)-1)<<CAM_STS_MEM_INT_0_POS)
#define CAM_STS_MEM_INT_0_UMSK                                  (~(((1U<<CAM_STS_MEM_INT_0_LEN)-1)<<CAM_STS_MEM_INT_0_POS))
#define CAM_STS_MEM_INT_1                                       CAM_STS_MEM_INT_1
#define CAM_STS_MEM_INT_1_POS                                   (3U)
#define CAM_STS_MEM_INT_1_LEN                                   (1U)
#define CAM_STS_MEM_INT_1_MSK                                   (((1U<<CAM_STS_MEM_INT_1_LEN)-1)<<CAM_STS_MEM_INT_1_POS)
#define CAM_STS_MEM_INT_1_UMSK                                  (~(((1U<<CAM_STS_MEM_INT_1_LEN)-1)<<CAM_STS_MEM_INT_1_POS))
#define CAM_STS_FRAME_INT_0                                     CAM_STS_FRAME_INT_0
#define CAM_STS_FRAME_INT_0_POS                                 (4U)
#define CAM_STS_FRAME_INT_0_LEN                                 (1U)
#define CAM_STS_FRAME_INT_0_MSK                                 (((1U<<CAM_STS_FRAME_INT_0_LEN)-1)<<CAM_STS_FRAME_INT_0_POS)
#define CAM_STS_FRAME_INT_0_UMSK                                (~(((1U<<CAM_STS_FRAME_INT_0_LEN)-1)<<CAM_STS_FRAME_INT_0_POS))
#define CAM_STS_FRAME_INT_1                                     CAM_STS_FRAME_INT_1
#define CAM_STS_FRAME_INT_1_POS                                 (5U)
#define CAM_STS_FRAME_INT_1_LEN                                 (1U)
#define CAM_STS_FRAME_INT_1_MSK                                 (((1U<<CAM_STS_FRAME_INT_1_LEN)-1)<<CAM_STS_FRAME_INT_1_POS)
#define CAM_STS_FRAME_INT_1_UMSK                                (~(((1U<<CAM_STS_FRAME_INT_1_LEN)-1)<<CAM_STS_FRAME_INT_1_POS))
#define CAM_STS_FIFO_INT_0                                      CAM_STS_FIFO_INT_0
#define CAM_STS_FIFO_INT_0_POS                                  (6U)
#define CAM_STS_FIFO_INT_0_LEN                                  (1U)
#define CAM_STS_FIFO_INT_0_MSK                                  (((1U<<CAM_STS_FIFO_INT_0_LEN)-1)<<CAM_STS_FIFO_INT_0_POS)
#define CAM_STS_FIFO_INT_0_UMSK                                 (~(((1U<<CAM_STS_FIFO_INT_0_LEN)-1)<<CAM_STS_FIFO_INT_0_POS))
#define CAM_STS_FIFO_INT_1                                      CAM_STS_FIFO_INT_1
#define CAM_STS_FIFO_INT_1_POS                                  (7U)
#define CAM_STS_FIFO_INT_1_LEN                                  (1U)
#define CAM_STS_FIFO_INT_1_MSK                                  (((1U<<CAM_STS_FIFO_INT_1_LEN)-1)<<CAM_STS_FIFO_INT_1_POS)
#define CAM_STS_FIFO_INT_1_UMSK                                 (~(((1U<<CAM_STS_FIFO_INT_1_LEN)-1)<<CAM_STS_FIFO_INT_1_POS))
#define CAM_STS_HCNT_INT                                        CAM_STS_HCNT_INT
#define CAM_STS_HCNT_INT_POS                                    (8U)
#define CAM_STS_HCNT_INT_LEN                                    (1U)
#define CAM_STS_HCNT_INT_MSK                                    (((1U<<CAM_STS_HCNT_INT_LEN)-1)<<CAM_STS_HCNT_INT_POS)
#define CAM_STS_HCNT_INT_UMSK                                   (~(((1U<<CAM_STS_HCNT_INT_LEN)-1)<<CAM_STS_HCNT_INT_POS))
#define CAM_STS_VCNT_INT                                        CAM_STS_VCNT_INT
#define CAM_STS_VCNT_INT_POS                                    (9U)
#define CAM_STS_VCNT_INT_LEN                                    (1U)
#define CAM_STS_VCNT_INT_MSK                                    (((1U<<CAM_STS_VCNT_INT_LEN)-1)<<CAM_STS_VCNT_INT_POS)
#define CAM_STS_VCNT_INT_UMSK                                   (~(((1U<<CAM_STS_VCNT_INT_LEN)-1)<<CAM_STS_VCNT_INT_POS))
#define CAM_AHB_IDLE_0                                          CAM_AHB_IDLE_0
#define CAM_AHB_IDLE_0_POS                                      (16U)
#define CAM_AHB_IDLE_0_LEN                                      (1U)
#define CAM_AHB_IDLE_0_MSK                                      (((1U<<CAM_AHB_IDLE_0_LEN)-1)<<CAM_AHB_IDLE_0_POS)
#define CAM_AHB_IDLE_0_UMSK                                     (~(((1U<<CAM_AHB_IDLE_0_LEN)-1)<<CAM_AHB_IDLE_0_POS))
#define CAM_AHB_IDLE_1                                          CAM_AHB_IDLE_1
#define CAM_AHB_IDLE_1_POS                                      (17U)
#define CAM_AHB_IDLE_1_LEN                                      (1U)
#define CAM_AHB_IDLE_1_MSK                                      (((1U<<CAM_AHB_IDLE_1_LEN)-1)<<CAM_AHB_IDLE_1_POS)
#define CAM_AHB_IDLE_1_UMSK                                     (~(((1U<<CAM_AHB_IDLE_1_LEN)-1)<<CAM_AHB_IDLE_1_POS))
#define CAM_ST_DVP_IDLE                                         CAM_ST_DVP_IDLE
#define CAM_ST_DVP_IDLE_POS                                     (19U)
#define CAM_ST_DVP_IDLE_LEN                                     (1U)
#define CAM_ST_DVP_IDLE_MSK                                     (((1U<<CAM_ST_DVP_IDLE_LEN)-1)<<CAM_ST_DVP_IDLE_POS)
#define CAM_ST_DVP_IDLE_UMSK                                    (~(((1U<<CAM_ST_DVP_IDLE_LEN)-1)<<CAM_ST_DVP_IDLE_POS))
#define CAM_FRAME_VALID_CNT_0                                   CAM_FRAME_VALID_CNT_0
#define CAM_FRAME_VALID_CNT_0_POS                               (20U)
#define CAM_FRAME_VALID_CNT_0_LEN                               (4U)
#define CAM_FRAME_VALID_CNT_0_MSK                               (((1U<<CAM_FRAME_VALID_CNT_0_LEN)-1)<<CAM_FRAME_VALID_CNT_0_POS)
#define CAM_FRAME_VALID_CNT_0_UMSK                              (~(((1U<<CAM_FRAME_VALID_CNT_0_LEN)-1)<<CAM_FRAME_VALID_CNT_0_POS))
#define CAM_FRAME_VALID_CNT_1                                   CAM_FRAME_VALID_CNT_1
#define CAM_FRAME_VALID_CNT_1_POS                               (24U)
#define CAM_FRAME_VALID_CNT_1_LEN                               (4U)
#define CAM_FRAME_VALID_CNT_1_MSK                               (((1U<<CAM_FRAME_VALID_CNT_1_LEN)-1)<<CAM_FRAME_VALID_CNT_1_POS)
#define CAM_FRAME_VALID_CNT_1_UMSK                              (~(((1U<<CAM_FRAME_VALID_CNT_1_LEN)-1)<<CAM_FRAME_VALID_CNT_1_POS))
#define CAM_ST_BUS_IDLE                                         CAM_ST_BUS_IDLE
#define CAM_ST_BUS_IDLE_POS                                     (28U)
#define CAM_ST_BUS_IDLE_LEN                                     (1U)
#define CAM_ST_BUS_IDLE_MSK                                     (((1U<<CAM_ST_BUS_IDLE_LEN)-1)<<CAM_ST_BUS_IDLE_POS)
#define CAM_ST_BUS_IDLE_UMSK                                    (~(((1U<<CAM_ST_BUS_IDLE_LEN)-1)<<CAM_ST_BUS_IDLE_POS))
#define CAM_ST_BUS_FUNC                                         CAM_ST_BUS_FUNC
#define CAM_ST_BUS_FUNC_POS                                     (29U)
#define CAM_ST_BUS_FUNC_LEN                                     (1U)
#define CAM_ST_BUS_FUNC_MSK                                     (((1U<<CAM_ST_BUS_FUNC_LEN)-1)<<CAM_ST_BUS_FUNC_POS)
#define CAM_ST_BUS_FUNC_UMSK                                    (~(((1U<<CAM_ST_BUS_FUNC_LEN)-1)<<CAM_ST_BUS_FUNC_POS))
#define CAM_ST_BUS_WAIT                                         CAM_ST_BUS_WAIT
#define CAM_ST_BUS_WAIT_POS                                     (30U)
#define CAM_ST_BUS_WAIT_LEN                                     (1U)
#define CAM_ST_BUS_WAIT_MSK                                     (((1U<<CAM_ST_BUS_WAIT_LEN)-1)<<CAM_ST_BUS_WAIT_POS)
#define CAM_ST_BUS_WAIT_UMSK                                    (~(((1U<<CAM_ST_BUS_WAIT_LEN)-1)<<CAM_ST_BUS_WAIT_POS))
#define CAM_ST_BUS_FLSH                                         CAM_ST_BUS_FLSH
#define CAM_ST_BUS_FLSH_POS                                     (31U)
#define CAM_ST_BUS_FLSH_LEN                                     (1U)
#define CAM_ST_BUS_FLSH_MSK                                     (((1U<<CAM_ST_BUS_FLSH_LEN)-1)<<CAM_ST_BUS_FLSH_POS)
#define CAM_ST_BUS_FLSH_UMSK                                    (~(((1U<<CAM_ST_BUS_FLSH_LEN)-1)<<CAM_ST_BUS_FLSH_POS))

/* 0x20 : dvp_frame_fifo_pop */
#define CAM_DVP_FRAME_FIFO_POP_OFFSET                           (0x20)
#define CAM_RFIFO_POP_0                                         CAM_RFIFO_POP_0
#define CAM_RFIFO_POP_0_POS                                     (0U)
#define CAM_RFIFO_POP_0_LEN                                     (1U)
#define CAM_RFIFO_POP_0_MSK                                     (((1U<<CAM_RFIFO_POP_0_LEN)-1)<<CAM_RFIFO_POP_0_POS)
#define CAM_RFIFO_POP_0_UMSK                                    (~(((1U<<CAM_RFIFO_POP_0_LEN)-1)<<CAM_RFIFO_POP_0_POS))
#define CAM_RFIFO_POP_1                                         CAM_RFIFO_POP_1
#define CAM_RFIFO_POP_1_POS                                     (1U)
#define CAM_RFIFO_POP_1_LEN                                     (1U)
#define CAM_RFIFO_POP_1_MSK                                     (((1U<<CAM_RFIFO_POP_1_LEN)-1)<<CAM_RFIFO_POP_1_POS)
#define CAM_RFIFO_POP_1_UMSK                                    (~(((1U<<CAM_RFIFO_POP_1_LEN)-1)<<CAM_RFIFO_POP_1_POS))
#define CAM_REG_INT_NORMAL_CLR_0                                CAM_REG_INT_NORMAL_CLR_0
#define CAM_REG_INT_NORMAL_CLR_0_POS                            (4U)
#define CAM_REG_INT_NORMAL_CLR_0_LEN                            (1U)
#define CAM_REG_INT_NORMAL_CLR_0_MSK                            (((1U<<CAM_REG_INT_NORMAL_CLR_0_LEN)-1)<<CAM_REG_INT_NORMAL_CLR_0_POS)
#define CAM_REG_INT_NORMAL_CLR_0_UMSK                           (~(((1U<<CAM_REG_INT_NORMAL_CLR_0_LEN)-1)<<CAM_REG_INT_NORMAL_CLR_0_POS))
#define CAM_REG_INT_MEM_CLR_0                                   CAM_REG_INT_MEM_CLR_0
#define CAM_REG_INT_MEM_CLR_0_POS                               (5U)
#define CAM_REG_INT_MEM_CLR_0_LEN                               (1U)
#define CAM_REG_INT_MEM_CLR_0_MSK                               (((1U<<CAM_REG_INT_MEM_CLR_0_LEN)-1)<<CAM_REG_INT_MEM_CLR_0_POS)
#define CAM_REG_INT_MEM_CLR_0_UMSK                              (~(((1U<<CAM_REG_INT_MEM_CLR_0_LEN)-1)<<CAM_REG_INT_MEM_CLR_0_POS))
#define CAM_REG_INT_FRAME_CLR_0                                 CAM_REG_INT_FRAME_CLR_0
#define CAM_REG_INT_FRAME_CLR_0_POS                             (6U)
#define CAM_REG_INT_FRAME_CLR_0_LEN                             (1U)
#define CAM_REG_INT_FRAME_CLR_0_MSK                             (((1U<<CAM_REG_INT_FRAME_CLR_0_LEN)-1)<<CAM_REG_INT_FRAME_CLR_0_POS)
#define CAM_REG_INT_FRAME_CLR_0_UMSK                            (~(((1U<<CAM_REG_INT_FRAME_CLR_0_LEN)-1)<<CAM_REG_INT_FRAME_CLR_0_POS))
#define CAM_REG_INT_FIFO_CLR_0                                  CAM_REG_INT_FIFO_CLR_0
#define CAM_REG_INT_FIFO_CLR_0_POS                              (7U)
#define CAM_REG_INT_FIFO_CLR_0_LEN                              (1U)
#define CAM_REG_INT_FIFO_CLR_0_MSK                              (((1U<<CAM_REG_INT_FIFO_CLR_0_LEN)-1)<<CAM_REG_INT_FIFO_CLR_0_POS)
#define CAM_REG_INT_FIFO_CLR_0_UMSK                             (~(((1U<<CAM_REG_INT_FIFO_CLR_0_LEN)-1)<<CAM_REG_INT_FIFO_CLR_0_POS))
#define CAM_REG_INT_HCNT_CLR_0                                  CAM_REG_INT_HCNT_CLR_0
#define CAM_REG_INT_HCNT_CLR_0_POS                              (8U)
#define CAM_REG_INT_HCNT_CLR_0_LEN                              (1U)
#define CAM_REG_INT_HCNT_CLR_0_MSK                              (((1U<<CAM_REG_INT_HCNT_CLR_0_LEN)-1)<<CAM_REG_INT_HCNT_CLR_0_POS)
#define CAM_REG_INT_HCNT_CLR_0_UMSK                             (~(((1U<<CAM_REG_INT_HCNT_CLR_0_LEN)-1)<<CAM_REG_INT_HCNT_CLR_0_POS))
#define CAM_REG_INT_VCNT_CLR_0                                  CAM_REG_INT_VCNT_CLR_0
#define CAM_REG_INT_VCNT_CLR_0_POS                              (9U)
#define CAM_REG_INT_VCNT_CLR_0_LEN                              (1U)
#define CAM_REG_INT_VCNT_CLR_0_MSK                              (((1U<<CAM_REG_INT_VCNT_CLR_0_LEN)-1)<<CAM_REG_INT_VCNT_CLR_0_POS)
#define CAM_REG_INT_VCNT_CLR_0_UMSK                             (~(((1U<<CAM_REG_INT_VCNT_CLR_0_LEN)-1)<<CAM_REG_INT_VCNT_CLR_0_POS))
#define CAM_REG_INT_NORMAL_CLR_1                                CAM_REG_INT_NORMAL_CLR_1
#define CAM_REG_INT_NORMAL_CLR_1_POS                            (16U)
#define CAM_REG_INT_NORMAL_CLR_1_LEN                            (1U)
#define CAM_REG_INT_NORMAL_CLR_1_MSK                            (((1U<<CAM_REG_INT_NORMAL_CLR_1_LEN)-1)<<CAM_REG_INT_NORMAL_CLR_1_POS)
#define CAM_REG_INT_NORMAL_CLR_1_UMSK                           (~(((1U<<CAM_REG_INT_NORMAL_CLR_1_LEN)-1)<<CAM_REG_INT_NORMAL_CLR_1_POS))
#define CAM_REG_INT_MEM_CLR_1                                   CAM_REG_INT_MEM_CLR_1
#define CAM_REG_INT_MEM_CLR_1_POS                               (17U)
#define CAM_REG_INT_MEM_CLR_1_LEN                               (1U)
#define CAM_REG_INT_MEM_CLR_1_MSK                               (((1U<<CAM_REG_INT_MEM_CLR_1_LEN)-1)<<CAM_REG_INT_MEM_CLR_1_POS)
#define CAM_REG_INT_MEM_CLR_1_UMSK                              (~(((1U<<CAM_REG_INT_MEM_CLR_1_LEN)-1)<<CAM_REG_INT_MEM_CLR_1_POS))
#define CAM_REG_INT_FRAME_CLR_1                                 CAM_REG_INT_FRAME_CLR_1
#define CAM_REG_INT_FRAME_CLR_1_POS                             (18U)
#define CAM_REG_INT_FRAME_CLR_1_LEN                             (1U)
#define CAM_REG_INT_FRAME_CLR_1_MSK                             (((1U<<CAM_REG_INT_FRAME_CLR_1_LEN)-1)<<CAM_REG_INT_FRAME_CLR_1_POS)
#define CAM_REG_INT_FRAME_CLR_1_UMSK                            (~(((1U<<CAM_REG_INT_FRAME_CLR_1_LEN)-1)<<CAM_REG_INT_FRAME_CLR_1_POS))
#define CAM_REG_INT_FIFO_CLR_1                                  CAM_REG_INT_FIFO_CLR_1
#define CAM_REG_INT_FIFO_CLR_1_POS                              (19U)
#define CAM_REG_INT_FIFO_CLR_1_LEN                              (1U)
#define CAM_REG_INT_FIFO_CLR_1_MSK                              (((1U<<CAM_REG_INT_FIFO_CLR_1_LEN)-1)<<CAM_REG_INT_FIFO_CLR_1_POS)
#define CAM_REG_INT_FIFO_CLR_1_UMSK                             (~(((1U<<CAM_REG_INT_FIFO_CLR_1_LEN)-1)<<CAM_REG_INT_FIFO_CLR_1_POS))

/* 0x24 : snsr_control */
#define CAM_SNSR_CONTROL_OFFSET                                 (0x24)
#define CAM_REG_CAM_RST                                         CAM_REG_CAM_RST
#define CAM_REG_CAM_RST_POS                                     (0U)
#define CAM_REG_CAM_RST_LEN                                     (1U)
#define CAM_REG_CAM_RST_MSK                                     (((1U<<CAM_REG_CAM_RST_LEN)-1)<<CAM_REG_CAM_RST_POS)
#define CAM_REG_CAM_RST_UMSK                                    (~(((1U<<CAM_REG_CAM_RST_LEN)-1)<<CAM_REG_CAM_RST_POS))
#define CAM_REG_CAM_PWDN                                        CAM_REG_CAM_PWDN
#define CAM_REG_CAM_PWDN_POS                                    (1U)
#define CAM_REG_CAM_PWDN_LEN                                    (1U)
#define CAM_REG_CAM_PWDN_MSK                                    (((1U<<CAM_REG_CAM_PWDN_LEN)-1)<<CAM_REG_CAM_PWDN_POS)
#define CAM_REG_CAM_PWDN_UMSK                                   (~(((1U<<CAM_REG_CAM_PWDN_LEN)-1)<<CAM_REG_CAM_PWDN_POS))

/* 0x28 : int_control */
#define CAM_INT_CONTROL_OFFSET                                  (0x28)
#define CAM_REG_INT_NORMAL_0_EN                                 CAM_REG_INT_NORMAL_0_EN
#define CAM_REG_INT_NORMAL_0_EN_POS                             (0U)
#define CAM_REG_INT_NORMAL_0_EN_LEN                             (1U)
#define CAM_REG_INT_NORMAL_0_EN_MSK                             (((1U<<CAM_REG_INT_NORMAL_0_EN_LEN)-1)<<CAM_REG_INT_NORMAL_0_EN_POS)
#define CAM_REG_INT_NORMAL_0_EN_UMSK                            (~(((1U<<CAM_REG_INT_NORMAL_0_EN_LEN)-1)<<CAM_REG_INT_NORMAL_0_EN_POS))
#define CAM_REG_INT_NORMAL_1_EN                                 CAM_REG_INT_NORMAL_1_EN
#define CAM_REG_INT_NORMAL_1_EN_POS                             (1U)
#define CAM_REG_INT_NORMAL_1_EN_LEN                             (1U)
#define CAM_REG_INT_NORMAL_1_EN_MSK                             (((1U<<CAM_REG_INT_NORMAL_1_EN_LEN)-1)<<CAM_REG_INT_NORMAL_1_EN_POS)
#define CAM_REG_INT_NORMAL_1_EN_UMSK                            (~(((1U<<CAM_REG_INT_NORMAL_1_EN_LEN)-1)<<CAM_REG_INT_NORMAL_1_EN_POS))
#define CAM_REG_INT_MEM_EN                                      CAM_REG_INT_MEM_EN
#define CAM_REG_INT_MEM_EN_POS                                  (2U)
#define CAM_REG_INT_MEM_EN_LEN                                  (1U)
#define CAM_REG_INT_MEM_EN_MSK                                  (((1U<<CAM_REG_INT_MEM_EN_LEN)-1)<<CAM_REG_INT_MEM_EN_POS)
#define CAM_REG_INT_MEM_EN_UMSK                                 (~(((1U<<CAM_REG_INT_MEM_EN_LEN)-1)<<CAM_REG_INT_MEM_EN_POS))
#define CAM_REG_INT_FRAME_EN                                    CAM_REG_INT_FRAME_EN
#define CAM_REG_INT_FRAME_EN_POS                                (3U)
#define CAM_REG_INT_FRAME_EN_LEN                                (1U)
#define CAM_REG_INT_FRAME_EN_MSK                                (((1U<<CAM_REG_INT_FRAME_EN_LEN)-1)<<CAM_REG_INT_FRAME_EN_POS)
#define CAM_REG_INT_FRAME_EN_UMSK                               (~(((1U<<CAM_REG_INT_FRAME_EN_LEN)-1)<<CAM_REG_INT_FRAME_EN_POS))
#define CAM_REG_INT_FIFO_EN                                     CAM_REG_INT_FIFO_EN
#define CAM_REG_INT_FIFO_EN_POS                                 (4U)
#define CAM_REG_INT_FIFO_EN_LEN                                 (1U)
#define CAM_REG_INT_FIFO_EN_MSK                                 (((1U<<CAM_REG_INT_FIFO_EN_LEN)-1)<<CAM_REG_INT_FIFO_EN_POS)
#define CAM_REG_INT_FIFO_EN_UMSK                                (~(((1U<<CAM_REG_INT_FIFO_EN_LEN)-1)<<CAM_REG_INT_FIFO_EN_POS))
#define CAM_REG_INT_HCNT_EN                                     CAM_REG_INT_HCNT_EN
#define CAM_REG_INT_HCNT_EN_POS                                 (5U)
#define CAM_REG_INT_HCNT_EN_LEN                                 (1U)
#define CAM_REG_INT_HCNT_EN_MSK                                 (((1U<<CAM_REG_INT_HCNT_EN_LEN)-1)<<CAM_REG_INT_HCNT_EN_POS)
#define CAM_REG_INT_HCNT_EN_UMSK                                (~(((1U<<CAM_REG_INT_HCNT_EN_LEN)-1)<<CAM_REG_INT_HCNT_EN_POS))
#define CAM_REG_INT_VCNT_EN                                     CAM_REG_INT_VCNT_EN
#define CAM_REG_INT_VCNT_EN_POS                                 (6U)
#define CAM_REG_INT_VCNT_EN_LEN                                 (1U)
#define CAM_REG_INT_VCNT_EN_MSK                                 (((1U<<CAM_REG_INT_VCNT_EN_LEN)-1)<<CAM_REG_INT_VCNT_EN_POS)
#define CAM_REG_INT_VCNT_EN_UMSK                                (~(((1U<<CAM_REG_INT_VCNT_EN_LEN)-1)<<CAM_REG_INT_VCNT_EN_POS))
#define CAM_REG_FRAME_CNT_TRGR_INT                              CAM_REG_FRAME_CNT_TRGR_INT
#define CAM_REG_FRAME_CNT_TRGR_INT_POS                          (28U)
#define CAM_REG_FRAME_CNT_TRGR_INT_LEN                          (4U)
#define CAM_REG_FRAME_CNT_TRGR_INT_MSK                          (((1U<<CAM_REG_FRAME_CNT_TRGR_INT_LEN)-1)<<CAM_REG_FRAME_CNT_TRGR_INT_POS)
#define CAM_REG_FRAME_CNT_TRGR_INT_UMSK                         (~(((1U<<CAM_REG_FRAME_CNT_TRGR_INT_LEN)-1)<<CAM_REG_FRAME_CNT_TRGR_INT_POS))

/* 0x30 : hsync_control */
#define CAM_HSYNC_CONTROL_OFFSET                                (0x30)
#define CAM_REG_HSYNC_ACT_END                                   CAM_REG_HSYNC_ACT_END
#define CAM_REG_HSYNC_ACT_END_POS                               (0U)
#define CAM_REG_HSYNC_ACT_END_LEN                               (16U)
#define CAM_REG_HSYNC_ACT_END_MSK                               (((1U<<CAM_REG_HSYNC_ACT_END_LEN)-1)<<CAM_REG_HSYNC_ACT_END_POS)
#define CAM_REG_HSYNC_ACT_END_UMSK                              (~(((1U<<CAM_REG_HSYNC_ACT_END_LEN)-1)<<CAM_REG_HSYNC_ACT_END_POS))
#define CAM_REG_HSYNC_ACT_START                                 CAM_REG_HSYNC_ACT_START
#define CAM_REG_HSYNC_ACT_START_POS                             (16U)
#define CAM_REG_HSYNC_ACT_START_LEN                             (16U)
#define CAM_REG_HSYNC_ACT_START_MSK                             (((1U<<CAM_REG_HSYNC_ACT_START_LEN)-1)<<CAM_REG_HSYNC_ACT_START_POS)
#define CAM_REG_HSYNC_ACT_START_UMSK                            (~(((1U<<CAM_REG_HSYNC_ACT_START_LEN)-1)<<CAM_REG_HSYNC_ACT_START_POS))

/* 0x34 : vsync_control */
#define CAM_VSYNC_CONTROL_OFFSET                                (0x34)
#define CAM_REG_VSYNC_ACT_END                                   CAM_REG_VSYNC_ACT_END
#define CAM_REG_VSYNC_ACT_END_POS                               (0U)
#define CAM_REG_VSYNC_ACT_END_LEN                               (16U)
#define CAM_REG_VSYNC_ACT_END_MSK                               (((1U<<CAM_REG_VSYNC_ACT_END_LEN)-1)<<CAM_REG_VSYNC_ACT_END_POS)
#define CAM_REG_VSYNC_ACT_END_UMSK                              (~(((1U<<CAM_REG_VSYNC_ACT_END_LEN)-1)<<CAM_REG_VSYNC_ACT_END_POS))
#define CAM_REG_VSYNC_ACT_START                                 CAM_REG_VSYNC_ACT_START
#define CAM_REG_VSYNC_ACT_START_POS                             (16U)
#define CAM_REG_VSYNC_ACT_START_LEN                             (16U)
#define CAM_REG_VSYNC_ACT_START_MSK                             (((1U<<CAM_REG_VSYNC_ACT_START_LEN)-1)<<CAM_REG_VSYNC_ACT_START_POS)
#define CAM_REG_VSYNC_ACT_START_UMSK                            (~(((1U<<CAM_REG_VSYNC_ACT_START_LEN)-1)<<CAM_REG_VSYNC_ACT_START_POS))

/* 0x38 : frame_size_control */
#define CAM_FRAME_SIZE_CONTROL_OFFSET                           (0x38)
#define CAM_REG_TOTAL_HCNT                                      CAM_REG_TOTAL_HCNT
#define CAM_REG_TOTAL_HCNT_POS                                  (0U)
#define CAM_REG_TOTAL_HCNT_LEN                                  (16U)
#define CAM_REG_TOTAL_HCNT_MSK                                  (((1U<<CAM_REG_TOTAL_HCNT_LEN)-1)<<CAM_REG_TOTAL_HCNT_POS)
#define CAM_REG_TOTAL_HCNT_UMSK                                 (~(((1U<<CAM_REG_TOTAL_HCNT_LEN)-1)<<CAM_REG_TOTAL_HCNT_POS))
#define CAM_REG_TOTAL_VCNT                                      CAM_REG_TOTAL_VCNT
#define CAM_REG_TOTAL_VCNT_POS                                  (16U)
#define CAM_REG_TOTAL_VCNT_LEN                                  (16U)
#define CAM_REG_TOTAL_VCNT_MSK                                  (((1U<<CAM_REG_TOTAL_VCNT_LEN)-1)<<CAM_REG_TOTAL_VCNT_POS)
#define CAM_REG_TOTAL_VCNT_UMSK                                 (~(((1U<<CAM_REG_TOTAL_VCNT_LEN)-1)<<CAM_REG_TOTAL_VCNT_POS))

/* 0x40 : frame_start_addr0_0 */
#define CAM_FRAME_START_ADDR0_0_OFFSET                          (0x40)
#define CAM_FRAME_START_ADDR_0_0                                CAM_FRAME_START_ADDR_0_0
#define CAM_FRAME_START_ADDR_0_0_POS                            (0U)
#define CAM_FRAME_START_ADDR_0_0_LEN                            (32U)
#define CAM_FRAME_START_ADDR_0_0_MSK                            (((1U<<CAM_FRAME_START_ADDR_0_0_LEN)-1)<<CAM_FRAME_START_ADDR_0_0_POS)
#define CAM_FRAME_START_ADDR_0_0_UMSK                           (~(((1U<<CAM_FRAME_START_ADDR_0_0_LEN)-1)<<CAM_FRAME_START_ADDR_0_0_POS))

/* 0x44 : frame_byte_cnt0_0 */
#define CAM_FRAME_BYTE_CNT0_0_OFFSET                            (0x44)
#define CAM_FRAME_BYTE_CNT_0_0                                  CAM_FRAME_BYTE_CNT_0_0
#define CAM_FRAME_BYTE_CNT_0_0_POS                              (0U)
#define CAM_FRAME_BYTE_CNT_0_0_LEN                              (32U)
#define CAM_FRAME_BYTE_CNT_0_0_MSK                              (((1U<<CAM_FRAME_BYTE_CNT_0_0_LEN)-1)<<CAM_FRAME_BYTE_CNT_0_0_POS)
#define CAM_FRAME_BYTE_CNT_0_0_UMSK                             (~(((1U<<CAM_FRAME_BYTE_CNT_0_0_LEN)-1)<<CAM_FRAME_BYTE_CNT_0_0_POS))

/* 0x48 : frame_start_addr0_1 */
#define CAM_FRAME_START_ADDR0_1_OFFSET                          (0x48)
#define CAM_FRAME_START_ADDR_0_1                                CAM_FRAME_START_ADDR_0_1
#define CAM_FRAME_START_ADDR_0_1_POS                            (0U)
#define CAM_FRAME_START_ADDR_0_1_LEN                            (32U)
#define CAM_FRAME_START_ADDR_0_1_MSK                            (((1U<<CAM_FRAME_START_ADDR_0_1_LEN)-1)<<CAM_FRAME_START_ADDR_0_1_POS)
#define CAM_FRAME_START_ADDR_0_1_UMSK                           (~(((1U<<CAM_FRAME_START_ADDR_0_1_LEN)-1)<<CAM_FRAME_START_ADDR_0_1_POS))

/* 0x4C : frame_byte_cnt0_1 */
#define CAM_FRAME_BYTE_CNT0_1_OFFSET                            (0x4C)
#define CAM_FRAME_BYTE_CNT_0_1                                  CAM_FRAME_BYTE_CNT_0_1
#define CAM_FRAME_BYTE_CNT_0_1_POS                              (0U)
#define CAM_FRAME_BYTE_CNT_0_1_LEN                              (32U)
#define CAM_FRAME_BYTE_CNT_0_1_MSK                              (((1U<<CAM_FRAME_BYTE_CNT_0_1_LEN)-1)<<CAM_FRAME_BYTE_CNT_0_1_POS)
#define CAM_FRAME_BYTE_CNT_0_1_UMSK                             (~(((1U<<CAM_FRAME_BYTE_CNT_0_1_LEN)-1)<<CAM_FRAME_BYTE_CNT_0_1_POS))

/* 0x50 : frame_start_addr0_2 */
#define CAM_FRAME_START_ADDR0_2_OFFSET                          (0x50)
#define CAM_FRAME_START_ADDR_0_2                                CAM_FRAME_START_ADDR_0_2
#define CAM_FRAME_START_ADDR_0_2_POS                            (0U)
#define CAM_FRAME_START_ADDR_0_2_LEN                            (32U)
#define CAM_FRAME_START_ADDR_0_2_MSK                            (((1U<<CAM_FRAME_START_ADDR_0_2_LEN)-1)<<CAM_FRAME_START_ADDR_0_2_POS)
#define CAM_FRAME_START_ADDR_0_2_UMSK                           (~(((1U<<CAM_FRAME_START_ADDR_0_2_LEN)-1)<<CAM_FRAME_START_ADDR_0_2_POS))

/* 0x54 : frame_byte_cnt0_2 */
#define CAM_FRAME_BYTE_CNT0_2_OFFSET                            (0x54)
#define CAM_FRAME_BYTE_CNT_0_2                                  CAM_FRAME_BYTE_CNT_0_2
#define CAM_FRAME_BYTE_CNT_0_2_POS                              (0U)
#define CAM_FRAME_BYTE_CNT_0_2_LEN                              (32U)
#define CAM_FRAME_BYTE_CNT_0_2_MSK                              (((1U<<CAM_FRAME_BYTE_CNT_0_2_LEN)-1)<<CAM_FRAME_BYTE_CNT_0_2_POS)
#define CAM_FRAME_BYTE_CNT_0_2_UMSK                             (~(((1U<<CAM_FRAME_BYTE_CNT_0_2_LEN)-1)<<CAM_FRAME_BYTE_CNT_0_2_POS))

/* 0x58 : frame_start_addr0_3 */
#define CAM_FRAME_START_ADDR0_3_OFFSET                          (0x58)
#define CAM_FRAME_START_ADDR_0_3                                CAM_FRAME_START_ADDR_0_3
#define CAM_FRAME_START_ADDR_0_3_POS                            (0U)
#define CAM_FRAME_START_ADDR_0_3_LEN                            (32U)
#define CAM_FRAME_START_ADDR_0_3_MSK                            (((1U<<CAM_FRAME_START_ADDR_0_3_LEN)-1)<<CAM_FRAME_START_ADDR_0_3_POS)
#define CAM_FRAME_START_ADDR_0_3_UMSK                           (~(((1U<<CAM_FRAME_START_ADDR_0_3_LEN)-1)<<CAM_FRAME_START_ADDR_0_3_POS))

/* 0x5C : frame_byte_cnt0_3 */
#define CAM_FRAME_BYTE_CNT0_3_OFFSET                            (0x5C)
#define CAM_FRAME_BYTE_CNT_0_3                                  CAM_FRAME_BYTE_CNT_0_3
#define CAM_FRAME_BYTE_CNT_0_3_POS                              (0U)
#define CAM_FRAME_BYTE_CNT_0_3_LEN                              (32U)
#define CAM_FRAME_BYTE_CNT_0_3_MSK                              (((1U<<CAM_FRAME_BYTE_CNT_0_3_LEN)-1)<<CAM_FRAME_BYTE_CNT_0_3_POS)
#define CAM_FRAME_BYTE_CNT_0_3_UMSK                             (~(((1U<<CAM_FRAME_BYTE_CNT_0_3_LEN)-1)<<CAM_FRAME_BYTE_CNT_0_3_POS))

/* 0x60 : frame_start_addr0_4 */
#define CAM_FRAME_START_ADDR0_4_OFFSET                          (0x60)
#define CAM_FRAME_START_ADDR_0_4                                CAM_FRAME_START_ADDR_0_4
#define CAM_FRAME_START_ADDR_0_4_POS                            (0U)
#define CAM_FRAME_START_ADDR_0_4_LEN                            (32U)
#define CAM_FRAME_START_ADDR_0_4_MSK                            (((1U<<CAM_FRAME_START_ADDR_0_4_LEN)-1)<<CAM_FRAME_START_ADDR_0_4_POS)
#define CAM_FRAME_START_ADDR_0_4_UMSK                           (~(((1U<<CAM_FRAME_START_ADDR_0_4_LEN)-1)<<CAM_FRAME_START_ADDR_0_4_POS))

/* 0x64 : frame_byte_cnt0_4 */
#define CAM_FRAME_BYTE_CNT0_4_OFFSET                            (0x64)
#define CAM_FRAME_BYTE_CNT_0_4                                  CAM_FRAME_BYTE_CNT_0_4
#define CAM_FRAME_BYTE_CNT_0_4_POS                              (0U)
#define CAM_FRAME_BYTE_CNT_0_4_LEN                              (32U)
#define CAM_FRAME_BYTE_CNT_0_4_MSK                              (((1U<<CAM_FRAME_BYTE_CNT_0_4_LEN)-1)<<CAM_FRAME_BYTE_CNT_0_4_POS)
#define CAM_FRAME_BYTE_CNT_0_4_UMSK                             (~(((1U<<CAM_FRAME_BYTE_CNT_0_4_LEN)-1)<<CAM_FRAME_BYTE_CNT_0_4_POS))

/* 0x68 : frame_start_addr0_5 */
#define CAM_FRAME_START_ADDR0_5_OFFSET                          (0x68)
#define CAM_FRAME_START_ADDR_0_5                                CAM_FRAME_START_ADDR_0_5
#define CAM_FRAME_START_ADDR_0_5_POS                            (0U)
#define CAM_FRAME_START_ADDR_0_5_LEN                            (32U)
#define CAM_FRAME_START_ADDR_0_5_MSK                            (((1U<<CAM_FRAME_START_ADDR_0_5_LEN)-1)<<CAM_FRAME_START_ADDR_0_5_POS)
#define CAM_FRAME_START_ADDR_0_5_UMSK                           (~(((1U<<CAM_FRAME_START_ADDR_0_5_LEN)-1)<<CAM_FRAME_START_ADDR_0_5_POS))

/* 0x6C : frame_byte_cnt0_5 */
#define CAM_FRAME_BYTE_CNT0_5_OFFSET                            (0x6C)
#define CAM_FRAME_BYTE_CNT_0_5                                  CAM_FRAME_BYTE_CNT_0_5
#define CAM_FRAME_BYTE_CNT_0_5_POS                              (0U)
#define CAM_FRAME_BYTE_CNT_0_5_LEN                              (32U)
#define CAM_FRAME_BYTE_CNT_0_5_MSK                              (((1U<<CAM_FRAME_BYTE_CNT_0_5_LEN)-1)<<CAM_FRAME_BYTE_CNT_0_5_POS)
#define CAM_FRAME_BYTE_CNT_0_5_UMSK                             (~(((1U<<CAM_FRAME_BYTE_CNT_0_5_LEN)-1)<<CAM_FRAME_BYTE_CNT_0_5_POS))

/* 0x70 : frame_start_addr0_6 */
#define CAM_FRAME_START_ADDR0_6_OFFSET                          (0x70)
#define CAM_FRAME_START_ADDR_0_6                                CAM_FRAME_START_ADDR_0_6
#define CAM_FRAME_START_ADDR_0_6_POS                            (0U)
#define CAM_FRAME_START_ADDR_0_6_LEN                            (32U)
#define CAM_FRAME_START_ADDR_0_6_MSK                            (((1U<<CAM_FRAME_START_ADDR_0_6_LEN)-1)<<CAM_FRAME_START_ADDR_0_6_POS)
#define CAM_FRAME_START_ADDR_0_6_UMSK                           (~(((1U<<CAM_FRAME_START_ADDR_0_6_LEN)-1)<<CAM_FRAME_START_ADDR_0_6_POS))

/* 0x74 : frame_byte_cnt0_6 */
#define CAM_FRAME_BYTE_CNT0_6_OFFSET                            (0x74)
#define CAM_FRAME_BYTE_CNT_0_6                                  CAM_FRAME_BYTE_CNT_0_6
#define CAM_FRAME_BYTE_CNT_0_6_POS                              (0U)
#define CAM_FRAME_BYTE_CNT_0_6_LEN                              (32U)
#define CAM_FRAME_BYTE_CNT_0_6_MSK                              (((1U<<CAM_FRAME_BYTE_CNT_0_6_LEN)-1)<<CAM_FRAME_BYTE_CNT_0_6_POS)
#define CAM_FRAME_BYTE_CNT_0_6_UMSK                             (~(((1U<<CAM_FRAME_BYTE_CNT_0_6_LEN)-1)<<CAM_FRAME_BYTE_CNT_0_6_POS))

/* 0x78 : frame_start_addr0_7 */
#define CAM_FRAME_START_ADDR0_7_OFFSET                          (0x78)
#define CAM_FRAME_START_ADDR_0_7                                CAM_FRAME_START_ADDR_0_7
#define CAM_FRAME_START_ADDR_0_7_POS                            (0U)
#define CAM_FRAME_START_ADDR_0_7_LEN                            (32U)
#define CAM_FRAME_START_ADDR_0_7_MSK                            (((1U<<CAM_FRAME_START_ADDR_0_7_LEN)-1)<<CAM_FRAME_START_ADDR_0_7_POS)
#define CAM_FRAME_START_ADDR_0_7_UMSK                           (~(((1U<<CAM_FRAME_START_ADDR_0_7_LEN)-1)<<CAM_FRAME_START_ADDR_0_7_POS))

/* 0x7C : frame_byte_cnt0_7 */
#define CAM_FRAME_BYTE_CNT0_7_OFFSET                            (0x7C)
#define CAM_FRAME_BYTE_CNT_0_7                                  CAM_FRAME_BYTE_CNT_0_7
#define CAM_FRAME_BYTE_CNT_0_7_POS                              (0U)
#define CAM_FRAME_BYTE_CNT_0_7_LEN                              (32U)
#define CAM_FRAME_BYTE_CNT_0_7_MSK                              (((1U<<CAM_FRAME_BYTE_CNT_0_7_LEN)-1)<<CAM_FRAME_BYTE_CNT_0_7_POS)
#define CAM_FRAME_BYTE_CNT_0_7_UMSK                             (~(((1U<<CAM_FRAME_BYTE_CNT_0_7_LEN)-1)<<CAM_FRAME_BYTE_CNT_0_7_POS))

/* 0x80 : frame_start_addr1_0 */
#define CAM_FRAME_START_ADDR1_0_OFFSET                          (0x80)
#define CAM_FRAME_START_ADDR_1_0                                CAM_FRAME_START_ADDR_1_0
#define CAM_FRAME_START_ADDR_1_0_POS                            (0U)
#define CAM_FRAME_START_ADDR_1_0_LEN                            (32U)
#define CAM_FRAME_START_ADDR_1_0_MSK                            (((1U<<CAM_FRAME_START_ADDR_1_0_LEN)-1)<<CAM_FRAME_START_ADDR_1_0_POS)
#define CAM_FRAME_START_ADDR_1_0_UMSK                           (~(((1U<<CAM_FRAME_START_ADDR_1_0_LEN)-1)<<CAM_FRAME_START_ADDR_1_0_POS))

/* 0x84 : frame_byte_cnt1_0 */
#define CAM_FRAME_BYTE_CNT1_0_OFFSET                            (0x84)
#define CAM_FRAME_BYTE_CNT_1_0                                  CAM_FRAME_BYTE_CNT_1_0
#define CAM_FRAME_BYTE_CNT_1_0_POS                              (0U)
#define CAM_FRAME_BYTE_CNT_1_0_LEN                              (32U)
#define CAM_FRAME_BYTE_CNT_1_0_MSK                              (((1U<<CAM_FRAME_BYTE_CNT_1_0_LEN)-1)<<CAM_FRAME_BYTE_CNT_1_0_POS)
#define CAM_FRAME_BYTE_CNT_1_0_UMSK                             (~(((1U<<CAM_FRAME_BYTE_CNT_1_0_LEN)-1)<<CAM_FRAME_BYTE_CNT_1_0_POS))

/* 0x88 : frame_start_addr1_1 */
#define CAM_FRAME_START_ADDR1_1_OFFSET                          (0x88)
#define CAM_FRAME_START_ADDR_1_1                                CAM_FRAME_START_ADDR_1_1
#define CAM_FRAME_START_ADDR_1_1_POS                            (0U)
#define CAM_FRAME_START_ADDR_1_1_LEN                            (32U)
#define CAM_FRAME_START_ADDR_1_1_MSK                            (((1U<<CAM_FRAME_START_ADDR_1_1_LEN)-1)<<CAM_FRAME_START_ADDR_1_1_POS)
#define CAM_FRAME_START_ADDR_1_1_UMSK                           (~(((1U<<CAM_FRAME_START_ADDR_1_1_LEN)-1)<<CAM_FRAME_START_ADDR_1_1_POS))

/* 0x8C : frame_byte_cnt1_1 */
#define CAM_FRAME_BYTE_CNT1_1_OFFSET                            (0x8C)
#define CAM_FRAME_BYTE_CNT_1_1                                  CAM_FRAME_BYTE_CNT_1_1
#define CAM_FRAME_BYTE_CNT_1_1_POS                              (0U)
#define CAM_FRAME_BYTE_CNT_1_1_LEN                              (32U)
#define CAM_FRAME_BYTE_CNT_1_1_MSK                              (((1U<<CAM_FRAME_BYTE_CNT_1_1_LEN)-1)<<CAM_FRAME_BYTE_CNT_1_1_POS)
#define CAM_FRAME_BYTE_CNT_1_1_UMSK                             (~(((1U<<CAM_FRAME_BYTE_CNT_1_1_LEN)-1)<<CAM_FRAME_BYTE_CNT_1_1_POS))

/* 0x90 : frame_start_addr1_2 */
#define CAM_FRAME_START_ADDR1_2_OFFSET                          (0x90)
#define CAM_FRAME_START_ADDR_1_2                                CAM_FRAME_START_ADDR_1_2
#define CAM_FRAME_START_ADDR_1_2_POS                            (0U)
#define CAM_FRAME_START_ADDR_1_2_LEN                            (32U)
#define CAM_FRAME_START_ADDR_1_2_MSK                            (((1U<<CAM_FRAME_START_ADDR_1_2_LEN)-1)<<CAM_FRAME_START_ADDR_1_2_POS)
#define CAM_FRAME_START_ADDR_1_2_UMSK                           (~(((1U<<CAM_FRAME_START_ADDR_1_2_LEN)-1)<<CAM_FRAME_START_ADDR_1_2_POS))

/* 0x94 : frame_byte_cnt1_2 */
#define CAM_FRAME_BYTE_CNT1_2_OFFSET                            (0x94)
#define CAM_FRAME_BYTE_CNT_1_2                                  CAM_FRAME_BYTE_CNT_1_2
#define CAM_FRAME_BYTE_CNT_1_2_POS                              (0U)
#define CAM_FRAME_BYTE_CNT_1_2_LEN                              (32U)
#define CAM_FRAME_BYTE_CNT_1_2_MSK                              (((1U<<CAM_FRAME_BYTE_CNT_1_2_LEN)-1)<<CAM_FRAME_BYTE_CNT_1_2_POS)
#define CAM_FRAME_BYTE_CNT_1_2_UMSK                             (~(((1U<<CAM_FRAME_BYTE_CNT_1_2_LEN)-1)<<CAM_FRAME_BYTE_CNT_1_2_POS))

/* 0x98 : frame_start_addr1_3 */
#define CAM_FRAME_START_ADDR1_3_OFFSET                          (0x98)
#define CAM_FRAME_START_ADDR_1_3                                CAM_FRAME_START_ADDR_1_3
#define CAM_FRAME_START_ADDR_1_3_POS                            (0U)
#define CAM_FRAME_START_ADDR_1_3_LEN                            (32U)
#define CAM_FRAME_START_ADDR_1_3_MSK                            (((1U<<CAM_FRAME_START_ADDR_1_3_LEN)-1)<<CAM_FRAME_START_ADDR_1_3_POS)
#define CAM_FRAME_START_ADDR_1_3_UMSK                           (~(((1U<<CAM_FRAME_START_ADDR_1_3_LEN)-1)<<CAM_FRAME_START_ADDR_1_3_POS))

/* 0x9C : frame_byte_cnt1_3 */
#define CAM_FRAME_BYTE_CNT1_3_OFFSET                            (0x9C)
#define CAM_FRAME_BYTE_CNT_1_3                                  CAM_FRAME_BYTE_CNT_1_3
#define CAM_FRAME_BYTE_CNT_1_3_POS                              (0U)
#define CAM_FRAME_BYTE_CNT_1_3_LEN                              (32U)
#define CAM_FRAME_BYTE_CNT_1_3_MSK                              (((1U<<CAM_FRAME_BYTE_CNT_1_3_LEN)-1)<<CAM_FRAME_BYTE_CNT_1_3_POS)
#define CAM_FRAME_BYTE_CNT_1_3_UMSK                             (~(((1U<<CAM_FRAME_BYTE_CNT_1_3_LEN)-1)<<CAM_FRAME_BYTE_CNT_1_3_POS))

/* 0xA0 : frame_start_addr1_4 */
#define CAM_FRAME_START_ADDR1_4_OFFSET                          (0xA0)
#define CAM_FRAME_START_ADDR_1_4                                CAM_FRAME_START_ADDR_1_4
#define CAM_FRAME_START_ADDR_1_4_POS                            (0U)
#define CAM_FRAME_START_ADDR_1_4_LEN                            (32U)
#define CAM_FRAME_START_ADDR_1_4_MSK                            (((1U<<CAM_FRAME_START_ADDR_1_4_LEN)-1)<<CAM_FRAME_START_ADDR_1_4_POS)
#define CAM_FRAME_START_ADDR_1_4_UMSK                           (~(((1U<<CAM_FRAME_START_ADDR_1_4_LEN)-1)<<CAM_FRAME_START_ADDR_1_4_POS))

/* 0xA4 : frame_byte_cnt1_4 */
#define CAM_FRAME_BYTE_CNT1_4_OFFSET                            (0xA4)
#define CAM_FRAME_BYTE_CNT_1_4                                  CAM_FRAME_BYTE_CNT_1_4
#define CAM_FRAME_BYTE_CNT_1_4_POS                              (0U)
#define CAM_FRAME_BYTE_CNT_1_4_LEN                              (32U)
#define CAM_FRAME_BYTE_CNT_1_4_MSK                              (((1U<<CAM_FRAME_BYTE_CNT_1_4_LEN)-1)<<CAM_FRAME_BYTE_CNT_1_4_POS)
#define CAM_FRAME_BYTE_CNT_1_4_UMSK                             (~(((1U<<CAM_FRAME_BYTE_CNT_1_4_LEN)-1)<<CAM_FRAME_BYTE_CNT_1_4_POS))

/* 0xA8 : frame_start_addr1_5 */
#define CAM_FRAME_START_ADDR1_5_OFFSET                          (0xA8)
#define CAM_FRAME_START_ADDR_1_5                                CAM_FRAME_START_ADDR_1_5
#define CAM_FRAME_START_ADDR_1_5_POS                            (0U)
#define CAM_FRAME_START_ADDR_1_5_LEN                            (32U)
#define CAM_FRAME_START_ADDR_1_5_MSK                            (((1U<<CAM_FRAME_START_ADDR_1_5_LEN)-1)<<CAM_FRAME_START_ADDR_1_5_POS)
#define CAM_FRAME_START_ADDR_1_5_UMSK                           (~(((1U<<CAM_FRAME_START_ADDR_1_5_LEN)-1)<<CAM_FRAME_START_ADDR_1_5_POS))

/* 0xAC : frame_byte_cnt1_5 */
#define CAM_FRAME_BYTE_CNT1_5_OFFSET                            (0xAC)
#define CAM_FRAME_BYTE_CNT_1_5                                  CAM_FRAME_BYTE_CNT_1_5
#define CAM_FRAME_BYTE_CNT_1_5_POS                              (0U)
#define CAM_FRAME_BYTE_CNT_1_5_LEN                              (32U)
#define CAM_FRAME_BYTE_CNT_1_5_MSK                              (((1U<<CAM_FRAME_BYTE_CNT_1_5_LEN)-1)<<CAM_FRAME_BYTE_CNT_1_5_POS)
#define CAM_FRAME_BYTE_CNT_1_5_UMSK                             (~(((1U<<CAM_FRAME_BYTE_CNT_1_5_LEN)-1)<<CAM_FRAME_BYTE_CNT_1_5_POS))

/* 0xB0 : frame_start_addr1_6 */
#define CAM_FRAME_START_ADDR1_6_OFFSET                          (0xB0)
#define CAM_FRAME_START_ADDR_1_6                                CAM_FRAME_START_ADDR_1_6
#define CAM_FRAME_START_ADDR_1_6_POS                            (0U)
#define CAM_FRAME_START_ADDR_1_6_LEN                            (32U)
#define CAM_FRAME_START_ADDR_1_6_MSK                            (((1U<<CAM_FRAME_START_ADDR_1_6_LEN)-1)<<CAM_FRAME_START_ADDR_1_6_POS)
#define CAM_FRAME_START_ADDR_1_6_UMSK                           (~(((1U<<CAM_FRAME_START_ADDR_1_6_LEN)-1)<<CAM_FRAME_START_ADDR_1_6_POS))

/* 0xB4 : frame_byte_cnt1_6 */
#define CAM_FRAME_BYTE_CNT1_6_OFFSET                            (0xB4)
#define CAM_FRAME_BYTE_CNT_1_6                                  CAM_FRAME_BYTE_CNT_1_6
#define CAM_FRAME_BYTE_CNT_1_6_POS                              (0U)
#define CAM_FRAME_BYTE_CNT_1_6_LEN                              (32U)
#define CAM_FRAME_BYTE_CNT_1_6_MSK                              (((1U<<CAM_FRAME_BYTE_CNT_1_6_LEN)-1)<<CAM_FRAME_BYTE_CNT_1_6_POS)
#define CAM_FRAME_BYTE_CNT_1_6_UMSK                             (~(((1U<<CAM_FRAME_BYTE_CNT_1_6_LEN)-1)<<CAM_FRAME_BYTE_CNT_1_6_POS))

/* 0xB8 : frame_start_addr1_7 */
#define CAM_FRAME_START_ADDR1_7_OFFSET                          (0xB8)
#define CAM_FRAME_START_ADDR_1_7                                CAM_FRAME_START_ADDR_1_7
#define CAM_FRAME_START_ADDR_1_7_POS                            (0U)
#define CAM_FRAME_START_ADDR_1_7_LEN                            (32U)
#define CAM_FRAME_START_ADDR_1_7_MSK                            (((1U<<CAM_FRAME_START_ADDR_1_7_LEN)-1)<<CAM_FRAME_START_ADDR_1_7_POS)
#define CAM_FRAME_START_ADDR_1_7_UMSK                           (~(((1U<<CAM_FRAME_START_ADDR_1_7_LEN)-1)<<CAM_FRAME_START_ADDR_1_7_POS))

/* 0xBC : frame_byte_cnt1_7 */
#define CAM_FRAME_BYTE_CNT1_7_OFFSET                            (0xBC)
#define CAM_FRAME_BYTE_CNT_1_7                                  CAM_FRAME_BYTE_CNT_1_7
#define CAM_FRAME_BYTE_CNT_1_7_POS                              (0U)
#define CAM_FRAME_BYTE_CNT_1_7_LEN                              (32U)
#define CAM_FRAME_BYTE_CNT_1_7_MSK                              (((1U<<CAM_FRAME_BYTE_CNT_1_7_LEN)-1)<<CAM_FRAME_BYTE_CNT_1_7_POS)
#define CAM_FRAME_BYTE_CNT_1_7_UMSK                             (~(((1U<<CAM_FRAME_BYTE_CNT_1_7_LEN)-1)<<CAM_FRAME_BYTE_CNT_1_7_POS))

/* 0xFF0 : dvp_debug */
#define CAM_DVP_DEBUG_OFFSET                                    (0xFF0)
#define CAM_REG_DVP_DBG_EN                                      CAM_REG_DVP_DBG_EN
#define CAM_REG_DVP_DBG_EN_POS                                  (0U)
#define CAM_REG_DVP_DBG_EN_LEN                                  (1U)
#define CAM_REG_DVP_DBG_EN_MSK                                  (((1U<<CAM_REG_DVP_DBG_EN_LEN)-1)<<CAM_REG_DVP_DBG_EN_POS)
#define CAM_REG_DVP_DBG_EN_UMSK                                 (~(((1U<<CAM_REG_DVP_DBG_EN_LEN)-1)<<CAM_REG_DVP_DBG_EN_POS))
#define CAM_REG_DVP_DBG_SEL                                     CAM_REG_DVP_DBG_SEL
#define CAM_REG_DVP_DBG_SEL_POS                                 (1U)
#define CAM_REG_DVP_DBG_SEL_LEN                                 (3U)
#define CAM_REG_DVP_DBG_SEL_MSK                                 (((1U<<CAM_REG_DVP_DBG_SEL_LEN)-1)<<CAM_REG_DVP_DBG_SEL_POS)
#define CAM_REG_DVP_DBG_SEL_UMSK                                (~(((1U<<CAM_REG_DVP_DBG_SEL_LEN)-1)<<CAM_REG_DVP_DBG_SEL_POS))

/* 0xFFC : dvp_dummy_reg */
#define CAM_DVP_DUMMY_REG_OFFSET                                (0xFFC)


struct  cam_reg {
    /* 0x0 : dvp2axi_configue */
    union {
        struct {
            uint32_t reg_dvp_enable                 :  1; /* [    0],        r/w,        0x0 */
            uint32_t reg_sw_mode                    :  1; /* [    1],        r/w,        0x0 */
            uint32_t reg_fram_vld_pol               :  1; /* [    2],        r/w,        0x1 */
            uint32_t reg_line_vld_pol               :  1; /* [    3],        r/w,        0x1 */
            uint32_t reg_hburst                     :  2; /* [ 5: 4],        r/w,        0x3 */
            uint32_t reserved_6_7                   :  2; /* [ 7: 6],       rsvd,        0x0 */
            uint32_t reg_dvp_mode                   :  3; /* [10: 8],        r/w,        0x0 */
            uint32_t reg_hw_mode_fwrap              :  1; /* [   11],        r/w,        0x1 */
            uint32_t reg_drop_en                    :  1; /* [   12],        r/w,        0x0 */
            uint32_t reg_drop_even                  :  1; /* [   13],        r/w,        0x0 */
            uint32_t reg_subsample_en               :  1; /* [   14],        r/w,        0x0 */
            uint32_t reg_subsample_even             :  1; /* [   15],        r/w,        0x0 */
            uint32_t reg_interlv_mode               :  1; /* [   16],        r/w,        0x0 */
            uint32_t reserved_17_19                 :  3; /* [19:17],       rsvd,        0x0 */
            uint32_t reg_dvp_pix_clk_cg             :  1; /* [   20],        r/w,        0x0 */
            uint32_t reserved_21_23                 :  3; /* [23:21],       rsvd,        0x0 */
            uint32_t reg_dvp_wait_cycle             :  8; /* [31:24],        r/w,       0x40 */
        }BF;
        uint32_t WORD;
    } dvp2axi_configue;

    /* 0x4 : dvp2ahb_addr_start_0 */
    union {
        struct {
            uint32_t reg_addr_start_0               : 32; /* [31: 0],        r/w, 0x80000000L */
        }BF;
        uint32_t WORD;
    } dvp2ahb_addr_start_0;

    /* 0x8 : dvp2ahb_mem_bcnt_0 */
    union {
        struct {
            uint32_t reg_mem_burst_cnt_0            : 32; /* [31: 0],        r/w,     0xc000 */
        }BF;
        uint32_t WORD;
    } dvp2ahb_mem_bcnt_0;

    /* 0xC : dvp2ahb_frame_bcnt_0 */
    union {
        struct {
            uint32_t reg_frame_burst_cnt_0          : 32; /* [31: 0],        r/w,     0xc000 */
        }BF;
        uint32_t WORD;
    } dvp2ahb_frame_bcnt_0;

    /* 0x10 : dvp2ahb_addr_start_1 */
    union {
        struct {
            uint32_t reg_addr_start_1               : 32; /* [31: 0],        r/w, 0x80000000L */
        }BF;
        uint32_t WORD;
    } dvp2ahb_addr_start_1;

    /* 0x14 : dvp2ahb_mem_bcnt_1 */
    union {
        struct {
            uint32_t reg_mem_burst_cnt_1            : 32; /* [31: 0],        r/w,     0xc000 */
        }BF;
        uint32_t WORD;
    } dvp2ahb_mem_bcnt_1;

    /* 0x18 : dvp2ahb_frame_bcnt_1 */
    union {
        struct {
            uint32_t reg_frame_burst_cnt_1          : 32; /* [31: 0],        r/w,     0xc000 */
        }BF;
        uint32_t WORD;
    } dvp2ahb_frame_bcnt_1;

    /* 0x1C : dvp_status_and_error */
    union {
        struct {
            uint32_t sts_normal_int_0               :  1; /* [    0],          r,        0x0 */
            uint32_t sts_normal_int_1               :  1; /* [    1],          r,        0x0 */
            uint32_t sts_mem_int_0                  :  1; /* [    2],          r,        0x0 */
            uint32_t sts_mem_int_1                  :  1; /* [    3],          r,        0x0 */
            uint32_t sts_frame_int_0                :  1; /* [    4],          r,        0x0 */
            uint32_t sts_frame_int_1                :  1; /* [    5],          r,        0x0 */
            uint32_t sts_fifo_int_0                 :  1; /* [    6],          r,        0x0 */
            uint32_t sts_fifo_int_1                 :  1; /* [    7],          r,        0x0 */
            uint32_t sts_hcnt_int                   :  1; /* [    8],          r,        0x0 */
            uint32_t sts_vcnt_int                   :  1; /* [    9],          r,        0x0 */
            uint32_t reserved_10_15                 :  6; /* [15:10],       rsvd,        0x0 */
            uint32_t ahb_idle_0                     :  1; /* [   16],          r,        0x1 */
            uint32_t ahb_idle_1                     :  1; /* [   17],          r,        0x1 */
            uint32_t reserved_18                    :  1; /* [   18],       rsvd,        0x0 */
            uint32_t st_dvp_idle                    :  1; /* [   19],          r,        0x1 */
            uint32_t frame_valid_cnt_0              :  4; /* [23:20],          r,        0x0 */
            uint32_t frame_valid_cnt_1              :  4; /* [27:24],          r,        0x0 */
            uint32_t st_bus_idle                    :  1; /* [   28],          r,        0x1 */
            uint32_t st_bus_func                    :  1; /* [   29],          r,        0x0 */
            uint32_t st_bus_wait                    :  1; /* [   30],          r,        0x0 */
            uint32_t st_bus_flsh                    :  1; /* [   31],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } dvp_status_and_error;

    /* 0x20 : dvp_frame_fifo_pop */
    union {
        struct {
            uint32_t rfifo_pop_0                    :  1; /* [    0],        w1p,        0x0 */
            uint32_t rfifo_pop_1                    :  1; /* [    1],        w1p,        0x0 */
            uint32_t reserved_2_3                   :  2; /* [ 3: 2],       rsvd,        0x0 */
            uint32_t reg_int_normal_clr_0           :  1; /* [    4],        w1p,        0x0 */
            uint32_t reg_int_mem_clr_0              :  1; /* [    5],        w1p,        0x0 */
            uint32_t reg_int_frame_clr_0            :  1; /* [    6],        w1p,        0x0 */
            uint32_t reg_int_fifo_clr_0             :  1; /* [    7],        w1p,        0x0 */
            uint32_t reg_int_hcnt_clr_0             :  1; /* [    8],        w1p,        0x0 */
            uint32_t reg_int_vcnt_clr_0             :  1; /* [    9],        w1p,        0x0 */
            uint32_t reserved_10_15                 :  6; /* [15:10],       rsvd,        0x0 */
            uint32_t reg_int_normal_clr_1           :  1; /* [   16],        w1p,        0x0 */
            uint32_t reg_int_mem_clr_1              :  1; /* [   17],        w1p,        0x0 */
            uint32_t reg_int_frame_clr_1            :  1; /* [   18],        w1p,        0x0 */
            uint32_t reg_int_fifo_clr_1             :  1; /* [   19],        w1p,        0x0 */
            uint32_t reserved_20_31                 : 12; /* [31:20],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } dvp_frame_fifo_pop;

    /* 0x24 : snsr_control */
    union {
        struct {
            uint32_t reg_cam_rst                    :  1; /* [    0],        r/w,        0x1 */
            uint32_t reg_cam_pwdn                   :  1; /* [    1],        r/w,        0x1 */
            uint32_t reserved_2_31                  : 30; /* [31: 2],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } snsr_control;

    /* 0x28 : int_control */
    union {
        struct {
            uint32_t reg_int_normal_0_en            :  1; /* [    0],        r/w,        0x0 */
            uint32_t reg_int_normal_1_en            :  1; /* [    1],        r/w,        0x0 */
            uint32_t reg_int_mem_en                 :  1; /* [    2],        r/w,        0x0 */
            uint32_t reg_int_frame_en               :  1; /* [    3],        r/w,        0x0 */
            uint32_t reg_int_fifo_en                :  1; /* [    4],        r/w,        0x1 */
            uint32_t reg_int_hcnt_en                :  1; /* [    5],        r/w,        0x0 */
            uint32_t reg_int_vcnt_en                :  1; /* [    6],        r/w,        0x0 */
            uint32_t reserved_7_27                  : 21; /* [27: 7],       rsvd,        0x0 */
            uint32_t reg_frame_cnt_trgr_int         :  4; /* [31:28],        r/w,        0x0 */
        }BF;
        uint32_t WORD;
    } int_control;

    /* 0x2c  reserved */
    uint8_t RESERVED0x2c[4];

    /* 0x30 : hsync_control */
    union {
        struct {
            uint32_t reg_hsync_act_end              : 16; /* [15: 0],        r/w,     0xffff */
            uint32_t reg_hsync_act_start            : 16; /* [31:16],        r/w,        0x0 */
        }BF;
        uint32_t WORD;
    } hsync_control;

    /* 0x34 : vsync_control */
    union {
        struct {
            uint32_t reg_vsync_act_end              : 16; /* [15: 0],        r/w,     0xffff */
            uint32_t reg_vsync_act_start            : 16; /* [31:16],        r/w,        0x0 */
        }BF;
        uint32_t WORD;
    } vsync_control;

    /* 0x38 : frame_size_control */
    union {
        struct {
            uint32_t reg_total_hcnt                 : 16; /* [15: 0],        r/w,        0x0 */
            uint32_t reg_total_vcnt                 : 16; /* [31:16],        r/w,        0x0 */
        }BF;
        uint32_t WORD;
    } frame_size_control;

    /* 0x3c  reserved */
    uint8_t RESERVED0x3c[4];

    /* 0x40 : frame_start_addr0_0 */
    union {
        struct {
            uint32_t frame_start_addr_0_0           : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } frame_start_addr0_0;

    /* 0x44 : frame_byte_cnt0_0 */
    union {
        struct {
            uint32_t frame_byte_cnt_0_0             : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } frame_byte_cnt0_0;

    /* 0x48 : frame_start_addr0_1 */
    union {
        struct {
            uint32_t frame_start_addr_0_1           : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } frame_start_addr0_1;

    /* 0x4C : frame_byte_cnt0_1 */
    union {
        struct {
            uint32_t frame_byte_cnt_0_1             : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } frame_byte_cnt0_1;

    /* 0x50 : frame_start_addr0_2 */
    union {
        struct {
            uint32_t frame_start_addr_0_2           : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } frame_start_addr0_2;

    /* 0x54 : frame_byte_cnt0_2 */
    union {
        struct {
            uint32_t frame_byte_cnt_0_2             : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } frame_byte_cnt0_2;

    /* 0x58 : frame_start_addr0_3 */
    union {
        struct {
            uint32_t frame_start_addr_0_3           : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } frame_start_addr0_3;

    /* 0x5C : frame_byte_cnt0_3 */
    union {
        struct {
            uint32_t frame_byte_cnt_0_3             : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } frame_byte_cnt0_3;

    /* 0x60 : frame_start_addr0_4 */
    union {
        struct {
            uint32_t frame_start_addr_0_4           : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } frame_start_addr0_4;

    /* 0x64 : frame_byte_cnt0_4 */
    union {
        struct {
            uint32_t frame_byte_cnt_0_4             : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } frame_byte_cnt0_4;

    /* 0x68 : frame_start_addr0_5 */
    union {
        struct {
            uint32_t frame_start_addr_0_5           : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } frame_start_addr0_5;

    /* 0x6C : frame_byte_cnt0_5 */
    union {
        struct {
            uint32_t frame_byte_cnt_0_5             : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } frame_byte_cnt0_5;

    /* 0x70 : frame_start_addr0_6 */
    union {
        struct {
            uint32_t frame_start_addr_0_6           : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } frame_start_addr0_6;

    /* 0x74 : frame_byte_cnt0_6 */
    union {
        struct {
            uint32_t frame_byte_cnt_0_6             : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } frame_byte_cnt0_6;

    /* 0x78 : frame_start_addr0_7 */
    union {
        struct {
            uint32_t frame_start_addr_0_7           : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } frame_start_addr0_7;

    /* 0x7C : frame_byte_cnt0_7 */
    union {
        struct {
            uint32_t frame_byte_cnt_0_7             : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } frame_byte_cnt0_7;

    /* 0x80 : frame_start_addr1_0 */
    union {
        struct {
            uint32_t frame_start_addr_1_0           : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } frame_start_addr1_0;

    /* 0x84 : frame_byte_cnt1_0 */
    union {
        struct {
            uint32_t frame_byte_cnt_1_0             : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } frame_byte_cnt1_0;

    /* 0x88 : frame_start_addr1_1 */
    union {
        struct {
            uint32_t frame_start_addr_1_1           : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } frame_start_addr1_1;

    /* 0x8C : frame_byte_cnt1_1 */
    union {
        struct {
            uint32_t frame_byte_cnt_1_1             : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } frame_byte_cnt1_1;

    /* 0x90 : frame_start_addr1_2 */
    union {
        struct {
            uint32_t frame_start_addr_1_2           : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } frame_start_addr1_2;

    /* 0x94 : frame_byte_cnt1_2 */
    union {
        struct {
            uint32_t frame_byte_cnt_1_2             : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } frame_byte_cnt1_2;

    /* 0x98 : frame_start_addr1_3 */
    union {
        struct {
            uint32_t frame_start_addr_1_3           : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } frame_start_addr1_3;

    /* 0x9C : frame_byte_cnt1_3 */
    union {
        struct {
            uint32_t frame_byte_cnt_1_3             : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } frame_byte_cnt1_3;

    /* 0xA0 : frame_start_addr1_4 */
    union {
        struct {
            uint32_t frame_start_addr_1_4           : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } frame_start_addr1_4;

    /* 0xA4 : frame_byte_cnt1_4 */
    union {
        struct {
            uint32_t frame_byte_cnt_1_4             : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } frame_byte_cnt1_4;

    /* 0xA8 : frame_start_addr1_5 */
    union {
        struct {
            uint32_t frame_start_addr_1_5           : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } frame_start_addr1_5;

    /* 0xAC : frame_byte_cnt1_5 */
    union {
        struct {
            uint32_t frame_byte_cnt_1_5             : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } frame_byte_cnt1_5;

    /* 0xB0 : frame_start_addr1_6 */
    union {
        struct {
            uint32_t frame_start_addr_1_6           : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } frame_start_addr1_6;

    /* 0xB4 : frame_byte_cnt1_6 */
    union {
        struct {
            uint32_t frame_byte_cnt_1_6             : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } frame_byte_cnt1_6;

    /* 0xB8 : frame_start_addr1_7 */
    union {
        struct {
            uint32_t frame_start_addr_1_7           : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } frame_start_addr1_7;

    /* 0xBC : frame_byte_cnt1_7 */
    union {
        struct {
            uint32_t frame_byte_cnt_1_7             : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } frame_byte_cnt1_7;

    /* 0xc0  reserved */
    uint8_t RESERVED0xc0[3888];

    /* 0xFF0 : dvp_debug */
    union {
        struct {
            uint32_t reg_dvp_dbg_en                 :  1; /* [    0],        r/w,        0x0 */
            uint32_t reg_dvp_dbg_sel                :  3; /* [ 3: 1],        r/w,        0x0 */
            uint32_t reserved_4_31                  : 28; /* [31: 4],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } dvp_debug;

    /* 0xff4  reserved */
    uint8_t RESERVED0xff4[8];

    /* 0xFFC : dvp_dummy_reg */
    union {
        struct {
            uint32_t RESERVED_31_0                  : 32; /* [31: 0],       rsvd, 0xf0f0f0f0L */
        }BF;
        uint32_t WORD;
    } dvp_dummy_reg;

};

typedef volatile struct cam_reg cam_reg_t;


#endif  /* __CAM_REG_H__ */
