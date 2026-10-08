
undefined8 FUN_100b56780(long param_1,QString *param_2)

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
        return *(undefined8 *)
                (*(long *)(param_1 + 8) + *(long *)(*(long *)(param_1 + 8) + 0x10) + lVar3 * 8);
      }
      lVar3 = lVar3 + 1;
      lVar2 = *(long *)(param_1 + 8);
    } while (lVar3 < *(int *)(lVar2 + 4));
  }
  return 0;
}

