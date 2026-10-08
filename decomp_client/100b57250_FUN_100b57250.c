
undefined8 *
FUN_100b57250(undefined8 *param_1,long param_2,QString *param_3,undefined8 param_4,
             undefined8 *param_5)

{
  int *piVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  
  lVar3 = *(long *)(param_2 + 8);
  lVar4 = 0;
  if (0 < *(int *)(lVar3 + 4)) {
    lVar4 = 0;
    lVar6 = 0;
    do {
      cVar2 = operator==((QString *)(*(long *)(lVar3 + *(long *)(lVar3 + 0x10) + lVar6 * 8) + 8),
                         param_3);
      if (cVar2 != '\0') {
        lVar3 = *(long *)(*(long *)(param_2 + 8) + *(long *)(*(long *)(param_2 + 8) + 0x10) +
                         lVar6 * 8);
        lVar4 = 0;
        if (lVar3 != 0) {
          lVar4 = FUN_100b57f50(lVar3,param_4);
        }
        break;
      }
      lVar6 = lVar6 + 1;
      lVar3 = *(long *)(param_2 + 8);
    } while (lVar6 < *(int *)(lVar3 + 4));
  }
  puVar5 = (undefined8 *)(lVar4 + 8);
  if (lVar4 == 0) {
    puVar5 = param_5;
  }
  piVar1 = (int *)*puVar5;
  *param_1 = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  return param_1;
}

