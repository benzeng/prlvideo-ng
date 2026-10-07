
void FUN_00409c50(long *param_1)

{
  code *pcVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 local_28 [4];
  
  local_28[0] = 0;
  iVar3 = FUN_0040c100();
  if (iVar3 != 0) {
    pcVar1 = *(code **)(PTR_prl_xfunctions_0061bd60 + 0x88);
    uVar4 = FUN_00409c10(*param_1);
    lVar2 = *param_1;
    (*pcVar1)(lVar2,*(undefined8 *)
                     ((long)*(int *)(lVar2 + 0xe0) * 0x80 + 0x10 + *(long *)(lVar2 + 0xe8)),uVar4,6,
              0x20,0,local_28,1);
    FUN_0040cbe0(param_1,0);
    iVar3 = FUN_0040c100(param_1);
    if (iVar3 == 0) {
      iVar3 = FUN_0040baf0(0,0);
      if (iVar3 == 0) {
        FUN_0040fffa(&DAT_0041913e,"prlcc",0,
                     "Error: Coherence: Can\'t send Tg request CHR_MODE_STOPPED");
      }
      DAT_0061d7e8 = 0;
      if (1 < *(int *)PTR___log_level_0061bd30) {
        FUN_0040fffa(&DAT_0041913e,"prlcc",2,"Coherence: stopped");
      }
    }
    else {
      FUN_0040fffa(&DAT_0041913e,"prlcc",0,"Error: Coherence: Can\'t stop");
    }
  }
  return;
}

