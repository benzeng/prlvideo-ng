
xmlChar * FUN_1001d1aa8(undefined8 *param_1,xmlChar *param_2,xmlChar *param_3)

{
  xmlGenericErrorFunc pxVar1;
  undefined8 uVar2;
  int iVar3;
  xmlGenericErrorFunc *ppxVar4;
  void **ppvVar5;
  xmlChar *pxVar6;
  undefined8 auStack_1e8 [51];
  xmlChar *local_50;
  undefined8 *local_48;
  int local_40;
  int local_3c;
  undefined8 *local_38;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  local_50 = (xmlChar *)0x0;
  local_40 = 0;
  local_3c = 0;
  if (0x32 < *(int *)(param_1 + 8)) {
    FUN_1001ceeac(param_1,0,0x676,"Detected recursion in catalog %s\n",param_1[4],0,0);
    return (xmlChar *)0x0;
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  if (param_3 != (xmlChar *)0x0) {
    local_38 = (undefined8 *)0x0;
    local_30 = 0;
    local_40 = 0;
    for (local_48 = param_1; local_48 != (undefined8 *)0x0; local_48 = (undefined8 *)*local_48) {
      iVar3 = *(int *)(local_48 + 3);
      if (iVar3 == 6) {
        iVar3 = _xmlStrEqual(param_3,(xmlChar *)local_48[4]);
        if (iVar3 != 0) {
          if (DAT_1011b7f00 != 0) {
            ppxVar4 = ___xmlGenericError();
            pxVar1 = *ppxVar4;
            uVar2 = local_48[4];
            ppvVar5 = ___xmlGenericErrorContext();
            (*pxVar1)(*ppvVar5,"Found system match %s\n",uVar2);
          }
          *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
          pxVar6 = _xmlStrdup((xmlChar *)local_48[6]);
          return pxVar6;
        }
      }
      else if (iVar3 < 7) {
        if (iVar3 == 3) {
          local_3c = local_3c + 1;
        }
      }
      else if (iVar3 == 7) {
        local_2c = _xmlStrlen((xmlChar *)local_48[4]);
        if ((local_30 < local_2c) &&
           (iVar3 = _xmlStrncmp(param_3,(xmlChar *)local_48[4],local_2c), iVar3 == 0)) {
          local_30 = local_2c;
          local_38 = local_48;
        }
      }
      else if (iVar3 == 9) {
        iVar3 = _xmlStrlen((xmlChar *)local_48[4]);
        iVar3 = _xmlStrncmp(param_3,(xmlChar *)local_48[4],iVar3);
        if (iVar3 == 0) {
          local_40 = local_40 + 1;
        }
      }
    }
    if (local_38 != (undefined8 *)0x0) {
      if (DAT_1011b7f00 != 0) {
        ppxVar4 = ___xmlGenericError();
        pxVar1 = *ppxVar4;
        uVar2 = local_38[4];
        ppvVar5 = ___xmlGenericErrorContext();
        (*pxVar1)(*ppvVar5,"Using rewriting rule %s\n",uVar2);
      }
      local_50 = _xmlStrdup((xmlChar *)local_38[6]);
      if (local_50 != (xmlChar *)0x0) {
        local_50 = _xmlStrcat(local_50,param_3 + local_30);
      }
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
      return local_50;
    }
    if (local_40 != 0) {
      local_28 = 0;
      local_48 = param_1;
      do {
        while( true ) {
          if (local_48 == (undefined8 *)0x0) {
            *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
            return (xmlChar *)0xffffffffffffffff;
          }
          if (*(int *)(local_48 + 3) == 9) break;
LAB_1001d1ee9:
          local_48 = (undefined8 *)*local_48;
        }
        iVar3 = _xmlStrlen((xmlChar *)local_48[4]);
        iVar3 = _xmlStrncmp(param_3,(xmlChar *)local_48[4],iVar3);
        if (iVar3 != 0) goto LAB_1001d1ee9;
        local_24 = 0;
        while ((local_24 < local_28 &&
               (iVar3 = _xmlStrEqual((xmlChar *)local_48[6],(xmlChar *)auStack_1e8[local_24]),
               iVar3 == 0))) {
          local_24 = local_24 + 1;
        }
        if (local_28 <= local_24) {
          if (local_28 < 0x32) {
            auStack_1e8[local_28] = local_48[6];
            local_28 = local_28 + 1;
          }
          if (local_48[2] == 0) {
            FUN_1001d142d(local_48);
          }
          if (local_48[2] != 0) {
            if (DAT_1011b7f00 != 0) {
              ppxVar4 = ___xmlGenericError();
              pxVar1 = *ppxVar4;
              uVar2 = local_48[6];
              ppvVar5 = ___xmlGenericErrorContext();
              (*pxVar1)(*ppvVar5,"Trying system delegate %s\n",uVar2);
            }
            local_50 = (xmlChar *)FUN_1001d2768(local_48[2],0,param_3);
            if (local_50 != (xmlChar *)0x0) {
              *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
              return local_50;
            }
          }
          goto LAB_1001d1ee9;
        }
        local_48 = (undefined8 *)*local_48;
      } while( true );
    }
  }
  if (param_2 != (xmlChar *)0x0) {
    local_40 = 0;
    for (local_48 = param_1; local_48 != (undefined8 *)0x0; local_48 = (undefined8 *)*local_48) {
      iVar3 = *(int *)(local_48 + 3);
      if (iVar3 == 5) {
        iVar3 = _xmlStrEqual(param_2,(xmlChar *)local_48[4]);
        if (iVar3 != 0) {
          if (DAT_1011b7f00 != 0) {
            ppxVar4 = ___xmlGenericError();
            pxVar1 = *ppxVar4;
            uVar2 = local_48[4];
            ppvVar5 = ___xmlGenericErrorContext();
            (*pxVar1)(*ppvVar5,"Found public match %s\n",uVar2);
          }
          *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
          pxVar6 = _xmlStrdup((xmlChar *)local_48[6]);
          return pxVar6;
        }
      }
      else if (iVar3 == 8) {
        iVar3 = _xmlStrlen((xmlChar *)local_48[4]);
        iVar3 = _xmlStrncmp(param_2,(xmlChar *)local_48[4],iVar3);
        if ((iVar3 == 0) && (*(int *)(local_48 + 7) == 1)) {
          local_40 = local_40 + 1;
        }
      }
      else if ((iVar3 == 3) && (param_3 == (xmlChar *)0x0)) {
        local_3c = local_3c + 1;
      }
    }
    if (local_40 != 0) {
      local_20 = 0;
      local_48 = param_1;
      do {
        while( true ) {
          if (local_48 == (undefined8 *)0x0) {
            *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
            return (xmlChar *)0xffffffffffffffff;
          }
          if ((*(int *)(local_48 + 3) == 8) && (*(int *)(local_48 + 7) == 1)) break;
LAB_1001d21de:
          local_48 = (undefined8 *)*local_48;
        }
        iVar3 = _xmlStrlen((xmlChar *)local_48[4]);
        iVar3 = _xmlStrncmp(param_2,(xmlChar *)local_48[4],iVar3);
        if (iVar3 != 0) goto LAB_1001d21de;
        local_1c = 0;
        while ((local_1c < local_20 &&
               (iVar3 = _xmlStrEqual((xmlChar *)local_48[6],(xmlChar *)auStack_1e8[local_1c]),
               iVar3 == 0))) {
          local_1c = local_1c + 1;
        }
        if (local_20 <= local_1c) {
          if (local_20 < 0x32) {
            auStack_1e8[local_20] = local_48[6];
            local_20 = local_20 + 1;
          }
          if (local_48[2] == 0) {
            FUN_1001d142d(local_48);
          }
          if (local_48[2] != 0) {
            if (DAT_1011b7f00 != 0) {
              ppxVar4 = ___xmlGenericError();
              pxVar1 = *ppxVar4;
              uVar2 = local_48[6];
              ppvVar5 = ___xmlGenericErrorContext();
              (*pxVar1)(*ppvVar5,"Trying public delegate %s\n",uVar2);
            }
            local_50 = (xmlChar *)FUN_1001d2768(local_48[2],param_2,0);
            if (local_50 != (xmlChar *)0x0) {
              *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
              return local_50;
            }
          }
          goto LAB_1001d21de;
        }
        local_48 = (undefined8 *)*local_48;
      } while( true );
    }
  }
  local_48 = param_1;
  if (local_3c != 0) {
    for (; local_48 != (undefined8 *)0x0; local_48 = (undefined8 *)*local_48) {
      if (*(int *)(local_48 + 3) == 3) {
        if (local_48[2] == 0) {
          FUN_1001d142d(local_48);
        }
        if ((local_48[2] != 0) &&
           (local_50 = (xmlChar *)FUN_1001d2768(local_48[2],param_2,param_3),
           local_50 != (xmlChar *)0x0)) {
          *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
          return local_50;
        }
      }
    }
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
  return (xmlChar *)0x0;
}

