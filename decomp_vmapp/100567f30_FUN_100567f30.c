
undefined1 FUN_100567f30(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  
  QMutex::lock();
  uVar3 = QThread::currentThread();
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  if (*(int *)(param_2 + 0x18) == 0) {
    if (*(code **)(param_2 + 0x20) != (code *)0x0) {
      (**(code **)(param_2 + 0x20))(*(undefined8 *)(param_2 + 0x28));
    }
    plVar1 = *(long **)(param_1 + 0x10);
    cVar2 = (**(code **)(*plVar1 + 0x88))(plVar1);
    uVar4 = 1;
    while (cVar2 != '\0') {
      (**(code **)(*plVar1 + 0x110))(plVar1,0xffffffff);
      cVar2 = (**(code **)(*plVar1 + 0x88))(plVar1);
    }
  }
  else {
    uVar4 = 0;
    FUN_1008e3970("","vdisk",0,"Error: unknown msg for sync device: %u");
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  QMutex::unlock();
  return uVar4;
}

