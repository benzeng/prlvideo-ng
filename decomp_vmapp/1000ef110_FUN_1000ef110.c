
void FUN_1000ef110(byte param_1,long param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  param_3[4] = 0;
  param_3[3] = 0;
  param_3[2] = 0;
  param_3[1] = 0;
  *param_3 = 0;
  *(undefined4 *)((long)param_3 + 4) = 0x809f9fd;
  *(undefined4 *)(param_3 + 1) = 0x42402002;
  *(undefined4 *)(param_3 + 3) = 0x28;
  if ((param_1 & 3) == 1) {
    *(undefined4 *)((long)param_3 + 0xc) = 1;
    *(undefined4 *)(param_3 + 2) = 0x28100800;
    *(undefined4 *)(param_3 + 1) = 0x77f83203;
    *(undefined4 *)(param_3 + 4) = 1;
    *(undefined4 *)((long)param_3 + 4) = 0xf8bfbff;
    uVar3 = 0x183f3ff;
    uVar2 = 1;
    uVar1 = 0x28100800;
  }
  else {
    uVar1 = 0x8100000;
    if (*(int *)(param_2 + 0x86) == 2) {
      *(undefined4 *)(param_3 + 2) = 0x800;
      uVar1 = 0x8100800;
    }
    *(uint *)(param_3 + 2) = uVar1;
    *(undefined4 *)(param_3 + 1) = 0x77f83203;
    *(undefined4 *)((long)param_3 + 4) = 0xf8bfbfd;
    *(undefined4 *)(param_3 + 4) = 1;
    uVar3 = 0x183f3fd;
    uVar2 = 0;
  }
  if (*(int *)(param_2 + 0x86) == 2) {
    uVar2 = uVar2 | 0x1044;
    *(uint *)((long)param_3 + 0xc) = uVar2;
    *(uint *)(param_3 + 2) = uVar1 | uVar3 | 0xc2400000;
  }
  *(uint *)((long)param_3 + 0xc) = uVar2 | 0x20;
  *(undefined4 *)((long)param_3 + 0x14) = 0x100;
  *(undefined4 *)(param_3 + 1) = 0x77f8322b;
  *(undefined4 *)((long)param_3 + 0x1c) = 0x803bb;
  if ((param_1 & 4) != 0) {
    *(undefined4 *)(param_3 + 1) = 0x77fa322b;
    *(undefined4 *)((long)param_3 + 0x1c) = 0x807bb;
  }
  *(undefined4 *)((long)param_3 + 0x24) = 0x55;
  return;
}

