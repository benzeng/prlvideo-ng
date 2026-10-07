
undefined8 FUN_1008b7c90(long *param_1)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined8 local_28;
  
  piVar3 = (int *)PTR_DAT_1011b0cd0;
  uVar4 = 0;
  if (param_1 != (long *)0x0) {
    uVar4 = 0;
    if ((*param_1 != 0) && (PTR_DAT_1011b0cd0 != (undefined *)0x0)) {
      uVar4 = 0;
      if (*(int *)PTR_DAT_1011b0cd0 != 0) {
        iVar1 = FUN_1008bc8a0(*(undefined8 *)(*param_1 + 0x30),*(int *)PTR_DAT_1011b0cd0,0xffffffff)
        ;
        while (iVar1 == -1) {
          piVar3 = piVar3 + 1;
          if (*piVar3 == 0) {
            return 0;
          }
          iVar1 = FUN_1008bc8a0(*(undefined8 *)(*param_1 + 0x30),*piVar3,0xffffffff);
        }
        lVar2 = FUN_1008bc9b0(*(undefined8 *)(*param_1 + 0x30),iVar1);
        if (*(int *)(lVar2 + 8) == 0) {
          iVar1 = FUN_100885600(*(undefined8 *)(lVar2 + 0x10));
          if (iVar1 == 0) {
            return 0;
          }
          piVar3 = (int *)FUN_100885620(*(undefined8 *)(lVar2 + 0x10),0);
        }
        else {
          piVar3 = *(int **)(lVar2 + 0x10);
        }
        uVar4 = 0;
        if ((piVar3 != (int *)0x0) && (uVar4 = 0, *piVar3 == 0x10)) {
          local_28 = *(undefined8 *)(*(long *)(piVar3 + 2) + 8);
          uVar4 = FUN_1008a5f10(0,&local_28,(long)**(int **)(piVar3 + 2),&DAT_100be27b8);
        }
      }
    }
  }
  return uVar4;
}

