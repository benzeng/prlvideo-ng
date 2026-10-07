
undefined8 FUN_1008bdec0(long param_1,long param_2)

{
  int *piVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (param_2 == 0) {
    return 0;
  }
  piVar1 = (int *)FUN_10081ddd0(0x10,"x509_lu.c",0x14c);
  if (piVar1 == (int *)0x0) {
    FUN_100887ce0(0xb,0x7c,0x41,"x509_lu.c",0x14e);
    return 0;
  }
  *piVar1 = 1;
  *(long *)(piVar1 + 2) = param_2;
  FUN_10081d010(9,0xb,"x509_lu.c",0x154);
  if (*piVar1 == 2) {
    lVar3 = *(long *)(piVar1 + 2) + 0x18;
    uVar2 = 6;
    uVar4 = 0x18d;
  }
  else {
    if (*piVar1 != 1) goto LAB_1008bdf9e;
    lVar3 = *(long *)(piVar1 + 2) + 0x1c;
    uVar2 = 3;
    uVar4 = 0x18a;
  }
  FUN_10081d580(lVar3,1,uVar2,"x509_lu.c",uVar4);
LAB_1008bdf9e:
  lVar3 = FUN_1008be040(*(undefined8 *)(param_1 + 8),piVar1);
  if (lVar3 == 0) {
    FUN_1008852e0(*(undefined8 *)(param_1 + 8),piVar1);
    uVar2 = 1;
  }
  else {
    if (*piVar1 == 2) {
      FUN_1008a20a0(*(undefined8 *)(piVar1 + 2));
    }
    else if (*piVar1 == 1) {
      FUN_1008a17f0(*(undefined8 *)(piVar1 + 2));
    }
    FUN_10081e1a0(piVar1);
    FUN_100887ce0(0xb,0x7c,0x65,"x509_lu.c",0x15c);
    uVar2 = 0;
  }
  FUN_10081d010(10,0xb,"x509_lu.c",0x161);
  return uVar2;
}

