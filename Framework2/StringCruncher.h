#ifndef StringCruncher_h
#define StringCruncher_h

/////////////////////////////////////////////////////////////////////////////

class CStringCruncher
{
public:
	CStringCruncher();
	virtual ~CStringCruncher();

	void CrunchString(LPCSTR pszString, char *pBuf, int nBudget, char cPad =' ');

protected:
	char MakeCrunchChar(char c, char prev, char next);
	int GetCharPriority(char c, char prev, char next);
	bool IsVowel(char c);
	bool IsConsonant(char c);

	LANGID	m_lid;
};

/////////////////////////////////////////////////////////////////////////////
// Unicode Version

class CStringCruncherU
{
public:
	CStringCruncherU();
	virtual ~CStringCruncherU();

	void CrunchString( LPCTSTR pszString, TCHAR *pBuf, int nBudget, TCHAR cPad =_T(' ') );

protected:
	TCHAR MakeCrunchChar( TCHAR c, TCHAR prev, TCHAR next );
	int   GetCharPriority( TCHAR c, TCHAR prev, TCHAR next );
	bool  IsVowel( TCHAR c );
	bool  IsConsonant( TCHAR c );

	LANGID	m_lid;
};

/////////////////////////////////////////////////////////////////////////////

#endif // StringCruncher_h
