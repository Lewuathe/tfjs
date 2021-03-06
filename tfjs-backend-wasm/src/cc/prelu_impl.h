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

#ifndef PRELU_IMPL_H_
#define PRELU_IMPL_H_

namespace tfjs {
namespace wasm {

void prelu(const float* x_buf, const int x_size, const int weights_id,
           const int out_id);

}  // namespace wasm
}  // namespace tfjs

#endif  // PRELU_IMPL_H_
