
void FUN_100b57ec0(long param_1,QString *param_2,undefined8 param_3)

{
  char cVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + 8);
  if (0 < *(int *)(lVar2 + 4)) {
    lVar3 = 0;
    do {
      cVar1 = operator==((QString *)(*(long *)(lVar2 + *(long *)(lVar2 + 0x10) + lVar3 * 8) + 8),
                         param_2);
      if (cVar1 != '\0') {
        lVar2 = *(long *)(*(long *)(param_1 + 8) + *(long *)(*(long *)(param_1 + 8) + 0x10) +
                         lVar3 * 8);
        if (lVar2 == 0) {
          return;
        }
        FUN_100b562d0(lVar2,param_3);
        return;
      }
      lVar3 = lVar3 + 1;
      lVar2 = *(long *)(param_1 + 8);
    } while (lVar3 < *(int *)(lVar2 + 4));
  }
  return;
}

