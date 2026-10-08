
void FUN_10098aec0(QThread *param_1,char param_2)

{
  char cVar1;
  undefined8 uVar2;
  QArrayData *local_48;
  undefined1 local_40 [15];
  undefined1 local_31;
  
  QThread::QThread(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_102233410;
  QSemaphore::QSemaphore((QSemaphore *)(param_1 + 0x20),1);
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0xffffffffffffffff;
  FUN_10098bc20(local_40);
  do {
    cVar1 = FUN_10098bcc0(local_40);
    if (cVar1 == '\0') {
      FUN_10098bc60(local_40);
      *(int *)(param_1 + 0x10) =
           (int)((ulong)(*(long *)(param_1 + 0x30) - *(long *)(param_1 + 0x28)) >> 3);
      FUN_10098b550("BattWatcher::BatteryState",0,0);
      if (param_2 != '\0') {
        QThread::start(param_1,7);
      }
      return;
    }
    FUN_10098bcd0(&local_48);
    uVar2 = FUN_10098ba60(&local_48);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10098afa6;
      }
      QArrayData::deallocate(local_48,2,8);
    }
LAB_10098afa6:
    if (*(undefined8 **)(param_1 + 0x30) == *(undefined8 **)(param_1 + 0x38)) {
      FUN_10098b620(param_1 + 0x28);
    }
    else {
      **(undefined8 **)(param_1 + 0x30) = uVar2;
      *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + 8;
    }
    FUN_10098bc90(local_40);
  } while( true );
}

