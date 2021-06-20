/*++

 Copyright (c) 2006 Microsoft Corporation.  All rights reserved.

 The use and distribution terms for this software are contained in the file
 named license.rtf, which can be found in the root of this distribution.
 By using this software in any fashion, you are agreeing to be bound by the
 terms of this license.

 You must not remove this notice, or any other, from this software.

--*/

#pragma once

#include <cstddef>

template<typename ADDRESS>
class IMemoryAccess {
public:
	virtual bool  ReadMemory(unsigned nBank, void* pvDst, ADDRESS addr, size_t size)       = 0;
	virtual bool WriteMemory(unsigned nBank, const void* pvSrc, ADDRESS addr, size_t size) = 0;
};

template<typename REGISTER>
class IRegisterAccess {
public:
	virtual REGISTER ReadRegister(unsigned nBank, unsigned int idReg)                    = 0;
	virtual void    WriteRegister(unsigned nBank, unsigned int idReg, REGISTER regValue) = 0;
};

