
undefined4 FUN_100bed640(undefined8 param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 local_28;
  
  uVar2 = 0;
  local_28 = param_3;
  lVar3 = FUN_100c7e200(param_1,0,&local_28);
  if (lVar3 == 0) {
    FUN_100c62ee0(0x14,0xca,0xd,"ssl_rsa.c",0x164);
  }
  else {
    iVar1 = FUN_100be7ae0((undefined8 *)(param_2 + 0x100));
    if (iVar1 == 0) {
      FUN_100c62ee0(0x14,0xc9,0x41,"ssl_rsa.c",0x129);
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_100bed140(*(undefined8 *)(param_2 + 0x100),lVar3);
    }
    FUN_100c6d8c0(lVar3);
  }
  return uVar2;
}

