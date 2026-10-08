
undefined8 FUN_100c99700(long param_1,long param_2)

{
  int *piVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (param_2 == 0) {
    return 0;
  }
  piVar1 = (int *)FUN_100bf3540(0x10,"x509_lu.c",0x16d);
  if (piVar1 == (int *)0x0) {
    FUN_100c62ee0(0xb,0x7d,0x41,"x509_lu.c",0x16f);
    return 0;
  }
  *piVar1 = 2;
  *(long *)(piVar1 + 2) = param_2;
  FUN_100bf2780(9,0xb,"x509_lu.c",0x175);
  if (*piVar1 == 2) {
    lVar3 = *(long *)(piVar1 + 2) + 0x18;
    uVar2 = 6;
    uVar4 = 0x18d;
  }
  else {
    if (*piVar1 != 1) goto LAB_100c997de;
    lVar3 = *(long *)(piVar1 + 2) + 0x1c;
    uVar2 = 3;
    uVar4 = 0x18a;
  }
  FUN_100bf2cf0(lVar3,1,uVar2,"x509_lu.c",uVar4);
LAB_100c997de:
  lVar3 = FUN_100c995c0(*(undefined8 *)(param_1 + 8),piVar1);
  if (lVar3 == 0) {
    FUN_100c604e0(*(undefined8 *)(param_1 + 8),piVar1);
    uVar2 = 1;
  }
  else {
    if (*piVar1 == 2) {
      FUN_100c7d620(*(undefined8 *)(piVar1 + 2));
    }
    else if (*piVar1 == 1) {
      FUN_100c7cd70(*(undefined8 *)(piVar1 + 2));
    }
    FUN_100bf3910(piVar1);
    FUN_100c62ee0(0xb,0x7d,0x65,"x509_lu.c",0x17c);
    uVar2 = 0;
  }
  FUN_100bf2780(10,0xb,"x509_lu.c",0x181);
  return uVar2;
}

