
undefined8 FUN_10025fd90(long param_1)

{
  long *plVar1;
  uint *puVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  undefined4 uVar6;
  uint uVar7;
  bool bVar8;
  
  *(undefined4 *)(*(long *)(param_1 + 0xa0) + 0x2c) = 0;
  if (*(long **)(param_1 + 0xa8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xa8) + 0x30))();
  }
  QMutex::lock();
  QMutex::lock();
  plVar4 = *(long **)(param_1 + 0x80);
  if (plVar4 != (long *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  QMutex::unlock();
  uVar6 = CVmDevice::getIndex();
  FUN_1008e3970("","LocalDevices",0,"[Serial%d] Disconnecting",uVar6);
  if (plVar4 != (long *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
  *(undefined4 *)(*(long *)(param_1 + 0xa0) + 0x2c) = 0;
  if (*(long **)(param_1 + 0xa8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xa8) + 8))();
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  FUN_10025b310(param_1 + 0x68,0);
  *(undefined4 *)(*(long *)(param_1 + 0xa0) + 0x38) =
       *(undefined4 *)(*(long *)(param_1 + 0xa0) + 0x3c);
  lVar5 = *(long *)(param_1 + 0xa0);
  uVar7 = *(uint *)(lVar5 + 0x18);
  do {
    puVar2 = (uint *)(lVar5 + 0x18);
    LOCK();
    uVar3 = *puVar2;
    bVar8 = uVar7 == uVar3;
    if (bVar8) {
      *puVar2 = uVar7 | 1;
      uVar3 = uVar7;
    }
    uVar7 = uVar3;
    UNLOCK();
  } while (!bVar8);
  FUN_1002effe0(*(undefined8 *)(param_1 + 0xb8));
  QMutex::unlock();
  return 0;
}

