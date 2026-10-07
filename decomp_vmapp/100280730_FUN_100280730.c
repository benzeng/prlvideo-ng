
undefined4 FUN_100280730(long *param_1,undefined8 param_2,undefined4 param_3,long param_4)

{
  byte bVar1;
  long lVar2;
  byte bVar3;
  undefined4 uVar4;
  void *local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined7 local_58;
  char cStack_51;
  undefined8 uStack_50;
  undefined2 local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  bVar1 = *(byte *)(param_4 + 3);
  local_78 = (void *)0x0;
  uStack_70 = 0;
  local_68 = 0;
  FUN_10008d2d0(&local_78,*(undefined4 *)(param_4 + 0x24),bVar1);
  if ((*(byte *)(param_4 + 0x11) & 0x1f) == 0) {
    uVar4 = (**(code **)(*param_1 + 0x20))
                      (param_1,0,param_4 + 0x12,*(undefined1 *)(param_4 + 2),param_2,param_3,
                       local_78,bVar1);
  }
  else {
    local_48 = 0;
    bVar3 = 0x12;
    if (bVar1 < 0x13) {
      bVar3 = bVar1;
    }
    _local_58 = CONCAT17(bVar3 - 8,0x400f0);
    uStack_50 = 0x23e00000000;
    if ((bVar1 != 0) && (local_78 != (void *)0x0)) {
      _memcpy(local_78,&local_58,(ulong)bVar3);
    }
    *(undefined1 *)(param_4 + 0xe) = 0x11;
    uVar4 = 2;
  }
  lVar2 = *(long *)PTR____stack_chk_guard_100ba2320;
  FUN_10008d3f0(&local_78);
  if (lVar2 == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

