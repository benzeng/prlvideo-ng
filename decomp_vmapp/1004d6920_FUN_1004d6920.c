
void FUN_1004d6920(long *param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  long lVar4;
  long lVar5;
  
  puVar3 = (uint *)PTR_shared_null_100ba20d0;
  if (param_3 != 0) {
    puVar3 = (uint *)*param_1;
    if ((*puVar3 < 2) && ((puVar3[2] & 0x7fffffff) == param_3)) {
      if ((int)puVar3[1] < (int)param_2) {
        ___bzero(*(long *)(puVar3 + 4) + (long)(int)puVar3[1] + (long)puVar3,
                 (long)(int)param_2 - (long)(int)puVar3[1]);
      }
      puVar3[1] = param_2;
    }
    else {
      puVar3 = (uint *)QArrayData::allocate(1,8,(long)(int)param_3);
      if (puVar3 == (uint *)0x0) {
        qBadAlloc();
      }
      puVar3[1] = param_2;
      lVar4 = *param_1;
      uVar2 = param_2;
      if ((int)*(uint *)(lVar4 + 4) < (int)param_2) {
        uVar2 = *(uint *)(lVar4 + 4);
      }
      lVar5 = *(long *)(puVar3 + 4);
      _memcpy((void *)((long)puVar3 + lVar5),(void *)(lVar4 + *(long *)(lVar4 + 0x10)),
              (long)(int)uVar2);
      lVar4 = *param_1;
      if (*(int *)(lVar4 + 4) < (int)param_2) {
        lVar5 = lVar5 + (int)uVar2;
        ___bzero((long)puVar3 + lVar5,(*(long *)(puVar3 + 4) - lVar5) + (long)(int)puVar3[1]);
        lVar4 = *param_1;
      }
      puVar3[2] = puVar3[2] & 0x7fffffff | *(uint *)(lVar4 + 8) & 0x80000000;
    }
  }
  puVar1 = (uint *)*param_1;
  if (puVar1 == puVar3) {
    return;
  }
  if (*puVar1 != 0xffffffff) {
    if (*puVar1 != 0) {
      LOCK();
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if (*puVar1 != 0) goto LAB_1004d6a61;
    }
    QArrayData::deallocate((QArrayData *)*param_1,1,8);
  }
LAB_1004d6a61:
  *param_1 = (long)puVar3;
  return;
}

