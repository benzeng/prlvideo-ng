
/* CXmlModelHelper::getDefaultScsiSubTypeByOsVersion(unsigned int) */

byte CXmlModelHelper::getDefaultScsiSubTypeByOsVersion(uint param_1)

{
  byte bVar1;
  uint uVar2;
  
  uVar2 = (param_1 >> 8) - 9;
  if ((7 < uVar2) || (bVar1 = 1, (0xc1U >> (uVar2 & 0x1f) & 1) == 0)) {
    bVar1 = -(param_1 - 0x809 < 8) & 2;
  }
  return bVar1;
}

