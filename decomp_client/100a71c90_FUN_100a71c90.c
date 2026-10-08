
void FUN_100a71c90(long *param_1,uint param_2,uint param_3)

{
  void *pvVar1;
  long lVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  long lVar6;
  
  puVar5 = (uint *)PTR_shared_null_1021e1288;
  if (param_3 != 0) {
    puVar5 = (uint *)*param_1;
    if ((*puVar5 < 2) && ((puVar5[2] & 0x7fffffff) == param_3)) {
      if ((int)puVar5[1] < (int)param_2) {
        ___bzero((long)puVar5 + (long)(int)puVar5[1] * 8 + *(long *)(puVar5 + 4),
                 ((long)(int)param_2 - (long)(int)puVar5[1]) * 8);
      }
      puVar5[1] = param_2;
    }
    else {
      puVar5 = (uint *)QArrayData::allocate(8,8,(long)(int)param_3);
      if (puVar5 == (uint *)0x0) {
        qBadAlloc();
      }
      puVar5[1] = param_2;
      lVar6 = *param_1;
      uVar4 = *(uint *)(lVar6 + 4);
      if ((int)param_2 < (int)*(uint *)(lVar6 + 4)) {
        uVar4 = param_2;
      }
      lVar2 = *(long *)(puVar5 + 4);
      _memcpy((void *)(lVar2 + (long)puVar5),(void *)(*(long *)(lVar6 + 0x10) + lVar6),
              (long)(int)uVar4 * 8);
      lVar6 = *param_1;
      if (*(int *)(lVar6 + 4) < (int)param_2) {
        pvVar1 = (void *)(lVar2 + (long)puVar5 + (long)(int)uVar4 * 8);
        ___bzero(pvVar1,(long)puVar5 +
                        (((long)(int)puVar5[1] * 8 + *(long *)(puVar5 + 4)) - (long)pvVar1));
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
      if (*puVar3 != 0) goto LAB_100a71dd7;
    }
    QArrayData::deallocate((QArrayData *)*param_1,8,8);
  }
LAB_100a71dd7:
  *param_1 = (long)puVar5;
  return;
}

