
undefined8 FUN_100c99c40(long *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  int local_48 [2];
  undefined8 local_40;
  int local_34;
  
  uVar3 = FUN_100c60010();
  FUN_100bf2780(9,0xb,"x509_lu.c",0x20d);
  FUN_100bf2780(10,0xb,"x509_lu.c",0x212);
  iVar1 = FUN_100c990b0(param_1,2,param_2,local_48);
  if (iVar1 != 0) {
    if (local_48[0] == 2) {
      FUN_100c7d620(local_40);
    }
    else if (local_48[0] == 1) {
      FUN_100c7cd70(local_40);
    }
    FUN_100bf2780(9,0xb,"x509_lu.c",0x218);
    iVar1 = FUN_100c99920(*(undefined8 *)(*param_1 + 8),2,param_2,&local_34);
    if (-1 < iVar1) {
      if (0 < local_34) {
        iVar5 = 0;
        do {
          lVar4 = FUN_100c60820(*(undefined8 *)(*param_1 + 8),iVar1 + iVar5);
          lVar4 = *(long *)(lVar4 + 8);
          FUN_100bf2cf0(lVar4 + 0x18,1,6,"x509_lu.c",0x223);
          iVar2 = FUN_100c604e0(uVar3,lVar4);
          if (iVar2 == 0) {
            FUN_100bf2780(10,0xb,"x509_lu.c",0x225);
            FUN_100c7d620(lVar4);
            FUN_100c60790(uVar3,FUN_100c7d620);
            return 0;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < local_34);
      }
      FUN_100bf2780(10,0xb,"x509_lu.c",0x22b);
      return uVar3;
    }
    FUN_100bf2780(10,0xb,"x509_lu.c",0x21b);
  }
  FUN_100c5ffd0(uVar3);
  return 0;
}

