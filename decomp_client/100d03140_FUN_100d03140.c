
undefined8 * FUN_100d03140(undefined8 *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  int *piVar3;
  undefined8 *puVar4;
  long lVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  *param_1 = *(undefined8 *)(param_2 + 0x28);
  plVar1 = param_1 + 1;
  piVar3 = *(int **)(param_2 + 0x30);
  iVar6 = *piVar3;
  if (iVar6 == 0) {
    if (piVar3[2] < 0) {
      lVar2 = QArrayData::allocate(0x20,8,piVar3[2] & 0x7fffffff,0);
      *plVar1 = lVar2;
      if (lVar2 == 0) {
        qBadAlloc();
      }
      *(byte *)(lVar2 + 0xb) = *(byte *)(lVar2 + 0xb) | 0x80;
    }
    else {
      iVar6 = 0;
      lVar2 = QArrayData::allocate(0x20,8,(long)piVar3[1]);
      *plVar1 = lVar2;
      if (lVar2 == 0) {
        piVar3 = (int *)qBadAlloc();
        goto LAB_100d03197;
      }
    }
    if ((*(uint *)(lVar2 + 8) & 0x7fffffff) != 0) {
      lVar5 = *(long *)(param_2 + 0x30);
      if (((long)*(int *)(lVar5 + 4) & 0x7ffffffffffffffU) != 0) {
        puVar4 = (undefined8 *)(lVar5 + *(long *)(lVar5 + 0x10));
        puVar7 = puVar4 + (long)*(int *)(lVar5 + 4) * 4;
        puVar8 = (undefined8 *)(lVar2 + *(long *)(lVar2 + 0x10));
        do {
          piVar3 = (int *)*puVar4;
          *puVar8 = piVar3;
          if (1 < *piVar3 + 1U) {
            LOCK();
            *piVar3 = *piVar3 + 1;
            UNLOCK();
          }
          piVar3 = (int *)puVar4[1];
          puVar8[1] = piVar3;
          if (1 < *piVar3 + 1U) {
            LOCK();
            *piVar3 = *piVar3 + 1;
            UNLOCK();
          }
          piVar3 = (int *)puVar4[2];
          puVar8[2] = piVar3;
          if (1 < *piVar3 + 1U) {
            LOCK();
            *piVar3 = *piVar3 + 1;
            UNLOCK();
          }
          *(undefined2 *)(puVar8 + 3) = *(undefined2 *)(puVar4 + 3);
          puVar4 = puVar4 + 4;
          puVar8 = puVar8 + 4;
        } while (puVar4 != puVar7);
        lVar5 = *(long *)(param_2 + 0x30);
        lVar2 = *plVar1;
      }
      *(undefined4 *)(lVar2 + 4) = *(undefined4 *)(lVar5 + 4);
    }
  }
  else {
LAB_100d03197:
    if (iVar6 == -1) {
      *plVar1 = (long)piVar3;
    }
    else {
      LOCK();
      *piVar3 = *piVar3 + 1;
      UNLOCK();
      *plVar1 = *(long *)(param_2 + 0x30);
    }
  }
  return param_1;
}

