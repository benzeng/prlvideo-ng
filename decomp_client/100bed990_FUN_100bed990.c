
undefined4 FUN_100bed990(long param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  
  if (param_2 == 0) {
    FUN_100c62ee0(0x14,0xb1,0x43,"ssl_rsa.c",0x1fc);
  }
  else {
    iVar1 = FUN_100be7ae0((undefined8 *)(param_1 + 0x130));
    if (iVar1 == 0) {
      FUN_100c62ee0(0x14,0xb1,0x41,"ssl_rsa.c",0x200);
    }
    else {
      lVar3 = FUN_100c6d320();
      if (lVar3 == 0) {
        FUN_100c62ee0(0x14,0xb1,6,"ssl_rsa.c",0x204);
      }
      else {
        FUN_100c47750(param_2);
        iVar1 = FUN_100c6d510(lVar3,6,param_2);
        if (0 < iVar1) {
          uVar2 = FUN_100bed140(*(undefined8 *)(param_1 + 0x130),lVar3);
          FUN_100c6d8c0(lVar3);
          return uVar2;
        }
        FUN_100c47630(param_2);
      }
    }
  }
  return 0;
}

