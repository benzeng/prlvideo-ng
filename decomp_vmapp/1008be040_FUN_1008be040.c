
int * FUN_1008be040(undefined8 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  iVar1 = FUN_100885160();
  piVar5 = (int *)0x0;
  if (iVar1 != -1) {
    if (*param_2 - 1U < 2) {
      iVar2 = FUN_100885600(param_1);
      piVar5 = (int *)0x0;
      if (iVar1 < iVar2) {
        piVar5 = (int *)0x0;
        do {
          piVar4 = (int *)FUN_100885620(param_1,iVar1);
          iVar2 = *piVar4;
          iVar3 = iVar2 - *param_2;
          if (iVar3 == 0) {
            if (iVar2 == 2) {
              iVar3 = FUN_1008b6e30(*(undefined8 *)(piVar4 + 2),*(undefined8 *)(param_2 + 2));
              goto LAB_1008be0e0;
            }
            if (iVar2 == 1) {
              iVar3 = FUN_1008b6da0(*(undefined8 *)(piVar4 + 2),*(undefined8 *)(param_2 + 2));
              goto LAB_1008be0e0;
            }
          }
          else {
LAB_1008be0e0:
            if (iVar3 != 0) {
              return (int *)0x0;
            }
            iVar2 = *param_2;
          }
          if (iVar2 == 2) {
            iVar2 = FUN_1008b6ec0(*(undefined8 *)(piVar4 + 2),*(undefined8 *)(param_2 + 2));
          }
          else {
            if (iVar2 != 1) {
              return piVar4;
            }
            iVar2 = FUN_1008b71f0(*(undefined8 *)(piVar4 + 2),*(undefined8 *)(param_2 + 2));
          }
          if (iVar2 == 0) {
            return piVar4;
          }
          iVar1 = iVar1 + 1;
          iVar2 = FUN_100885600(param_1);
        } while (iVar1 < iVar2);
      }
    }
    else {
      piVar5 = (int *)FUN_100885620(param_1,iVar1);
    }
  }
  return piVar5;
}

