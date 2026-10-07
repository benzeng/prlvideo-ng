
undefined8 FUN_10080d4e0(undefined4 *param_1)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (*(long *)(param_1 + 2) == 0) {
    uVar4 = 0xbc;
    uVar5 = 0xc2;
  }
  else {
    iVar2 = FUN_100814870(param_1);
    if (iVar2 != 0) {
      FUN_100813340(*(undefined8 *)(param_1 + 0x4c));
      *(undefined8 *)(param_1 + 0x4c) = 0;
    }
    param_1[0x56] = 0;
    param_1[0x2a] = 0;
    param_1[0x11] = 0;
    if (param_1[0xa9] == 0) {
      param_1[1] = 0;
      uVar3 = 0x6000;
      if (param_1[0xe] == 0) {
        uVar3 = 0x5000;
      }
      param_1[0x12] = uVar3;
      uVar3 = **(undefined4 **)(param_1 + 2);
      *param_1 = uVar3;
      param_1[0x71] = uVar3;
      param_1[10] = 1;
      param_1[0x13] = 0xf0;
      if (*(long *)(param_1 + 0x14) != 0) {
        FUN_10087cd20();
        *(undefined8 *)(param_1 + 0x14) = 0;
      }
      FUN_10080d670(param_1);
      if (*(long *)(param_1 + 0x36) != 0) {
        FUN_10088ae30();
      }
      *(undefined8 *)(param_1 + 0x36) = 0;
      if (*(long *)(param_1 + 0x3c) != 0) {
        FUN_10088ae30();
      }
      *(undefined8 *)(param_1 + 0x3c) = 0;
      param_1[0x70] = 0;
      if (((param_1[0xb] == 0) && (*(long *)(param_1 + 0x4c) == 0)) &&
         (*(long *)(param_1 + 2) != **(long **)(param_1 + 0x5c))) {
        (**(code **)(*(long *)(param_1 + 2) + 0x18))(param_1);
        lVar1 = **(long **)(param_1 + 0x5c);
        *(long *)(param_1 + 2) = lVar1;
        iVar2 = (**(code **)(lVar1 + 8))(param_1);
        if (iVar2 == 0) {
          return 0;
        }
      }
      else {
        (**(code **)(*(long *)(param_1 + 2) + 0x10))(param_1);
      }
      return 1;
    }
    uVar4 = 0x44;
    uVar5 = 0xdc;
  }
  FUN_100887ce0(0x14,0xa4,uVar4,"ssl_lib.c",uVar5);
  return 0;
}

