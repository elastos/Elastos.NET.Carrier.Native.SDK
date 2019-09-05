/*
 * Copyright (c) 2019 Elastos Foundation
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#ifndef __DSTORE_H__
#define __DSTORE_H__

#include <stdlib.h>
#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>

typedef struct dstorec_node {
    char *ipv4;
    char *ipv6;
    uint16_t port;
} dstorec_node;

typedef struct dstore DStoreC;

DStoreC *dstore_create(dstorec_node *bootstraps, size_t sz);
void dstore_destroy(DStoreC *dstore);
int dstore_get_values(DStoreC *dstore, const char *key,
                      bool (*cb)(const char *key, const uint8_t *value,
                                 size_t length, void *ctx),
                      void *ctx);
int dstore_add_value(DStoreC *dstore, const char *key,
                     const uint8_t *value, size_t len);
int dstore_remove_values(DStoreC *dstore, const char *key);

#endif // __DSTORE_H__
