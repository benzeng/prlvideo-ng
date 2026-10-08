
undefined8 * FUN_1006136e0(undefined8 *param_1,undefined8 *param_2,QString *param_3)

{
  int *piVar1;
  undefined8 uVar2;
  long lVar3;
  char cVar4;
  uint *puVar5;
  long lVar6;
  long lVar7;
  
  puVar5 = (uint *)*param_2;
  if (1 < *puVar5) {
    FUN_100614e30(param_2);
    puVar5 = (uint *)*param_2;
  }
  lVar3 = *(long *)(puVar5 + 4);
  lVar7 = 0;
  if (*(long *)(puVar5 + 4) != 0) {
    do {
      while (lVar6 = lVar3, cVar4 = operator<((QString *)(lVar6 + 0x18),param_3), cVar4 == '\0') {
        lVar3 = *(long *)(lVar6 + 8);
        lVar7 = lVar6;
        if (*(long *)(lVar6 + 8) == 0) goto LAB_100613756;
      }
      lVar3 = *(long *)(lVar6 + 0x10);
    } while (*(long *)(lVar6 + 0x10) != 0);
    lVar6 = lVar7;
    if (lVar7 != 0) {
LAB_100613756:
      cVar4 = operator<(param_3,(QString *)(lVar6 + 0x18));
      if (cVar4 == '\0') {
        piVar1 = *(int **)(lVar6 + 0x20);
        uVar2 = *(undefined8 *)(lVar6 + 0x28);
        *param_1 = piVar1;
        param_1[1] = uVar2;
        if (piVar1 != (int *)0x0) {
          LOCK();
          *piVar1 = *piVar1 + 1;
          UNLOCK();
        }
        FUN_100614fa0(*param_2,lVar6);
        return param_1;
      }
    }
  }
  param_1[1] = 0;
  *param_1 = 0;
  return param_1;
}

