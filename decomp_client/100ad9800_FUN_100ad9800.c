
undefined8 * FUN_100ad9800(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  QArrayData *pQVar3;
  int *piVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  int *local_30;
  
  local_30 = (int *)*param_2;
  if (local_30 != (int *)*param_1) {
    if (*local_30 == 0) {
      if (local_30[2] < 0) {
        piVar4 = (int *)QArrayData::allocate(0x18,8,local_30[2] & 0x7fffffff,0);
        if (piVar4 == (int *)0x0) {
          qBadAlloc();
        }
        *(byte *)((long)piVar4 + 0xb) = *(byte *)((long)piVar4 + 0xb) | 0x80;
        local_30 = piVar4;
      }
      else {
        local_30 = (int *)QArrayData::allocate(0x18,8,(long)local_30[1],0);
        piVar4 = local_30;
        if (local_30 == (int *)0x0) {
          qBadAlloc();
          piVar4 = (int *)0x0;
        }
      }
      if ((piVar4[2] & 0x7fffffffU) != 0) {
        lVar6 = *param_2;
        lVar7 = (long)*(int *)(lVar6 + 4) * 0x18;
        if (lVar7 != 0) {
          puVar5 = (undefined8 *)(lVar6 + *(long *)(lVar6 + 0x10));
          puVar8 = (undefined8 *)(*(long *)(piVar4 + 4) + (long)piVar4);
          do {
            puVar8[2] = puVar5[2];
            uVar2 = *puVar5;
            puVar1 = puVar5 + 1;
            puVar5 = puVar5 + 3;
            puVar8[1] = *puVar1;
            *puVar8 = uVar2;
            puVar8 = puVar8 + 3;
            lVar7 = lVar7 + -0x18;
          } while (lVar7 != 0);
          lVar6 = *param_2;
        }
        piVar4[1] = *(int *)(lVar6 + 4);
      }
    }
    else if (*local_30 != -1) {
      LOCK();
      *local_30 = *local_30 + 1;
      UNLOCK();
      local_30 = (int *)*param_2;
    }
    pQVar3 = (QArrayData *)*param_1;
    *param_1 = local_30;
    if (*(int *)pQVar3 != -1) {
      if (*(int *)pQVar3 != 0) {
        LOCK();
        *(int *)pQVar3 = *(int *)pQVar3 + -1;
        UNLOCK();
        if (*(int *)pQVar3 != 0) {
          return param_1;
        }
      }
      QArrayData::deallocate(pQVar3,0x18,8);
    }
  }
  return param_1;
}

