#ifndef ANY_VPL_UTILS_H_
#define ANY_VPL_UTILS_H_

#include <api/video/video_codec_type.h>
#include <mfxdefs.h>
#include <cstdlib>
#include <string>

namespace any_vpl {

/**
 * @brief Round up to a multiple of 16
 *
 * @param value The value to align
 * @return uint32_t The aligned value
 */
uint32_t Align16(uint32_t value);

/**
 * @brief Round up to a multiple of 32
 *
 * @param value The value to align
 * @return uint32_t The aligned value
 */
uint32_t Align32(uint32_t value);

/**
 * @brief Convert a webrtc::VideoCodecType to an mfx type
 *
 * @param codec The codec to convert
 * @return mfxU32 The mfx codec
 */
mfxU32 ToMfxCodec(webrtc::VideoCodecType codec);

/**
 * @brief Convert an mfx codec to a string
 *
 * @param codec The codec to convert
 * @return std::string The string representation of the codec
 */
std::string CodecToString(mfxU32 codec);

}  // namespace any_vpl
#endif
