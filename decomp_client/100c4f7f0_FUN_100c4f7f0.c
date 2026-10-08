
undefined8
FUN_100c4f7f0(long param_1,undefined8 param_2,ulong *param_3,undefined8 param_4,undefined4 param_5)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 in_RAX;
  undefined8 uVar3;
  uint local_34;
  
  local_34 = (uint)((ulong)in_RAX >> 0x20);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x20);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 0x18);
  uVar2 = 0x40;
  if (lVar1 != 0) {
    uVar2 = FUN_100c6fc30(lVar1);
  }
  uVar3 = FUN_100c4d9a0(uVar2,param_4,param_5,param_2,&local_34,uVar3);
  if (0 < (int)uVar3) {
    *param_3 = (ulong)local_34;
    uVar3 = 1;
  }
  return uVar3;
}

