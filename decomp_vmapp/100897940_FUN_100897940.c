
undefined4 FUN_100897940(undefined8 *param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_ac;
  undefined1 local_a8 [32];
  long *local_88;
  undefined1 local_78 [64];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  pcVar1 = *(code **)(*(long *)param_1[4] + 0x78);
  if (param_2 == 0) {
    if (pcVar1 == (code *)0x0) {
      iVar2 = FUN_1008946d0(*param_1);
      uVar3 = 0;
      if (iVar2 < 0) goto LAB_100897a5b;
      iVar2 = FUN_1008968d0(param_1[4],0,param_3,0,(long)iVar2);
    }
    else {
      iVar2 = (*pcVar1)((long *)param_1[4],0,param_3,param_1);
    }
  }
  else {
    FUN_10088a650(local_a8);
    iVar2 = FUN_10088ab60(local_a8,param_1);
    uVar3 = 0;
    if (iVar2 == 0) goto LAB_100897a5b;
    if (pcVar1 != (code *)0x0) {
      uVar3 = (**(code **)(*local_88 + 0x78))(local_88,param_2,param_3,local_a8);
      FUN_10088aa50(local_a8);
      goto LAB_100897a5b;
    }
    iVar2 = FUN_10088a9c0(local_a8,local_78,&local_ac);
    FUN_10088aa50(local_a8);
    if (iVar2 == 0) goto LAB_100897a5b;
    iVar2 = FUN_1008968d0(param_1[4],param_2,param_3,local_78,local_ac);
  }
  uVar3 = 0;
  if (0 < iVar2) {
    uVar3 = 1;
  }
LAB_100897a5b:
  if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

