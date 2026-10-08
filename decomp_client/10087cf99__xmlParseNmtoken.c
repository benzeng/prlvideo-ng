
xmlChar * _xmlParseNmtoken(long param_1)

{
  int iVar1;
  xmlChar *pxVar2;
  long lVar3;
  xmlChar *pxVar4;
  bool bVar5;
  int local_9c;
  xmlChar local_98 [108];
  int local_2c;
  uint local_28;
  int local_24;
  xmlChar *local_20;
  int local_14;
  xmlChar *local_10;
  
  local_2c = 0;
  local_24 = 0;
  if ((*(int *)(param_1 + 0x1c4) == 0) &&
     (*(long *)(*(long *)(param_1 + 0x38) + 0x28) - *(long *)(*(long *)(param_1 + 0x38) + 0x20) <
      0xfa)) {
    FUN_100879cbc(param_1);
  }
  local_28 = _xmlCurrentChar(param_1,&local_9c);
  do {
    if ((int)local_28 < 0x100) {
      if ((((((int)local_28 < 0x41) || (0x5a < (int)local_28)) &&
           (((int)local_28 < 0x61 || (0x7a < (int)local_28)))) &&
          ((((int)local_28 < 0xc0 || (0xd6 < (int)local_28)) &&
           (((int)local_28 < 0xd8 || (0xf6 < (int)local_28)))))) && ((int)local_28 < 0xf8)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (!bVar5) {
LAB_10087d0ac:
        if (((int)local_28 < 0x100) ||
           (((((int)local_28 < 0x4e00 || (0x9fa5 < (int)local_28)) && (local_28 != 0x3007)) &&
            (((int)local_28 < 0x3021 || (0x3029 < (int)local_28)))))) {
          if ((int)local_28 < 0x100) {
            if (((int)local_28 < 0x30) || (0x39 < (int)local_28)) {
              bVar5 = false;
            }
            else {
              bVar5 = true;
            }
            if (!bVar5) {
LAB_10087d139:
              if ((((local_28 != 0x2e) && (local_28 != 0x2d)) && (local_28 != 0x5f)) &&
                 ((local_28 != 0x3a &&
                  (((int)local_28 < 0x100 ||
                   (iVar1 = _xmlCharInRange(local_28,(xmlChRangeGroup *)&_xmlIsCombiningGroup),
                   iVar1 == 0)))))) {
                if ((int)local_28 < 0x100) {
                  if (local_28 != 0xb7) {
LAB_10087d6de:
                    if (local_2c == 0) {
                      return (xmlChar *)0x0;
                    }
                    pxVar2 = _xmlStrndup(local_98,local_2c);
                    return pxVar2;
                  }
                }
                else {
                  iVar1 = _xmlCharInRange(local_28,(xmlChRangeGroup *)&_xmlIsExtenderGroup);
                  if (iVar1 == 0) goto LAB_10087d6de;
                }
              }
            }
          }
          else {
            iVar1 = _xmlCharInRange(local_28,(xmlChRangeGroup *)&_xmlIsDigitGroup);
            if (iVar1 == 0) goto LAB_10087d139;
          }
        }
      }
    }
    else {
      iVar1 = _xmlCharInRange(local_28,(xmlChRangeGroup *)&_xmlIsBaseCharGroup);
      if (iVar1 == 0) goto LAB_10087d0ac;
    }
    bVar5 = 100 < local_24;
    local_24 = local_24 + 1;
    if (((bVar5) && (local_24 = 0, *(int *)(param_1 + 0x1c4) == 0)) &&
       (*(long *)(*(long *)(param_1 + 0x38) + 0x28) - *(long *)(*(long *)(param_1 + 0x38) + 0x20) <
        0xfa)) {
      FUN_100879cbc(param_1);
    }
    if (local_9c == 1) {
      local_98[local_2c] = (xmlChar)local_28;
      local_2c = local_2c + 1;
    }
    else {
      iVar1 = _xmlCopyCharMultiByte(local_98 + local_2c,local_28);
      local_2c = local_2c + iVar1;
    }
    if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '\n') {
      *(int *)(*(long *)(param_1 + 0x38) + 0x34) = *(int *)(*(long *)(param_1 + 0x38) + 0x34) + 1;
      *(undefined4 *)(*(long *)(param_1 + 0x38) + 0x38) = 1;
    }
    else {
      *(int *)(*(long *)(param_1 + 0x38) + 0x38) = *(int *)(*(long *)(param_1 + 0x38) + 0x38) + 1;
    }
    *(long *)(*(long *)(param_1 + 0x38) + 0x20) =
         *(long *)(*(long *)(param_1 + 0x38) + 0x20) + (long)local_9c;
    if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '%') {
      _xmlParserHandlePEReference(param_1);
    }
    local_28 = _xmlCurrentChar(param_1,&local_9c);
  } while (local_2c < 100);
  local_14 = local_2c * 2;
  local_20 = (xmlChar *)(*(code *)_xmlMallocAtomic)((long)local_14);
  if (local_20 == (xmlChar *)0x0) {
    _xmlErrMemory(param_1,0);
    return (xmlChar *)0x0;
  }
  pxVar2 = local_98;
  pxVar4 = local_20;
  for (lVar3 = (long)local_2c; lVar3 != 0; lVar3 = lVar3 + -1) {
    *pxVar4 = *pxVar2;
    pxVar2 = pxVar2 + 1;
    pxVar4 = pxVar4 + 1;
  }
  do {
    if ((int)local_28 < 0x100) {
      if (((((int)local_28 < 0x41) || (0x5a < (int)local_28)) &&
          ((((int)local_28 < 0x61 || (0x7a < (int)local_28)) &&
           (((int)local_28 < 0xc0 || (0xd6 < (int)local_28)))))) &&
         ((((int)local_28 < 0xd8 || (0xf6 < (int)local_28)) && ((int)local_28 < 0xf8)))) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (!bVar5) {
LAB_10087d5b7:
        if (((int)local_28 < 0x100) ||
           (((((int)local_28 < 0x4e00 || (0x9fa5 < (int)local_28)) && (local_28 != 0x3007)) &&
            (((int)local_28 < 0x3021 || (0x3029 < (int)local_28)))))) {
          if ((int)local_28 < 0x100) {
            if (((int)local_28 < 0x30) || (0x39 < (int)local_28)) {
              bVar5 = false;
            }
            else {
              bVar5 = true;
            }
            if (!bVar5) {
LAB_10087d64c:
              if (((((local_28 != 0x2e) && (local_28 != 0x2d)) && (local_28 != 0x5f)) &&
                  (local_28 != 0x3a)) &&
                 (((int)local_28 < 0x100 ||
                  (iVar1 = _xmlCharInRange(local_28,(xmlChRangeGroup *)&_xmlIsCombiningGroup),
                  iVar1 == 0)))) {
                if ((int)local_28 < 0x100) {
                  if (local_28 != 0xb7) {
LAB_10087d6c3:
                    local_20[local_2c] = '\0';
                    return local_20;
                  }
                }
                else {
                  iVar1 = _xmlCharInRange(local_28,(xmlChRangeGroup *)&_xmlIsExtenderGroup);
                  if (iVar1 == 0) goto LAB_10087d6c3;
                }
              }
            }
          }
          else {
            iVar1 = _xmlCharInRange(local_28,(xmlChRangeGroup *)&_xmlIsDigitGroup);
            if (iVar1 == 0) goto LAB_10087d64c;
          }
        }
      }
    }
    else {
      iVar1 = _xmlCharInRange(local_28,(xmlChRangeGroup *)&_xmlIsBaseCharGroup);
      if (iVar1 == 0) goto LAB_10087d5b7;
    }
    bVar5 = 100 < local_24;
    local_24 = local_24 + 1;
    if (((bVar5) && (local_24 = 0, *(int *)(param_1 + 0x1c4) == 0)) &&
       (*(long *)(*(long *)(param_1 + 0x38) + 0x28) - *(long *)(*(long *)(param_1 + 0x38) + 0x20) <
        0xfa)) {
      FUN_100879cbc(param_1);
    }
    pxVar2 = local_20;
    if (local_14 < local_2c + 10) {
      local_14 = local_14 << 1;
      local_10 = (xmlChar *)(*(code *)_xmlRealloc)(local_20,(long)local_14);
      pxVar2 = local_10;
      if (local_10 == (xmlChar *)0x0) {
        _xmlErrMemory(param_1,0);
        (*(code *)_xmlFree)(local_20);
        return (xmlChar *)0x0;
      }
    }
    local_20 = pxVar2;
    if (local_9c == 1) {
      local_20[local_2c] = (xmlChar)local_28;
      local_2c = local_2c + 1;
    }
    else {
      iVar1 = _xmlCopyCharMultiByte(local_20 + local_2c,local_28);
      local_2c = local_2c + iVar1;
    }
    if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '\n') {
      *(int *)(*(long *)(param_1 + 0x38) + 0x34) = *(int *)(*(long *)(param_1 + 0x38) + 0x34) + 1;
      *(undefined4 *)(*(long *)(param_1 + 0x38) + 0x38) = 1;
    }
    else {
      *(int *)(*(long *)(param_1 + 0x38) + 0x38) = *(int *)(*(long *)(param_1 + 0x38) + 0x38) + 1;
    }
    *(long *)(*(long *)(param_1 + 0x38) + 0x20) =
         *(long *)(*(long *)(param_1 + 0x38) + 0x20) + (long)local_9c;
    if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '%') {
      _xmlParserHandlePEReference(param_1);
    }
    local_28 = _xmlCurrentChar(param_1,&local_9c);
  } while( true );
}

