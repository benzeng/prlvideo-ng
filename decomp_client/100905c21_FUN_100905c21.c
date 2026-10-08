
xmlChar * FUN_100905c21(undefined8 *param_1,xmlChar *param_2)

{
  xmlGenericErrorFunc pxVar1;
  undefined8 uVar2;
  int iVar3;
  xmlChar *pxVar4;
  xmlGenericErrorFunc *ppxVar5;
  void **ppvVar6;
  xmlChar *local_1f8;
  undefined8 auStack_1d8 [50];
  xmlChar *local_48;
  undefined8 *local_40;
  int local_38;
  int local_34;
  undefined8 *local_30;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  local_48 = (xmlChar *)0x0;
  local_34 = 0;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  if (param_1 == (undefined8 *)0x0) {
    local_1f8 = (xmlChar *)0x0;
  }
  else if (param_2 == (xmlChar *)0x0) {
    local_1f8 = (xmlChar *)0x0;
  }
  else {
    local_38 = 0;
    for (local_40 = param_1; local_40 != (undefined8 *)0x0; local_40 = (undefined8 *)*local_40) {
      iVar3 = *(int *)(local_40 + 3);
      if (iVar3 == 10) {
        iVar3 = _xmlStrEqual(param_2,(xmlChar *)local_40[4]);
        if (iVar3 != 0) {
          if (DAT_102312c80 != 0) {
            ppxVar5 = ___xmlGenericError();
            pxVar1 = *ppxVar5;
            uVar2 = local_40[4];
            ppvVar6 = ___xmlGenericErrorContext();
            (*pxVar1)(*ppvVar6,"Found URI match %s\n",uVar2);
          }
          pxVar4 = _xmlStrdup((xmlChar *)local_40[6]);
          return pxVar4;
        }
      }
      else if (iVar3 < 0xb) {
        if (iVar3 == 3) {
          local_34 = local_34 + 1;
        }
      }
      else if (iVar3 == 0xb) {
        local_24 = _xmlStrlen((xmlChar *)local_40[4]);
        if ((local_28 < local_24) &&
           (iVar3 = _xmlStrncmp(param_2,(xmlChar *)local_40[4],local_24), iVar3 == 0)) {
          local_28 = local_24;
          local_30 = local_40;
        }
      }
      else if (iVar3 == 0xc) {
        iVar3 = _xmlStrlen((xmlChar *)local_40[4]);
        iVar3 = _xmlStrncmp(param_2,(xmlChar *)local_40[4],iVar3);
        if (iVar3 == 0) {
          local_38 = local_38 + 1;
        }
      }
    }
    if (local_30 == (undefined8 *)0x0) {
      if (local_38 != 0) {
        local_20 = 0;
        local_40 = param_1;
        do {
          while( true ) {
            if (local_40 == (undefined8 *)0x0) {
              return (xmlChar *)0xffffffffffffffff;
            }
            if ((*(int *)(local_40 + 3) == 9) || (*(int *)(local_40 + 3) == 0xc)) break;
LAB_100905fcc:
            local_40 = (undefined8 *)*local_40;
          }
          iVar3 = _xmlStrlen((xmlChar *)local_40[4]);
          iVar3 = _xmlStrncmp(param_2,(xmlChar *)local_40[4],iVar3);
          if (iVar3 != 0) goto LAB_100905fcc;
          local_1c = 0;
          while ((local_1c < local_20 &&
                 (iVar3 = _xmlStrEqual((xmlChar *)local_40[6],(xmlChar *)auStack_1d8[local_1c]),
                 iVar3 == 0))) {
            local_1c = local_1c + 1;
          }
          if (local_20 <= local_1c) {
            if (local_20 < 0x32) {
              auStack_1d8[local_20] = local_40[6];
              local_20 = local_20 + 1;
            }
            if (local_40[2] == 0) {
              FUN_100904d55(local_40);
            }
            if (local_40[2] != 0) {
              if (DAT_102312c80 != 0) {
                ppxVar5 = ___xmlGenericError();
                pxVar1 = *ppxVar5;
                uVar2 = local_40[6];
                ppvVar6 = ___xmlGenericErrorContext();
                (*pxVar1)(*ppvVar6,"Trying URI delegate %s\n",uVar2);
              }
              local_48 = (xmlChar *)FUN_1009063b7(local_40[2],param_2);
              if (local_48 != (xmlChar *)0x0) {
                return local_48;
              }
            }
            goto LAB_100905fcc;
          }
          local_40 = (undefined8 *)*local_40;
        } while( true );
      }
      local_40 = param_1;
      if (local_34 != 0) {
        for (; local_40 != (undefined8 *)0x0; local_40 = (undefined8 *)*local_40) {
          if (*(int *)(local_40 + 3) == 3) {
            if (local_40[2] == 0) {
              FUN_100904d55(local_40);
            }
            if ((local_40[2] != 0) &&
               (local_48 = (xmlChar *)FUN_1009063b7(local_40[2],param_2), local_48 != (xmlChar *)0x0
               )) {
              return local_48;
            }
          }
        }
      }
      local_1f8 = (xmlChar *)0x0;
    }
    else {
      if (DAT_102312c80 != 0) {
        ppxVar5 = ___xmlGenericError();
        pxVar1 = *ppxVar5;
        uVar2 = local_30[4];
        ppvVar6 = ___xmlGenericErrorContext();
        (*pxVar1)(*ppvVar6,"Using rewriting rule %s\n",uVar2);
      }
      local_48 = _xmlStrdup((xmlChar *)local_30[6]);
      if (local_48 != (xmlChar *)0x0) {
        local_48 = _xmlStrcat(local_48,param_2 + local_28);
      }
      local_1f8 = local_48;
    }
  }
  return local_1f8;
}

