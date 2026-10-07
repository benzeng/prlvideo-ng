
undefined4 FUN_1000c3290(long *param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  
  lVar1 = param_1[6];
  uVar2 = (**(code **)(*param_1 + 0x28))();
  if (param_2 < uVar2) {
    *(uint *)(param_1 + 6) = param_2;
  }
  return (int)lVar1;
}

