
undefined8 FUN_1009d68b0(long param_1,long param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  
  if (*(int *)(param_1 + 0x38) == 0x1000007) {
    uVar2 = *(ulong *)(param_2 + 0x38);
  }
  else {
    if (*(int *)(param_1 + 0x38) != 7) {
      return 0;
    }
    uVar2 = (ulong)*(uint *)(param_2 + 0x1c);
  }
  uVar1 = FUN_1009d6720(param_1,uVar2);
  return uVar1;
}

