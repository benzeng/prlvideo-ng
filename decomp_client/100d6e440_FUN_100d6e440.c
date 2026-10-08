
undefined8
FUN_100d6e440(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined8 uVar1;
  undefined1 local_2c [4];
  undefined4 local_28;
  undefined4 local_24;
  
  local_24 = 0;
  uVar1 = FUN_100d6a640(param_1,param_2,&local_24,0xffffffff);
  if ((int)uVar1 == 0x8000000) {
    uVar1 = FUN_100d6c290(param_1,local_24,param_3,4,&local_28,4,local_2c,0);
    if ((int)uVar1 == 0x8000000) {
      *param_4 = local_28;
      uVar1 = 0x8000000;
    }
  }
  return uVar1;
}

