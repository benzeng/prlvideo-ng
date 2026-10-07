
undefined8 FUN_1008a1990(int param_1,long *param_2)

{
  long lVar1;
  
  param_2 = (long *)*param_2;
  if (param_1 == 5) {
    if (param_2[4] != 0) {
      FUN_10081e1a0();
    }
    lVar1 = FUN_1008b7550(*(undefined8 *)(*param_2 + 0x28),0,0);
    param_2[4] = lVar1;
  }
  else if (param_1 == 3) {
    FUN_10081fa50(10,param_2,param_2 + 5);
    FUN_1008a1b10(param_2[0x16]);
    FUN_1008a83a0(param_2[0xd]);
    FUN_1008cb930(param_2[0xe]);
    FUN_1008c9060(param_2[0x10]);
    FUN_1008cd440(param_2[0xf]);
    FUN_1008c5460(param_2[0x11]);
    FUN_1008cc120(param_2[0x12]);
    if (param_2[4] != 0) {
      FUN_10081e1a0();
    }
  }
  else if (param_1 == 1) {
    *(undefined4 *)(param_2 + 3) = 0;
    param_2[4] = 0;
    param_2[9] = 0;
    param_2[7] = -1;
    param_2[0x16] = 0;
    param_2[0x10] = 0;
    param_2[0xe] = 0;
    param_2[0xd] = 0;
    FUN_10081f930(10,param_2,param_2 + 5);
  }
  return 1;
}

