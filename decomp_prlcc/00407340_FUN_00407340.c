
undefined8 FUN_00407340(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined1 local_48 [56];
  
  DAT_0061d788 = 0;
  DAT_0061d790 = 0;
  DAT_0061d784 = 0;
  if (((int)param_1[1] == 0) || (iVar3 = FUN_0040bab0(), iVar3 == 0)) {
    FUN_0040fffa(&DAT_0041913e,"prlcc",0,"Error: Dynamic Resolution: Can\'t initialize");
    uVar4 = 0;
  }
  else {
    FUN_0040cd00(param_1,1);
    uVar4 = FUN_0040c020(param_1);
    if ((int)uVar4 != 0) {
      FUN_0040db80(local_48,2,0);
      if (*(int *)PTR_g_OTGOn_0061bd70 != 0) {
        FUN_0040dd40(PTR_g_OTGLink_0061bd00,"parallels.DynamicResolution.guest.lin",
                     "Parallels Dynamic Resolution Tool",local_48,"initialized",0,0);
      }
      pcVar5 = getenv("PRLCC_DISABLE_WM_CHECK");
      puVar2 = PTR___log_level_0061bd30;
      if ((pcVar5 != (char *)0x0) && (DAT_0061d788 = 1, 1 < *(int *)PTR___log_level_0061bd30)) {
        FUN_0040fffa(&DAT_0041913e,"prlcc",2,"Dynamic Resolution: WM check disabled");
      }
      lVar1 = *param_1;
      (**(code **)(PTR_prl_xfunctions_0061bd60 + 0x78))
                (lVar1,*(undefined8 *)
                        ((long)*(int *)(lVar1 + 0xe0) * 0x80 + 0x10 + *(long *)(lVar1 + 0xe8)),
                 0x20000);
      uVar4 = 1;
      if (1 < *(int *)puVar2) {
        FUN_0040fffa(&DAT_0041913e,"prlcc",2,"Dynamic Resolution: initialized");
        uVar4 = 1;
      }
    }
  }
  return uVar4;
}

