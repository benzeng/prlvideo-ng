
void FUN_1005fbed0(long param_1,uint param_2,ulong param_3)

{
  byte bVar1;
  uint uVar2;
  
  if (*(code **)(param_1 + 0x30) != (code *)0x0) {
    if (param_2 < 0x3e9) {
      param_2 = *(int *)(param_1 + 0x2c) * 1000 + param_2;
      uVar2 = param_2 / *(uint *)(param_1 + 0x28);
      param_3 = (ulong)param_2 % (ulong)*(uint *)(param_1 + 0x28);
      param_2 = 1;
      if (0 < (int)uVar2) {
        param_2 = uVar2;
      }
    }
    bVar1 = (**(code **)(param_1 + 0x30))(param_2,*(undefined8 *)(param_1 + 0x38),param_3);
    *(byte *)(param_1 + 0x44) = bVar1 ^ 1;
  }
  return;
}

