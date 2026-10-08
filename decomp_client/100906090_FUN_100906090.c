
long FUN_100906090(undefined8 *param_1,xmlChar *param_2,xmlChar *param_3)

{
  xmlGenericErrorFunc pxVar1;
  int iVar2;
  xmlChar *pxVar3;
  long lVar4;
  xmlGenericErrorFunc *ppxVar5;
  void **ppvVar6;
  xmlChar *str2;
  long local_60;
  xmlChar *local_58;
  xmlChar *local_48;
  undefined8 *local_40;
  long local_30;
  
  local_30 = 0;
  if (param_1 == (undefined8 *)0x0) {
    local_60 = 0;
  }
  else if ((param_2 == (xmlChar *)0x0) && (param_3 == (xmlChar *)0x0)) {
    local_60 = 0;
  }
  else {
    pxVar3 = (xmlChar *)FUN_100903f86(param_2);
    local_48 = param_2;
    if (pxVar3 != (xmlChar *)0x0) {
      local_58 = pxVar3;
      if (*pxVar3 == '\0') {
        local_58 = (xmlChar *)0x0;
      }
      local_48 = local_58;
    }
    iVar2 = _xmlStrncmp(local_48,(xmlChar *)"urn:publicid:",0xd);
    if (iVar2 == 0) {
      lVar4 = FUN_1009038ae(local_48);
      if (DAT_102312c80 != 0) {
        if (lVar4 == 0) {
          ppxVar5 = ___xmlGenericError();
          pxVar1 = *ppxVar5;
          ppvVar6 = ___xmlGenericErrorContext();
          (*pxVar1)(*ppvVar6,"Public URN ID %s expanded to NULL\n",local_48);
        }
        else {
          ppxVar5 = ___xmlGenericError();
          pxVar1 = *ppxVar5;
          ppvVar6 = ___xmlGenericErrorContext();
          (*pxVar1)(*ppvVar6,"Public URN ID expanded to %s\n",lVar4);
        }
      }
      local_60 = FUN_100906090(param_1,lVar4,param_3);
      if (lVar4 != 0) {
        (*(code *)_xmlFree)(lVar4);
      }
      if (pxVar3 != (xmlChar *)0x0) {
        (*(code *)_xmlFree)(pxVar3);
      }
    }
    else {
      iVar2 = _xmlStrncmp(param_3,(xmlChar *)"urn:publicid:",0xd);
      local_40 = param_1;
      if (iVar2 == 0) {
        str2 = (xmlChar *)FUN_1009038ae(param_3);
        if (DAT_102312c80 != 0) {
          if (str2 == (xmlChar *)0x0) {
            ppxVar5 = ___xmlGenericError();
            pxVar1 = *ppxVar5;
            ppvVar6 = ___xmlGenericErrorContext();
            (*pxVar1)(*ppvVar6,"System URN ID %s expanded to NULL\n",param_3);
          }
          else {
            ppxVar5 = ___xmlGenericError();
            pxVar1 = *ppxVar5;
            ppvVar6 = ___xmlGenericErrorContext();
            (*pxVar1)(*ppvVar6,"System URN ID expanded to %s\n",str2);
          }
        }
        if (local_48 == (xmlChar *)0x0) {
          local_30 = FUN_100906090(param_1,str2,0);
        }
        else {
          iVar2 = _xmlStrEqual(local_48,str2);
          if (iVar2 == 0) {
            local_30 = FUN_100906090(param_1,local_48,str2);
          }
          else {
            local_30 = FUN_100906090(param_1,local_48,0);
          }
        }
        if (str2 != (xmlChar *)0x0) {
          (*(code *)_xmlFree)(str2);
        }
        if (pxVar3 != (xmlChar *)0x0) {
          (*(code *)_xmlFree)(pxVar3);
        }
        local_60 = local_30;
      }
      else {
        for (; local_40 != (undefined8 *)0x0; local_40 = (undefined8 *)*local_40) {
          if (*(int *)(local_40 + 3) == 1) {
            if (local_40[2] == 0) {
              FUN_100904d55(local_40);
            }
            if ((local_40[2] != 0) &&
               (local_30 = FUN_1009053d0(local_40[2],local_48,param_3), local_30 != 0)) {
              if (pxVar3 == (xmlChar *)0x0) {
                return local_30;
              }
              (*(code *)_xmlFree)(pxVar3);
              return local_30;
            }
          }
        }
        if (pxVar3 != (xmlChar *)0x0) {
          (*(code *)_xmlFree)(pxVar3);
        }
        local_60 = local_30;
      }
    }
  }
  return local_60;
}

