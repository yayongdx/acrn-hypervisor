/*
 * Copyright (C) 2018 Intel Corporation. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef SOFTIRQ_H
#define SOFTIRQ_H

#define SOFTIRQ_TIMER		0U
#define SOFTIRQ_DEV_ASSIGN	1U
#define SOFTIRQ_MAX		2U
#define SOFTIRQ_MASK		((1UL<<SOFTIRQ_MAX)-1)

/* used for atomic value for prevent recursive */
#define SOFTIRQ_ATOMIC		63U

void enable_softirq(uint16_t cpu_id);
void disable_softirq(uint16_t cpu_id);
void init_softirq(void);
void raise_softirq(uint16_t softirq_id);
void exec_softirq(void);
#endif /* SOFTIRQ_H */
