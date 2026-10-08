
void FUN_1001d52f0(void)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  undefined4 uVar4;
  
  cVar1 = QSessionManager::allowsInteraction();
  if (cVar1 == '\0') {
    return;
  }
  cVar1 = FUN_100075300();
  uVar4 = 0xffff;
  if (cVar1 != '\0') {
    uVar4 = 1;
  }
  if (DAT_102310920 == (void *)0x0) {
    pvVar3 = operator_new(0x50);
    FUN_1001d1080(pvVar3);
    DAT_10226c778 = 1;
    DAT_102310920 = pvVar3;
  }
  iVar2 = FUN_1001d12b0(DAT_102310920,0,0,uVar4);
  if (-1 < iVar2) {
    QSessionManager::release();
    return;
  }
  QSessionManager::cancel();
  return;
}

