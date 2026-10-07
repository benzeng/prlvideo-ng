
void FUN_1003e33e0(long *param_1,long param_2,byte param_3,long param_4,undefined4 param_5,
                  long param_6,undefined4 param_7,long param_8,undefined4 param_9,uint param_10,
                  undefined4 *param_11)

{
  long lVar1;
  undefined4 uVar2;
  
  lVar1 = param_8;
  if (param_8 == 0) {
    lVar1 = (long)param_1 + 0xac;
  }
  uVar2 = 0x12;
  if (param_8 != 0) {
    uVar2 = param_9;
  }
  param_1[0xc] = lVar1;
  *(undefined4 *)(param_1 + 0xd) = uVar2;
  if ((param_2 == 0) || (0xc < param_3)) {
    (**(code **)(*param_1 + 0x268))(param_1,0x52400);
  }
  else {
    param_1[0xb] = param_2;
    param_1[10] = param_6;
    param_1[9] = param_4;
    *(uint *)((long)param_1 + 0x6c) = param_10;
    if ((param_10 & 1) == 0) {
      param_5 = param_7;
    }
    *(undefined4 *)(param_1 + 0x19) = param_5;
    (**(code **)(*param_1 + 0x90))(param_1);
    if (param_11 != (undefined4 *)0x0) {
      *param_11 = *(undefined4 *)((long)param_1 + 0xcc);
    }
  }
  param_1[0xc] = (long)param_1 + 0xac;
  *(undefined4 *)(param_1 + 0xd) = 0x12;
  return;
}

