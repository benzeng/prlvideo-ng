
undefined8 FUN_1008d1ef0(int *param_1,undefined8 param_2)

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
          if (iVar2 == 0) goto LAB_1008d1f4d;
          lVar3 = *(long *)(param_1 + 4);
        }
        lVar3 = FUN_100885dc0(*(undefined8 *)(lVar3 + lVar4 * 8),param_2);
        if (lVar3 != 0) {
          param_1[8] = 2;
          param_1[9] = 0;
          *(long *)(param_1 + 10) = lVar4;
          *(long *)(param_1 + 0xe) = lVar3;
          return 0;
        }
      }
LAB_1008d1f4d:
      lVar4 = lVar4 + 1;
    } while (lVar4 < *param_1);
  }
  iVar2 = FUN_1008852e0(*(undefined8 *)(param_1 + 2),param_2);
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
            if (iVar2 == 0) goto LAB_1008d1fb4;
            lVar3 = *(long *)(param_1 + 4);
          }
          FUN_1008859e0(*(undefined8 *)(lVar3 + lVar4 * 8),param_2);
        }
LAB_1008d1fb4:
        lVar4 = lVar4 + 1;
      } while (lVar4 < *param_1);
    }
  }
  return uVar5;
}

