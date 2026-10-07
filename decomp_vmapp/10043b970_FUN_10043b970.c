
uint * FUN_10043b970(undefined8 *param_1,uint *param_2,undefined8 *param_3)

{
  long lVar1;
  QArrayData *pQVar2;
  uint *puVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  int *piVar6;
  uint *puVar7;
  uint *puVar8;
  
  puVar7 = (uint *)*param_1;
  if (1 < *puVar7) {
    FUN_10043bb00(param_1);
    puVar7 = (uint *)*param_1;
  }
  if (*(uint **)(puVar7 + 4) != (uint *)0x0) {
    puVar3 = *(uint **)(puVar7 + 4);
    puVar8 = (uint *)0x0;
    do {
      while (puVar7 = puVar3, puVar7[6] < *param_2) {
        puVar3 = *(uint **)(puVar7 + 4);
        if (*(uint **)(puVar7 + 4) == (uint *)0x0) {
          uVar5 = 0;
          uVar4 = 0;
          if (puVar8 == (uint *)0x0) goto LAB_10043ba31;
          goto LAB_10043b9dd;
        }
      }
      puVar3 = *(uint **)(puVar7 + 2);
      puVar8 = puVar7;
      uVar4 = 1;
    } while (*(uint **)(puVar7 + 2) != (uint *)0x0);
LAB_10043b9dd:
    uVar5 = uVar4;
    if (*param_2 < puVar8[6]) goto LAB_10043ba31;
    *(undefined8 *)(puVar8 + 8) = *param_3;
    piVar6 = (int *)param_3[1];
    if (piVar6 == *(int **)(puVar8 + 10)) {
      return puVar8;
    }
    if (*piVar6 != 0) {
      if (*piVar6 != -1) {
        LOCK();
        *piVar6 = *piVar6 + 1;
        UNLOCK();
        piVar6 = (int *)param_3[1];
      }
      goto LAB_10043babc;
    }
    if (piVar6[2] < 0) {
      piVar6 = (int *)QArrayData::allocate(8,8,piVar6[2] & 0x7fffffff,0);
      if (piVar6 == (int *)0x0) {
        qBadAlloc();
      }
      *(byte *)((long)piVar6 + 0xb) = *(byte *)((long)piVar6 + 0xb) | 0x80;
    }
    else {
      puVar7 = (uint *)0x0;
      piVar6 = (int *)QArrayData::allocate(8,8,(long)piVar6[1],0);
      if (piVar6 == (int *)0x0) {
        qBadAlloc();
        param_1 = (undefined8 *)0x0;
        goto LAB_10043ba2b;
      }
    }
    if ((piVar6[2] & 0x7fffffffU) != 0) {
      lVar1 = param_3[1];
      _memcpy((void *)(*(long *)(piVar6 + 4) + (long)piVar6),
              (void *)(*(long *)(lVar1 + 0x10) + lVar1),(long)*(int *)(lVar1 + 4) << 3);
      piVar6[1] = *(int *)(param_3[1] + 4);
    }
LAB_10043babc:
    pQVar2 = *(QArrayData **)(puVar8 + 10);
    *(int **)(puVar8 + 10) = piVar6;
    if (*(int *)pQVar2 != -1) {
      if (*(int *)pQVar2 != 0) {
        LOCK();
        *(int *)pQVar2 = *(int *)pQVar2 + -1;
        UNLOCK();
        if (*(int *)pQVar2 != 0) {
          return puVar8;
        }
      }
      QArrayData::deallocate(pQVar2,8,8);
    }
    return puVar8;
  }
LAB_10043ba2b:
  puVar7 = puVar7 + 2;
  uVar5 = 1;
LAB_10043ba31:
  puVar7 = (uint *)FUN_10043bc50(*param_1,param_2,param_3,puVar7,uVar5);
  return puVar7;
}

