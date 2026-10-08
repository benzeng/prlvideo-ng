
void FUN_1002448d0(long param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0x18a88) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  else if (param_2 == 0x18a8f) {
    *(undefined4 *)(param_1 + 0x2c) = 1;
  }
  else {
    uVar1 = 0;
    if (param_2 != 0x18a90) goto LAB_10024491d;
    *(undefined4 *)(param_1 + 0x2c) = 2;
  }
  uVar1 = DAT_100e152a4;
  if (*(int *)(param_1 + 0x28) == 0) {
    *(undefined4 *)(param_1 + 0x28) = 1;
    uVar1 = DAT_100e152a4;
  }
LAB_10024491d:
  FUN_100243dd0(param_1,uVar1);
  return;
}

