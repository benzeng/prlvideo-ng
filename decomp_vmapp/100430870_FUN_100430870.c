
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100430870(QTimerEvent *param_1,long param_2)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  undefined8 local_38;
  undefined8 uStack_30;
  
  if (*(int *)(param_2 + 0x14) == *(int *)(param_1 + 0x42f8)) {
    QObject::killTimer((int)param_1);
    *(undefined4 *)(param_1 + 0x42f8) = 0xffffffff;
    if (DAT_1011bbeb0 == '\0') {
      iVar2 = ___cxa_guard_acquire(&DAT_1011bbeb0);
      if (iVar2 != 0) {
        _DAT_1011bbea8 = PTR_shared_null_100ba20d0;
        ___cxa_atexit(FUN_10002f530,&DAT_1011bbea8,0x100000000);
        ___cxa_guard_release(&DAT_1011bbeb0);
      }
    }
    FUN_100430650(param_1,&DAT_1011bbea8);
    return;
  }
  if (*(int *)(param_2 + 0x14) == *(int *)(param_1 + 0x4300)) {
    QMutex::lock();
    bVar3 = true;
    if (*(long *)(param_1 + 0x42e8) != 0) {
      local_38 = 0;
      uStack_30 = 0;
      cVar1 = FUN_1000d7930(*(long *)(param_1 + 0x42e8),&local_38);
      if (cVar1 != '\0') {
        if (((int)local_38 != *(int *)(param_1 + 0x4304)) ||
           (local_38._4_4_ != *(int *)(param_1 + 0x4308))) {
          *(int *)(param_1 + 0x4304) = (int)local_38;
          *(int *)(param_1 + 0x4308) = local_38._4_4_;
          QMutex::unlock();
          bVar3 = false;
          FUN_100434830(param_1,0x18982,&local_38,0x10,&DAT_1011ccb98,0);
        }
      }
    }
    if (bVar3) {
      QMutex::unlock();
    }
    return;
  }
  QObject::timerEvent(param_1);
  return;
}

