
void FUN_100db5560(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  
  QMutex::lock();
  iVar1 = *(int *)(param_1 + 0x34);
  iVar4 = iVar1 + -1;
  *(int *)(param_1 + 0x34) = iVar4;
  if (iVar1 < 1) {
    FUN_100df99c0("","AbstractFile",0,"Reference count is lower than zero.");
    iVar4 = *(int *)(param_1 + 0x34);
  }
  if (iVar4 == 0) {
    QMutex::lock();
    lVar2 = *(long *)(param_1 + 0x50);
    lVar3 = *(long *)(lVar2 + 0x20);
    *(long *)(lVar3 + 8) = param_1 + 0x38;
    *(long *)(param_1 + 0x38) = lVar3;
    *(long *)(param_1 + 0x40) = lVar2 + 0x20;
    *(long *)(lVar2 + 0x20) = param_1 + 0x38;
    QMutex::unlock();
  }
  QMutex::unlock();
  if (*(int *)(*(long *)(param_1 + 0x50) + 0x10) == -2) {
    return;
  }
  FUN_100db5430(param_1);
  return;
}

