
undefined4 FUN_100bed3d0(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 local_28;
  
  uVar1 = 0;
  local_28 = param_2;
  lVar2 = FUN_100c49f80(0,&local_28);
  if (lVar2 == 0) {
    FUN_100c62ee0(0x14,0xcd,0xd,"ssl_rsa.c",0x116);
  }
  else {
    uVar1 = FUN_100bed050(param_1,lVar2);
    FUN_100c47630(lVar2);
  }
  return uVar1;
}

