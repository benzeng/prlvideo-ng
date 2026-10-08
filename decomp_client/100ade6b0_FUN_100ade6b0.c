
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ade6b0(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  char local_48 [4];
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_28;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_28 = lVar1;
  FUN_100adb1d0();
  *param_1 = &PTR_FUN_10223b0e0;
  param_1[3] = 0;
  local_38 = _DAT_101cd7880;
  uStack_30 = _UNK_101cd7888;
  local_48[0] = s_lppan_101cd7870[0];
  local_48[1] = s_lppan_101cd7870[1];
  local_48[2] = s_lppan_101cd7870[2];
  local_48[3] = s_lppan_101cd7870[3];
  uStack_44 = ram0x000101cd7874;
  uStack_40 = _UNK_101cd7878;
  uStack_3c = _UNK_101cd787c;
  uVar3 = _GetApplicationEventTarget();
  _InstallEventHandler(uVar3,FUN_100ae0140,4,local_48,param_1,param_1 + 3);
  iVar2 = (*DAT_1023119c8)(FUN_100ae01d0,0x4b4,0);
  if ((iVar2 != 0) && (0 < DAT_10230ffd0)) {
    FUN_100df99c0("CHRCLIENT","ChrToolClient",1,"Unable to register CGS notification for Expose");
  }
  (*DAT_1023119c8)(FUN_100ae01d0,0x579,0);
  if (lVar1 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

