
undefined4 FUN_1009245fc(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  xmlChar *pxVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  xmlChar *local_48;
  undefined4 local_3c;
  undefined8 *local_30;
  undefined8 *local_28;
  byte *local_18;
  byte *local_10;
  
  local_3c = 0;
  local_28 = (undefined8 *)0x0;
  pxVar2 = (xmlChar *)FUN_1009208b3(param_1,param_4,"processContents");
  if ((pxVar2 == (xmlChar *)0x0) || (iVar1 = _xmlStrEqual(pxVar2,(xmlChar *)"strict"), iVar1 != 0))
  {
    *(undefined4 *)(param_3 + 0x28) = 3;
  }
  else {
    iVar1 = _xmlStrEqual(pxVar2,(xmlChar *)"skip");
    if (iVar1 == 0) {
      iVar1 = _xmlStrEqual(pxVar2,(xmlChar *)"lax");
      if (iVar1 == 0) {
        FUN_10091e207(param_1,0xbdd,0,param_4,0,"(strict | skip | lax)",pxVar2,0,0,0);
        *(undefined4 *)(param_3 + 0x28) = 3;
        local_3c = 0xbdd;
      }
      else {
        *(undefined4 *)(param_3 + 0x28) = 2;
      }
    }
    else {
      *(undefined4 *)(param_3 + 0x28) = 1;
    }
  }
  lVar3 = FUN_100920729(param_4,"namespace");
  local_10 = (byte *)FUN_10092084c(param_1,lVar3);
  if ((lVar3 == 0) || (iVar1 = _xmlStrEqual(local_10,(xmlChar *)"##any"), iVar1 != 0)) {
    *(undefined4 *)(param_3 + 0x2c) = 1;
  }
  else {
    iVar1 = _xmlStrEqual(local_10,(xmlChar *)"##other");
    if (iVar1 == 0) {
      do {
        for (; (*local_10 == 0x20 || (((8 < *local_10 && (*local_10 < 0xb)) || (*local_10 == 0xd))))
            ; local_10 = local_10 + 1) {
        }
        for (local_18 = local_10;
            (((*local_18 != 0 && (*local_18 != 0x20)) && ((*local_18 < 9 || (10 < *local_18)))) &&
            (*local_18 != 0xd)); local_18 = local_18 + 1) {
        }
        if (local_18 == local_10) {
          return local_3c;
        }
        pxVar2 = _xmlStrndup(local_10,(int)local_18 - (int)local_10);
        iVar1 = _xmlStrEqual(pxVar2,(xmlChar *)"##other");
        if ((iVar1 == 0) && (iVar1 = _xmlStrEqual(pxVar2,(xmlChar *)"##any"), iVar1 == 0)) {
          iVar1 = _xmlStrEqual(pxVar2,(xmlChar *)"##targetNamespace");
          if (iVar1 == 0) {
            iVar1 = _xmlStrEqual(pxVar2,(xmlChar *)"##local");
            if (iVar1 == 0) {
              uVar4 = _xmlSchemaGetBuiltInType(0x1d);
              FUN_1009234f4(param_1,0,0,lVar3,pxVar2,uVar4);
              local_48 = _xmlDictLookup(*(xmlDictPtr *)(param_1 + 0x98),pxVar2,-1);
            }
            else {
              local_48 = (xmlChar *)0x0;
            }
          }
          else {
            local_48 = *(xmlChar **)(param_1 + 0xd0);
          }
          for (local_30 = *(undefined8 **)(param_3 + 0x30);
              (local_30 != (undefined8 *)0x0 && ((xmlChar *)local_30[1] != local_48));
              local_30 = (undefined8 *)*local_30) {
          }
          if (local_30 == (undefined8 *)0x0) {
            puVar5 = (undefined8 *)FUN_1009222de(param_1);
            if (puVar5 == (undefined8 *)0x0) {
              (*(code *)_xmlFree)(pxVar2);
              return 0xffffffff;
            }
            puVar5[1] = local_48;
            *puVar5 = 0;
            if (*(long *)(param_3 + 0x30) == 0) {
              *(undefined8 **)(param_3 + 0x30) = puVar5;
              local_28 = puVar5;
            }
            else {
              *local_28 = puVar5;
              local_28 = puVar5;
            }
          }
        }
        else {
          FUN_10091e207(param_1,0x700,0,lVar3,0,
                        "((##any | ##other) | List of (xs:anyURI | (##targetNamespace | ##local)))",
                        pxVar2,0,0,0);
          local_3c = 0x700;
        }
        (*(code *)_xmlFree)(pxVar2);
        local_10 = local_18;
      } while (*local_18 != 0);
    }
    else {
      uVar4 = FUN_1009222de(param_1);
      *(undefined8 *)(param_3 + 0x38) = uVar4;
      if (*(long *)(param_3 + 0x38) == 0) {
        return 0xffffffff;
      }
      *(undefined8 *)(*(long *)(param_3 + 0x38) + 8) = *(undefined8 *)(param_1 + 0xd0);
    }
  }
  return local_3c;
}

