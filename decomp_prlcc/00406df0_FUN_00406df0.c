
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406df0(void)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  bool bVar5;
  undefined4 local_38;
  int local_34;
  undefined4 local_30;
  int local_2c;
  undefined1 local_1c [12];
  
  if ((1 < DAT_0061d780) || (_DAT_00417960 < DAT_0061d778)) {
    iVar2 = FUN_00406bd0();
    puVar1 = PTR___log_level_0061bd30;
    if (DAT_0061d654 == -1) {
      if (1 < *(int *)PTR___log_level_0061bd30) {
        pcVar4 = "FAILED";
        if (iVar2 != 0) {
          pcVar4 = "confirmed";
        }
        FUN_0040fffa(&DAT_0041913e,"prlcc",2,"Dynamic Resolution: configuration set (custom) %s",
                     pcVar4);
      }
    }
    else {
      bVar5 = DAT_0061c6a0 != 0;
      if (1 < *(int *)PTR___log_level_0061bd30) {
        pcVar4 = "confirmed";
        if (iVar2 == 0 || bVar5) {
          pcVar4 = "FAILED";
        }
        FUN_0040fffa(&DAT_0041913e,"prlcc",2,
                     "Dynamic Resolution: configuration set (cfgId=%d(%X)) %s",DAT_0061d654,
                     DAT_0061d654,pcVar4);
      }
      if (DAT_0061d658 == 0) {
        if (iVar2 == 0 || bVar5) {
          local_30 = 4;
          local_34 = DAT_0061c6a0;
        }
        else {
          local_30 = 3;
          local_34 = 0;
        }
        local_2c = DAT_0061d654;
        local_38 = 0xb;
        uVar3 = FUN_0040e870(PTR_g_OTGLink_0061bd00,&local_38,0x10,0,local_1c);
        if (1 < *(int *)puVar1) {
          FUN_0040fffa(&DAT_0041913e,"prlcc",2,"Dynamic Resolution: OTG request send (result=%d).",
                       uVar3);
        }
      }
      memset(&DAT_0061d540,0,0x114);
      DAT_0061d654 = -1;
      DAT_0061d658 = 1;
      DAT_0061c6a0 = -1;
    }
    DAT_0061d778 = 0.0;
    DAT_0061d780 = 0;
  }
  return;
}

