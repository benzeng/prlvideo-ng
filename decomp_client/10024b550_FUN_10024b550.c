
undefined4 FUN_10024b550(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = 0x30000009;
  if (*(int *)(param_1 + 0x28) != 0x3f0) {
    uVar2 = 0;
  }
  uVar1 = 0x30000005;
  if (*(int *)(param_1 + 0x28) != 0x3ef) {
    uVar1 = uVar2;
  }
  return uVar1;
}

