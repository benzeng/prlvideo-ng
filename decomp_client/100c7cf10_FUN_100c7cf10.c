
undefined8 FUN_100c7cf10(int param_1,long *param_2)

{
  long lVar1;
  
  param_2 = (long *)*param_2;
  if (param_1 == 5) {
    if (param_2[4] != 0) {
      FUN_100bf3910();
    }
    lVar1 = FUN_100c92ad0(*(undefined8 *)(*param_2 + 0x28),0,0);
    param_2[4] = lVar1;
  }
  else if (param_1 == 3) {
    FUN_100bf51c0(10,param_2,param_2 + 5);
    FUN_100c7d090(param_2[0x16]);
    FUN_100c83920(param_2[0xd]);
    FUN_100ca6eb0(param_2[0xe]);
    FUN_100ca45e0(param_2[0x10]);
    FUN_100ca89c0(param_2[0xf]);
    FUN_100ca09e0(param_2[0x11]);
    FUN_100ca76a0(param_2[0x12]);
    if (param_2[4] != 0) {
      FUN_100bf3910();
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
    FUN_100bf50a0(10,param_2,param_2 + 5);
  }
  return 1;
}

