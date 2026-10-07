
void FUN_10056d9b0(long param_1)

{
  long lVar1;
  undefined1 local_228 [512];
  long local_28;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_28 = lVar1;
  FUN_1008e3970("","vdisk",0,"Write to MBR detected");
  if (*(uint *)(param_1 + 0x10) < 0x200) {
    FUN_10070b220(local_228,param_1,0,0x200);
    FUN_100689b90(local_228);
    if (lVar1 == local_28) {
      return;
    }
  }
  else if (lVar1 == local_28) {
    FUN_100689b90(*(undefined8 *)(param_1 + 8));
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

