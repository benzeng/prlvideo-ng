
void FUN_10047d170(QObject *param_1)

{
  QObject *pQVar1;
  long *plVar2;
  int iVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  Data *pDVar10;
  char cVar11;
  QArrayData *pQVar12;
  Data *pDVar13;
  long *local_90;
  QArrayData *local_88;
  long *local_80;
  Data *local_78;
  Data *local_70;
  Data *local_68;
  undefined4 local_60;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  undefined4 local_40;
  undefined1 local_31;
  
  *(undefined ***)param_1 = &PTR_FUN_100bc2170;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_100bc2200;
  QMutex::lock();
  pQVar1 = param_1 + 0x58;
  local_58 = *(Data **)(param_1 + 0x58);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 == 0) {
      QListData::detach((int)&local_58);
      lVar7 = (long)*(int *)(local_58 + 8);
      lVar8 = *(long *)pQVar1;
      if (((Data *)(lVar8 + (long)*(int *)(lVar8 + 8) * 8) != local_58 + lVar7 * 8) &&
         (lVar9 = *(int *)(local_58 + 0xc) - lVar7, lVar9 != 0 && lVar7 <= *(int *)(local_58 + 0xc))
         ) {
        _memcpy(local_58 + lVar7 * 8 + 0x10,(void *)(lVar8 + 0x10 + (long)*(int *)(lVar8 + 8) * 8),
                lVar9 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + 1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
    }
  }
  local_50 = local_58 + (long)*(int *)(local_58 + 8) * 8 + 0x10;
  local_48 = local_58 + (long)*(int *)(local_58 + 0xc) * 8 + 0x10;
  if (*(int *)(local_58 + 8) != *(int *)(local_58 + 0xc)) {
    do {
      local_40 = 1;
      puVar4 = *(undefined8 **)local_50;
      if (puVar4 != (undefined8 *)0x0) {
        pQVar12 = (QArrayData *)puVar4[1];
        if (*(int *)pQVar12 != -1) {
          if (*(int *)pQVar12 != 0) {
            LOCK();
            *(int *)pQVar12 = *(int *)pQVar12 + -1;
            local_31 = *(int *)pQVar12 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10047d298;
            pQVar12 = (QArrayData *)puVar4[1];
          }
          QArrayData::deallocate(pQVar12,2,8);
        }
LAB_10047d298:
        pQVar12 = (QArrayData *)*puVar4;
        if (*(int *)pQVar12 != -1) {
          if (*(int *)pQVar12 != 0) {
            LOCK();
            *(int *)pQVar12 = *(int *)pQVar12 + -1;
            local_31 = *(int *)pQVar12 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10047d2c6;
            pQVar12 = (QArrayData *)*puVar4;
          }
          QArrayData::deallocate(pQVar12,1,8);
        }
LAB_10047d2c6:
        operator_delete(puVar4);
      }
      local_50 = local_50 + 8;
    } while (local_50 != local_48);
  }
  local_40 = 1;
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10047d311;
    }
    QListData::dispose(local_58);
  }
LAB_10047d311:
  FUN_100495ab0(pQVar1);
  pDVar13 = *(Data **)(param_1 + 0x50);
  *(undefined **)(param_1 + 0x50) = PTR_shared_null_100ba2188;
  QMutex::unlock();
  local_78 = pDVar13;
  if (*(int *)pDVar13 != -1) {
    if (*(int *)pDVar13 == 0) {
      QListData::detach((int)&local_78);
      lVar8 = (long)*(int *)(local_78 + 8);
      if ((pDVar13 + (long)*(int *)(pDVar13 + 8) * 8 != local_78 + lVar8 * 8) &&
         (lVar7 = *(int *)(local_78 + 0xc) - lVar8, lVar7 != 0 && lVar8 <= *(int *)(local_78 + 0xc))
         ) {
        _memcpy(local_78 + lVar8 * 8 + 0x10,pDVar13 + (long)*(int *)(pDVar13 + 8) * 8 + 0x10,
                lVar7 * 8);
      }
    }
    else {
      LOCK();
      *(int *)pDVar13 = *(int *)pDVar13 + 1;
      local_31 = *(int *)pDVar13 != 0;
      UNLOCK();
    }
  }
  local_70 = local_78 + (long)*(int *)(local_78 + 8) * 8 + 0x10;
  local_68 = local_78 + (long)*(int *)(local_78 + 0xc) * 8 + 0x10;
  if (*(int *)(local_78 + 8) != *(int *)(local_78 + 0xc)) {
    do {
      local_60 = 1;
      plVar5 = *(long **)local_70;
      FUN_10047d9d0(plVar5);
      if ((*plVar5 == 0) || (*(long *)(*plVar5 + 0x10) == 0)) {
LAB_10047d4e3:
        FUN_10047e550(plVar5);
        operator_delete(plVar5);
      }
      else {
        FUN_100119090(&local_80,plVar5,0x80000275);
        uVar6 = DAT_1011c3650;
        lVar8 = 0;
        if (local_80 != (long *)0x0) {
          lVar8 = local_80[2];
        }
        FUN_10011cf50(&local_90,lVar8);
        cVar11 = '\0';
        if (local_90 != (long *)0x0) {
          cVar11 = (char)local_90[2];
        }
        CBaseNode::toString(SUB81(&local_88,0),(bool)(cVar11 + '\b'));
        FUN_100063e20(uVar6,&local_88,0x1389,plVar5,0);
        if (*(int *)local_88 != -1) {
          if (*(int *)local_88 != 0) {
            LOCK();
            *(int *)local_88 = *(int *)local_88 + -1;
            local_31 = *(int *)local_88 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10047d499;
          }
          QArrayData::deallocate(local_88,2,8);
        }
LAB_10047d499:
        if (local_90 != (long *)0x0) {
          LOCK();
          plVar2 = local_90 + 1;
          lVar8 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)(*local_90 + 0x10))();
          }
        }
        if (local_80 != (long *)0x0) {
          LOCK();
          plVar2 = local_80 + 1;
          lVar8 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)(*local_80 + 0x10))();
          }
        }
        if (plVar5 != (long *)0x0) goto LAB_10047d4e3;
      }
      local_70 = local_70 + 8;
    } while (local_70 != local_68);
  }
  local_60 = 1;
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10047d53d;
    }
    QListData::dispose(local_78);
  }
LAB_10047d53d:
  DAT_100bf9144 = 0;
  DAT_100bf915d = DAT_100bf915d | 1;
  FUN_100495a10(&DAT_1011cc7d0,0);
  if (*(int *)pDVar13 != -1) {
    if (*(int *)pDVar13 != 0) {
      LOCK();
      *(int *)pDVar13 = *(int *)pDVar13 + -1;
      local_31 = *(int *)pDVar13 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10047d581;
    }
    QListData::dispose(pDVar13);
  }
LAB_10047d581:
  pDVar13 = *(Data **)(param_1 + 0x60);
  if (*(int *)pDVar13 != -1) {
    if (*(int *)pDVar13 != 0) {
      LOCK();
      *(int *)pDVar13 = *(int *)pDVar13 + -1;
      local_31 = *(int *)pDVar13 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10047d5ef;
      pDVar13 = *(Data **)(param_1 + 0x60);
    }
    iVar3 = *(int *)(pDVar13 + 0xc);
    if (iVar3 != *(int *)(pDVar13 + 8)) {
      lVar8 = (long)*(int *)(pDVar13 + 8) * 8 + (long)iVar3 * -8;
      pDVar10 = pDVar13 + (long)iVar3 * 8 + 8;
      do {
        if (*(void **)pDVar10 != (void *)0x0) {
          operator_delete(*(void **)pDVar10);
        }
        pDVar10 = pDVar10 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose(pDVar13);
  }
LAB_10047d5ef:
  pDVar13 = *(Data **)pQVar1;
  if (*(int *)pDVar13 != -1) {
    if (*(int *)pDVar13 != 0) {
      LOCK();
      *(int *)pDVar13 = *(int *)pDVar13 + -1;
      local_31 = *(int *)pDVar13 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10047d621;
      pDVar13 = *(Data **)pQVar1;
    }
    QListData::dispose(pDVar13);
  }
LAB_10047d621:
  pDVar13 = *(Data **)(param_1 + 0x50);
  if (*(int *)pDVar13 != -1) {
    if (*(int *)pDVar13 != 0) {
      LOCK();
      *(int *)pDVar13 = *(int *)pDVar13 + -1;
      local_31 = *(int *)pDVar13 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10047d647;
      pDVar13 = *(Data **)(param_1 + 0x50);
    }
    QListData::dispose(pDVar13);
  }
LAB_10047d647:
  pDVar13 = *(Data **)(param_1 + 0x48);
  if (*(int *)pDVar13 != -1) {
    if (*(int *)pDVar13 != 0) {
      LOCK();
      *(int *)pDVar13 = *(int *)pDVar13 + -1;
      local_31 = *(int *)pDVar13 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10047d66d;
      pDVar13 = *(Data **)(param_1 + 0x48);
    }
    QListData::dispose(pDVar13);
  }
LAB_10047d66d:
  QMutex::~QMutex((QMutex *)(param_1 + 0x38));
  FUN_1004c0680(param_1 + 0x10);
  QObject::~QObject(param_1);
  return;
}

