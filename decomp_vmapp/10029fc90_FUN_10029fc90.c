
long * FUN_10029fc90(long *param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long *plVar4;
  char *pcVar5;
  void *local_58;
  void *pvStack_50;
  undefined8 local_48;
  undefined1 local_40 [24];
  
  iVar1 = CVmDevice::getEmulatedType();
  if (iVar1 == 0) {
    lVar3 = FUN_10025ad30(param_1);
    if (lVar3 == 0) {
      iVar1 = -0x7ffffffe;
      FUN_1008e3970("AudioVM","LocalDevices",0,"create failed, rc = %d",0x80000002);
    }
    else {
      plVar4 = (long *)___dynamic_cast(lVar3,&PTR_vtable_100baea70,&PTR_vtable_101116138,
                                       0xfffffffffffffffe);
      iVar1 = -0x7ffffffe;
      if ((plVar4 != (long *)0x0) && (iVar1 = (**(code **)(*plVar4 + 0x10))(plVar4), -1 < iVar1)) {
        iVar1 = FUN_1007da300("devices.audio.playback.slave.type",0);
        if (iVar1 == 1) {
          DAT_1011c3e38 = FUN_1002a2f70("playback");
        }
        if (DAT_1011c3e38 == 0) {
          iVar1 = FUN_1007da300("devices.audio.playback.slave.type",0);
          if ((iVar1 != 0) && (0 < DAT_1011b55f8)) {
            FUN_1008e3970("AudioVM","LocalDevices",1,"Unable to create playback slave test device");
          }
        }
        else {
          (**(code **)(*plVar4 + 0x48))(plVar4);
        }
        iVar1 = FUN_1007da300("devices.audio.capture.slave.type",0);
        if (iVar1 == 1) {
          DAT_1011c3e40 = FUN_1002a2f70("capture");
        }
        if (DAT_1011c3e40 != 0) {
          (**(code **)(*plVar4 + 0x50))(plVar4);
          return plVar4;
        }
        iVar1 = FUN_1007da300("devices.audio.capture.slave.type",0);
        if (iVar1 == 0) {
          return plVar4;
        }
        if (DAT_1011b55f8 < 1) {
          return plVar4;
        }
        pcVar5 = "Unable to create capture slave test device";
        goto LAB_10029fcd6;
      }
      FUN_1008e3970("AudioVM","LocalDevices",0,"create failed, rc = %d",iVar1);
      FUN_10025ab50(lVar3);
    }
    FUN_10006a060(local_40);
    uVar2 = (**(code **)(*param_1 + 0x68))(param_1);
    FUN_10006a860(local_40,uVar2,0);
    uVar2 = CVmDevice::getIndex();
    FUN_10006a860(local_40,uVar2,1);
    local_58 = (void *)0x0;
    pvStack_50 = (void *)0x0;
    local_48 = 0;
    FUN_1000648b0(DAT_1011c3650,iVar1,&local_58,local_40);
    if (local_58 != (void *)0x0) {
      if (pvStack_50 != local_58) {
        pvStack_50 = (void *)((~((long)pvStack_50 + (-4 - (long)local_58)) & 0xfffffffffffffffcU) +
                             (long)pvStack_50);
      }
      operator_delete(local_58);
    }
    FUN_10006a680(local_40);
    plVar4 = (long *)0x0;
  }
  else {
    if (DAT_1011b55f8 < 1) {
      return (long *)0x0;
    }
    pcVar5 = "suppress PRL_ERR_SOUND_BAD_EMULATION_TYPE";
    plVar4 = (long *)0x0;
LAB_10029fcd6:
    FUN_1008e3970("AudioVM","LocalDevices",1,pcVar5);
  }
  return plVar4;
}

