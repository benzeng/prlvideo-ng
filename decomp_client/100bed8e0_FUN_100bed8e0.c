
undefined4 FUN_100bed8e0(long param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 local_28;
  
  uVar2 = 0;
  local_28 = param_3;
  lVar3 = FUN_100c7cd10(0,&local_28,(long)param_2);
  if (lVar3 == 0) {
    FUN_100c62ee0(0x14,0xac,0xd,"ssl_rsa.c",0x1ec);
  }
  else {
    iVar1 = FUN_100be7ae0((undefined8 *)(param_1 + 0x130));
    if (iVar1 == 0) {
      FUN_100c62ee0(0x14,0xab,0x41,"ssl_rsa.c",0x174);
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_100beccd0(*(undefined8 *)(param_1 + 0x130),lVar3);
    }
    FUN_100c7cd70(lVar3);
  }
  return uVar2;
}

