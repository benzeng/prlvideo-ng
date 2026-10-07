
uint FUN_1000c3f80(long *param_1)

{
  uint uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x28))();
  return uVar1 >> 0xe & 0x1f;
}

