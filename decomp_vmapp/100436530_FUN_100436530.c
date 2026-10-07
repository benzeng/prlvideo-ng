
void FUN_100436530(long *param_1)

{
  long *plVar1;
  long lVar2;
  QArrayData *pQVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  QArrayData *pQVar8;
  long *plVar9;
  undefined *puVar10;
  undefined *local_40;
  
  puVar4 = PTR_shared_null_100ba20d0;
  if ((undefined *)*param_1 != PTR_shared_null_100ba20d0) {
    iVar5 = (int)*(long *)PTR_shared_null_100ba20d0;
    local_40 = puVar4;
    if (iVar5 != -1) {
      if (iVar5 == 0) {
        if ((int)*(uint *)(PTR_shared_null_100ba20d0 + 8) < 0) {
          local_40 = (undefined *)
                     QArrayData::allocate
                               (8,8,*(uint *)(PTR_shared_null_100ba20d0 + 8) & 0x7fffffff,0);
          if (local_40 == (undefined *)0x0) {
            qBadAlloc();
          }
          local_40[0xb] = local_40[0xb] | 0x80;
          puVar10 = local_40;
        }
        else {
          local_40 = (undefined *)
                     QArrayData::allocate(8,8,*(long *)PTR_shared_null_100ba20d0 >> 0x20,0);
          puVar10 = local_40;
          if (local_40 == (undefined *)0x0) {
            qBadAlloc();
            puVar10 = (undefined *)0x0;
          }
        }
        if ((*(uint *)(puVar10 + 8) & 0x7fffffff) != 0) {
          iVar5 = *(int *)(puVar4 + 4);
          lVar6 = (long)iVar5 << 3;
          if (lVar6 != 0) {
            plVar7 = (long *)(puVar4 + *(long *)(puVar4 + 0x10));
            plVar9 = (long *)(puVar10 + *(long *)(puVar10 + 0x10));
            do {
              lVar2 = *plVar7;
              *plVar9 = lVar2;
              if (lVar2 != 0) {
                LOCK();
                *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
                UNLOCK();
              }
              plVar9 = plVar9 + 1;
              plVar7 = plVar7 + 1;
              lVar6 = lVar6 + -8;
            } while (lVar6 != 0);
            iVar5 = *(int *)(puVar4 + 4);
            puVar10 = local_40;
          }
          *(int *)(puVar10 + 4) = iVar5;
        }
      }
      else {
        LOCK();
        *(int *)PTR_shared_null_100ba20d0 = *(int *)PTR_shared_null_100ba20d0 + 1;
        UNLOCK();
      }
    }
    pQVar3 = (QArrayData *)*param_1;
    *param_1 = (long)local_40;
    if (*(int *)pQVar3 != -1) {
      if (*(int *)pQVar3 != 0) {
        LOCK();
        *(int *)pQVar3 = *(int *)pQVar3 + -1;
        UNLOCK();
        if (*(int *)pQVar3 != 0) goto LAB_1004366dc;
      }
      lVar6 = (long)*(int *)(pQVar3 + 4) << 3;
      if (lVar6 != 0) {
        pQVar8 = pQVar3 + *(long *)(pQVar3 + 0x10);
        do {
          plVar7 = *(long **)pQVar8;
          if (plVar7 != (long *)0x0) {
            LOCK();
            plVar9 = plVar7 + 1;
            lVar2 = *plVar9;
            *(int *)plVar9 = (int)*plVar9 + -1;
            UNLOCK();
            if ((int)lVar2 == 1) {
              (**(code **)(*plVar7 + 0x10))();
            }
          }
          pQVar8 = pQVar8 + 8;
          lVar6 = lVar6 + -8;
        } while (lVar6 != 0);
      }
      QArrayData::deallocate(pQVar3,8,8);
    }
  }
LAB_1004366dc:
  puVar4 = PTR_shared_null_100ba20d0;
  iVar5 = (int)*(undefined8 *)PTR_shared_null_100ba20d0;
  if (iVar5 != -1) {
    if (iVar5 == 0) {
      iVar5 = (int)((ulong)*(undefined8 *)PTR_shared_null_100ba20d0 >> 0x20);
    }
    else {
      LOCK();
      *(int *)PTR_shared_null_100ba20d0 = *(int *)PTR_shared_null_100ba20d0 + -1;
      UNLOCK();
      if (*(int *)puVar4 != 0) {
        return;
      }
      iVar5 = *(int *)(puVar4 + 4);
    }
    lVar6 = (long)iVar5 << 3;
    if (lVar6 != 0) {
      plVar7 = (long *)(puVar4 + *(long *)(puVar4 + 0x10));
      do {
        plVar9 = (long *)*plVar7;
        if (plVar9 != (long *)0x0) {
          LOCK();
          plVar1 = plVar9 + 1;
          lVar2 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar2 == 1) {
            (**(code **)(*plVar9 + 0x10))();
          }
        }
        plVar7 = plVar7 + 1;
        lVar6 = lVar6 + -8;
      } while (lVar6 != 0);
    }
    QArrayData::deallocate((QArrayData *)PTR_shared_null_100ba20d0,8,8);
  }
  return;
}

