#include <iostream>
#include "binaerer_suchbaum.h"

void suchbaum::knoten_ausgeben(const BaumKnoten* const knoten, const unsigned int tiefe)
{
	if (knoten->getRechterKindKnoten())
		knoten_ausgeben(knoten->getRechterKindKnoten(), tiefe + 1);

	for (unsigned int i = 0; i < tiefe; ++i)
		std::cout << "++";

	std::cout << knoten->getWert() << std::endl;
	
	if (knoten->getLinkerKindKnoten())
		knoten_ausgeben(knoten->getLinkerKindKnoten(), tiefe + 1);
}

suchbaum::BaumKnoten::BaumKnoten(const int wert) 
	: m_bInitalized(true), m_linkerKindKnoten(nullptr), m_rechterKindKnoten(nullptr), m_wert(wert) {}

suchbaum::BaumKnoten::BaumKnoten() 
	: m_bInitalized(false), m_linkerKindKnoten(nullptr), m_rechterKindKnoten(nullptr), m_wert(0) {}

void suchbaum::BaumKnoten::einfuegen(const int wert)
{
	if (!m_bInitalized)
	{
		m_bInitalized = true;
		m_wert = wert;
		return;
	}

	if (wert < m_wert)
	{
		if (!m_linkerKindKnoten)		
			m_linkerKindKnoten = new BaumKnoten(wert);
		else
			m_linkerKindKnoten->einfuegen(wert);		
	}
	else if (wert > m_wert)
	{
		if (!m_rechterKindKnoten)
			m_rechterKindKnoten = new BaumKnoten(wert);
		else
			m_rechterKindKnoten->einfuegen(wert);
	}
	// ignore m_wert == wert	
}

void suchbaum::BaumKnoten::ausgeben() const
{
	if (!m_rechterKindKnoten && !m_linkerKindKnoten)	
		std::cout << "Leerer Baum" << std::endl;		
	else
		knoten_ausgeben(this, 0);
}
