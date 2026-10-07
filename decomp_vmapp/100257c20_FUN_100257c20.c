
undefined1 FUN_100257c20(long param_1)

{
  char cVar1;
  int iVar2;
  undefined1 uVar3;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  QThread::start(param_1 + 8U,7);
  QMutex::lock();
  do {
    iVar2 = *(int *)(param_1 + 0x30);
    while( true ) {
      uVar3 = 1;
      if (iVar2 != -1) goto LAB_100257d04;
      QWaitCondition::wait((QMutex *)(param_1 + 0x28),param_1 + 0x20);
      cVar1 = QThread::wait(param_1 + 8U);
      if (cVar1 == '\0') break;
      iVar2 = *(int *)(param_1 + 0x30);
      if (iVar2 == -1) {
        FUN_1008e3970("","LocalDevices",0,"adev3(%d:%d): thread is failed to start",
                      *(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
        local_48 = 0;
        uStack_40 = 0;
        local_38 = 0;
        FUN_100408ff0(DAT_1011c3698 + 0x10b0,0x80000001,&local_48);
        FUN_10002d9d0(&local_48);
        uVar3 = 0;
LAB_100257d04:
        QMutex::unlock();
        return uVar3;
      }
    }
  } while( true );
}

