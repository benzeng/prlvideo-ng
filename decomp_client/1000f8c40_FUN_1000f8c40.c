
long * FUN_1000f8c40(long *param_1,long *param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  
  lVar3 = *param_2;
  if (*(int *)(lVar3 + 8) != *(int *)(lVar3 + 0xc)) {
    puVar2 = (undefined8 *)(lVar3 + 0x10 + (long)*(int *)(lVar3 + 8) * 8);
    do {
      lVar3 = 0;
      if (*(long *)*puVar2 != 0) {
        lVar3 = *(long *)(*(long *)*puVar2 + 0x10);
      }
      iVar1 = QString::compare(lVar3 + 0x10,param_3,0);
      if (iVar1 == 0) {
        lVar3 = *(long *)*puVar2;
        *param_1 = lVar3;
        if (lVar3 == 0) {
          return param_1;
        }
        LOCK();
        *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
        UNLOCK();
        return param_1;
      }
      puVar2 = puVar2 + 1;
    } while (puVar2 != (undefined8 *)(*param_2 + 0x10 + (long)*(int *)(*param_2 + 0xc) * 8));
  }
  *param_1 = 0;
  return param_1;
}

