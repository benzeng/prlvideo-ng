
void FUN_100061010(long param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  
  if (param_2 == 0) {
    iVar1 = FUN_1006d65a0();
    if ((iVar1 != 0) || (*(char *)(DAT_1011c3698 + 0x1ab8) == '\0')) {
      FUN_1008e3970("","vm",0,"Connection with dispatcher has been lost (!)");
      FUN_1008e3970("","vm",0,"Vm will be stopped (!)");
      FUN_1000759a0(*(undefined8 *)(param_1 + 0x10));
      return;
    }
    uVar3 = param_1 + 0x50;
    if ((uVar3 & 1) == 0) {
      QReadWriteLock::lockForWrite();
      uVar3 = uVar3 | 1;
    }
    if (*(int *)(param_1 + 0x58) == 0) {
      uVar2 = QObject::startTimer(param_1,10000,1);
      *(undefined4 *)(param_1 + 0x58) = uVar2;
    }
    if ((uVar3 & 1) != 0) {
      QReadWriteLock::unlock();
      return;
    }
  }
  return;
}

