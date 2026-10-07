
ulong FUN_1008aad80(uint *param_1,long *param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 local_30 [4];
  int local_2c;
  long local_28;
  byte *local_20;
  
  local_20 = (byte *)*param_2;
  uVar1 = FUN_1008af630(&local_20,&local_28,&local_2c,local_30,param_3);
  uVar2 = 0x66;
  if ((((uVar1 & 0x80) == 0) && (uVar2 = 0x75, local_2c == 1)) && (uVar2 = 0x6a, local_28 == 1)) {
    uVar1 = (ulong)*local_20;
    if (param_1 != (uint *)0x0) {
      *param_1 = (uint)*local_20;
    }
    *param_2 = (long)(local_20 + 1);
  }
  else {
    FUN_100887ce0(0xd,0x8e,uVar2,"a_bool.c",0x6d);
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

