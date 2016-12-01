
#ifndef LIBBITCOIN_REPLIER_BLOCKCHAIN_HPP
#define LIBBITCOIN_REPLIER_BLOCKCHAIN_HPP

#include <memory>
#include <bitcoin/blockchain.hpp>
#include <bitcoin/blockchain/define.hpp>
#include <bitcoin/protocol/blockchain.pb.h>
#include <bitcoin/protocol/zmq/message.hpp>

using namespace libbitcoin::protocol;

namespace libbitcoin {
namespace blockchain {

extern BCB_INTERNAL std::unique_ptr<block_chain> blockchain_;

zmq::message BCB_INTERNAL dispatch(
    const protocol::blockchain::request& request);

} // namespace blockchain
} // namespace libbitcoin

#endif
