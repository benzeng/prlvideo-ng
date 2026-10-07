
undefined *
FUN_10082a170(long param_1,long param_2,undefined4 param_3,undefined8 param_4,undefined8 param_5,
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
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  puVar2 = &DAT_1011c07a0;
  if (param_6 != (undefined *)0x0) {
    puVar2 = param_6;
  }
  FUN_10088a650(local_160);
  FUN_10088a650(local_130);
  FUN_10088a650(local_190);
  local_198 = 0;
  if ((param_1 != 0) && (param_2 != 0)) {
    FUN_10088a650(local_160);
    FUN_10088a650(local_130);
    FUN_10088a650(local_190);
  }
  local_198 = 0;
  iVar1 = FUN_100829c00(&local_198,param_2,param_3,param_1,0);
  if ((iVar1 != 0) && (local_198 != 0)) {
    iVar1 = FUN_10088a910(local_190,param_4,param_5);
    if ((iVar1 != 0) && (local_198 != 0)) {
      iVar1 = FUN_10088a9c0(local_190,local_78,&local_19c);
      if (iVar1 != 0) {
        iVar1 = FUN_10088ab60(local_190,local_130);
        if (iVar1 != 0) {
          iVar1 = FUN_10088a910(local_190,local_78,local_19c);
          if (iVar1 != 0) {
            iVar1 = FUN_10088a9c0(local_190,puVar2,param_7);
            if (iVar1 != 0) {
              FUN_10088aa50(local_160);
              FUN_10088aa50(local_130);
              FUN_10088aa50(local_190);
              ___bzero(&local_198,0x120);
              goto LAB_10082a333;
            }
          }
        }
      }
    }
  }
  FUN_10088aa50(local_160);
  FUN_10088aa50(local_130);
  FUN_10088aa50(local_190);
  ___bzero(&local_198,0x120);
  puVar2 = (undefined *)0x0;
LAB_10082a333:
  if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

