
int FUN_1005a2150(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 local_488 [1104];
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar1;
  uVar3 = (**(code **)(*param_1 + 0x2e0))();
  FUN_100604d10(local_488,param_2,param_3,uVar3);
  iVar2 = FUN_100605380(local_488);
  if (iVar2 < 0) {
    FUN_1008e3970("","vdisk",0,"FAT32 volume init failed");
  }
  else {
    iVar2 = FUN_1006056a0(local_488,param_1);
    if (iVar2 < 0) {
      FUN_1008e3970("","vdisk",0,"FAT32 volume write failed");
    }
  }
  FUN_100604da0(local_488);
  if (lVar1 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

