
long FUN_100cb3530(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,int param_6)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  void *local_38;
  
  local_38 = (void *)0x0;
  lVar2 = FUN_100c8b370(4);
  if (lVar2 == 0) {
    uVar4 = 0x41;
    uVar5 = 0xb2;
  }
  else {
    iVar1 = FUN_100c80850(param_5,&local_38,param_2);
    if (local_38 != (void *)0x0) {
      lVar3 = FUN_100cb3280(param_1,param_3,param_4,local_38,iVar1,lVar2 + 8,lVar2,1);
      if (lVar3 != 0) {
        if (param_6 != 0) {
          _OPENSSL_cleanse(local_38,(long)iVar1);
        }
        FUN_100bf3910(local_38);
        return lVar2;
      }
      FUN_100c62ee0(0x23,0x6c,0x67,"p12_decr.c",0xbc);
      FUN_100bf3910(local_38);
      return 0;
    }
    uVar4 = 0x66;
    uVar5 = 0xb7;
  }
  FUN_100c62ee0(0x23,0x6c,uVar4,"p12_decr.c",uVar5);
  return 0;
}

