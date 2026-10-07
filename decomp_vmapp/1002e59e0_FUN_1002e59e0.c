
undefined8 FUN_1002e59e0(long *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar3 = 0;
  uVar1 = 0;
  if (param_1[2] != 0) {
    (**(code **)(*param_1 + 0x38))(param_1);
    uVar1 = 1;
    if (*(int *)((long)param_1 + 0xc) != 0) {
      do {
        *(char *)(param_1[2] + uVar3) = *(char *)(param_1[2] + uVar3) + '\x01';
        uVar2 = (int)uVar3 + 2;
        uVar3 = (ulong)uVar2;
      } while (uVar2 < *(uint *)((long)param_1 + 0xc));
    }
  }
  return uVar1;
}

