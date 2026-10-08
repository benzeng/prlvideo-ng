
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100b800e0(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  *(uint *)(param_1 + 0x34) = param_2;
  uVar1 = param_2 >> 3 & _UNK_101db39f8;
  uVar2 = param_2 >> 1 & _UNK_101db39fc;
  *(ulong *)(param_1 + 0x68) = CONCAT44(param_2 >> 4,param_2) & _DAT_101db39f0;
  *(uint *)(param_1 + 0x70) = uVar1;
  *(uint *)(param_1 + 0x74) = uVar2;
  *(uint *)(param_1 + 0x78) = param_2 >> 2 & 1;
  *(uint *)(param_1 + 0x7c) = param_2 >> 5 & 1;
  *(uint *)(param_1 + 0x80) = param_2 >> 6 & 1;
  return 1;
}

