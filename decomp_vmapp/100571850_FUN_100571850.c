
undefined8
FUN_100571850(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 local_48 [16];
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar1;
  if (param_1[0x225] == param_1[0x226]) {
    FUN_1008e3970("","vdisk",0,"Disk was not opened correctly!");
    uVar4 = 0x80019016;
    goto LAB_100571981;
  }
  if ((char)param_1[0x25d] != '\0') {
    lVar5 = param_1[600];
    if (lVar5 == 0) {
      puVar3 = operator_new(0x38,(nothrow_t *)PTR_nothrow_100ba21c8);
      if (puVar3 == (undefined8 *)0x0) {
        param_1[600] = 0;
        uVar4 = 0x80000002;
        goto LAB_100571981;
      }
      puVar3[1] = puVar3 + 1;
      puVar3[2] = puVar3 + 1;
      *puVar3 = &PTR_FUN_100bc72a0;
      puVar3[5] = 0;
      puVar3[4] = 0;
      puVar3[3] = 0;
      puVar3[6] = param_1;
      param_1[600] = (long)puVar3;
      uVar4 = (**(code **)(*param_1 + 0x1f0))(param_1,puVar3);
      if ((int)uVar4 < 0) goto LAB_100571981;
      lVar5 = param_1[600];
    }
    FUN_1005f4840(lVar5,param_3);
  }
  pcVar2 = *(code **)(*param_1 + 0x2e8);
  (**(code **)(**(long **)(param_1[1] + 0x10) + 0x40))(local_48);
  uVar4 = (*pcVar2)(param_1,local_48,param_2,param_4,param_5);
LAB_100571981:
  if (lVar1 == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

