
void FUN_1004b2f60(long param_1)

{
  void **ppvVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  undefined8 uVar5;
  Data *pDVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar10;
  Data *pDVar11;
  int iVar12;
  undefined1 local_50 [8];
  undefined8 local_48;
  Data *local_40;
  undefined1 local_31;
  long lVar9;
  
  iVar12 = (int)param_1 + 0x20;
  QSemaphore::acquire(iVar12);
  QSemaphore::available();
  QSemaphore::acquire(iVar12);
  cVar2 = *(char *)(param_1 + 0x38);
  QMutex::lock();
  if (cVar2 == '\0') {
    ppvVar1 = (void **)(param_1 + 0x18);
    do {
      local_40 = (Data *)PTR_shared_null_100ba2188;
      while( true ) {
        puVar7 = *ppvVar1;
        uVar8 = puVar7[2];
        if (puVar7[3] == uVar8) break;
        uVar10 = *puVar7;
        if (1 < uVar10) {
          FUN_1004b3bc0(ppvVar1,puVar7[1]);
          puVar7 = *ppvVar1;
          uVar10 = *puVar7;
          uVar8 = puVar7[2];
        }
        lVar9 = (long)(int)uVar8;
        uVar3 = **(undefined1 **)(puVar7 + lVar9 * 2 + 4);
        uVar5 = *(undefined8 *)(*(undefined1 **)(puVar7 + lVar9 * 2 + 4) + 8);
        if (1 < uVar10) {
          FUN_1004b3bc0(ppvVar1,puVar7[1]);
          puVar7 = *ppvVar1;
          if (1 < *puVar7) {
            FUN_1004b3bc0(ppvVar1,puVar7[1]);
            puVar7 = *ppvVar1;
          }
          lVar9 = (long)(int)puVar7[2];
        }
        if (*(void **)(puVar7 + lVar9 * 2 + 4) != (void *)0x0) {
          operator_delete(*(void **)(puVar7 + lVar9 * 2 + 4));
        }
        QListData::erase(ppvVar1);
        local_50[0] = uVar3;
        local_48 = uVar5;
        FUN_1004b3810(&local_40,local_50);
      }
      QMutex::unlock();
      FUN_1004b3200(param_1,&local_40);
      pDVar6 = local_40;
      if (*(int *)local_40 == 0) {
LAB_1004b30ab:
        iVar4 = *(int *)(local_40 + 0xc);
        if (iVar4 != *(int *)(local_40 + 8)) {
          lVar9 = (long)*(int *)(local_40 + 8) * 8 + (long)iVar4 * -8;
          pDVar11 = local_40 + (long)iVar4 * 8 + 8;
          do {
            if (*(void **)pDVar11 != (void *)0x0) {
              operator_delete(*(void **)pDVar11);
            }
            pDVar11 = pDVar11 + -8;
            lVar9 = lVar9 + 8;
          } while (lVar9 != 0);
        }
        QListData::dispose(pDVar6);
      }
      else if (*(int *)local_40 != -1) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
        if (!(bool)local_31) goto LAB_1004b30ab;
      }
      QSemaphore::acquire(iVar12);
      QSemaphore::available();
      QSemaphore::acquire(iVar12);
      cVar2 = *(char *)(param_1 + 0x38);
      QMutex::lock();
    } while (cVar2 == '\0');
  }
  FUN_1004b3680(param_1 + 0x18);
  QMutex::unlock();
  return;
}

