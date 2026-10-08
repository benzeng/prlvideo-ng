
void FUN_100c62e00(int param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  if (uVar2 != 0) {
    if (param_1 == 0) {
      do {
        (**(code **)(DAT_1023167f0 + 0x20))(param_2);
        puVar1 = param_2 + 2;
        param_2 = param_2 + 2;
      } while (*puVar1 != 0);
    }
    else {
      do {
        *param_2 = uVar2 | (uint)(param_1 << 0x18);
        (**(code **)(DAT_1023167f0 + 0x20))(param_2);
        uVar2 = param_2[2];
        param_2 = param_2 + 2;
      } while (uVar2 != 0);
    }
  }
  return;
}

