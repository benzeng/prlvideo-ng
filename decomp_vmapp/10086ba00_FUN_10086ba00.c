
long FUN_10086ba00(long param_1,undefined4 *param_2,undefined8 param_3)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 local_40 [16];
  
  FUN_10081d010(5,9,"rsa_eay.c",0x106);
  lVar3 = *(long *)(param_1 + 0x98);
  bVar1 = false;
  if (lVar3 == 0) {
    FUN_10081d010(6,9,"rsa_eay.c",0x109);
    FUN_10081d010(9,9,"rsa_eay.c",0x10a);
    lVar3 = *(long *)(param_1 + 0x98);
    bVar1 = true;
    if (lVar3 == 0) {
      lVar3 = FUN_100871080(param_1,param_3);
      *(long *)(param_1 + 0x98) = lVar3;
      lVar5 = 0;
      if (lVar3 == 0) goto LAB_10086bb57;
    }
  }
  FUN_10081d470(local_40);
  uVar4 = FUN_100851090(lVar3);
  iVar2 = FUN_10081d4e0(local_40,uVar4);
  if (iVar2 == 0) {
    *param_2 = 1;
  }
  else {
    *param_2 = 0;
    lVar3 = *(long *)(param_1 + 0xa0);
    if (lVar3 == 0) {
      if (!bVar1) {
        FUN_10081d010(6,9,"rsa_eay.c",0x126);
        FUN_10081d010(9,9,"rsa_eay.c",0x127);
        lVar5 = *(long *)(param_1 + 0xa0);
        if (*(long *)(param_1 + 0xa0) != 0) goto LAB_10086bb57;
      }
      lVar5 = FUN_100871080(param_1,param_3);
      *(long *)(param_1 + 0xa0) = lVar5;
      goto LAB_10086bb57;
    }
  }
  lVar5 = lVar3;
  if (!bVar1) {
    FUN_10081d010(6,9,"rsa_eay.c",0x135);
    return lVar3;
  }
LAB_10086bb57:
  FUN_10081d010(10,9,"rsa_eay.c",0x133);
  return lVar5;
}

