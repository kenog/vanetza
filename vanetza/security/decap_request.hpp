#ifndef DECAP_REQUEST_HPP_WH8O09MB
#define DECAP_REQUEST_HPP_WH8O09MB

#include <vanetza/geonet/parsed_pdu.hpp>
#include <vanetza/common/byte_buffer.hpp>

namespace vanetza
{
namespace security
{

/** \brief contains input for verify process
* described in
* TS 102 723-8 v1.0.0 (2013-07)
* TS 102 636-4-1 v1.2.3 (2015-01)
*/
struct DecapRequest
{
    // plaintext_packet_length is gathered via ByteBuffer::size(); valid range 0 ... 2^16-1; mandatory
    SecuredMessage sec_packet;
};

} // namespace security
} // namespace vanetza
#endif // DECAP_REQUEST_HPP_WH8O09MB
