
void FUN_100404890(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if (*(int *)(param_1 + 0x4c) != 0) {
    uVar1 = *(ulong *)(param_2 + 0x20);
    uVar2 = uVar1 & 0xfffffffffffff000;
    *(ulong *)(param_2 + 0x20) = uVar2;
    *(uint *)(param_2 + 0x1c) =
         (((int)uVar1 + 0xfff) - (int)uVar2) + *(int *)(param_2 + 0x1c) & 0xfffff000;
  }
  return;
}

