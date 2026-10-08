
void FUN_1007a16f0(long *param_1)

{
  undefined *puVar1;
  QArrayData *pQVar2;
  QArrayData *pQVar3;
  QArrayData *pQVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  puVar1 = PTR_shared_null_1021e1288;
  local_40 = PTR_shared_null_1021e1288;
  if ((undefined *)*param_1 != PTR_shared_null_1021e1288) {
    FUN_1007a2540(&local_38,&local_40);
    pQVar4 = (QArrayData *)*param_1;
    *param_1 = (long)local_38;
    local_38 = pQVar4;
    if (*(int *)pQVar4 != -1) {
      if (*(int *)pQVar4 != 0) {
        LOCK();
        *(int *)pQVar4 = *(int *)pQVar4 + -1;
        local_29 = *(int *)pQVar4 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1007a17ab;
      }
      lVar6 = (long)*(int *)(pQVar4 + 4) << 3;
      if (lVar6 != 0) {
        pQVar2 = pQVar4 + *(long *)(pQVar4 + 0x10);
        do {
          pQVar3 = *(QArrayData **)pQVar2;
          if (*(int *)pQVar3 == 0) {
LAB_1007a1780:
            QArrayData::deallocate(pQVar3,8,8);
          }
          else if (*(int *)pQVar3 != -1) {
            LOCK();
            *(int *)pQVar3 = *(int *)pQVar3 + -1;
            local_29 = *(int *)pQVar3 != 0;
            UNLOCK();
            if (!(bool)local_29) {
              pQVar3 = *(QArrayData **)pQVar2;
              goto LAB_1007a1780;
            }
          }
          pQVar2 = pQVar2 + 8;
          lVar6 = lVar6 + -8;
        } while (lVar6 != 0);
      }
      QArrayData::deallocate(pQVar4,8,8);
    }
  }
LAB_1007a17ab:
  if (*(int *)puVar1 != -1) {
    if (*(int *)puVar1 != 0) {
      LOCK();
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      local_38 = (QArrayData *)CONCAT71(local_38._1_7_,*(int *)puVar1 != 0);
      if (*(int *)puVar1 != 0) {
        return;
      }
    }
    lVar6 = (long)*(int *)(puVar1 + 4) << 3;
    if (lVar6 != 0) {
      puVar5 = (undefined8 *)(puVar1 + *(long *)(puVar1 + 0x10));
      do {
        pQVar4 = (QArrayData *)*puVar5;
        if (*(int *)pQVar4 == 0) {
LAB_1007a1810:
          QArrayData::deallocate(pQVar4,8,8);
        }
        else if (*(int *)pQVar4 != -1) {
          LOCK();
          *(int *)pQVar4 = *(int *)pQVar4 + -1;
          UNLOCK();
          local_38 = (QArrayData *)CONCAT71(local_38._1_7_,*(int *)pQVar4 != 0);
          if (*(int *)pQVar4 == 0) {
            pQVar4 = (QArrayData *)*puVar5;
            goto LAB_1007a1810;
          }
        }
        puVar5 = puVar5 + 1;
        lVar6 = lVar6 + -8;
      } while (lVar6 != 0);
    }
    QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,8,8);
  }
  return;
}

