
void FUN_10008bf90(long param_1,long param_2)

{
  byte bVar1;
  
  if (*(long *)(param_1 + 0x60) != 0) {
    *(uint *)(param_2 + 4) = (uint)*(byte *)(param_1 + 0xa8);
    bVar1 = (**(code **)(**(long **)(param_1 + 0x60) + 0x60))();
    *(uint *)(param_2 + 8) = (uint)bVar1;
    bVar1 = (**(code **)(**(long **)(param_1 + 0x60) + 0x68))();
    *(uint *)(param_2 + 0x7c) = (uint)bVar1;
  }
  return;
}

