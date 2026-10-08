
void FUN_100ba8020(undefined8 param_1,undefined8 param_2,byte *param_3)

{
  long lVar1;
  undefined1 local_a8 [96];
  byte local_48;
  byte local_47;
  byte local_46;
  byte local_45;
  byte local_44;
  byte local_43;
  byte local_42;
  byte local_41;
  byte local_40;
  byte local_3f;
  byte local_3e;
  byte local_3d;
  byte local_3c;
  byte local_3b;
  byte local_3a;
  byte local_39;
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar1;
  FUN_100bf96c0(local_a8);
  FUN_100bf9460(local_a8,param_1,param_2);
  FUN_100bf95d0(&local_48,local_a8);
  *param_3 = local_40 ^ local_48;
  param_3[1] = local_3f ^ local_47;
  param_3[2] = local_3e ^ local_46;
  param_3[3] = local_3d ^ local_45;
  param_3[4] = local_3c ^ local_44;
  param_3[5] = local_3b ^ local_43;
  param_3[6] = local_3a ^ local_42;
  param_3[7] = local_39 ^ local_41;
  if (lVar1 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

