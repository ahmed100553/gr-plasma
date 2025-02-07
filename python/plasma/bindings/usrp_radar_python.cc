/*
 * Copyright 2022 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually edited  */
/* The following lines can be configured to regenerate this file during cmake      */
/* If manual edits are made, the following tags should be modified accordingly.    */
/* BINDTOOL_GEN_AUTOMATIC(0)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(usrp_radar.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(dadc65782f311a69d7b19f22a7299cf2)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/plasma/usrp_radar.h>
// pydoc.h is automatically generated in the build directory
#include <usrp_radar_pydoc.h>

void bind_usrp_radar(py::module& m)
{

    using usrp_radar = ::gr::plasma::usrp_radar;


    py::class_<usrp_radar, gr::block, gr::basic_block, std::shared_ptr<usrp_radar>>(
        m, "usrp_radar", D(usrp_radar))

        .def(py::init(&usrp_radar::make), py::arg("args"), D(usrp_radar, make))


        .def("set_samp_rate",
             &usrp_radar::set_samp_rate,
             py::arg("arg0"),
             D(usrp_radar, set_samp_rate))


        .def("set_tx_gain",
             &usrp_radar::set_tx_gain,
             py::arg("arg0"),
             D(usrp_radar, set_tx_gain))


        .def("set_rx_gain",
             &usrp_radar::set_rx_gain,
             py::arg("arg0"),
             D(usrp_radar, set_rx_gain))


        .def("set_tx_freq",
             &usrp_radar::set_tx_freq,
             py::arg("arg0"),
             D(usrp_radar, set_tx_freq))


        .def("set_rx_freq",
             &usrp_radar::set_rx_freq,
             py::arg("arg0"),
             D(usrp_radar, set_rx_freq))


        .def("set_start_time",
             &usrp_radar::set_start_time,
             py::arg("arg0"),
             D(usrp_radar, set_start_time))


        .def("set_tx_thread_priority",
             &usrp_radar::set_tx_thread_priority,
             py::arg("arg0"),
             D(usrp_radar, set_tx_thread_priority))


        .def("set_rx_thread_priority",
             &usrp_radar::set_rx_thread_priority,
             py::arg("arg0"),
             D(usrp_radar, set_rx_thread_priority))


        .def("read_calibration_file",
             &usrp_radar::read_calibration_file,
             py::arg("arg0"),
             D(usrp_radar, read_calibration_file))


        .def("set_metadata_keys",
             &usrp_radar::set_metadata_keys,
             py::arg("center_freq_key"),
             py::arg("prf_key"),
             py::arg("sample_start_key"),
             D(usrp_radar, set_metadata_keys))

        ;
}
