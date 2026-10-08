
void FUN_10034af00(long param_1)

{
  byte bVar1;
  undefined8 uVar2;
  uint local_1c;
  
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmTools();
  CVmTools::getWinMaintenance();
  bVar1 = CVmWinMaintenance::isEnabled();
  if ((uint)bVar1 != (uint)*(byte *)(param_1 + 0x30)) {
    if (*(char *)(param_1 + 0x31) == '\0') {
      local_1c = bVar1 ^ 1;
      uVar2 = 0;
      if ((*(long *)(param_1 + 0x10) != 0) &&
         (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
        uVar2 = *(undefined8 *)(param_1 + 0x18);
      }
      uVar2 = FUN_100319c60(uVar2);
      FUN_10033c620(uVar2,0x20,&local_1c,4);
    }
    *(byte *)(param_1 + 0x30) = bVar1;
  }
  FUN_100349e20(param_1);
  return;
}

