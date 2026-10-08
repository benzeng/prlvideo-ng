
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _xmlResetLastError(void)

{
  xmlError *pxVar1;
  
  pxVar1 = ___xmlLastError();
  if (pxVar1->code != 0) {
    pxVar1 = ___xmlLastError();
    _xmlResetError(pxVar1);
  }
  return;
}

