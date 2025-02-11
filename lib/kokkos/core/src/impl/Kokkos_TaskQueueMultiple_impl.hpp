//@HEADER
// ************************************************************************
//
//                        Kokkos v. 4.0
//       Copyright (2022) National Technology & Engineering
//               Solutions of Sandia, LLC (NTESS).
//
// Under the terms of Contract DE-NA0003525 with NTESS,
// the U.S. Government retains certain rights in this software.
//
// Part of Kokkos, under the Apache License v2.0 with LLVM Exceptions.
// See https://kokkos.org/LICENSE for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//@HEADER

#ifndef KOKKOS_IMPL_TASKQUEUEMULTIPLE_IMPL_HPP
#define KOKKOS_IMPL_TASKQUEUEMULTIPLE_IMPL_HPP

#include <Kokkos_Macros.hpp>

#ifndef KOKKOS_ENABLE_DEPRECATED_CODE_4
#error "The tasking framework is deprecated"
#endif

#if defined(KOKKOS_ENABLE_TASKDAG)

#include <impl/Kokkos_TaskQueueMultiple.hpp>

#define KOKKOS_IMPL_DEBUG_TASKDAG_SCHEDULING_MULTIPLE 0

namespace Kokkos {
namespace Impl {

template <class ExecSpace, class MemorySpace>
void TaskQueueMultiple<ExecSpace,
                       MemorySpace>::Destroy::destroy_shared_allocation() {
  m_queue->get_team_queue(0).~TaskQueueMultiple();
}

} /* namespace Impl */
} /* namespace Kokkos */

#endif /* #if defined( KOKKOS_ENABLE_TASKDAG ) */
#endif /* #ifndef KOKKOS_IMPL_TASKQUEUEMULTIPLE_IMPL_HPP */
