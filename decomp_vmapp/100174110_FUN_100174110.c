
undefined4
FUN_100174110(undefined8 param_1,long param_2,long param_3,xmlDocPtr param_4,long param_5)

{
  uint uVar1;
  int iVar2;
  xmlChar *pxVar3;
  undefined4 local_6c;
  long local_30;
  long local_28;
  int local_1c;
  xmlChar *local_18;
  xmlEntityPtr local_10;
  
  local_1c = 1;
  if ((param_3 == 0) || (param_4 == (xmlDocPtr)0x0)) {
    return 0xffffffff;
  }
  *(xmlDocPtr *)(param_3 + 0x40) = param_4;
  if (*(long *)(param_3 + 0x48) == 0) {
LAB_10017428a:
    if ((local_1c != 0) && (*(long *)(param_3 + 0x10) != 0)) {
      if (param_4->dict == (_xmlDict *)0x0) {
        if (((param_2 != 0) && (*(long *)(param_2 + 0x98) != 0)) &&
           (iVar2 = _xmlDictOwns(*(xmlDictPtr *)(param_2 + 0x98),*(xmlChar **)(param_3 + 0x10)),
           iVar2 != 0)) {
          pxVar3 = _xmlStrdup(*(xmlChar **)(param_3 + 0x10));
          *(xmlChar **)(param_3 + 0x10) = pxVar3;
        }
      }
      else {
        local_18 = *(xmlChar **)(param_3 + 0x10);
        pxVar3 = _xmlDictLookup(param_4->dict,*(xmlChar **)(param_3 + 0x10),-1);
        *(xmlChar **)(param_3 + 0x10) = pxVar3;
        if (((param_2 == 0) || (*(long *)(param_2 + 0x98) == 0)) ||
           (iVar2 = _xmlDictOwns(*(xmlDictPtr *)(param_2 + 0x98),local_18), iVar2 == 0)) {
          (*(code *)_xmlFree)(local_18);
        }
      }
    }
    *(undefined4 *)(param_3 + 0x50) = 0;
    *(undefined8 *)(param_3 + 0x58) = 0;
    if (*(long *)(param_3 + 0x18) == 0) {
      local_6c = 0;
    }
    else {
      local_28 = *(long *)(param_3 + 0x18);
      while (local_28 != 0) {
        *(xmlDocPtr *)(local_28 + 0x40) = param_4;
        uVar1 = *(uint *)(local_28 + 8);
        if (2 < uVar1) {
          if (uVar1 < 5) {
            if (((local_1c != 0) && (*(long *)(local_28 + 0x50) != 0)) &&
               ((param_2 != 0 &&
                ((*(long *)(param_2 + 0x98) != 0 &&
                 (iVar2 = _xmlDictOwns(*(xmlDictPtr *)(param_2 + 0x98),
                                       *(xmlChar **)(local_28 + 0x50)), iVar2 != 0)))))) {
              if (param_4->dict == (_xmlDict *)0x0) {
                pxVar3 = _xmlStrdup(*(xmlChar **)(local_28 + 0x50));
                *(xmlChar **)(local_28 + 0x50) = pxVar3;
              }
              else {
                pxVar3 = _xmlDictLookup(param_4->dict,*(xmlChar **)(local_28 + 0x50),-1);
                *(xmlChar **)(local_28 + 0x50) = pxVar3;
              }
            }
          }
          else if (uVar1 == 5) {
            *(undefined8 *)(local_28 + 0x50) = 0;
            *(undefined8 *)(local_28 + 0x18) = 0;
            *(undefined8 *)(local_28 + 0x20) = 0;
            if (((param_4->intSubset != (_xmlDtd *)0x0) || (param_4->extSubset != (_xmlDtd *)0x0))
               && (local_10 = _xmlGetDocEntity(param_4,*(xmlChar **)(local_28 + 0x10)),
                  local_10 != (xmlEntityPtr)0x0)) {
              *(xmlChar **)(local_28 + 0x50) = local_10->content;
              *(xmlEntityPtr *)(local_28 + 0x18) = local_10;
              *(xmlEntityPtr *)(local_28 + 0x20) = local_10;
            }
          }
        }
        if (*(long *)(local_28 + 0x18) == 0) {
          while( true ) {
            if (local_28 == param_3) goto LAB_10017457e;
            if (*(long *)(local_28 + 0x30) != 0) break;
            local_28 = *(long *)(local_28 + 0x28);
          }
          local_28 = *(long *)(local_28 + 0x30);
        }
        else {
          local_28 = *(long *)(local_28 + 0x18);
        }
      }
LAB_10017457e:
      local_6c = 0;
    }
  }
  else {
    local_30 = 0;
    if ((((**(char **)(*(long *)(param_3 + 0x48) + 0x18) == 'x') &&
         (*(char *)(*(long *)(*(long *)(param_3 + 0x48) + 0x18) + 1) == 'm')) &&
        (*(char *)(*(long *)(*(long *)(param_3 + 0x48) + 0x18) + 2) == 'l')) &&
       (*(char *)(*(long *)(*(long *)(param_3 + 0x48) + 0x18) + 3) == '\0')) {
      local_30 = FUN_100172255(param_4);
LAB_100174271:
      if (local_30 != 0) {
        *(long *)(param_3 + 0x48) = local_30;
        goto LAB_10017428a;
      }
    }
    else {
      if (param_5 == 0) {
        local_30 = FUN_100172343(param_4,*(undefined8 *)(*(long *)(param_3 + 0x48) + 0x10),
                                 *(undefined8 *)(*(long *)(param_3 + 0x48) + 0x18));
        goto LAB_100174271;
      }
      iVar2 = FUN_100172a90(param_4,param_5,*(undefined8 *)(*(long *)(param_3 + 0x48) + 0x10),
                            &local_30,1);
      if (iVar2 != -1) {
        if (local_30 == 0) {
          local_30 = FUN_100172cf6(param_4,param_5,*(undefined8 *)(*(long *)(param_3 + 0x48) + 0x10)
                                   ,*(undefined8 *)(*(long *)(param_3 + 0x48) + 0x18),1);
        }
        goto LAB_100174271;
      }
    }
    local_6c = 0xffffffff;
  }
  return local_6c;
}

