
void FUN_10029b220(long param_1)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  
  CVmConfiguration::getVmHardwareList();
  uVar1 = CVmSoundDevice::isVolumeSync();
  *(undefined1 *)(param_1 + 0x70) = uVar1;
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmTools();
  cVar2 = CVmTools::isIsolatedVm();
  if (cVar2 == '\0') {
    uVar1 = *(undefined1 *)(param_1 + 0x70);
  }
  else {
    *(undefined1 *)(param_1 + 0x70) = 0;
    uVar1 = 0;
  }
  iVar3 = FUN_1007da300("devices.audio.playback.volume_apply_policy",uVar1);
  *(bool *)(param_1 + 0x70) = iVar3 != 0;
  return;
}

