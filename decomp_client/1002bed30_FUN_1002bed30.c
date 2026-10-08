
bool FUN_1002bed30(long param_1)

{
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  
  cVar1 = *(char *)(param_1 + 0x69);
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x28) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  FUN_10018c2b0(uVar3);
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmProtection();
  cVar2 = CVmProtection::isEnabled();
  return cVar1 != cVar2;
}

