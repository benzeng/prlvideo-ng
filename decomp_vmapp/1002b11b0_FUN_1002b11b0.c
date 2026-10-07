
long FUN_1002b11b0(long *param_1,uint param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined4 *param_5)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar3 = (ulong)param_2;
  QMutex::lock();
  if (-1 < (int)param_1[0x118]) {
    uVar2 = 1 << ((byte)param_2 & 0x1f);
    *(uint *)((long)param_1 + 0x8cc) = *(uint *)((long)param_1 + 0x8cc) | uVar2;
    QWaitCondition::wakeOne();
    if ((*(uint *)((long)param_1 + 0x8cc) >> (param_2 & 0x1f) & 1) != 0) {
      do {
        QWaitCondition::wait((QMutex *)(param_1 + 0x113),(ulong)(param_1 + 0x10f));
      } while ((*(uint *)((long)param_1 + 0x8cc) & uVar2) != 0);
    }
  }
  QMutex::unlock();
  QMutex::lock();
  if ((int)param_1[0x118] == 0) {
    lVar1 = uVar3 * 0x8f0;
    if ((int)param_1[uVar3 * 0x11e + 0x12a] != 0) {
      *(undefined4 *)(param_1 + uVar3 * 0x11e + 0x12a) = 0;
    }
    if (*(int *)((long)param_1 + lVar1 + 0x954) != 0) {
      *(undefined4 *)((long)param_1 + lVar1 + 0x954) = 0;
    }
    if (*(uint *)(param_1 + uVar3 * 0x11e + 299) < 0x3fff) {
      *(undefined4 *)(param_1 + uVar3 * 0x11e + 299) = 0x3fff;
    }
    if (*(uint *)((long)param_1 + lVar1 + 0x95c) < 0x3fff) {
      *(undefined4 *)((long)param_1 + lVar1 + 0x95c) = 0x3fff;
    }
    (**(code **)(*param_1 + 0x30))(param_1);
  }
  lVar1 = uVar3 * 0x8f0;
  *param_3 = (int)param_1[uVar3 * 0x11e + 0x127];
  *param_4 = *(undefined4 *)((long)param_1 + lVar1 + 0x93c);
  if ((int)param_1[uVar3 * 0x11e + 0x128] == 0x20) {
    *param_5 = *(undefined4 *)((long)param_1 + lVar1 + 0x934);
    lVar1 = (ulong)*(uint *)(param_1 + uVar3 * 0x11e + 0x126) + param_1[0x124];
  }
  else {
    FUN_1002ac850(param_1,uVar3,0,0,(int)param_1[uVar3 * 0x11e + 0x127],
                  *(undefined4 *)((long)param_1 + lVar1 + 0x93c));
    *param_5 = (int)param_1[uVar3 * 0x11e + 0x132];
    lVar1 = param_1[uVar3 * 0x11e + 0x131];
  }
  QMutex::unlock();
  return lVar1;
}

