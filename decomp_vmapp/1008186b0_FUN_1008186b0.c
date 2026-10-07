
undefined4 FUN_1008186b0(undefined8 param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 local_28;
  
  uVar2 = 0;
  local_28 = param_3;
  lVar3 = FUN_1008a2c80(param_1,0,&local_28);
  if (lVar3 == 0) {
    FUN_100887ce0(0x14,0xaf,0xd,"ssl_rsa.c",0x290);
  }
  else {
    iVar1 = FUN_100812370((undefined8 *)(param_2 + 0x130));
    if (iVar1 == 0) {
      FUN_100887ce0(0x14,0xae,0x41,"ssl_rsa.c",599);
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_1008179d0(*(undefined8 *)(param_2 + 0x130),lVar3);
    }
    FUN_1008924e0(lVar3);
  }
  return uVar2;
}

