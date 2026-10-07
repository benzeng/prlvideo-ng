
undefined4 FUN_100571a50(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_30 = lVar1;
  cVar3 = FUN_1007ea210(param_2);
  if (cVar3 == '\0') {
    uVar2 = *param_2;
    param_3[1] = param_2[1];
    *param_3 = uVar2;
    uVar5 = 0;
  }
  else {
    cVar3 = (**(code **)(*param_1 + 0xe8))(param_1);
    if (cVar3 == '\0') {
      uVar4 = (**(code **)(**(long **)(param_1[1] + 0x10) + 0x80))();
      if (1 < uVar4) {
        uVar5 = 0;
        (**(code **)(**(long **)(param_1[1] + 0x10) + 0xa8))
                  (&local_40,*(long **)(param_1[1] + 0x10),0);
        param_3[1] = local_38;
        *param_3 = local_40;
        goto LAB_100571b0f;
      }
    }
    FUN_1007d6bd0(&local_50);
    param_3[1] = local_48;
    *param_3 = local_50;
    uVar5 = (**(code **)(*param_1 + 0x28))(param_1,param_3,0,0);
  }
LAB_100571b0f:
  if (lVar1 == local_30) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

