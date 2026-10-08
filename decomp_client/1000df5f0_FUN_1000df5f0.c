
undefined1 FUN_1000df5f0(long param_1,int *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined1 uVar4;
  int *piVar5;
  
  QMutex::lock();
  lVar2 = *(long *)(param_1 + 0x70);
  iVar1 = *(int *)(lVar2 + 8);
  if (iVar1 != *(int *)(lVar2 + 0xc)) {
    puVar3 = (undefined8 *)(lVar2 + 0x10 + (long)iVar1 * 8);
    lVar2 = (long)*(int *)(lVar2 + 0xc) * 8 + (long)iVar1 * -8;
    do {
      piVar5 = (int *)0x0;
      if (*(long *)*puVar3 != 0) {
        piVar5 = *(int **)(*(long *)*puVar3 + 0x10);
      }
      if ((param_2[1] == piVar5[1]) && (uVar4 = 1, *param_2 == *piVar5)) goto LAB_1000df66b;
      puVar3 = puVar3 + 1;
      lVar2 = lVar2 + -8;
    } while (lVar2 != 0);
  }
  uVar4 = 0;
LAB_1000df66b:
  QMutex::unlock();
  return uVar4;
}

