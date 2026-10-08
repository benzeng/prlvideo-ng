
undefined8 FUN_1001e44b0(long param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  QMutex::lock();
  *(undefined1 *)(param_1 + 0x18) = 1;
  QMutex::unlock();
  iVar2 = FUN_1001e4590();
  if (-1 < iVar2) {
    cVar1 = UpgradeUtils::isNeedToInstallUpdateOnAppStart((int *)0x0);
    uVar3 = 0x80000013;
    if (cVar1 == '\0') {
      uVar3 = 0;
    }
    FUN_1001e50a0(param_1,5,uVar3);
    if (cVar1 == '\0') {
      FUN_1001e4b70(param_1);
    }
  }
  QMutex::lock();
  *(undefined1 *)(param_1 + 0x18) = 0;
  QMutex::unlock();
  return 0;
}

