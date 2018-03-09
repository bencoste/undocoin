// Copyright (c) 2012-2014 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOIN_VERSION_H
#define BITCOIN_VERSION_H

/**
 * network protocol versioning
 */

static const int PROTOCOL_VERSION = 99018;

//! initial proto version, to be increased after version/verack negotiation
static const int INIT_PROTO_VERSION = 99008;

//! In this version, 'getheaders' was introduced.
static const int GETHEADERS_VERSION = 99013;

//! disconnect from peers older than this proto version
static const int MIN_PEER_PROTO_VERSION = 99017;

//! disconnect from all older peers after Xnode payment HF
static const int MIN_PEER_PROTO_VERSION_AFTER_XNODE_PAYMENT_HF = 99017;

//! nTime field added to CAddress, starting with this version;
//! if possible, avoid requesting addres99011ses nodes older than this
static const int CADDR_TIME_VERSION = 99008;

//! BIP 0031, pong message, is enabled for all versions AFTER this one
static const int BIP0031_VERSION = 99008;

//! "mempool" command, enhanced "getdata" behavior starts with this version
static const int MEMPOOL_GD_VERSION = 99008;

//! "filter*" commands are disabled without NODE_BLOOM after and including this version
static const int NO_BLOOM_VERSION = 99013;

//! "sendheaders" command and announcing blocks with headers starts with this version
static const int SENDHEADERS_VERSION = 99013;

//! "feefilter" tells peers to filter invs to you by fee starts with this version
static const int FEEFILTER_VERSION = 99013;

//! shord-id-based block download starts with this version
static const int SHORT_IDS_BLOCKS_VERSION = 99013;

//! not banning for invalid compact blocks starts with this version
static const int INVALID_CB_NO_BAN_VERSION = 99017;

#endif // BITCOIN_VERSION_H
