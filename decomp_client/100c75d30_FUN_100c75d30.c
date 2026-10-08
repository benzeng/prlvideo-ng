
undefined8 FUN_100c75d30(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 local_50 [56];
  undefined8 local_18;
  
  local_18 = param_2;
  lVar1 = FUN_100bf5d30(&local_18,local_50);
  if (lVar1 == 0) {
    FUN_100c62ee0(0xd,0xd9,0xad,"a_time.c",0x72);
    uVar2 = 0;
  }
  else if (*(int *)(lVar1 + 0x14) - 0x32U < 100) {
    uVar2 = FUN_100c755f0();
  }
  else {
    uVar2 = FUN_100c75b70(param_1,local_18,0,0);
  }
  return uVar2;
}

