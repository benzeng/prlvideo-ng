
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403e30(void)

{
  long lVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  
  if (DAT_0061d520 == 0) {
    DAT_0061d520 = 0;
  }
  else {
    iVar4 = 0;
    lVar3 = DAT_0061d520;
    do {
      if (*(int *)(lVar3 + 0x30) != 0) {
        iVar2 = (**(code **)(lVar3 + 0x18))(&DAT_0061d510);
        iVar4 = iVar4 + (uint)(iVar2 == 0);
      }
      lVar1 = *(long *)(lVar3 + 0x28);
      *(undefined4 *)(lVar3 + 0x30) = 0;
      *(undefined8 *)(lVar3 + 0x28) = 0;
      lVar3 = lVar1;
    } while (lVar1 != 0);
    DAT_0061d520 = 0;
    if (iVar4 != 0) {
      FUN_0040fffa(&DAT_0041913e,"prlcc",0,
                   "Error: Control Center: can\'t deinitialize all components properly");
    }
  }
  (**(code **)(PTR_prl_xfunctions_0061bd60 + 0x18))(DAT_0061d510);
  DAT_0061d510 = 0;
  _DAT_0061d518 = 0;
  if (*(int *)PTR___log_level_0061bd30 < 2) {
    return;
  }
  FUN_0040fffa(&DAT_0041913e,"prlcc",2,"Control Center: cleanup completed");
  return;
}

