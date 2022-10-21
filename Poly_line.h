#pragma once
#include "polyhedron.h"
#include <utility>
#include <vector>
#include <list>

class POLYLINE {
public:
	std::list<icVector3> m_vertices;
	icVector3 m_rgb = icVector3(1.0, 0.0, 0.0);
	double m_weight = 1.0;
	bool isNeighbor(const POLYLINE&line);
	void merge(const POLYLINE&line);
};

void display_polyline(std::vector<POLYLINE>&polylines);

void marchingSqaure(std::list<POLYLINE>&edges, const Polyhedron&poly, const double&thres);

void makePolylineFromEdges(std::vector<POLYLINE>&polylines, const std::list<POLYLINE>&edges);