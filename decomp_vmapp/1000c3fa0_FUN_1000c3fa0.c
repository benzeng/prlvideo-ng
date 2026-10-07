
uint FUN_1000c3fa0(long *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x28))();
  iVar2 = (**(code **)(*param_1 + 0x30))(param_1);
  return (uint)(iVar1 + 0x7ffff + iVar2) >> 0xe & 0x1f;
}

