
void FUN_1004e6250(long param_1)

{
  QStringList *pQVar1;
  int iVar2;
  Data *pDVar3;
  Data *pDVar4;
  QArrayData *pQVar5;
  long lVar6;
  long lVar7;
  Data *local_50;
  Data *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  QString::trimmed();
  if (*(int *)(local_40 + 4) == 0) {
    FUN_1005245c0(param_1 + 0x40,&local_40);
    *(undefined1 *)(param_1 + 0x28) = 0;
    FUN_1004e6080(param_1);
    if (((*(long *)(param_1 + 0x88) != 0) && (*(int *)(*(long *)(param_1 + 0x88) + 4) != 0)) &&
       (*(long **)(param_1 + 0x90) != (long *)0x0)) {
      (**(code **)(**(long **)(param_1 + 0x90) + 0x20))();
    }
    local_48 = (Data *)PTR_shared_null_1021e15e8;
    CMacToolbarSearchField::setItems(*(QStringList **)(param_1 + 0x20));
    pDVar3 = local_48;
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1004e6461;
      }
      iVar2 = *(int *)(local_48 + 0xc);
      if (iVar2 != *(int *)(local_48 + 8)) {
        lVar7 = (long)*(int *)(local_48 + 8) * 8 + (long)iVar2 * -8;
        pDVar4 = local_48 + (long)iVar2 * 8 + 8;
        do {
          pQVar5 = *(QArrayData **)pDVar4;
          if (*(int *)pQVar5 == 0) {
LAB_1004e6440:
            QArrayData::deallocate(pQVar5,2,8);
          }
          else if (*(int *)pQVar5 != -1) {
            LOCK();
            *(int *)pQVar5 = *(int *)pQVar5 + -1;
            local_31 = *(int *)pQVar5 != 0;
            UNLOCK();
            if (!(bool)local_31) {
              pQVar5 = *(QArrayData **)pDVar4;
              goto LAB_1004e6440;
            }
          }
          pDVar4 = pDVar4 + -8;
          lVar7 = lVar7 + 8;
        } while (lVar7 != 0);
      }
      QListData::dispose(pDVar3);
    }
    goto LAB_1004e6461;
  }
  lVar7 = param_1 + 0x40;
  if (*(char *)(param_1 + 0x28) == '\0') {
    FUN_1004e74e0(lVar7);
    FUN_1004e5980(param_1);
  }
  *(undefined1 *)(param_1 + 0x28) = 1;
  FUN_1005245c0(lVar7,&local_40);
  pQVar1 = *(QStringList **)(param_1 + 0x20);
  FUN_100524ab0(&local_50,lVar7);
  CMacToolbarSearchField::setItems(pQVar1);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004e6351;
    }
    iVar2 = *(int *)(local_50 + 0xc);
    if (iVar2 != *(int *)(local_50 + 8)) {
      lVar6 = (long)*(int *)(local_50 + 8) * 8 + (long)iVar2 * -8;
      pDVar3 = local_50 + (long)iVar2 * 8 + 8;
      do {
        pQVar5 = *(QArrayData **)pDVar3;
        if (*(int *)pQVar5 == 0) {
LAB_1004e6330:
          QArrayData::deallocate(pQVar5,2,8);
        }
        else if (*(int *)pQVar5 != -1) {
          LOCK();
          *(int *)pQVar5 = *(int *)pQVar5 + -1;
          local_31 = *(int *)pQVar5 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar5 = *(QArrayData **)pDVar3;
            goto LAB_1004e6330;
          }
        }
        pDVar3 = pDVar3 + -8;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
    QListData::dispose(local_50);
  }
LAB_1004e6351:
  iVar2 = FUN_100524aa0(lVar7);
  if (iVar2 == 0) {
    FUN_1004e6650(param_1,0xffffffff,1);
  }
LAB_1004e6461:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
  return;
}

