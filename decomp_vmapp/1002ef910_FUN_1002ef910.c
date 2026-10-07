
void FUN_1002ef910(long *param_1,undefined8 param_2,code *param_3)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long local_40;
  
  lVar3 = FUN_1007d88c0();
  uVar2 = FUN_1007d8840();
  QMutex::lock();
  uVar5 = 1000;
  while (local_40 = lVar3, uVar6 = uVar5, cVar1 = (*param_3)(param_1), cVar1 != '\0') {
    QWaitCondition::wait((QMutex *)(param_1 + 0xe),(ulong)(param_1 + 0xd));
    cVar1 = (*param_3)(param_1);
    if (cVar1 == '\0') break;
    uVar5 = 0xffffffffffffffff;
    lVar3 = local_40;
    if (uVar6 != 0xffffffffffffffff) {
      lVar3 = FUN_1007d88c0();
      uVar4 = (ulong)((lVar3 - local_40) * 1000) / (ulong)uVar2;
      uVar5 = uVar6 - uVar4;
      if (uVar6 < uVar4 || uVar5 == 0) {
        FUN_1008e3970("","LocalDevices",0,"%s(%u:%u) doesn\'t finished yet, continue wait",param_2,
                      *(undefined2 *)(*param_1 + 8),*(undefined2 *)(*param_1 + 10));
        uVar5 = 0xffffffffffffffff;
        lVar3 = local_40;
      }
    }
  }
  if (uVar6 == 0xffffffffffffffff) {
    FUN_1008e3970("","LocalDevices",0,"%s(%u:%u) finished",param_2,*(undefined2 *)(*param_1 + 8),
                  *(undefined2 *)(*param_1 + 10));
  }
  QMutex::unlock();
  return;
}

