
undefined *
FUN_100c01b50(long param_1,long param_2,undefined4 param_3,undefined8 param_4,undefined8 param_5,
             undefined *param_6,undefined8 param_7)

{
  int iVar1;
  undefined *puVar2;
  undefined4 local_19c;
  long local_198;
  undefined1 local_190 [48];
  undefined1 local_160 [48];
  undefined1 local_130 [184];
  undefined1 local_78 [64];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
  puVar2 = &DAT_1023161a0;
  if (param_6 != (undefined *)0x0) {
    puVar2 = param_6;
  }
  FUN_100c65850(local_160);
  FUN_100c65850(local_130);
  FUN_100c65850(local_190);
  local_198 = 0;
  if ((param_1 != 0) && (param_2 != 0)) {
    FUN_100c65850(local_160);
    FUN_100c65850(local_130);
    FUN_100c65850(local_190);
  }
  local_198 = 0;
  iVar1 = FUN_100c015e0(&local_198,param_2,param_3,param_1,0);
  if ((iVar1 != 0) && (local_198 != 0)) {
    iVar1 = FUN_100c65b10(local_190,param_4,param_5);
    if ((iVar1 != 0) && (local_198 != 0)) {
      iVar1 = FUN_100c65bc0(local_190,local_78,&local_19c);
      if (iVar1 != 0) {
        iVar1 = FUN_100c65d60(local_190,local_130);
        if (iVar1 != 0) {
          iVar1 = FUN_100c65b10(local_190,local_78,local_19c);
          if (iVar1 != 0) {
            iVar1 = FUN_100c65bc0(local_190,puVar2,param_7);
            if (iVar1 != 0) {
              FUN_100c65c50(local_160);
              FUN_100c65c50(local_130);
              FUN_100c65c50(local_190);
              ___bzero(&local_198,0x120);
              goto LAB_100c01d13;
            }
          }
        }
      }
    }
  }
  FUN_100c65c50(local_160);
  FUN_100c65c50(local_130);
  FUN_100c65c50(local_190);
  ___bzero(&local_198,0x120);
  puVar2 = (undefined *)0x0;
LAB_100c01d13:
  if (*(long *)PTR____stack_chk_guard_1021e1840 == local_38) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

