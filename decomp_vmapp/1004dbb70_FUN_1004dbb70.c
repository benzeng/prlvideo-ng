
int FUN_1004dbb70(long *param_1,undefined4 param_2,undefined4 param_3,uint param_4,
                 undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  
  *(undefined4 *)((long)param_1 + 0x2c) = param_2;
  *(undefined4 *)(param_1 + 6) = param_3;
  *(uint *)((long)param_1 + 0x34) = param_4;
  uVar2 = 0;
  if (param_1[8] != 0) {
    uVar2 = *(undefined8 *)(param_1[8] + 0x10);
  }
  iVar1 = FUN_100502f90(uVar2);
  if (iVar1 == 0) {
    if ((param_4 & 0x1000) != 0) {
      *(undefined1 *)(param_1 + 5) = 1;
    }
    (**(code **)(*param_1 + 0x40))(param_1,param_5);
  }
  return iVar1;
}

