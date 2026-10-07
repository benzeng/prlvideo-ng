
void FUN_10046a0a0(uint *param_1,long param_2,uint param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  *param_1 = param_3;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[8] = *(uint *)(param_2 + 0x20);
  std::string::string((string *)(param_1 + 10),(string *)(param_2 + 0x28));
  param_1[0x10] = *(uint *)(param_2 + 0x40);
  uVar1 = *(uint *)(param_2 + 0x44);
  param_1[0x11] = uVar1;
  if (param_3 < 2) {
    uVar2 = *(undefined8 *)(param_2 + 0x48);
  }
  else {
    if (param_3 != 2) {
      return;
    }
    FUN_10046a340(param_1 + 2,*(long *)(param_2 + 0x48),(ulong)uVar1 + *(long *)(param_2 + 0x48));
    uVar2 = *(undefined8 *)(param_1 + 2);
  }
  *(undefined8 *)(param_1 + 0x12) = uVar2;
  return;
}

