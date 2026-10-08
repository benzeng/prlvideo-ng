
undefined4 FUN_100177620(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 in_RAX;
  undefined4 local_24;
  
  local_24 = (undefined4)((ulong)in_RAX >> 0x20);
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmCommonOptions();
  uVar1 = CVmCommonOptions::getOsVersion();
  CVmConfiguration::getVmHardwareList();
  CVmHardware::getVideo();
  iVar2 = CVmVideo::getEnable3DAcceleration();
  iVar2 = _PrlVmCfg_GetDefaultVideoRamSize
                    (uVar1,*(undefined8 *)(param_1 + 0x90),iVar2 != 0,&local_24);
  if (iVar2 < 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: failed to get default video memory size from sdk"
                 );
    local_24 = 0x80;
  }
  return local_24;
}

