
void FUN_1000d75a0(long *param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  FUN_100430530(*(undefined8 *)(*param_1 + 0xf0),0);
  (**(code **)(**(long **)(*param_1 + 0x1a48) + 0x28))
            (*(long **)(*param_1 + 0x1a48),1,FUN_1000d7570,param_1);
  QMutex::lock();
  if ((param_1[3] != 0) && (uVar1 = param_1[2], uVar1 != 0xffffffffffffffff)) {
    uVar2 = uVar1;
    if (10 < uVar1 >> 0x1c) {
      uVar2 = 0xffffffffffffffff;
      if (0xffffffff < uVar1) {
        uVar2 = uVar1 - 0x50000000;
      }
    }
    FUN_10008c640(DAT_1011c3688,uVar2,8,0,0,0);
  }
  param_1[2] = -1;
  param_1[3] = 0;
  QMutex::unlock();
  DAT_100bf9014 = 0;
  DAT_100bf902d = DAT_100bf902d | 1;
  if ((void *)param_1[5] != (void *)0x0) {
    operator_delete__((void *)param_1[5]);
  }
  DAT_1011c374c = 0;
  QMutex::~QMutex((QMutex *)(param_1 + 6));
  QMutex::~QMutex((QMutex *)(param_1 + 1));
  return;
}

