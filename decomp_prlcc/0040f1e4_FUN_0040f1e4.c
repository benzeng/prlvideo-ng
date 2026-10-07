
undefined4 FUN_0040f1e4(undefined4 param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = FUN_0040f16c();
  uVar1 = *(undefined4 *)(lVar2 + 0x18);
  *(undefined4 *)(lVar2 + 0x18) = param_1;
  return uVar1;
}

