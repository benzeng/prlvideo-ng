
undefined4 FUN_1001e4b30(undefined8 param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = UpgradeUtils::isNeedToInstallUpdateOnAppStart((int *)0x0);
  uVar2 = 0x80000013;
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  FUN_1001e50a0(param_1,5,uVar2);
  return uVar2;
}

