
/*
 * Copyright (c) 2023 Qualcomm Innovation Center, Inc. All rights reserved.
 *
 * Permission to use, copy, modify, and/or distribute this software for
 * any purpose with or without fee is hereby granted, provided that the
 * above copyright notice and this permission notice appear in all
 * copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL
 * WARRANTIES WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE
 * AUTHOR BE LIABLE FOR ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL
 * DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR
 * PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER
 * TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR
 * PERFORMANCE OF THIS SOFTWARE.
 */



#ifndef _HE_SIG_B2_OFDMA_INFO_H_
#define _HE_SIG_B2_OFDMA_INFO_H_
#if !defined(__ASSEMBLER__)
#endif

#define NUM_OF_DWORDS_HE_SIG_B2_OFDMA_INFO 1

struct he_sig_b2_ofdma_info {
             uint32_t sta_id                          : 11,
                      nsts                            :  3,
                      txbf                            :  1,
                      sta_mcs                         :  4,
                      sta_dcm                         :  1,
                      sta_coding                      :  1,
                      reserved_0                      : 11;
};

#define HE_SIG_B2_OFDMA_INFO_0_STA_ID_OFFSET                         0x00000000
#define HE_SIG_B2_OFDMA_INFO_0_STA_ID_LSB                            0
#define HE_SIG_B2_OFDMA_INFO_0_STA_ID_MASK                           0x000007ff

#define HE_SIG_B2_OFDMA_INFO_0_NSTS_OFFSET                           0x00000000
#define HE_SIG_B2_OFDMA_INFO_0_NSTS_LSB                              11
#define HE_SIG_B2_OFDMA_INFO_0_NSTS_MASK                             0x00003800

#define HE_SIG_B2_OFDMA_INFO_0_TXBF_OFFSET                           0x00000000
#define HE_SIG_B2_OFDMA_INFO_0_TXBF_LSB                              14
#define HE_SIG_B2_OFDMA_INFO_0_TXBF_MASK                             0x00004000

#define HE_SIG_B2_OFDMA_INFO_0_STA_MCS_OFFSET                        0x00000000
#define HE_SIG_B2_OFDMA_INFO_0_STA_MCS_LSB                           15
#define HE_SIG_B2_OFDMA_INFO_0_STA_MCS_MASK                          0x00078000

#define HE_SIG_B2_OFDMA_INFO_0_STA_DCM_OFFSET                        0x00000000
#define HE_SIG_B2_OFDMA_INFO_0_STA_DCM_LSB                           19
#define HE_SIG_B2_OFDMA_INFO_0_STA_DCM_MASK                          0x00080000

#define HE_SIG_B2_OFDMA_INFO_0_STA_CODING_OFFSET                     0x00000000
#define HE_SIG_B2_OFDMA_INFO_0_STA_CODING_LSB                        20
#define HE_SIG_B2_OFDMA_INFO_0_STA_CODING_MASK                       0x00100000

#define HE_SIG_B2_OFDMA_INFO_0_RESERVED_0_OFFSET                     0x00000000
#define HE_SIG_B2_OFDMA_INFO_0_RESERVED_0_LSB                        21
#define HE_SIG_B2_OFDMA_INFO_0_RESERVED_0_MASK                       0xffe00000

#endif
