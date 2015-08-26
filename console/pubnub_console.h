/* -*- c-file-style:"stroustrup"; indent-tabs-mode: nil -*- */

#include "pbpal.h"
#include "pubnub_alloc.h"
#include "pubnub_ccore.h"
#include "pubnub_coreapi.h"
#include "pubnub_version.h"
#include "pubnub_netcore.h"
#include "pubnub_internal.h"
#include "pubnub_internal_common.h"
#include "pubnub_blocking_io.h"

#include "pnc_config.h"
#include "pnc_helpers.h"
#include "pnc_readers.h"
#include "pnc_ops_callback.h"
#include "pnc_subscriptions.h"


void displayMenuOptions(pubnub_t *pn);
char const *pnc_get_auth(pubnub_t *pb);
char const *pnc_get_uuid(pubnub_t *pb);