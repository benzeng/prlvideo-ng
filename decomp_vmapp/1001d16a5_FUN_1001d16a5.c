
undefined4 FUN_1001d16a5(long param_1,undefined8 param_2,xmlChar *param_3,xmlChar *param_4)

{
  long lVar1;
  xmlGenericErrorFunc pxVar2;
  int iVar3;
  int iVar4;
  xmlGenericErrorFunc *ppxVar5;
  void **ppvVar6;
  xmlChar *pxVar7;
  undefined8 uVar8;
  long lVar9;
  void *pvVar10;
  undefined4 local_4c;
  long *local_28;
  
  if ((param_1 == 0) || ((*(int *)(param_1 + 0x18) != 1 && (*(int *)(param_1 + 0x18) != 2)))) {
    local_4c = 0xffffffff;
  }
  else {
    if (*(long *)(param_1 + 0x10) == 0) {
      FUN_1001d142d(param_1);
    }
    lVar1 = *(long *)(param_1 + 0x10);
    iVar3 = FUN_1001d07d8(param_2);
    if (iVar3 == 0) {
      if (DAT_1011b7f00 != 0) {
        ppxVar5 = ___xmlGenericError();
        pxVar2 = *ppxVar5;
        ppvVar6 = ___xmlGenericErrorContext();
        (*pxVar2)(*ppvVar6,"Failed to add unknown element %s to catalog\n",param_2);
      }
      local_4c = 0xffffffff;
    }
    else {
      local_28 = *(long **)(param_1 + 0x10);
      if (local_28 != (long *)0x0) {
        for (; local_28 != (long *)0x0; local_28 = (long *)*local_28) {
          if (((param_3 != (xmlChar *)0x0) && ((int)local_28[3] == iVar3)) &&
             (iVar4 = _xmlStrEqual(param_3,(xmlChar *)local_28[4]), iVar4 != 0)) {
            if (DAT_1011b7f00 != 0) {
              ppxVar5 = ___xmlGenericError();
              pxVar2 = *ppxVar5;
              ppvVar6 = ___xmlGenericErrorContext();
              (*pxVar2)(*ppvVar6,"Updating element %s to catalog\n",param_2);
            }
            if (local_28[5] != 0) {
              (*(code *)_xmlFree)(local_28[5]);
            }
            if (local_28[6] != 0) {
              (*(code *)_xmlFree)(local_28[6]);
            }
            pxVar7 = _xmlStrdup(param_4);
            local_28[5] = (long)pxVar7;
            pxVar7 = _xmlStrdup(param_4);
            local_28[6] = (long)pxVar7;
            return 0;
          }
          if (*local_28 == 0) break;
        }
      }
      if (DAT_1011b7f00 != 0) {
        ppxVar5 = ___xmlGenericError();
        pxVar2 = *ppxVar5;
        ppvVar6 = ___xmlGenericErrorContext();
        (*pxVar2)(*ppvVar6,"Adding element %s to catalog\n",param_2);
      }
      if (local_28 == (long *)0x0) {
        uVar8 = FUN_1001cef6b(iVar3,param_3,param_4,0,*(undefined4 *)(param_1 + 0x38),0);
        *(undefined8 *)(param_1 + 0x10) = uVar8;
      }
      else {
        lVar9 = FUN_1001cef6b(iVar3,param_3,param_4,0,*(undefined4 *)(param_1 + 0x38),0);
        *local_28 = lVar9;
      }
      if ((lVar1 == 0) &&
         (pvVar10 = _xmlHashLookup(DAT_1011b7f08,*(xmlChar **)(param_1 + 0x30)),
         pvVar10 != (void *)0x0)) {
        *(undefined8 *)((long)pvVar10 + 0x10) = *(undefined8 *)(param_1 + 0x10);
      }
      local_4c = 0;
    }
  }
  return local_4c;
}

