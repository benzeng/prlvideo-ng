
long FUN_1008db400(undefined8 *param_1)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  int iVar4;
  undefined8 *puVar5;
  
  iVar1 = FUN_100821ab0(*param_1);
  if (iVar1 == 0x17) {
    puVar5 = *(undefined8 **)(param_1[1] + 8);
    if (puVar5 == (undefined8 *)0x0) {
      return 0;
    }
  }
  else {
    if (iVar1 != 0x16) {
      FUN_100887ce0(0x2e,0x80,0x98,"cms_lib.c",0x1a4);
      return 0;
    }
    puVar5 = (undefined8 *)(param_1[1] + 0x18);
  }
  iVar1 = FUN_100885600(*puVar5);
  iVar4 = 0;
  if (iVar1 < 1) {
    lVar3 = 0;
  }
  else {
    lVar3 = 0;
    do {
      piVar2 = (int *)FUN_100885620(*puVar5,iVar4);
      if (*piVar2 == 0) {
        if ((lVar3 == 0) && (lVar3 = FUN_100884e10(), lVar3 == 0)) {
          return 0;
        }
        iVar1 = FUN_1008852e0(lVar3,*(undefined8 *)(piVar2 + 2));
        if (iVar1 == 0) {
          FUN_100885590(lVar3,FUN_1008a17f0);
          return 0;
        }
        FUN_10081d580(*(long *)(piVar2 + 2) + 0x1c,1,3,"cms_lib.c",0x233);
      }
      iVar4 = iVar4 + 1;
      iVar1 = FUN_100885600(*puVar5);
    } while (iVar4 < iVar1);
  }
  return lVar3;
}

