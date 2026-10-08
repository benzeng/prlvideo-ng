
void FUN_10036c550(long param_1,char param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar1 = *(long *)(param_1 + 0x10);
  lVar4 = *(long *)(lVar1 + 0x40);
  lVar2 = *(long *)(lVar4 + 0x28);
  if (((lVar2 != 0) && (*(int *)(lVar2 + 4) != 0)) && (*(long *)(lVar4 + 0x30) != 0)) {
    lVar4 = FUN_1003797e0();
    if (lVar4 != 0) {
      lVar1 = *(long *)(lVar1 + 0x40);
      lVar4 = *(long *)(lVar1 + 0x28);
      uVar5 = 0;
      if ((lVar4 != 0) && (uVar5 = 0, *(int *)(lVar4 + 4) != 0)) {
        lVar1 = *(long *)(lVar1 + 0x30);
        uVar5 = 0;
        if (lVar1 != 0) {
          uVar5 = FUN_1003797e0(lVar1);
        }
      }
      iVar3 = FUN_100325aa0(uVar5);
      if (iVar3 == 4) {
        FUN_10036a790(*(undefined8 *)(param_1 + 0x10),0);
        if (param_2 == '\0') {
          if (((*(long *)(param_1 + 0x18) == 0) || (*(int *)(*(long *)(param_1 + 0x18) + 4) == 0))
             || (*(long *)(param_1 + 0x20) == 0)) {
LAB_10036c640:
            FUN_10036a790(*(undefined8 *)(param_1 + 0x10),7);
            return;
          }
          iVar3 = FUN_10018a9d0();
          if (iVar3 != 0x30000001) {
            uVar5 = 0;
            if ((*(long *)(param_1 + 0x18) != 0) &&
               (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
              uVar5 = *(undefined8 *)(param_1 + 0x20);
            }
            iVar3 = FUN_10018a9d0(uVar5);
            if (iVar3 != 0x30000009) goto LAB_10036c640;
          }
        }
      }
    }
  }
  FUN_10036abc0(*(undefined8 *)(param_1 + 0x10),7);
  return;
}

