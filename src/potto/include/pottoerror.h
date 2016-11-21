#ifndef POTTOERROR_H_
#define POTTOERROR_H_
#pragma once

/// <summary>
/// 
/// </summary>
typedef int POTTO_ERROR;

/// <summary>
/// 
/// </summary>
enum POTTOR_ERROR_CODE
{
	POTTO_E_FAIL = 0xFFFFFFFF,
	POTTO_E_OK = 0,
	POTTO_E_POINTER,
	POTTO_E_INVALIDARG,
	POTTO_E_OUTOFMEMORY,
	POTTO_E_MODULENOTFOUND,
	POTTO_E_EXPORTNOTFOUND,
	POTTO_E_CLASSNOTAVAILABLE,
	POTTO_E_NOINTERFACE,
};

#endif // POTTOERROR_H_