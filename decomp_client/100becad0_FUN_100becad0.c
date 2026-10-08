
undefined8 FUN_100becad0(int param_1,int *param_2)

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
    FUN_100bf3a80(3);
    piVar2 = (int *)FUN_100bf3540(0x18,"ssl_ciph.c",0x75a);
    *piVar2 = param_1;
    *(int **)(piVar2 + 4) = param_2;
    FUN_100bea8f0();
    if (DAT_102315fe8 != 0) {
      iVar1 = FUN_100c60360(DAT_102315fe8,piVar2);
      if (-1 < iVar1) {
        FUN_100bf3910(piVar2);
        FUN_100bf3a80(2);
        FUN_100c62ee0(0x14,0xa5,0x135,"ssl_ciph.c",0x762);
        return 1;
      }
      if ((DAT_102315fe8 != 0) && (iVar1 = FUN_100c604e0(DAT_102315fe8,piVar2), iVar1 != 0)) {
        FUN_100bf3a80(2);
        goto LAB_100becb27;
      }
    }
    FUN_100bf3910(piVar2);
    FUN_100bf3a80(2);
    FUN_100c62ee0(0x14,0xa5,0x41,"ssl_ciph.c",0x768);
  }
  else {
    FUN_100c62ee0(0x14,0xa5,0x133,"ssl_ciph.c",0x755);
LAB_100becb27:
    uVar3 = 0;
  }
  return uVar3;
}

