
ulong FUN_1007bb280(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if (*(int *)(param_1 + 0x30) == 2) {
    uVar2 = 0;
    if (*(long *)(param_1 + 0x38) != 0) {
      uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x10);
    }
    uVar1 = FUN_10079d220(uVar2);
    return uVar1;
  }
  return (ulong)*(uint *)(param_1 + 0x40);
}

