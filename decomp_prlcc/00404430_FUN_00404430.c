
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00404430(void)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  DAT_0061c69c = FUN_00404310();
  if (DAT_0061c69c == -1) {
    FUN_0040fffa(&DAT_0041913e,"prlcc",0,"Error: Can\'t open semaphore");
    return 0;
  }
  iVar2 = FUN_004038d0();
  if (iVar2 == 0) {
    FUN_00403430();
    puVar1 = PTR_prl_xfunctions_0061bd60;
    _DAT_0061d528 = (**(code **)(PTR_prl_xfunctions_0061bd60 + 0x108))(FUN_00403c80);
    _DAT_0061d530 = (**(code **)(puVar1 + 0x110))(FUN_00404500);
    FUN_0040bf80();
    uVar3 = 1;
    if (1 < *(int *)PTR___log_level_0061bd30) {
      FUN_0040fffa(&DAT_0041913e,"prlcc",2,"Control Center: initialized");
      return 1;
    }
  }
  else {
    DAT_0061c698 = 0;
    uVar3 = 0;
  }
  return uVar3;
}

