
undefined4 FUN_100bed050(long param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  
  if (param_2 == 0) {
    FUN_100c62ee0(0x14,0xcc,0x43,"ssl_rsa.c",0x96);
  }
  else {
    iVar1 = FUN_100be7ae0((undefined8 *)(param_1 + 0x100));
    if (iVar1 == 0) {
      FUN_100c62ee0(0x14,0xcc,0x41,"ssl_rsa.c",0x9a);
    }
    else {
      lVar3 = FUN_100c6d320();
      if (lVar3 == 0) {
        FUN_100c62ee0(0x14,0xcc,6,"ssl_rsa.c",0x9e);
      }
      else {
        FUN_100c47750(param_2);
        iVar1 = FUN_100c6d510(lVar3,6,param_2);
        if (0 < iVar1) {
          uVar2 = FUN_100bed140(*(undefined8 *)(param_1 + 0x100),lVar3);
          FUN_100c6d8c0(lVar3);
          return uVar2;
        }
        FUN_100c47630(param_2);
      }
    }
  }
  return 0;
}

