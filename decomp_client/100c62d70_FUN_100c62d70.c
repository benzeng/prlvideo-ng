
void FUN_100c62d70(int param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong uVar2;
  
  FUN_100c62af0();
  uVar2 = *param_2;
  if (uVar2 != 0) {
    if (param_1 == 0) {
      do {
        (**(code **)(DAT_1023167f0 + 0x18))(param_2);
        puVar1 = param_2 + 2;
        param_2 = param_2 + 2;
      } while (*puVar1 != 0);
    }
    else {
      do {
        *param_2 = uVar2 | (uint)(param_1 << 0x18);
        (**(code **)(DAT_1023167f0 + 0x18))(param_2);
        uVar2 = param_2[2];
        param_2 = param_2 + 2;
      } while (uVar2 != 0);
    }
  }
  return;
}

