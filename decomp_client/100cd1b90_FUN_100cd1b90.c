
bool FUN_100cd1b90(long param_1,uint param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  bool bVar1;
  
  *(uint *)(param_1 + 0x20) = param_2;
  bVar1 = (param_2 & 0xfffffffe) != 4;
  if (bVar1) {
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  else {
    *(undefined8 *)(param_1 + 0x28) = param_3;
    *(undefined8 *)(param_1 + 0x30) = param_4;
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x1c) = param_5;
  return !bVar1;
}

