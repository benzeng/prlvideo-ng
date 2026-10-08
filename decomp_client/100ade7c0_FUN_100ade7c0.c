
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ade7c0(long param_1,char param_2)

{
  long lVar1;
  undefined8 uVar2;
  char local_48 [4];
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_20 = lVar1;
  if (param_2 == '\0') {
    if (*(long *)(param_1 + 0x18) != 0) {
      _RemoveEventHandler();
      return;
    }
  }
  else {
    local_38 = _DAT_101cd7880;
    uStack_30 = _UNK_101cd7888;
    local_48 = (char  [4])s_lppan_101cd7870._0_4_;
    uStack_44 = ram0x000101cd7874;
    uStack_40 = _UNK_101cd7878;
    uStack_3c = _UNK_101cd787c;
    uVar2 = _GetApplicationEventTarget();
    _InstallEventHandler(uVar2,FUN_100ae0140,4,local_48,param_1,param_1 + 0x18);
  }
  if (lVar1 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

