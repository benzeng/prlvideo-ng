
undefined1 FUN_100ac1910(long param_1,undefined8 param_2)

{
  char cVar1;
  char cVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long *plVar6;
  
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
  }
  uVar5 = FUN_100319d40(uVar5);
  plVar6 = (long *)FUN_10035c050(uVar5);
  cVar1 = (**(code **)(*plVar6 + 0x80))(plVar6);
  if (cVar1 == '\0') {
    uVar5 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar5 = *(undefined8 *)(param_1 + 0x20);
    }
    uVar5 = FUN_100319390(uVar5);
    FUN_10018c2b0(uVar5);
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmCommonOptions();
    uVar4 = CVmCommonOptions::getOsVersion();
    cVar2 = (**(code **)(*plVar6 + 0x70))(plVar6,0,1,uVar4);
    if (cVar2 == '\0') {
      return 0;
    }
  }
  uVar3 = (**(code **)(*plVar6 + 0xb8))(plVar6,param_2);
  if (cVar1 == '\0') {
    (**(code **)(*plVar6 + 0x78))(plVar6);
  }
  return uVar3;
}

