
undefined8 FUN_1002b1670(ulong param_1,undefined8 param_2,int param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (param_4 == (undefined8 *)0x0) {
    uVar2 = param_1;
    if (param_3 == 0) {
      if (0xafffffff < param_1) {
        uVar2 = 0xffffffffffffffff;
        if (0xffffffff < param_1) {
          uVar2 = param_1 - 0x50000000;
        }
      }
      uVar1 = 1;
      uVar3 = 1;
    }
    else {
      if (0xafffffff < param_1) {
        uVar2 = 0xffffffffffffffff;
        if (0xffffffff < param_1) {
          uVar2 = param_1 - 0x50000000;
        }
      }
      uVar1 = 0;
      uVar3 = 0;
    }
    FUN_10008c640(*(undefined8 *)(DAT_1011c3698 + 0x1940),uVar2,param_2,0,uVar1,uVar3);
  }
  else {
    uVar2 = param_1;
    if (param_3 == 0) {
      if (0xafffffff < param_1) {
        uVar2 = 0xffffffffffffffff;
        if (0xffffffff < param_1) {
          uVar2 = param_1 - 0x50000000;
        }
      }
      uVar1 = 1;
      uVar3 = 1;
    }
    else {
      if (0xafffffff < param_1) {
        uVar2 = 0xffffffffffffffff;
        if (0xffffffff < param_1) {
          uVar2 = param_1 - 0x50000000;
        }
      }
      uVar1 = 0;
      uVar3 = 0;
    }
    uVar1 = FUN_10008c320(*(undefined8 *)(DAT_1011c3698 + 0x1940),uVar2,param_2,uVar1,uVar3);
    *param_4 = uVar1;
  }
  return 0;
}

