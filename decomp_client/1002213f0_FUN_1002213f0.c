
undefined8 FUN_1002213f0(long param_1)

{
  char cVar1;
  undefined4 uVar2;
  void *pvVar3;
  undefined8 uVar4;
  
  if (DAT_102310998 == (void *)0x0) {
    pvVar3 = operator_new(0x18);
    FUN_1006faf60(pvVar3);
    DAT_102274400 = 1;
    DAT_102310998 = pvVar3;
  }
  pvVar3 = DAT_102310998;
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
  }
  uVar2 = FUN_10018f860(uVar4);
  cVar1 = FUN_1006fb710(pvVar3,uVar2);
  if (cVar1 != '\0') {
    MacUtils::showAccessibilityUsagePromptIfNeeded(false);
  }
  return 0;
}

