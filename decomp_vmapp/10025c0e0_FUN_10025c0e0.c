
undefined4 FUN_10025c0e0(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  long *local_30;
  
  uVar3 = (**(code **)(*(long *)param_1[1] + 0x68))();
  FUN_100259440(&local_30,uVar3,param_2);
  uVar3 = 0;
  if (local_30 != (long *)0x0) {
    uVar3 = 0;
    if (local_30[2] != 0) {
      iVar4 = CVmDevice::getConnected();
      if ((iVar4 == 1) && (iVar4 = CVmDevice::getConnected(), iVar4 == 0)) {
        uVar3 = (**(code **)(*param_1 + 0x18))(param_1);
      }
      else {
        uVar5 = (**(code **)(*(long *)param_1[1] + 0x68))();
        uVar6 = CVmDevice::getIndex();
        uVar7 = CVmDevice::getConnected();
        if (uVar7 < 3) {
          pcVar9 = (&PTR_s_disconnected_100baeb20)[(int)uVar7];
        }
        else {
          pcVar9 = "unknown";
        }
        uVar7 = CVmDevice::getConnected();
        if (uVar7 < 3) {
          pcVar8 = (&PTR_s_disconnected_100baeb20)[(int)uVar7];
        }
        else {
          pcVar8 = "unknown";
        }
        uVar3 = 0;
        FUN_1008e3970("","LocalDevices",0,
                      "Disconnect for device [%u:%u] is not called. Current state \"%s\" trying to set \"%s\""
                      ,uVar5,uVar6,pcVar9,pcVar8);
      }
    }
    if (local_30 != (long *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      lVar2 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)(*local_30 + 0x10))();
      }
    }
  }
  return uVar3;
}

