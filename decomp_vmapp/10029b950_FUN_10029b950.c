
void FUN_10029b950(undefined8 *param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  
  *param_1 = &PTR_FUN_100bb1e90;
  param_1[1] = &PTR_FUN_100bb1f08;
  param_1[2] = param_2;
  *(undefined1 *)(param_1 + 3) = param_3;
  *(undefined4 *)((long)param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[5] = param_4;
  *(undefined1 *)(param_1 + 6) = 0;
  QMutex::QMutex((QMutex *)(param_1 + 9),0);
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 1000000;
  if (*(char *)(param_1 + 3) == '\0') {
    iVar2 = FUN_1007da300("devices.audio.playback.host_latency",0);
    iVar3 = 0x14;
    if (iVar2 != 0) {
      iVar3 = iVar2;
    }
    *(int *)((long)param_1 + 0x1c) = iVar3;
    iVar3 = FUN_1007da300("devices.audio.playback.host_transfer_size",0);
  }
  else {
    iVar2 = FUN_1007da300("devices.audio.capture.host_latency",0);
    iVar3 = 0x14;
    if (iVar2 != 0) {
      iVar3 = iVar2;
    }
    *(int *)((long)param_1 + 0x1c) = iVar3;
    iVar3 = FUN_1007da300("devices.audio.capture.host_transfer_size",0);
  }
  iVar2 = 4;
  if (iVar3 != 0) {
    iVar2 = iVar3;
  }
  *(int *)(param_1 + 4) = iVar2;
  CVmConfiguration::getVmHardwareList();
  uVar1 = CVmSoundDevice::isAEC();
  *(undefined1 *)((long)param_1 + 0x24) = uVar1;
  iVar3 = FUN_1007da300("devices.audio.aec",uVar1);
  *(bool *)((long)param_1 + 0x24) = iVar3 != 0;
  return;
}

