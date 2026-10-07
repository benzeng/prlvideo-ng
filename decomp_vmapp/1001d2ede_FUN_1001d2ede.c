
byte * FUN_1001d2ede(byte *param_1,undefined8 *param_2)

{
  int iVar1;
  xmlChar *pxVar2;
  bool bVar3;
  byte *local_90;
  xmlChar local_88 [120];
  int local_10;
  uint local_c;
  
  local_10 = 0;
  *param_2 = 0;
  local_c = (uint)*param_1;
  if (local_c < 0x100) {
    if (((((local_c < 0x41) || (0x5a < local_c)) && ((local_c < 0x61 || (0x7a < local_c)))) &&
        ((local_c < 0xc0 || (0xd6 < local_c)))) &&
       (((local_c < 0xd8 || (0xf6 < local_c)) && (local_c < 0xf8)))) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
  }
  else {
    iVar1 = _xmlCharInRange(local_c,(xmlChRangeGroup *)&_xmlIsBaseCharGroup);
    bVar3 = iVar1 == 0;
  }
  local_90 = param_1;
  if (((!bVar3) ||
      ((0xff < (int)local_c &&
       ((((0x4dff < (int)local_c && ((int)local_c < 0x9fa6)) || (local_c == 0x3007)) ||
        ((0x3020 < (int)local_c && ((int)local_c < 0x302a)))))))) ||
     ((local_c == 0x5f || (local_c == 0x3a)))) {
    do {
      if ((int)local_c < 0x100) {
        if ((((((int)local_c < 0x41) || (0x5a < (int)local_c)) &&
             (((int)local_c < 0x61 || (0x7a < (int)local_c)))) &&
            ((((int)local_c < 0xc0 || (0xd6 < (int)local_c)) &&
             (((int)local_c < 0xd8 || (0xf6 < (int)local_c)))))) && ((int)local_c < 0xf8)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (!bVar3) {
LAB_1001d30d7:
          if (((int)local_c < 0x100) ||
             (((((int)local_c < 0x4e00 || (0x9fa5 < (int)local_c)) && (local_c != 0x3007)) &&
              (((int)local_c < 0x3021 || (0x3029 < (int)local_c)))))) {
            if ((int)local_c < 0x100) {
              if (((int)local_c < 0x30) || (0x39 < (int)local_c)) {
                bVar3 = false;
              }
              else {
                bVar3 = true;
              }
              if (!bVar3) {
LAB_1001d316c:
                if ((((local_c != 0x2e) && (local_c != 0x2d)) && (local_c != 0x5f)) &&
                   (local_c != 0x3a)) {
                  pxVar2 = _xmlStrndup(local_88,local_10);
                  *param_2 = pxVar2;
                  return local_90;
                }
              }
            }
            else {
              iVar1 = _xmlCharInRange(local_c,(xmlChRangeGroup *)&_xmlIsDigitGroup);
              if (iVar1 == 0) goto LAB_1001d316c;
            }
          }
        }
      }
      else {
        iVar1 = _xmlCharInRange(local_c,(xmlChRangeGroup *)&_xmlIsBaseCharGroup);
        if (iVar1 == 0) goto LAB_1001d30d7;
      }
      local_88[local_10] = (xmlChar)local_c;
      local_10 = local_10 + 1;
      local_90 = local_90 + 1;
      local_c = (uint)*local_90;
    } while (local_10 < 100);
  }
  return (byte *)0x0;
}

