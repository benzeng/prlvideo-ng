
long FUN_1001d2a8f(undefined8 *param_1,xmlChar *param_2)

{
  xmlGenericErrorFunc pxVar1;
  int iVar2;
  long lVar3;
  xmlGenericErrorFunc *ppxVar4;
  void **ppvVar5;
  long local_40;
  undefined8 *local_30;
  long local_28;
  
  local_28 = 0;
  if (param_1 == (undefined8 *)0x0) {
    local_40 = 0;
  }
  else if (param_2 == (xmlChar *)0x0) {
    local_40 = 0;
  }
  else {
    iVar2 = _xmlStrncmp(param_2,(xmlChar *)"urn:publicid:",0xd);
    local_30 = param_1;
    if (iVar2 == 0) {
      lVar3 = FUN_1001cff86(param_2);
      if (DAT_1011b7f00 != 0) {
        if (lVar3 == 0) {
          ppxVar4 = ___xmlGenericError();
          pxVar1 = *ppxVar4;
          ppvVar5 = ___xmlGenericErrorContext();
          (*pxVar1)(*ppvVar5,"URN ID %s expanded to NULL\n",param_2);
        }
        else {
          ppxVar4 = ___xmlGenericError();
          pxVar1 = *ppxVar4;
          ppvVar5 = ___xmlGenericErrorContext();
          (*pxVar1)(*ppvVar5,"URN ID expanded to %s\n",lVar3);
        }
      }
      local_40 = FUN_1001d2768(param_1,lVar3,0);
      if (lVar3 != 0) {
        (*(code *)_xmlFree)(lVar3);
      }
    }
    else {
      for (; local_30 != (undefined8 *)0x0; local_30 = (undefined8 *)*local_30) {
        if (*(int *)(local_30 + 3) == 1) {
          if (local_30[2] == 0) {
            FUN_1001d142d(local_30);
          }
          if ((local_30[2] != 0) && (local_28 = FUN_1001d22f9(local_30[2],param_2), local_28 != 0))
          {
            return local_28;
          }
        }
      }
      local_40 = local_28;
    }
  }
  return local_40;
}

