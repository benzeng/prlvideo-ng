
undefined4
FUN_100376860(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 local_70 [8];
  long local_68;
  long local_58;
  undefined1 local_48 [16];
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar1;
  FUN_10038e870(local_70,local_48,0x10);
  FUN_10038e8e0(local_70,"%s[%d]",param_3,param_4);
  if (local_68 == 0) {
    local_68 = local_58;
  }
  uVar2 = (*DAT_1011c6230)(param_2,local_68);
  FUN_10038e8c0(local_70);
  if (lVar1 == local_38) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

