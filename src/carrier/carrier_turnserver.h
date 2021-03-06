/*
 * Copyright (c) 2018 Elastos Foundation
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

#ifndef __ELASTOS_CARRIER_TURNSERVER_H__
#define __ELASTOS_CARRIER_TURNSERVER_H__

#include "carrier.h"

#ifdef __cplusplus
extern "C" {
#endif

#define CARRIER_MAX_TURN_SERVER_LEN         63
#define CARRIER_MAX_TURN_USERNAME_LEN       127
#define CARRIER_MAX_TURN_PASSWORD_LEN       63
#define CARRIER_MAX_TURN_REALM_LEN          127

typedef struct CarrierTurnServer {
    char server[CARRIER_MAX_TURN_SERVER_LEN + 1];
    uint16_t port;
    char username[CARRIER_MAX_TURN_USERNAME_LEN + 1];
    char password[CARRIER_MAX_TURN_PASSWORD_LEN + 1];
    char realm[CARRIER_MAX_TURN_REALM_LEN + 1];
} CarrierTurnServer;

CARRIER_API
int carrier_get_turn_server(Carrier *carrier, CarrierTurnServer *turn_server);

#ifdef __cplusplus
}
#endif

#endif // __ELASTOS_CARRIER_TURNSERVER_H__
