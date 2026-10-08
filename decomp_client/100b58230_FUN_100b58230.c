
void FUN_100b58230(long *param_1)

{
  QArrayData *pQVar1;
  undefined *puVar2;
  int iVar3;
  undefined *puVar4;
  undefined *local_38;
  
  puVar2 = PTR_shared_null_1021e1288;
  if ((undefined *)*param_1 != PTR_shared_null_1021e1288) {
    iVar3 = (int)*(long *)PTR_shared_null_1021e1288;
    local_38 = puVar2;
    if (iVar3 != -1) {
      if (iVar3 == 0) {
        if ((int)*(uint *)(PTR_shared_null_1021e1288 + 8) < 0) {
          local_38 = (undefined *)
                     QArrayData::allocate
                               (8,8,*(uint *)(PTR_shared_null_1021e1288 + 8) & 0x7fffffff,0);
          if (local_38 == (undefined *)0x0) {
            qBadAlloc();
          }
          local_38[0xb] = local_38[0xb] | 0x80;
          puVar4 = local_38;
        }
        else {
          local_38 = (undefined *)
                     QArrayData::allocate(8,8,*(long *)PTR_shared_null_1021e1288 >> 0x20,0);
          puVar4 = local_38;
          if (local_38 == (undefined *)0x0) {
            qBadAlloc();
            puVar4 = (undefined *)0x0;
          }
        }
        if ((*(uint *)(puVar4 + 8) & 0x7fffffff) != 0) {
          _memcpy(puVar4 + *(long *)(puVar4 + 0x10),puVar2 + *(long *)(puVar2 + 0x10),
                  (long)*(int *)(puVar2 + 4) << 3);
          *(undefined4 *)(local_38 + 4) = *(undefined4 *)(puVar2 + 4);
        }
      }
      else {
        LOCK();
        *(int *)PTR_shared_null_1021e1288 = *(int *)PTR_shared_null_1021e1288 + 1;
        UNLOCK();
      }
    }
    pQVar1 = (QArrayData *)*param_1;
    *param_1 = (long)local_38;
    if (*(int *)pQVar1 != -1) {
      if (*(int *)pQVar1 != 0) {
        LOCK();
        *(int *)pQVar1 = *(int *)pQVar1 + -1;
        UNLOCK();
        if (*(int *)pQVar1 != 0) goto LAB_100b5834c;
      }
      QArrayData::deallocate(pQVar1,8,8);
    }
  }
LAB_100b5834c:
  puVar2 = PTR_shared_null_1021e1288;
  if (*(int *)PTR_shared_null_1021e1288 != -1) {
    if (*(int *)PTR_shared_null_1021e1288 != 0) {
      LOCK();
      *(int *)PTR_shared_null_1021e1288 = *(int *)PTR_shared_null_1021e1288 + -1;
      UNLOCK();
      if (*(int *)puVar2 != 0) {
        return;
      }
    }
    QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,8,8);
  }
  return;
}

