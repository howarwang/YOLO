#ifndef CONNECTED_LAYER_H
#define CONNECTED_LAYER_H

#include "activations.h"
#include "layer.h"
#include "network.h"

typedef layer connected_layer;

connected_layer make_connected_layer(int batch, int inputs, int outputs, ACTIVATION activation, int batch_normalize);

<<<<<<< HEAD
<<<<<<< HEAD
void forward_connected_layer(connected_layer layer, network net);
void backward_connected_layer(connected_layer layer, network net);
void update_connected_layer(connected_layer layer, int batch, float learning_rate, float momentum, float decay);

#ifdef GPU
void forward_connected_layer_gpu(connected_layer layer, network net);
void backward_connected_layer_gpu(connected_layer layer, network net);
=======
=======
>>>>>>> 07267f401b3d9c82c5f695f932c9f504d2b6a592
void forward_connected_layer(connected_layer layer, network_state state);
void backward_connected_layer(connected_layer layer, network_state state);
void update_connected_layer(connected_layer layer, int batch, float learning_rate, float momentum, float decay);
void denormalize_connected_layer(layer l);

#ifdef GPU
void forward_connected_layer_gpu(connected_layer layer, network_state state);
void backward_connected_layer_gpu(connected_layer layer, network_state state);
<<<<<<< HEAD
>>>>>>> b5b3d7367411302dd6e73c8fe583d6860a786445
=======
>>>>>>> 07267f401b3d9c82c5f695f932c9f504d2b6a592
void update_connected_layer_gpu(connected_layer layer, int batch, float learning_rate, float momentum, float decay);
void push_connected_layer(connected_layer layer);
void pull_connected_layer(connected_layer layer);
#endif

#endif

