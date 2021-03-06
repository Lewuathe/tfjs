/* Copyright 2019 Google Inc. All Rights Reserved.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 * ===========================================================================*/

#ifndef INTERPOLATE_BILINEAR_IMPL_H_
#define INTERPOLATE_BILINEAR_IMPL_H_

#include <vector>

namespace tfjs {
namespace wasm {

void interpolate_bilinear(float* out_buf_ptr, const float* images_buf,
                          const std::vector<int>& images_strides,
                          int crop_width, int image_width, int image_width_m1,
                          int image_height_m1, int num_channels,
                          bool should_extrapolate, float extrapolation_value,
                          int batch_offset, float y_ind, float width_scale,
                          float x1, float x2);

}  // namespace wasm
}  // namespace tfjs

#endif  // INTERPOLATE_BILINEAR_IMPL_H_
