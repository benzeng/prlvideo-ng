
undefined8 FUN_10089a7b0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 local_50 [56];
  undefined8 local_18;
  
  local_18 = param_2;
  lVar1 = FUN_1008205c0(&local_18,local_50);
  if (lVar1 == 0) {
    FUN_100887ce0(0xd,0xd9,0xad,"a_time.c",0x72);
    uVar2 = 0;
  }
  else if (*(int *)(lVar1 + 0x14) - 0x32U < 100) {
    uVar2 = FUN_10089a070();
  }
  else {
    uVar2 = FUN_10089a5f0(param_1,local_18,0,0);
  }
  return uVar2;
}

