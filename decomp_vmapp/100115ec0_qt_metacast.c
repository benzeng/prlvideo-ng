
/* CBaseNodeSignals::qt_metacast(char const*) */

CBaseNodeSignals * __thiscall CBaseNodeSignals::qt_metacast(CBaseNodeSignals *this,char *param_1)

{
  int iVar1;
  CBaseNodeSignals *pCVar2;
  
  pCVar2 = (CBaseNodeSignals *)0x0;
  if ((param_1 != (char *)0x0) &&
     (iVar1 = _strcmp(param_1,"CBaseNodeSignals"), pCVar2 = this, iVar1 != 0)) {
    iVar1 = _strcmp(param_1,"CBaseNode");
    if (iVar1 != 0) {
      pCVar2 = (CBaseNodeSignals *)QObject::qt_metacast((char *)this);
      return pCVar2;
    }
    pCVar2 = (CBaseNodeSignals *)0x0;
    if (this != (CBaseNodeSignals *)0x0) {
      pCVar2 = this + 0x10;
    }
  }
  return pCVar2;
}

