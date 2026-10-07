
long FUN_10089b5b0(undefined4 *param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = FUN_10084bc20(*(undefined8 *)(param_1 + 2),*param_1,param_2);
  if (lVar1 == 0) {
    FUN_100887ce0(0xd,0x77,0x69,"a_int.c",0x1c8);
  }
  else if (param_1[1] == 0x102) {
    FUN_10084c230(lVar1,1);
  }
  return lVar1;
}

