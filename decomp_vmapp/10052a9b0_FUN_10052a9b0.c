
void FUN_10052a9b0(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  QArrayData *pQVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  int *piVar9;
  int *local_38;
  
  *param_1 = &PTR_FUN_100bc4f98;
  puVar4 = PTR_shared_null_100ba20d0;
  param_1[1] = PTR_shared_null_100ba20d0;
  local_38 = (int *)*param_2;
  if (local_38 != (int *)puVar4) {
    if (*local_38 == 0) {
      if (local_38[2] < 0) {
        local_38 = (int *)QArrayData::allocate(0x20,8,local_38[2] & 0x7fffffff,0);
        if (local_38 == (int *)0x0) {
          qBadAlloc();
        }
        *(byte *)((long)local_38 + 0xb) = *(byte *)((long)local_38 + 0xb) | 0x80;
        piVar9 = local_38;
      }
      else {
        local_38 = (int *)QArrayData::allocate(0x20,8,(long)local_38[1],0);
        piVar9 = local_38;
        if (local_38 == (int *)0x0) {
          qBadAlloc();
          piVar9 = (int *)0x0;
        }
      }
      if ((piVar9[2] & 0x7fffffffU) != 0) {
        lVar6 = *param_2;
        lVar7 = (long)*(int *)(lVar6 + 4) << 5;
        if (lVar7 != 0) {
          puVar5 = (undefined8 *)(lVar6 + *(long *)(lVar6 + 0x10));
          puVar8 = (undefined8 *)(*(long *)(piVar9 + 4) + (long)piVar9);
          do {
            puVar8[3] = puVar5[3];
            puVar8[2] = puVar5[2];
            uVar2 = *puVar5;
            puVar1 = puVar5 + 1;
            puVar5 = puVar5 + 4;
            puVar8[1] = *puVar1;
            *puVar8 = uVar2;
            puVar8 = puVar8 + 4;
            lVar7 = lVar7 + -0x20;
          } while (lVar7 != 0);
          lVar6 = *param_2;
        }
        piVar9[1] = *(int *)(lVar6 + 4);
      }
    }
    else if (*local_38 != -1) {
      LOCK();
      *local_38 = *local_38 + 1;
      UNLOCK();
      local_38 = (int *)*param_2;
    }
    pQVar3 = (QArrayData *)param_1[1];
    param_1[1] = local_38;
    if (*(int *)pQVar3 != -1) {
      if (*(int *)pQVar3 != 0) {
        LOCK();
        *(int *)pQVar3 = *(int *)pQVar3 + -1;
        UNLOCK();
        if (*(int *)pQVar3 != 0) {
          return;
        }
      }
      QArrayData::deallocate(pQVar3,0x20,8);
    }
  }
  return;
}

