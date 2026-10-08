
xmlChar * FUN_10097e8df(long *param_1)

{
  int iVar1;
  xmlChar *pxVar2;
  bool bVar3;
  int local_2c;
  xmlChar *local_28;
  xmlChar *local_20;
  undefined8 local_18;
  uint local_c;
  
  local_18 = 0;
  while ((*(char *)*param_1 == ' ' ||
         (((8 < *(byte *)*param_1 && (*(byte *)*param_1 < 0xb)) || (*(char *)*param_1 == '\r'))))) {
    if (*(char *)*param_1 != '\0') {
      *param_1 = *param_1 + 1;
    }
  }
  local_28 = (xmlChar *)*param_1;
  local_20 = local_28;
  local_c = _xmlStringCurrentChar(0,local_28,&local_2c);
  if ((int)local_c < 0x100) {
    if (((((int)local_c < 0x41) || (0x5a < (int)local_c)) &&
        (((int)local_c < 0x61 || (0x7a < (int)local_c)))) &&
       (((((int)local_c < 0xc0 || (0xd6 < (int)local_c)) &&
         (((int)local_c < 0xd8 || (0xf6 < (int)local_c)))) && ((int)local_c < 0xf8)))) {
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
  if ((bVar3) &&
     (((((int)local_c < 0x100 ||
        (((((int)local_c < 0x4e00 || (0x9fa5 < (int)local_c)) && (local_c != 0x3007)) &&
         (((int)local_c < 0x3021 || (0x3029 < (int)local_c)))))) && (local_c != 0x5f)) &&
      (local_c != 0x3a)))) {
    return (xmlChar *)0x0;
  }
  do {
    if ((int)local_c < 0x100) {
      if ((((((int)local_c < 0x41) || (0x5a < (int)local_c)) &&
           (((int)local_c < 0x61 || (0x7a < (int)local_c)))) &&
          (((int)local_c < 0xc0 || (0xd6 < (int)local_c)))) &&
         ((((int)local_c < 0xd8 || (0xf6 < (int)local_c)) && ((int)local_c < 0xf8)))) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (!bVar3) {
LAB_10097eaef:
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
LAB_10097eb7b:
              if ((((local_c != 0x2e) && (local_c != 0x2d)) && (local_c != 0x5f)) &&
                 (((int)local_c < 0x100 ||
                  (iVar1 = _xmlCharInRange(local_c,(xmlChRangeGroup *)&_xmlIsCombiningGroup),
                  iVar1 == 0)))) {
                if ((int)local_c < 0x100) {
                  if (local_c != 0xb7) goto LAB_10097ebe8;
                }
                else {
                  iVar1 = _xmlCharInRange(local_c,(xmlChRangeGroup *)&_xmlIsExtenderGroup);
                  if (iVar1 == 0) {
LAB_10097ebe8:
                    pxVar2 = _xmlStrndup(local_28,(int)local_20 - (int)local_28);
                    *param_1 = (long)local_20;
                    return pxVar2;
                  }
                }
              }
            }
          }
          else {
            iVar1 = _xmlCharInRange(local_c,(xmlChRangeGroup *)&_xmlIsDigitGroup);
            if (iVar1 == 0) goto LAB_10097eb7b;
          }
        }
      }
    }
    else {
      iVar1 = _xmlCharInRange(local_c,(xmlChRangeGroup *)&_xmlIsBaseCharGroup);
      if (iVar1 == 0) goto LAB_10097eaef;
    }
    local_20 = local_20 + local_2c;
    local_c = _xmlStringCurrentChar(0,local_20,&local_2c);
  } while( true );
}

