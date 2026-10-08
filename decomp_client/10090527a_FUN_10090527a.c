
undefined4 FUN_10090527a(long param_1,xmlChar *param_2)

{
  xmlGenericErrorFunc pxVar1;
  undefined8 uVar2;
  int iVar3;
  xmlGenericErrorFunc *ppxVar4;
  void **ppvVar5;
  undefined4 local_3c;
  undefined8 *local_28;
  
  if ((param_1 == 0) || ((*(int *)(param_1 + 0x18) != 1 && (*(int *)(param_1 + 0x18) != 2)))) {
    local_3c = 0xffffffff;
  }
  else if (param_2 == (xmlChar *)0x0) {
    local_3c = 0xffffffff;
  }
  else {
    if (*(long *)(param_1 + 0x10) == 0) {
      FUN_100904d55(param_1);
    }
    for (local_28 = *(undefined8 **)(param_1 + 0x10); local_28 != (undefined8 *)0x0;
        local_28 = (undefined8 *)*local_28) {
      if (local_28[4] == 0) {
LAB_10090531b:
        iVar3 = _xmlStrEqual(param_2,(xmlChar *)local_28[5]);
        if (iVar3 != 0) goto LAB_100905330;
      }
      else {
        iVar3 = _xmlStrEqual(param_2,(xmlChar *)local_28[4]);
        if (iVar3 == 0) goto LAB_10090531b;
LAB_100905330:
        if (DAT_102312c80 != 0) {
          if (local_28[4] == 0) {
            ppxVar4 = ___xmlGenericError();
            pxVar1 = *ppxVar4;
            uVar2 = local_28[5];
            ppvVar5 = ___xmlGenericErrorContext();
            (*pxVar1)(*ppvVar5,"Removing element %s from catalog\n",uVar2);
          }
          else {
            ppxVar4 = ___xmlGenericError();
            pxVar1 = *ppxVar4;
            uVar2 = local_28[4];
            ppvVar5 = ___xmlGenericErrorContext();
            (*pxVar1)(*ppvVar5,"Removing element %s from catalog\n",uVar2);
          }
        }
        *(undefined4 *)(local_28 + 3) = 0xffffffff;
      }
    }
    local_3c = 0;
  }
  return local_3c;
}

