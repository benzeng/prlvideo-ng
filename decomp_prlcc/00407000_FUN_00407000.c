
undefined8 FUN_00407000(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  FUN_00406df0(*param_1);
  puVar2 = PTR_g_OTGOn_0061bd70;
  puVar1 = PTR_g_OTGLink_0061bd00;
  if (*(int *)PTR_g_OTGOn_0061bd70 != 0) {
    FUN_0040dd40(PTR_g_OTGLink_0061bd00,"parallels.DynamicResolution.guest.lin",0,0,"deinitialized",
                 0,0);
    if (*(int *)puVar2 != 0) {
      FUN_0040dbd0(puVar1,"parallels.DynamicResolution.guest.lin");
    }
  }
  FUN_0040cd00(param_1,0);
  if (1 < *(int *)PTR___log_level_0061bd30) {
    FUN_0040fffa(&DAT_0041913e,"prlcc",2,"Dynamic Resolution: deinitialized");
  }
  return 1;
}

