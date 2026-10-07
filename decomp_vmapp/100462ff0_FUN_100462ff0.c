
void FUN_100462ff0(QThread *param_1,char param_2)

{
  char cVar1;
  undefined8 uVar2;
  QArrayData *local_48;
  undefined1 local_40 [15];
  undefined1 local_31;
  
  QThread::QThread(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_100bc1200;
  QSemaphore::QSemaphore((QSemaphore *)(param_1 + 0x20),1);
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0xffffffffffffffff;
  FUN_100463d50(local_40);
  do {
    cVar1 = FUN_100463df0(local_40);
    if (cVar1 == '\0') {
      FUN_100463d90(local_40);
      *(int *)(param_1 + 0x10) =
           (int)((ulong)(*(long *)(param_1 + 0x30) - *(long *)(param_1 + 0x28)) >> 3);
      FUN_100463680("BattWatcher::BatteryState",0,0);
      if (param_2 != '\0') {
        QThread::start(param_1,7);
      }
      return;
    }
    FUN_100463e00(&local_48);
    uVar2 = FUN_100463b90(&local_48);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1004630d6;
      }
      QArrayData::deallocate(local_48,2,8);
    }
LAB_1004630d6:
    if (*(undefined8 **)(param_1 + 0x30) == *(undefined8 **)(param_1 + 0x38)) {
      FUN_100463750(param_1 + 0x28);
    }
    else {
      **(undefined8 **)(param_1 + 0x30) = uVar2;
      *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + 8;
    }
    FUN_100463dc0(local_40);
  } while( true );
}

