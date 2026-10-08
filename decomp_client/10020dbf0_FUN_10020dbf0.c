
undefined8 FUN_10020dbf0(long param_1)

{
  bool bVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_10018c2b0(uVar2);
  CVmConfiguration::getVmSettings();
  bVar1 = (bool)CVmSettings::getVmEncryption();
  CVmEncryption::setEnabled(bVar1);
  return 0;
}

