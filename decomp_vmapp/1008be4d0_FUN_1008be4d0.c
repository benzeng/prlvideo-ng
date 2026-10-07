
undefined8 FUN_1008be4d0(long *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  int local_48 [2];
  undefined8 local_40;
  int local_34;
  
  uVar3 = FUN_100884e10();
  FUN_10081d010(9,0xb,"x509_lu.c",0x1e0);
  iVar1 = FUN_1008be3a0(*(undefined8 *)(*param_1 + 8),1,param_2,&local_34);
  if (iVar1 < 0) {
    FUN_10081d010(10,0xb,"x509_lu.c",0x1e8);
    iVar1 = FUN_1008bdb30(param_1,1,param_2,local_48);
    if (iVar1 != 0) {
      if (local_48[0] == 2) {
        FUN_1008a20a0(local_40);
      }
      else if (local_48[0] == 1) {
        FUN_1008a17f0(local_40);
      }
      FUN_10081d010(9,0xb,"x509_lu.c",0x1ee);
      iVar1 = FUN_1008be3a0(*(undefined8 *)(*param_1 + 8),1,param_2,&local_34);
      if (-1 < iVar1) goto LAB_1008be5c5;
      FUN_10081d010(10,0xb,"x509_lu.c",0x1f1);
    }
    FUN_100884dd0(uVar3);
    uVar3 = 0;
  }
  else {
LAB_1008be5c5:
    if (0 < local_34) {
      iVar5 = 0;
      do {
        lVar4 = FUN_100885620(*(undefined8 *)(*param_1 + 8),iVar1 + iVar5);
        lVar4 = *(long *)(lVar4 + 8);
        FUN_10081d580(lVar4 + 0x1c,1,3,"x509_lu.c",0x1f9);
        iVar2 = FUN_1008852e0(uVar3,lVar4);
        if (iVar2 == 0) {
          FUN_10081d010(10,0xb,"x509_lu.c",0x1fb);
          FUN_1008a17f0(lVar4);
          FUN_100885590(uVar3,FUN_1008a17f0);
          return 0;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < local_34);
    }
    FUN_10081d010(10,0xb,"x509_lu.c",0x201);
  }
  return uVar3;
}

