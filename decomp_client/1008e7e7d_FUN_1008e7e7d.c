
xmlChar * FUN_1008e7e7d(long *param_1)

{
  bool bVar1;
  int iVar2;
  xmlChar *local_40;
  int local_24;
  int local_20;
  uint local_1c;
  xmlChar *local_18;
  
  local_20 = 0;
  local_18 = (xmlChar *)*param_1;
  local_1c = FUN_1008e5a81(param_1,&local_24);
  if (((local_1c == 0x20) || (local_1c == 0x3e)) || (local_1c == 0x2f)) {
LAB_1008e7f91:
    local_40 = (xmlChar *)0x0;
  }
  else {
    if ((int)local_1c < 0x100) {
      if ((((((int)local_1c < 0x41) || (0x5a < (int)local_1c)) &&
           (((int)local_1c < 0x61 || (0x7a < (int)local_1c)))) &&
          ((((int)local_1c < 0xc0 || (0xd6 < (int)local_1c)) &&
           (((int)local_1c < 0xd8 || (0xf6 < (int)local_1c)))))) && ((int)local_1c < 0xf8)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (bVar1) {
LAB_1008e7f4f:
        if ((((int)local_1c < 0x100) ||
            (((((int)local_1c < 0x4e00 || (0x9fa5 < (int)local_1c)) && (local_1c != 0x3007)) &&
             (((int)local_1c < 0x3021 || (0x3029 < (int)local_1c)))))) &&
           ((local_1c != 0x5f && (local_1c != 0x3a)))) goto LAB_1008e7f91;
      }
    }
    else {
      iVar2 = _xmlCharInRange(local_1c,(xmlChRangeGroup *)&_xmlIsBaseCharGroup);
      if (iVar2 == 0) goto LAB_1008e7f4f;
    }
    while (((local_1c != 0x20 && (local_1c != 0x3e)) && (local_1c != 0x2f))) {
      if ((int)local_1c < 0x100) {
        if (((((int)local_1c < 0x41) || (0x5a < (int)local_1c)) &&
            (((((int)local_1c < 0x61 || (0x7a < (int)local_1c)) &&
              (((int)local_1c < 0xc0 || (0xd6 < (int)local_1c)))) &&
             (((int)local_1c < 0xd8 || (0xf6 < (int)local_1c)))))) && ((int)local_1c < 0xf8)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (!bVar1) {
LAB_1008e8070:
          if (((int)local_1c < 0x100) ||
             (((((int)local_1c < 0x4e00 || (0x9fa5 < (int)local_1c)) && (local_1c != 0x3007)) &&
              (((int)local_1c < 0x3021 || (0x3029 < (int)local_1c)))))) {
            if ((int)local_1c < 0x100) {
              if (((int)local_1c < 0x30) || (0x39 < (int)local_1c)) {
                bVar1 = false;
              }
              else {
                bVar1 = true;
              }
              if (!bVar1) {
LAB_1008e80fc:
                if ((((local_1c != 0x2e) && (local_1c != 0x2d)) && (local_1c != 0x5f)) &&
                   ((local_1c != 0x3a &&
                    (((int)local_1c < 0x100 ||
                     (iVar2 = _xmlCharInRange(local_1c,(xmlChRangeGroup *)&_xmlIsCombiningGroup),
                     iVar2 == 0)))))) {
                  if ((int)local_1c < 0x100) {
                    if (local_1c != 0xb7) break;
                  }
                  else {
                    iVar2 = _xmlCharInRange(local_1c,(xmlChRangeGroup *)&_xmlIsExtenderGroup);
                    if (iVar2 == 0) break;
                  }
                }
              }
            }
            else {
              iVar2 = _xmlCharInRange(local_1c,(xmlChRangeGroup *)&_xmlIsDigitGroup);
              if (iVar2 == 0) goto LAB_1008e80fc;
            }
          }
        }
      }
      else {
        iVar2 = _xmlCharInRange(local_1c,(xmlChRangeGroup *)&_xmlIsBaseCharGroup);
        if (iVar2 == 0) goto LAB_1008e8070;
      }
      local_20 = local_20 + local_24;
      *param_1 = *param_1 + (long)local_24;
      local_1c = FUN_1008e5a81(param_1,&local_24);
    }
    local_40 = _xmlStrndup(local_18,(int)*param_1 - (int)local_18);
    *param_1 = (long)local_18;
  }
  return local_40;
}

