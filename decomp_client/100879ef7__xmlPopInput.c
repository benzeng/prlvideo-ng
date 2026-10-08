
undefined1 _xmlPopInput(long param_1)

{
  uint uVar1;
  xmlGenericErrorFunc pxVar2;
  undefined1 uVar3;
  int iVar4;
  int *piVar5;
  xmlGenericErrorFunc *ppxVar6;
  void **ppvVar7;
  undefined8 uVar8;
  
  if ((param_1 == 0) || (*(int *)(param_1 + 0x40) < 2)) {
    uVar3 = 0;
  }
  else {
    piVar5 = ___xmlParserDebugEntities();
    if (*piVar5 != 0) {
      ppxVar6 = ___xmlGenericError();
      pxVar2 = *ppxVar6;
      uVar1 = *(uint *)(param_1 + 0x40);
      ppvVar7 = ___xmlGenericErrorContext();
      (*pxVar2)(*ppvVar7,"Popping input %d\n",(ulong)uVar1);
    }
    uVar8 = _inputPop(param_1);
    _xmlFreeInputStream(uVar8);
    if ((**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '\0') &&
       (iVar4 = _xmlParserInputGrow(*(xmlParserInputPtr *)(param_1 + 0x38),0xfa), iVar4 < 1)) {
      uVar3 = _xmlPopInput(param_1);
      return uVar3;
    }
    uVar3 = **(undefined1 **)(*(long *)(param_1 + 0x38) + 0x20);
  }
  return uVar3;
}

