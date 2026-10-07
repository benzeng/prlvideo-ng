
undefined8 FUN_1002e2160(long param_1,long param_2)

{
  int *piVar1;
  uint uVar2;
  long lVar3;
  char cVar4;
  long lVar5;
  char local_31;
  
  lVar3 = *(long *)(*(long *)(param_1 + 8) + 0x40 + ((ulong)*(uint *)(param_2 + 0x44c) & 0xff) * 8);
  lVar5 = FUN_1002dde60();
  if ((lVar3 == 0) || (lVar5 == 0)) {
    if (-1 < DAT_1011c568c) {
      FUN_1008e3970("","USB",0,"[%s:%02x:%02x] can\'t submit io-pkt sz = %d  ep = %p  ep_info = %p",
                    (&PTR_s_UNK_101117020)
                    [*(uint *)(*(long *)(*(long *)(param_1 + 8) + 0x28) + 0x1490)],
                    *(undefined4 *)(*(long *)(param_1 + 8) + 0x1c),*(undefined4 *)(param_2 + 0x44c),
                    *(undefined4 *)(param_2 + 0x43c),lVar3,lVar5);
    }
    *(undefined4 *)(param_2 + 0x468) = 7;
    return 0;
  }
  *(undefined4 *)(param_2 + 0x454) = 0;
  if (*(long *)(param_1 + 0x40) != 0) {
    QMutex::lock();
    FUN_100269cb0(param_1 + 0x48,param_2 + 0x4d8,*(undefined4 *)(param_2 + 0x43c),&local_31);
    QMutex::unlock();
    *(undefined4 *)(param_2 + 0x454) = *(undefined4 *)(param_2 + 0x43c);
    cVar4 = QThread::isRunning();
    if (local_31 == '\0') {
      if (cVar4 != '\0') {
        QMutex::lock();
        *(undefined2 *)(param_1 + 0x81) = 0x101;
        QMutex::unlock();
        goto LAB_1002e2309;
      }
      *(undefined2 *)(param_1 + 0x81) = 0x101;
    }
    else {
      if (cVar4 != '\0') {
        QMutex::lock();
        *(undefined2 *)(param_1 + 0x81) = 1;
        QMutex::unlock();
        QWaitCondition::wakeAll();
        goto LAB_1002e2309;
      }
      *(undefined2 *)(param_1 + 0x81) = 1;
    }
    QThread::start(param_1 + 0x68,7);
  }
LAB_1002e2309:
  *(undefined4 *)(param_2 + 0x468) = 0;
  lVar5 = 0;
  if ((*(uint *)(param_2 + 0x470) & 4) == 0) {
    lVar5 = *(long *)(*(long *)(param_1 + 8) + 0x28);
  }
  if ((1 < DAT_1011c568c) && (*(int *)(param_2 + 0x450) == 0x69)) {
    FUN_1002da980(2,param_2);
  }
  uVar2 = *(uint *)(param_2 + 0x470);
  *(undefined4 *)(param_2 + 0x464) = 1;
  LOCK();
  piVar1 = (int *)(*(long *)(lVar3 + 0xc0) + 8);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  LOCK();
  *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + -1;
  UNLOCK();
  if ((uVar2 & 4) != 0) {
    FUN_1002c9070(param_2);
  }
  if (lVar5 != 0) {
    FUN_1002c8a90(lVar5,*(undefined4 *)(*(long *)(param_1 + 8) + 0x1c),*(undefined1 *)(lVar3 + 0xca)
                 );
  }
  return 1;
}

