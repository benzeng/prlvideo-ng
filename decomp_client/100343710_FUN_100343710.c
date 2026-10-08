
undefined1  [16] FUN_100343710(long param_1)

{
  long lVar1;
  undefined1 auVar2 [16];
  ulong uVar3;
  
  uVar3 = 0xffffffffffffffff;
  if (((*(long *)(param_1 + 0x28) != 0) && (*(int *)(*(long *)(param_1 + 0x28) + 4) != 0)) &&
     (*(long *)(param_1 + 0x30) != 0)) {
    lVar1 = *(long *)(*(long *)(param_1 + 0x30) + 0x28);
    uVar3 = CONCAT44(*(int *)(lVar1 + 0x20) - *(int *)(lVar1 + 0x18),
                     *(int *)(lVar1 + 0x1c) - *(int *)(lVar1 + 0x14));
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar3;
  return auVar2 << 0x40;
}

