
void _xmlPushInput(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  xmlGenericErrorFunc pxVar3;
  undefined8 uVar4;
  int *piVar5;
  xmlGenericErrorFunc *ppxVar6;
  void **ppvVar7;
  
  if (param_2 != 0) {
    piVar5 = ___xmlParserDebugEntities();
    if (*piVar5 != 0) {
      if ((*(long *)(param_1 + 0x38) != 0) && (*(long *)(*(long *)(param_1 + 0x38) + 8) != 0)) {
        ppxVar6 = ___xmlGenericError();
        pxVar3 = *ppxVar6;
        uVar1 = *(uint *)(*(long *)(param_1 + 0x38) + 0x34);
        uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 8);
        ppvVar7 = ___xmlGenericErrorContext();
        (*pxVar3)(*ppvVar7,"%s(%d): ",uVar4,(ulong)uVar1);
      }
      ppxVar6 = ___xmlGenericError();
      pxVar3 = *ppxVar6;
      uVar4 = *(undefined8 *)(param_2 + 0x20);
      iVar2 = *(int *)(param_1 + 0x40);
      ppvVar7 = ___xmlGenericErrorContext();
      (*pxVar3)(*ppvVar7,"Pushing input %d : %.30s\n",(ulong)(iVar2 + 1),uVar4);
    }
    _inputPush(param_1,param_2);
    if (*(int *)(param_1 + 0x1c4) == 0) {
      if (*(long *)(*(long *)(param_1 + 0x38) + 0x28) - *(long *)(*(long *)(param_1 + 0x38) + 0x20)
          < 0xfa) {
        FUN_100146394(param_1);
      }
    }
  }
  return;
}

