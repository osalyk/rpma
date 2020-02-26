/*
 * SPDX-License-Identifier: BSD-3-Clause
 * Copyright 2019-2020, Intel Corporation
 */

/*
 * librpma.h -- definitions of librpma entry points (EXPERIMENTAL)
 *
 * This library provides low-level support for remote access to persistent
 * memory utilizing RDMA-capable RNICs.
 *
 * See librpma(7) for details.
 */

#ifndef LIBRPMA_H
#define LIBRPMA_H 1

/** 3
 * rpma_errormsg - allocate a configuration for a libpmem2 mapping
 *
 * The pmem2_config_new() function instantiates a new (opaque) configuration
 * structure, /pmem2_config, which is used to define mapping parameters
 * for a pmem2_map() function, and returns it through the pointer in void.
 *
 * New configuration is always initialized with default values
 * for all possible parameters, which are specified alongside
 * the corresponding setter function.
 *
 * RETURN VALUE
 * The - function returns 0 on success
 * or a negative error code on failure. pmem2_config_new() does set void
 * to NULL on failure.
 *
 * Please see libpmem2(7) for detailed description of
 * libpmem2 error codes.
 *
 * ERRORS
 * pmem2_config_new() can fail with the following error:
 * 		-ENOMEM - out of memory
 *
 * SEE ALSO
 * errno(3), pmem2_map(3), libpmem2(7) and <http://pmem.io>
 */
const char *rpma_errormsg(void);


#endif /* librpma.h */
