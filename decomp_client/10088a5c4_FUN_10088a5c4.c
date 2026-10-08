
xmlChar * FUN_10088a5c4(long param_1)

{
  bool bVar1;
  int iVar2;
  xmlChar *local_30;
  int local_18;
  int local_14;
  uint local_10;
  int local_c;
  
  local_14 = 0;
  local_c = 0;
  if ((*(int *)(param_1 + 0x1c4) == 0) &&
     (*(long *)(*(long *)(param_1 + 0x38) + 0x28) - *(long *)(*(long *)(param_1 + 0x38) + 0x20) <
      0xfa)) {
    FUN_100879cbc(param_1);
  }
  local_10 = _xmlCurrentChar(param_1,&local_18);
  if (((local_10 == 0x20) || (local_10 == 0x3e)) || (local_10 == 0x2f)) {
LAB_10088a721:
    local_30 = (xmlChar *)0x0;
  }
  else {
    if ((int)local_10 < 0x100) {
      if (((((((int)local_10 < 0x41) || (0x5a < (int)local_10)) &&
            (((int)local_10 < 0x61 || (0x7a < (int)local_10)))) &&
           (((int)local_10 < 0xc0 || (0xd6 < (int)local_10)))) &&
          (((int)local_10 < 0xd8 || (0xf6 < (int)local_10)))) && ((int)local_10 < 0xf8)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (bVar1) {
LAB_10088a6d5:
        if ((((int)local_10 < 0x100) ||
            (((((int)local_10 < 0x4e00 || (0x9fa5 < (int)local_10)) && (local_10 != 0x3007)) &&
             (((int)local_10 < 0x3021 || (0x3029 < (int)local_10)))))) && (local_10 != 0x5f))
        goto LAB_10088a721;
      }
    }
    else {
      iVar2 = _xmlCharInRange(local_10,(xmlChRangeGroup *)&_xmlIsBaseCharGroup);
      if (iVar2 == 0) goto LAB_10088a6d5;
    }
    while (((local_10 != 0x20 && (local_10 != 0x3e)) && (local_10 != 0x2f))) {
      if ((int)local_10 < 0x100) {
        if (((((((int)local_10 < 0x41) || (0x5a < (int)local_10)) &&
              (((int)local_10 < 0x61 || (0x7a < (int)local_10)))) &&
             (((int)local_10 < 0xc0 || (0xd6 < (int)local_10)))) &&
            (((int)local_10 < 0xd8 || (0xf6 < (int)local_10)))) && ((int)local_10 < 0xf8)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (!bVar1) {
LAB_10088a8c6:
          if (((int)local_10 < 0x100) ||
             (((((int)local_10 < 0x4e00 || (0x9fa5 < (int)local_10)) && (local_10 != 0x3007)) &&
              (((int)local_10 < 0x3021 || (0x3029 < (int)local_10)))))) {
            if ((int)local_10 < 0x100) {
              if (((int)local_10 < 0x30) || (0x39 < (int)local_10)) {
                bVar1 = false;
              }
              else {
                bVar1 = true;
              }
              if (!bVar1) {
LAB_10088a952:
                if ((((local_10 != 0x2e) && (local_10 != 0x2d)) && (local_10 != 0x5f)) &&
                   (((int)local_10 < 0x100 ||
                    (iVar2 = _xmlCharInRange(local_10,(xmlChRangeGroup *)&_xmlIsCombiningGroup),
                    iVar2 == 0)))) {
                  if ((int)local_10 < 0x100) {
                    if (local_10 != 0xb7) break;
                  }
                  else {
                    iVar2 = _xmlCharInRange(local_10,(xmlChRangeGroup *)&_xmlIsExtenderGroup);
                    if (iVar2 == 0) break;
                  }
                }
              }
            }
            else {
              iVar2 = _xmlCharInRange(local_10,(xmlChRangeGroup *)&_xmlIsDigitGroup);
              if (iVar2 == 0) goto LAB_10088a952;
            }
          }
        }
      }
      else {
        iVar2 = _xmlCharInRange(local_10,(xmlChRangeGroup *)&_xmlIsBaseCharGroup);
        if (iVar2 == 0) goto LAB_10088a8c6;
      }
      bVar1 = 100 < local_c;
      local_c = local_c + 1;
      if (((bVar1) && (local_c = 0, *(int *)(param_1 + 0x1c4) == 0)) &&
         (*(long *)(*(long *)(param_1 + 0x38) + 0x28) - *(long *)(*(long *)(param_1 + 0x38) + 0x20)
          < 0xfa)) {
        FUN_100879cbc(param_1);
      }
      local_14 = local_14 + local_18;
      if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '\n') {
        *(int *)(*(long *)(param_1 + 0x38) + 0x34) = *(int *)(*(long *)(param_1 + 0x38) + 0x34) + 1;
        *(undefined4 *)(*(long *)(param_1 + 0x38) + 0x38) = 1;
      }
      else {
        *(int *)(*(long *)(param_1 + 0x38) + 0x38) = *(int *)(*(long *)(param_1 + 0x38) + 0x38) + 1;
      }
      *(long *)(*(long *)(param_1 + 0x38) + 0x20) =
           *(long *)(*(long *)(param_1 + 0x38) + 0x20) + (long)local_18;
      if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '%') {
        _xmlParserHandlePEReference(param_1);
      }
      local_10 = _xmlCurrentChar(param_1,&local_18);
    }
    local_30 = _xmlDictLookup(*(xmlDictPtr *)(param_1 + 0x1c8),
                              (xmlChar *)
                              (*(long *)(*(long *)(param_1 + 0x38) + 0x20) - (long)local_14),
                              local_14);
  }
  return local_30;
}

