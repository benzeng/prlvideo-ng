
void FUN_1002a04a0(long param_1,undefined8 param_2,char param_3)

{
  int iVar1;
  void *local_88;
  void *pvStack_80;
  undefined8 local_78;
  undefined1 local_70 [24];
  void *local_58;
  void *pvStack_50;
  undefined8 local_48;
  undefined1 local_38 [24];
  
  if (*(int *)(param_1 + 0x40) != 0) {
    FUN_1008e3970("AudioVM","LocalDevices",0,
                  "Ignore hw_reconnect of sound device, because Sound System is not fully awake.");
    return;
  }
  if (param_3 == '\0') {
    FUN_100299500(*(undefined8 *)(param_1 + 0x38));
    FUN_100299500(*(undefined8 *)(param_1 + 0x30));
  }
  QMutex::lock();
  iVar1 = CVmDevice::getConnected();
  QMutex::unlock();
  if (iVar1 == 1) {
    iVar1 = FUN_1002990b0(*(undefined8 *)(param_1 + 0x38));
    if (iVar1 < 0) {
      FUN_10006a060(local_38);
      FUN_10006a860(local_38,0xc,0);
      FUN_10006a860(local_38,0,1);
      local_58 = (void *)0x0;
      pvStack_50 = (void *)0x0;
      local_48 = 0;
      FUN_1000648b0(DAT_1011c3650,iVar1,&local_58,local_38);
      if (local_58 != (void *)0x0) {
        if (pvStack_50 != local_58) {
          pvStack_50 = (void *)((~((long)pvStack_50 + (-4 - (long)local_58)) & 0xfffffffffffffffcU)
                               + (long)pvStack_50);
        }
        operator_delete(local_58);
      }
      FUN_10006a680(local_38);
    }
    else if (*(char *)(param_1 + 0x50) != '\0') {
      (**(code **)(**(long **)(param_1 + 0x38) + 0xc0))();
    }
    iVar1 = FUN_1002990b0(*(undefined8 *)(param_1 + 0x30));
    if (iVar1 < 0) {
      FUN_10006a060(local_70);
      FUN_10006a860(local_70,0xd,0);
      FUN_10006a860(local_70,0,1);
      local_88 = (void *)0x0;
      pvStack_80 = (void *)0x0;
      local_78 = 0;
      FUN_1000648b0(DAT_1011c3650,iVar1,&local_88,local_70);
      if (local_88 != (void *)0x0) {
        if (pvStack_80 != local_88) {
          pvStack_80 = (void *)((~((long)pvStack_80 + (-4 - (long)local_88)) & 0xfffffffffffffffcU)
                               + (long)pvStack_80);
        }
        operator_delete(local_88);
      }
      FUN_10006a680(local_70);
    }
    else if (*(char *)(param_1 + 0x50) != '\0') {
      (**(code **)(**(long **)(param_1 + 0x30) + 0xc0))();
    }
  }
  return;
}

