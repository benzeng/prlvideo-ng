
undefined8 FUN_1000d8510(long *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined4 uVar3;
  ulong uVar4;
  
  uVar1 = param_1[2];
  if (uVar1 == 0xffffffffffffffff) {
    lVar2 = param_1[3];
  }
  else {
    uVar4 = uVar1;
    if (10 < uVar1 >> 0x1c) {
      uVar4 = 0xffffffffffffffff;
      if (0xffffffff < uVar1) {
        uVar4 = uVar1 - 0x50000000;
      }
    }
    lVar2 = FUN_10008c320(DAT_1011c3688,uVar4,8,0,0);
    param_1[3] = lVar2;
  }
  if (lVar2 == 0) {
    param_1[2] = -1;
  }
  uVar3 = 0;
  if ((char)param_1[8] == '\0') {
    uVar3 = (undefined4)param_1[7];
  }
  FUN_100430270(*(undefined8 *)(*param_1 + 0xf0),uVar3);
  FUN_100430570(*(undefined8 *)(*param_1 + 0xf0),0);
  return 0;
}

