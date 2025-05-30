#include <recognition/planar/PlanarGraphRecognition.hpp>

namespace Koala {
    PlanarGraphRecognition::PlanarGraphRecognition(NetworKit::Graph &graph, bool embedding = false) : graph(graph),
                                                                                                      embedding(
                                                                                                              embedding),
                                                                                                      is_planar(
                                                                                                              State::NOT_PLANAR) {}

    PlanarGraphRecognition::State PlanarGraphRecognition::isPlanar() const {
        assureFinished();
        return is_planar;
    }

    void PlanarGraphRecognition::getEmbedding() const {
        assureFinished();
        return;
    }

}  // namespace Koala
