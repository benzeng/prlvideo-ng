
void FUN_100187600(long *param_1,uint param_2,uint param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  uint *puVar3;
  undefined8 uVar4;
  uint *puVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  undefined8 *puVar9;
  size_t sVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  
  puVar3 = (uint *)*param_1;
  uVar8 = *puVar3;
  puVar5 = (uint *)PTR_shared_null_1021e1288;
  if (param_3 != 0) {
    if ((uVar8 < 2) && ((puVar3[2] & 0x7fffffff) == param_3)) {
      if (((int)puVar3[1] < (int)param_2) && (uVar8 = puVar3[1], uVar8 != param_2)) {
        ___bzero((long)puVar3 + (long)(int)uVar8 * 0x10 + *(long *)(puVar3 + 4),
                 ((long)(int)param_2 - (long)(int)uVar8) * 0x10);
      }
      puVar3[1] = param_2;
      puVar5 = puVar3;
    }
    else {
      puVar5 = (uint *)QArrayData::allocate(0x10,8,(long)(int)param_3);
      if (puVar5 == (uint *)0x0) {
        qBadAlloc();
      }
      puVar5[1] = param_2;
      lVar6 = *param_1;
      puVar12 = (undefined8 *)(*(long *)(lVar6 + 0x10) + lVar6);
      uVar2 = *(uint *)(lVar6 + 4);
      uVar7 = param_2;
      if ((int)uVar2 <= (int)param_2) {
        uVar7 = uVar2;
      }
      puVar11 = (undefined8 *)((long)puVar5 + *(long *)(puVar5 + 4));
      if (uVar8 < 2) {
        sVar10 = (long)(puVar12 + (long)(int)uVar7 * 2) - (long)puVar12;
        _memcpy(puVar11,puVar12,sVar10);
        puVar9 = (undefined8 *)((long)puVar11 + (sVar10 & 0xfffffffffffffff0));
      }
      else {
        puVar9 = puVar11;
        if (puVar12 != puVar12 + (long)(int)uVar7 * 2) {
          uVar8 = ~param_2;
          if ((int)~param_2 <= (int)~uVar2) {
            uVar8 = ~uVar2;
          }
          lVar6 = (long)(int)~uVar8 * 0x10;
          puVar9 = (undefined8 *)((long)puVar5 + *(long *)(puVar5 + 4) + lVar6);
          do {
            uVar4 = *puVar12;
            puVar1 = puVar12 + 1;
            puVar12 = puVar12 + 2;
            puVar11[1] = *puVar1;
            *puVar11 = uVar4;
            puVar11 = puVar11 + 2;
            lVar6 = lVar6 + -0x10;
          } while (lVar6 != 0);
        }
      }
      lVar6 = *param_1;
      if ((*(int *)(lVar6 + 4) < (int)param_2) &&
         (puVar12 = (undefined8 *)
                    ((long)puVar5 + (long)(int)puVar5[1] * 0x10 + *(long *)(puVar5 + 4)),
         puVar9 != puVar12)) {
        ___bzero(puVar9,(long)puVar12 - (long)puVar9 & 0xfffffffffffffff0);
        lVar6 = *param_1;
      }
      puVar5[2] = puVar5[2] & 0x7fffffff | *(uint *)(lVar6 + 8) & 0x80000000;
    }
  }
  puVar3 = (uint *)*param_1;
  if (puVar3 == puVar5) {
    return;
  }
  if (*puVar3 != 0xffffffff) {
    if (*puVar3 != 0) {
      LOCK();
      *puVar3 = *puVar3 - 1;
      UNLOCK();
      if (*puVar3 != 0) goto LAB_1001877f8;
    }
    QArrayData::deallocate((QArrayData *)*param_1,0x10,8);
  }
LAB_1001877f8:
  *param_1 = (long)puVar5;
  return;
}

