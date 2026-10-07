
undefined1 FUN_1003fc600(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined8 in_RAX;
  ulong uVar6;
  undefined4 uVar7;
  
  uVar7 = (undefined4)((ulong)in_RAX >> 0x20);
  if (*(long *)(param_1 + 0x40) == 0) {
    uVar3 = QThread::isRunning();
    return uVar3;
  }
  uVar6 = *(ulong *)(param_1 + 0x50);
  if ((uVar6 < *(ulong *)(param_1 + 0x68)) &&
     (*(ulong *)(param_1 + 0x48) < *(ulong *)(param_1 + 0x60))) {
    uVar4 = QTime::elapsed();
    if (uVar4 <= (uint)(*(int *)(param_1 + 0x5c) * 1000)) {
      puVar2 = *(undefined8 **)(param_1 + 0x40);
      *puVar2 = param_2;
      puVar2[1] = param_3;
      *(undefined8 **)(param_1 + 0x40) = puVar2 + 2;
      *(long *)(param_1 + 0x48) = param_3 + *(long *)(param_1 + 0x48);
      *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
      return 1;
    }
    uVar6 = *(ulong *)(param_1 + 0x50);
  }
  lVar1 = *(long *)(param_1 + 0x48);
  uVar5 = QTime::elapsed();
  FUN_1008e3970("[RH]","HddUtils",0,"total %lld MB, %lld reqs, %d msec",
                (ulong)(param_4 * lVar1) >> 0x14,uVar6,CONCAT44(uVar7,uVar5));
  *(undefined8 *)(param_1 + 0x40) = 0;
  if (0x4fff < *(ulong *)(param_1 + 0x48)) {
    QMutex::lock();
    if (*(char *)(param_1 + 0x28) == '\0') {
      QThread::start(param_1,7);
    }
    QMutex::unlock();
    FUN_100067920(DAT_1011c3650);
    return 1;
  }
  return 0;
}

