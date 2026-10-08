
undefined8 FUN_100094910(long param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 local_850 [2104];
  
  if (*(char *)(param_1 + 0x28) == '\0') {
    uVar2 = FUN_100319390(*(undefined8 *)(param_1 + 0x20));
    FUN_10018c2b0(uVar2);
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmTools();
    cVar1 = CVmTools::isIsolatedVm();
    if (cVar1 == '\0') {
      uVar2 = FUN_100319390(*(undefined8 *)(param_1 + 0x20));
      FUN_10018c2b0(uVar2);
      CVmConfiguration::getVmSettings();
      CVmSettings::getVmTools();
      CVmTools::getDragAndDrop();
      cVar1 = DragAndDrop::isEnabled();
      if (cVar1 == '\0') {
        uVar2 = 0;
      }
      else {
        *(undefined8 *)(param_1 + 0x18) = param_2;
        FUN_100099d90(local_850,7,0,0xcc);
        FUN_1003342c0(*(undefined8 *)(param_1 + 0x10),local_850);
        uVar2 = 1;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

