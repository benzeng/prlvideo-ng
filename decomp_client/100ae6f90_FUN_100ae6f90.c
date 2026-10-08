
void FUN_100ae6f90(long *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  QArrayData *pQVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined *local_38;
  
  puVar4 = PTR_shared_null_1021e1288;
  if ((undefined *)*param_1 != PTR_shared_null_1021e1288) {
    iVar7 = (int)*(long *)PTR_shared_null_1021e1288;
    local_38 = puVar4;
    if (iVar7 != -1) {
      if (iVar7 == 0) {
        if ((int)*(uint *)(PTR_shared_null_1021e1288 + 8) < 0) {
          local_38 = (undefined *)
                     QArrayData::allocate
                               (0x20,8,*(uint *)(PTR_shared_null_1021e1288 + 8) & 0x7fffffff,0);
          if (local_38 == (undefined *)0x0) {
            qBadAlloc();
          }
          local_38[0xb] = local_38[0xb] | 0x80;
          puVar9 = local_38;
        }
        else {
          local_38 = (undefined *)
                     QArrayData::allocate(0x20,8,*(long *)PTR_shared_null_1021e1288 >> 0x20,0);
          puVar9 = local_38;
          if (local_38 == (undefined *)0x0) {
            qBadAlloc();
            puVar9 = (undefined *)0x0;
          }
        }
        if ((*(uint *)(puVar9 + 8) & 0x7fffffff) != 0) {
          iVar7 = *(int *)(puVar4 + 4);
          lVar5 = (long)iVar7 << 5;
          if (lVar5 != 0) {
            puVar6 = (undefined8 *)(puVar4 + *(long *)(puVar4 + 0x10));
            puVar8 = (undefined8 *)(puVar9 + *(long *)(puVar9 + 0x10));
            do {
              puVar8[3] = puVar6[3];
              puVar8[2] = puVar6[2];
              uVar2 = *puVar6;
              puVar1 = puVar6 + 1;
              puVar6 = puVar6 + 4;
              puVar8[1] = *puVar1;
              *puVar8 = uVar2;
              puVar8 = puVar8 + 4;
              lVar5 = lVar5 + -0x20;
            } while (lVar5 != 0);
            iVar7 = *(int *)(puVar4 + 4);
          }
          *(int *)(puVar9 + 4) = iVar7;
        }
      }
      else {
        LOCK();
        *(int *)PTR_shared_null_1021e1288 = *(int *)PTR_shared_null_1021e1288 + 1;
        UNLOCK();
      }
    }
    pQVar3 = (QArrayData *)*param_1;
    *param_1 = (long)local_38;
    if (*(int *)pQVar3 != -1) {
      if (*(int *)pQVar3 != 0) {
        LOCK();
        *(int *)pQVar3 = *(int *)pQVar3 + -1;
        UNLOCK();
        if (*(int *)pQVar3 != 0) goto LAB_100ae70db;
      }
      QArrayData::deallocate(pQVar3,0x20,8);
    }
  }
LAB_100ae70db:
  puVar4 = PTR_shared_null_1021e1288;
  if (*(int *)PTR_shared_null_1021e1288 != -1) {
    if (*(int *)PTR_shared_null_1021e1288 != 0) {
      LOCK();
      *(int *)PTR_shared_null_1021e1288 = *(int *)PTR_shared_null_1021e1288 + -1;
      UNLOCK();
      if (*(int *)puVar4 != 0) {
        return;
      }
    }
    QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,0x20,8);
  }
  return;
}

