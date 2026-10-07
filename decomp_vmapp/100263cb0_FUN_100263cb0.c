
undefined8 FUN_100263cb0(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  
  QMutex::lock();
  QMutex::lock();
  plVar2 = *(long **)(param_1 + 0x80);
  if (plVar2 != (long *)0x0) {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
  }
  QMutex::unlock();
  uVar7 = 0;
  if (plVar2 != (long *)0x0) {
    uVar7 = 0;
    if (plVar2[2] != 0) {
      uVar7 = ___dynamic_cast(plVar2[2],PTR_typeinfo_100ba2248,PTR_typeinfo_100ba2208,0);
    }
  }
  uVar4 = CVmDevice::getIndex();
  FUN_1008e3970("","LocalDevices",0,"[Parallel%d] Disconnecting",uVar4);
  if (*(undefined4 **)(param_1 + 0x90) == (undefined4 *)0x0) {
    uVar4 = FUN_1002bacc0(1,4,uVar7);
  }
  else {
    **(undefined4 **)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0xb8) = 0;
    if (*(long *)(param_1 + 0x98) != 0) {
      iVar5 = CVmDevice::getEmulatedType();
      if (iVar5 != 3) {
        (**(code **)(**(long **)(param_1 + 0x98) + 0x18))(*(long **)(param_1 + 0x98),param_1 + 0xa8)
        ;
      }
      if (*(long **)(param_1 + 0x98) != (long *)0x0) {
        (**(code **)(**(long **)(param_1 + 0x98) + 8))();
      }
      *(undefined8 *)(param_1 + 0x98) = 0;
    }
    uVar4 = 0;
    FUN_100269b40(param_1 + 0xa8);
  }
  uVar6 = CVmDevice::getIndex();
  FUN_1008e3970("","LocalDevices",0,"[Parallel%d] Disconnect result %08x",uVar6,uVar4);
  FUN_10025b310(param_1 + 0x68,0);
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  QMutex::unlock();
  return 0;
}

