
undefined8 FUN_1000c5130(ulong param_1,uint param_2)

{
  uint uVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  
  QMutex::lock();
  if (*(int *)(param_1 + 0x15c) != 0) {
    uVar4 = 0x80000009;
    FUN_1008e3970("","vm",0,"the previous profiling enable request hasn\'t been handled yet!");
    goto LAB_1000c5180;
  }
  if (param_2 == 0) {
    cVar2 = QThread::isRunning();
    uVar4 = 0;
    if (cVar2 == '\0') goto LAB_1000c5180;
  }
  lVar3 = FUN_1000e99d0(*(undefined8 *)(*(long *)(param_1 + 0x148) + 0x1158),0x7d,0);
  if (lVar3 == 0) {
    uVar4 = 0x80000009;
    FUN_1008e3970("","vm",0,"the async memory isn\'t shared");
    goto LAB_1000c5180;
  }
  if ((param_2 & 4) != 0) {
    param_2 = *(uint *)(param_1 + 0x160) & 3;
  }
  uVar1 = *(uint *)(lVar3 + 0x3eb7c);
  *(uint *)(param_1 + 0x160) = uVar1;
  if ((param_2 == 0) || ((~param_2 & uVar1) != 0)) {
    cVar2 = QThread::isRunning();
    if (cVar2 == '\0') {
      FUN_1008e3970("","vm",0,"The VM profiler isn\'t running, rejecting the stop request.");
    }
    else {
      *(undefined4 *)(param_1 + 0x158) = 1;
      QThread::wait(param_1);
      *(undefined4 *)(param_1 + 0x158) = 0;
    }
    if (param_2 != 0) goto LAB_1000c5280;
  }
  else {
LAB_1000c5280:
    if ((uVar1 == 0) || ((~param_2 & uVar1) != 0)) {
      *(undefined4 *)(param_1 + 0x15c) = 1;
    }
  }
  *(uint *)(lVar3 + 0x3eb7c) = param_2;
  FUN_1000a79f0(*(undefined8 *)(param_1 + 0x148),0x100000000000,1);
  uVar4 = 0;
  if (param_2 == 0) {
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
LAB_1000c5180:
  QMutex::unlock();
  return uVar4;
}

