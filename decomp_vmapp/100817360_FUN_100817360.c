
undefined8 FUN_100817360(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  
  uVar3 = 1;
  if (param_2 == (int *)0x0) {
    return 1;
  }
  if (*param_2 == 0) {
    return 1;
  }
  if (param_1 - 0xc1U < 0x3f) {
    FUN_10081e310(3);
    piVar2 = (int *)FUN_10081ddd0(0x18,"ssl_ciph.c",0x75a);
    *piVar2 = param_1;
    *(int **)(piVar2 + 4) = param_2;
    FUN_100815180();
    if (DAT_1011c05f8 != 0) {
      iVar1 = FUN_100885160(DAT_1011c05f8,piVar2);
      if (-1 < iVar1) {
        FUN_10081e1a0(piVar2);
        FUN_10081e310(2);
        FUN_100887ce0(0x14,0xa5,0x135,"ssl_ciph.c",0x762);
        return 1;
      }
      if ((DAT_1011c05f8 != 0) && (iVar1 = FUN_1008852e0(DAT_1011c05f8,piVar2), iVar1 != 0)) {
        FUN_10081e310(2);
        goto LAB_1008173b7;
      }
    }
    FUN_10081e1a0(piVar2);
    FUN_10081e310(2);
    FUN_100887ce0(0x14,0xa5,0x41,"ssl_ciph.c",0x768);
  }
  else {
    FUN_100887ce0(0x14,0xa5,0x133,"ssl_ciph.c",0x755);
LAB_1008173b7:
    uVar3 = 0;
  }
  return uVar3;
}

