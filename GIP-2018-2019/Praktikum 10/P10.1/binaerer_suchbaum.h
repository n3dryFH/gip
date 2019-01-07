#pragma once

namespace suchbaum {
	class BaumKnoten
	{
	public:
		BaumKnoten(const int wert);
		BaumKnoten();

		void einfuegen(const int wert);
		void ausgeben() const;

		inline int getWert() const { return m_wert; }
		inline BaumKnoten* getRechterKindKnoten() const { return m_rechterKindKnoten; }
		inline BaumKnoten* getLinkerKindKnoten() const { return m_linkerKindKnoten; }

	private:
		int m_wert;		
		bool m_bInitalized;
		BaumKnoten* m_rechterKindKnoten;
		BaumKnoten* m_linkerKindKnoten;
	};

	void knoten_ausgeben(const BaumKnoten* const knoten, const unsigned int tiefe);
}

