
long FUN_100c42590(int param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 local_20;
  
  if (param_1 == 6) {
    lVar3 = FUN_100c3f040();
    if (lVar3 == 0) {
      FUN_100c62ee0(0x10,0xdc,0x41,"ec_ameth.c",0x9d);
    }
    else {
      uVar1 = FUN_100bf7220(param_2);
      lVar4 = FUN_100c3c2e0(uVar1);
      if (lVar4 != 0) {
        FUN_100c36c60(lVar4,1);
        iVar2 = FUN_100c3fae0(lVar3,lVar4);
        if (iVar2 != 0) {
          FUN_100c36170(lVar4);
          return lVar3;
        }
      }
      FUN_100c3f180(lVar3);
    }
  }
  else if (param_1 == 0x10) {
    local_20 = *(undefined8 *)(param_2 + 2);
    lVar3 = FUN_100c3ed50(0,&local_20,(long)*param_2);
    if (lVar3 != 0) {
      return lVar3;
    }
    FUN_100c62ee0(0x10,0xdc,0x8e,"ec_ameth.c",0x92);
  }
  else {
    FUN_100c62ee0(0x10,0xdc,0x8e,"ec_ameth.c",0xa8);
  }
  return 0;
}

