
ulong FUN_1008bfea0(long param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  
  plVar1 = *(long **)(param_2 + 0xb0);
  if ((plVar1 != (long *)0x0) && ((*plVar1 != 0 || (plVar1[1] != 0)))) {
    uVar2 = FUN_1008bfd90(*(undefined4 *)(param_1 + 0x18),param_2);
    return uVar2;
  }
  FUN_1008c9ba0(param_2,0xffffffff,0);
  return (ulong)(*(uint *)(param_2 + 0x48) >> 4 & 2 ^ 3);
}

