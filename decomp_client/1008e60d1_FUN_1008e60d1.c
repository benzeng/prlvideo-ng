
xmlChar * FUN_1008e60d1(long *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  xmlChar *pxVar3;
  long lVar4;
  xmlChar *pxVar5;
  int local_9c;
  xmlChar local_98 [120];
  int local_20;
  uint local_1c;
  xmlChar *local_18;
  int local_c;
  
  local_20 = 0;
  local_1c = FUN_1008e5a81(param_1,&local_9c);
  if (local_1c == 0x20) {
    return (xmlChar *)0x0;
  }
  if (local_1c == 0x3e) {
    return (xmlChar *)0x0;
  }
  if (local_1c == 0x2f) {
    return (xmlChar *)0x0;
  }
  if (local_1c == 0x5b) {
    return (xmlChar *)0x0;
  }
  if (local_1c == 0x5d) {
    return (xmlChar *)0x0;
  }
  if (local_1c == 0x40) {
    return (xmlChar *)0x0;
  }
  if (local_1c == 0x2a) {
    return (xmlChar *)0x0;
  }
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
    if (!bVar1) goto LAB_1008e65c6;
  }
  else {
    iVar2 = _xmlCharInRange(local_1c,(xmlChRangeGroup *)&_xmlIsBaseCharGroup);
    if (iVar2 != 0) goto LAB_1008e65c6;
  }
  if ((((int)local_1c < 0x100) ||
      (((((int)local_1c < 0x4e00 || (0x9fa5 < (int)local_1c)) && (local_1c != 0x3007)) &&
       (((int)local_1c < 0x3021 || (0x3029 < (int)local_1c)))))) &&
     ((local_1c != 0x5f && ((param_2 != 0 && (local_1c != 0x3a)))))) {
    return (xmlChar *)0x0;
  }
LAB_1008e65c6:
  do {
    if (((local_1c == 0x20) || (local_1c == 0x3e)) || (local_1c == 0x2f)) goto LAB_1008e6785;
    if ((int)local_1c < 0x100) {
      if (((((((int)local_1c < 0x41) || (0x5a < (int)local_1c)) &&
            (((int)local_1c < 0x61 || (0x7a < (int)local_1c)))) &&
           (((int)local_1c < 0xc0 || (0xd6 < (int)local_1c)))) &&
          (((int)local_1c < 0xd8 || (0xf6 < (int)local_1c)))) && ((int)local_1c < 0xf8)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) {
LAB_1008e6670:
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
LAB_1008e6705:
              if ((((local_1c != 0x2e) && (local_1c != 0x2d)) && (local_1c != 0x5f)) &&
                 (((param_2 == 0 || (local_1c != 0x3a)) &&
                  (((int)local_1c < 0x100 ||
                   (iVar2 = _xmlCharInRange(local_1c,(xmlChRangeGroup *)&_xmlIsCombiningGroup),
                   iVar2 == 0)))))) {
                if ((int)local_1c < 0x100) {
                  if (local_1c != 0xb7) {
LAB_1008e6785:
                    if (local_20 == 0) {
                      return (xmlChar *)0x0;
                    }
                    pxVar3 = _xmlStrndup(local_98,local_20);
                    return pxVar3;
                  }
                }
                else {
                  iVar2 = _xmlCharInRange(local_1c,(xmlChRangeGroup *)&_xmlIsExtenderGroup);
                  if (iVar2 == 0) goto LAB_1008e6785;
                }
              }
            }
          }
          else {
            iVar2 = _xmlCharInRange(local_1c,(xmlChRangeGroup *)&_xmlIsDigitGroup);
            if (iVar2 == 0) goto LAB_1008e6705;
          }
        }
      }
    }
    else {
      iVar2 = _xmlCharInRange(local_1c,(xmlChRangeGroup *)&_xmlIsBaseCharGroup);
      if (iVar2 == 0) goto LAB_1008e6670;
    }
    if (local_9c == 1) {
      local_98[local_20] = (xmlChar)local_1c;
      local_20 = local_20 + 1;
    }
    else {
      iVar2 = _xmlCopyChar(local_9c,local_98 + local_20,local_1c);
      local_20 = local_20 + iVar2;
    }
    *param_1 = *param_1 + (long)local_9c;
    local_1c = FUN_1008e5a81(param_1,&local_9c);
  } while (local_20 < 100);
  local_c = local_20 * 2;
  local_18 = (xmlChar *)(*(code *)_xmlMallocAtomic)((long)local_c);
  if (local_18 == (xmlChar *)0x0) {
    _xmlXPathErr(param_1,0xf);
    return (xmlChar *)0x0;
  }
  pxVar3 = local_98;
  pxVar5 = local_18;
  for (lVar4 = (long)local_20; lVar4 != 0; lVar4 = lVar4 + -1) {
    *pxVar5 = *pxVar3;
    pxVar3 = pxVar3 + 1;
    pxVar5 = pxVar5 + 1;
  }
  do {
    if ((int)local_1c < 0x100) {
      if ((((((int)local_1c < 0x41) || (0x5a < (int)local_1c)) &&
           ((((int)local_1c < 0x61 || (0x7a < (int)local_1c)) &&
            (((int)local_1c < 0xc0 || (0xd6 < (int)local_1c)))))) &&
          (((int)local_1c < 0xd8 || (0xf6 < (int)local_1c)))) && ((int)local_1c < 0xf8)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) {
LAB_1008e6495:
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
LAB_1008e652a:
              if (((((local_1c != 0x2e) && (local_1c != 0x2d)) && (local_1c != 0x5f)) &&
                  ((param_2 == 0 || (local_1c != 0x3a)))) &&
                 (((int)local_1c < 0x100 ||
                  (iVar2 = _xmlCharInRange(local_1c,(xmlChRangeGroup *)&_xmlIsCombiningGroup),
                  iVar2 == 0)))) {
                if ((int)local_1c < 0x100) {
                  if (local_1c != 0xb7) {
LAB_1008e65aa:
                    local_18[local_20] = '\0';
                    return local_18;
                  }
                }
                else {
                  iVar2 = _xmlCharInRange(local_1c,(xmlChRangeGroup *)&_xmlIsExtenderGroup);
                  if (iVar2 == 0) goto LAB_1008e65aa;
                }
              }
            }
          }
          else {
            iVar2 = _xmlCharInRange(local_1c,(xmlChRangeGroup *)&_xmlIsDigitGroup);
            if (iVar2 == 0) goto LAB_1008e652a;
          }
        }
      }
    }
    else {
      iVar2 = _xmlCharInRange(local_1c,(xmlChRangeGroup *)&_xmlIsBaseCharGroup);
      if (iVar2 == 0) goto LAB_1008e6495;
    }
    if (local_c < local_20 + 10) {
      local_c = local_c << 1;
      local_18 = (xmlChar *)(*(code *)_xmlRealloc)(local_18,(long)local_c);
      if (local_18 == (xmlChar *)0x0) {
        _xmlXPathErr(param_1,0xf);
        return (xmlChar *)0x0;
      }
    }
    if (local_9c == 1) {
      local_18[local_20] = (xmlChar)local_1c;
      local_20 = local_20 + 1;
    }
    else {
      iVar2 = _xmlCopyChar(local_9c,local_18 + local_20,local_1c);
      local_20 = local_20 + iVar2;
    }
    *param_1 = *param_1 + (long)local_9c;
    local_1c = FUN_1008e5a81(param_1,&local_9c);
  } while( true );
}

