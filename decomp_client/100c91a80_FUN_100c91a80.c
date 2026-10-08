
void FUN_100c91a80(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 in_stack_ffffffffffffff58;
  undefined4 uVar2;
  undefined1 local_88 [80];
  long local_38;
  
  uVar2 = (undefined4)((ulong)in_stack_ffffffffffffff58 >> 0x20);
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
  lVar1 = *(long *)(param_2 + 0x10);
  if ((lVar1 == 0) || (*(long *)(lVar1 + 0x48) != 0)) {
    FUN_100c91140(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  else {
    FUN_100c5d5b0(local_88,0x50,"%s PRIVATE KEY",*(undefined8 *)(lVar1 + 0x10));
    FUN_100c8f060(FUN_100c7e4a0,local_88,param_1,param_2,param_3,param_4,CONCAT44(uVar2,param_5),
                  param_6,param_7);
  }
  if (*(long *)PTR____stack_chk_guard_1021e1840 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

