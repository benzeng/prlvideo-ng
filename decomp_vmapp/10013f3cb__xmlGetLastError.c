
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

xmlErrorPtr _xmlGetLastError(void)

{
  xmlError *pxVar1;
  xmlError *local_10;
  
  pxVar1 = ___xmlLastError();
  if (pxVar1->code == 0) {
    local_10 = (xmlError *)0x0;
  }
  else {
    local_10 = ___xmlLastError();
  }
  return local_10;
}

