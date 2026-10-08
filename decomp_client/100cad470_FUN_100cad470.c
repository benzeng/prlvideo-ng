
undefined8 FUN_100cad470(int *param_1,undefined8 param_2)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  if (0 < *param_1) {
    lVar4 = 0;
    do {
      lVar3 = *(long *)(param_1 + 4);
      if (*(long *)(lVar3 + lVar4 * 8) != 0) {
        pcVar1 = *(code **)(*(long *)(param_1 + 6) + lVar4 * 8);
        if (pcVar1 != (code *)0x0) {
          iVar2 = (*pcVar1)(param_2);
          if (iVar2 == 0) goto LAB_100cad4cd;
          lVar3 = *(long *)(param_1 + 4);
        }
        lVar3 = FUN_100c60fc0(*(undefined8 *)(lVar3 + lVar4 * 8),param_2);
        if (lVar3 != 0) {
          param_1[8] = 2;
          param_1[9] = 0;
          *(long *)(param_1 + 10) = lVar4;
          *(long *)(param_1 + 0xe) = lVar3;
          return 0;
        }
      }
LAB_100cad4cd:
      lVar4 = lVar4 + 1;
    } while (lVar4 < *param_1);
  }
  iVar2 = FUN_100c604e0(*(undefined8 *)(param_1 + 2),param_2);
  if (iVar2 == 0) {
    param_1[8] = 1;
    param_1[9] = 0;
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
    if (0 < *param_1) {
      lVar4 = 0;
      do {
        lVar3 = *(long *)(param_1 + 4);
        if (*(long *)(lVar3 + lVar4 * 8) != 0) {
          pcVar1 = *(code **)(*(long *)(param_1 + 6) + lVar4 * 8);
          if (pcVar1 != (code *)0x0) {
            iVar2 = (*pcVar1)(param_2);
            if (iVar2 == 0) goto LAB_100cad534;
            lVar3 = *(long *)(param_1 + 4);
          }
          FUN_100c60be0(*(undefined8 *)(lVar3 + lVar4 * 8),param_2);
        }
LAB_100cad534:
        lVar4 = lVar4 + 1;
      } while (lVar4 < *param_1);
    }
  }
  return uVar5;
}

