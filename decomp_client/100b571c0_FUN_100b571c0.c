
undefined8 FUN_100b571c0(long param_1,QString *param_2,undefined8 param_3)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar2 = *(long *)(param_1 + 8);
  if (0 < *(int *)(lVar2 + 4)) {
    lVar4 = 0;
    do {
      cVar1 = operator==((QString *)(*(long *)(lVar2 + *(long *)(lVar2 + 0x10) + lVar4 * 8) + 8),
                         param_2);
      if (cVar1 != '\0') {
        lVar2 = *(long *)(*(long *)(param_1 + 8) + *(long *)(*(long *)(param_1 + 8) + 0x10) +
                         lVar4 * 8);
        if (lVar2 == 0) {
          return 0;
        }
        uVar3 = FUN_100b57f50(lVar2,param_3);
        return uVar3;
      }
      lVar4 = lVar4 + 1;
      lVar2 = *(long *)(param_1 + 8);
    } while (lVar4 < *(int *)(lVar2 + 4));
  }
  return 0;
}

