
xmlChar * FUN_10087c917(undefined8 param_1,long *param_2)

{
  int iVar1;
  xmlChar *pxVar2;
  long lVar3;
  xmlChar *pxVar4;
  bool bVar5;
  int local_ac;
  xmlChar local_a8 [120];
  long local_30;
  int local_28;
  uint local_24;
  xmlChar *local_20;
  int local_14;
  xmlChar *local_10;
  
  local_30 = *param_2;
  local_28 = 0;
  local_24 = _xmlStringCurrentChar(param_1,local_30,&local_ac);
  if ((int)local_24 < 0x100) {
    if (((((((int)local_24 < 0x41) || (0x5a < (int)local_24)) &&
          (((int)local_24 < 0x61 || (0x7a < (int)local_24)))) &&
         (((int)local_24 < 0xc0 || (0xd6 < (int)local_24)))) &&
        (((int)local_24 < 0xd8 || (0xf6 < (int)local_24)))) && ((int)local_24 < 0xf8)) {
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
  }
  else {
    iVar1 = _xmlCharInRange(local_24,(xmlChRangeGroup *)&_xmlIsBaseCharGroup);
    bVar5 = iVar1 == 0;
  }
  if (((!bVar5) ||
      ((0xff < (int)local_24 &&
       ((((0x4dff < (int)local_24 && ((int)local_24 < 0x9fa6)) || (local_24 == 0x3007)) ||
        ((0x3020 < (int)local_24 && ((int)local_24 < 0x302a)))))))) ||
     ((local_24 == 0x5f || (local_24 == 0x3a)))) {
    do {
      if ((int)local_24 < 0x100) {
        if ((((((int)local_24 < 0x41) || (0x5a < (int)local_24)) &&
             (((int)local_24 < 0x61 || (0x7a < (int)local_24)))) &&
            ((((int)local_24 < 0xc0 || (0xd6 < (int)local_24)) &&
             (((int)local_24 < 0xd8 || (0xf6 < (int)local_24)))))) && ((int)local_24 < 0xf8)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (!bVar5) {
LAB_10087ce60:
          if (((int)local_24 < 0x100) ||
             (((((int)local_24 < 0x4e00 || (0x9fa5 < (int)local_24)) && (local_24 != 0x3007)) &&
              (((int)local_24 < 0x3021 || (0x3029 < (int)local_24)))))) {
            if ((int)local_24 < 0x100) {
              if (((int)local_24 < 0x30) || (0x39 < (int)local_24)) {
                bVar5 = false;
              }
              else {
                bVar5 = true;
              }
              if (!bVar5) {
LAB_10087cef5:
                if ((((local_24 != 0x2e) && (local_24 != 0x2d)) && (local_24 != 0x5f)) &&
                   ((local_24 != 0x3a &&
                    (((int)local_24 < 0x100 ||
                     (iVar1 = _xmlCharInRange(local_24,(xmlChRangeGroup *)&_xmlIsCombiningGroup),
                     iVar1 == 0)))))) {
                  if ((int)local_24 < 0x100) {
                    if (local_24 != 0xb7) {
LAB_10087cf6c:
                      *param_2 = local_30;
                      pxVar2 = _xmlStrndup(local_a8,local_28);
                      return pxVar2;
                    }
                  }
                  else {
                    iVar1 = _xmlCharInRange(local_24,(xmlChRangeGroup *)&_xmlIsExtenderGroup);
                    if (iVar1 == 0) goto LAB_10087cf6c;
                  }
                }
              }
            }
            else {
              iVar1 = _xmlCharInRange(local_24,(xmlChRangeGroup *)&_xmlIsDigitGroup);
              if (iVar1 == 0) goto LAB_10087cef5;
            }
          }
        }
      }
      else {
        iVar1 = _xmlCharInRange(local_24,(xmlChRangeGroup *)&_xmlIsBaseCharGroup);
        if (iVar1 == 0) goto LAB_10087ce60;
      }
      if (local_ac == 1) {
        local_a8[local_28] = (xmlChar)local_24;
        local_28 = local_28 + 1;
      }
      else {
        iVar1 = _xmlCopyCharMultiByte(local_a8 + local_28,local_24);
        local_28 = local_28 + iVar1;
      }
      local_30 = local_30 + local_ac;
      local_24 = _xmlStringCurrentChar(param_1,local_30,&local_ac);
    } while (local_28 < 100);
    local_14 = local_28 * 2;
    local_20 = (xmlChar *)(*(code *)_xmlMallocAtomic)((long)local_14);
    if (local_20 != (xmlChar *)0x0) {
      pxVar2 = local_a8;
      pxVar4 = local_20;
      for (lVar3 = (long)local_28; lVar3 != 0; lVar3 = lVar3 + -1) {
        *pxVar4 = *pxVar2;
        pxVar2 = pxVar2 + 1;
        pxVar4 = pxVar4 + 1;
      }
      do {
        if ((int)local_24 < 0x100) {
          if (((((int)local_24 < 0x41) || (0x5a < (int)local_24)) &&
              (((int)local_24 < 0x61 || (0x7a < (int)local_24)))) &&
             (((((int)local_24 < 0xc0 || (0xd6 < (int)local_24)) &&
               (((int)local_24 < 0xd8 || (0xf6 < (int)local_24)))) && ((int)local_24 < 0xf8)))) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          if (!bVar5) {
LAB_10087cc9e:
            if (((int)local_24 < 0x100) ||
               (((((int)local_24 < 0x4e00 || (0x9fa5 < (int)local_24)) && (local_24 != 0x3007)) &&
                (((int)local_24 < 0x3021 || (0x3029 < (int)local_24)))))) {
              if ((int)local_24 < 0x100) {
                if (((int)local_24 < 0x30) || (0x39 < (int)local_24)) {
                  bVar5 = false;
                }
                else {
                  bVar5 = true;
                }
                if (!bVar5) {
LAB_10087cd33:
                  if (((((local_24 != 0x2e) && (local_24 != 0x2d)) && (local_24 != 0x5f)) &&
                      (local_24 != 0x3a)) &&
                     (((int)local_24 < 0x100 ||
                      (iVar1 = _xmlCharInRange(local_24,(xmlChRangeGroup *)&_xmlIsCombiningGroup),
                      iVar1 == 0)))) {
                    if ((int)local_24 < 0x100) {
                      if (local_24 != 0xb7) {
LAB_10087cdaa:
                        local_20[local_28] = '\0';
                        *param_2 = local_30;
                        return local_20;
                      }
                    }
                    else {
                      iVar1 = _xmlCharInRange(local_24,(xmlChRangeGroup *)&_xmlIsExtenderGroup);
                      if (iVar1 == 0) goto LAB_10087cdaa;
                    }
                  }
                }
              }
              else {
                iVar1 = _xmlCharInRange(local_24,(xmlChRangeGroup *)&_xmlIsDigitGroup);
                if (iVar1 == 0) goto LAB_10087cd33;
              }
            }
          }
        }
        else {
          iVar1 = _xmlCharInRange(local_24,(xmlChRangeGroup *)&_xmlIsBaseCharGroup);
          if (iVar1 == 0) goto LAB_10087cc9e;
        }
        pxVar2 = local_20;
        if (local_14 < local_28 + 10) {
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
        if (local_ac == 1) {
          local_20[local_28] = (xmlChar)local_24;
          local_28 = local_28 + 1;
        }
        else {
          iVar1 = _xmlCopyCharMultiByte(local_20 + local_28,local_24);
          local_28 = local_28 + iVar1;
        }
        local_30 = local_30 + local_ac;
        local_24 = _xmlStringCurrentChar(param_1,local_30,&local_ac);
      } while( true );
    }
    _xmlErrMemory(param_1,0);
  }
  return (xmlChar *)0x0;
}

