
void FUN_1007b4b90(long param_1,int param_2)

{
  int *piVar1;
  AnonymousUnion0 AVar2;
  int iVar3;
  void *pvVar4;
  Data *pDVar5;
  Data *pDVar6;
  undefined8 uVar7;
  QArrayData *pQVar8;
  long lVar9;
  QVariant local_c0;
  Data *local_b0;
  Data *local_a8;
  Data *local_a0;
  Data *local_98;
  int local_90;
  int *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  Data_conflict local_68;
  undefined4 local_60;
  undefined1 local_58;
  QArrayData *local_48;
  Data *local_40;
  AnonymousUnion0 local_38;
  undefined1 local_29;
  
  if ((((*(long *)(param_1 + 0x10) == 0) || (*(int *)(*(long *)(param_1 + 0x10) + 4) == 0)) ||
      (param_2 < 0)) || (*(long *)(param_1 + 0x18) == 0)) goto LAB_1007b5091;
  iVar3 = CMessageManager::instance();
  local_38.field1 = (Data *)PTR_shared_null_1021e15e8;
  local_40 = (Data *)PTR_shared_null_1021e15e8;
  uVar7 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar7 = *(undefined8 *)(param_1 + 0x18);
  }
  FUN_10018d830(&local_48,uVar7);
  FUN_1000341d0(&local_40,&local_48);
  local_88 = (int *)0x0;
  uStack_80 = 0;
  local_70 = 0;
  local_78 = 0;
  local_60 = 0x80000000;
  local_68.field7 = 0;
  local_58 = 1;
  CMessageManager::showMessageBox
            (iVar3,(QWidget *)0x3c25,(QStringList *)0x0,(QStringList *)&local_38.field0,
             (CSlotInfo *)&local_40,SUB81(&local_88,0));
  QVariant::~QVariant((QVariant *)&local_68);
  if (local_88 != (int *)0x0) {
    LOCK();
    *local_88 = *local_88 + -1;
    local_29 = *local_88 != 0;
    UNLOCK();
    if ((!(bool)local_29) && (local_88 != (int *)0x0)) {
      operator_delete(local_88);
    }
  }
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007b4cc1;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1007b4cc1:
  pDVar6 = local_40;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007b4d51;
    }
    iVar3 = *(int *)(local_40 + 0xc);
    if (iVar3 != *(int *)(local_40 + 8)) {
      lVar9 = (long)*(int *)(local_40 + 8) * 8 + (long)iVar3 * -8;
      pDVar5 = local_40 + (long)iVar3 * 8 + 8;
      do {
        pQVar8 = *(QArrayData **)pDVar5;
        if (*(int *)pQVar8 == 0) {
LAB_1007b4d30:
          QArrayData::deallocate(pQVar8,2,8);
        }
        else if (*(int *)pQVar8 != -1) {
          LOCK();
          *(int *)pQVar8 = *(int *)pQVar8 + -1;
          local_29 = *(int *)pQVar8 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar8 = *(QArrayData **)pDVar5;
            goto LAB_1007b4d30;
          }
        }
        pDVar5 = pDVar5 + -8;
        lVar9 = lVar9 + 8;
      } while (lVar9 != 0);
    }
    QListData::dispose(pDVar6);
  }
LAB_1007b4d51:
  AVar2 = local_38;
  if (*(int *)local_38.field1 != -1) {
    if (*(int *)local_38.field1 != 0) {
      LOCK();
      *(int *)local_38.field1 = *(int *)local_38.field1 + -1;
      local_29 = *(int *)local_38.field1 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007b4de1;
    }
    iVar3 = *(int *)(local_38.field1 + 0xc);
    if (iVar3 != *(int *)(local_38.field1 + 8)) {
      lVar9 = (long)*(int *)(local_38.field1 + 8) * 8 + (long)iVar3 * -8;
      pDVar6 = (Data *)(local_38.field1 + (long)iVar3 * 8 + 8);
      do {
        pQVar8 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar8 == 0) {
LAB_1007b4dc0:
          QArrayData::deallocate(pQVar8,2,8);
        }
        else if (*(int *)pQVar8 != -1) {
          LOCK();
          *(int *)pQVar8 = *(int *)pQVar8 + -1;
          local_29 = *(int *)pQVar8 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar8 = *(QArrayData **)pDVar6;
            goto LAB_1007b4dc0;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar9 = lVar9 + 8;
      } while (lVar9 != 0);
    }
    QListData::dispose((Data *)AVar2.field1);
  }
LAB_1007b4de1:
  QObject::sender();
  lVar9 = QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e12a0);
  if (lVar9 == 0) goto LAB_1007b5091;
  QObject::property((char *)&local_c0);
  QVariant::toStringList();
  local_a8 = local_b0;
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 == 0) {
      QListData::detach((int)&local_a8);
      iVar3 = *(int *)(local_a8 + 8);
      if (iVar3 != *(int *)(local_a8 + 0xc)) {
        pDVar6 = local_b0 + (long)*(int *)(local_b0 + 8) * 8 + 0x10;
        pDVar5 = local_a8 + (long)iVar3 * 8 + 0x10;
        lVar9 = (long)*(int *)(local_a8 + 0xc) * 8 + (long)iVar3 * -8;
        do {
          piVar1 = *(int **)pDVar6;
          *(int **)pDVar5 = piVar1;
          if (1 < *piVar1 + 1U) {
            LOCK();
            *piVar1 = *piVar1 + 1;
            local_29 = *piVar1 != 0;
            UNLOCK();
          }
          pDVar5 = pDVar5 + 8;
          pDVar6 = pDVar6 + 8;
          lVar9 = lVar9 + -8;
        } while (lVar9 != 0);
      }
    }
    else {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + 1;
      local_29 = *(int *)local_b0 != 0;
      UNLOCK();
    }
  }
  local_a0 = local_a8 + (long)*(int *)(local_a8 + 8) * 8 + 0x10;
  local_98 = local_a8 + (long)*(int *)(local_a8 + 0xc) * 8 + 0x10;
  local_90 = 1;
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_29 = *(int *)local_b0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007b4f81;
    }
    iVar3 = *(int *)(local_b0 + 0xc);
    if (iVar3 != *(int *)(local_b0 + 8)) {
      lVar9 = (long)*(int *)(local_b0 + 8) * 8 + (long)iVar3 * -8;
      pDVar6 = local_b0 + (long)iVar3 * 8 + 8;
      do {
        pQVar8 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar8 == 0) {
LAB_1007b4f60:
          QArrayData::deallocate(pQVar8,2,8);
        }
        else if (*(int *)pQVar8 != -1) {
          LOCK();
          *(int *)pQVar8 = *(int *)pQVar8 + -1;
          local_29 = *(int *)pQVar8 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar8 = *(QArrayData **)pDVar6;
            goto LAB_1007b4f60;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar9 = lVar9 + 8;
      } while (lVar9 != 0);
    }
    QListData::dispose(local_b0);
  }
LAB_1007b4f81:
  QVariant::~QVariant(&local_c0);
  if (local_90 != 0) {
    for (; pDVar6 = local_a0, local_a0 != local_98; local_a0 = local_a0 + 8) {
      pvVar4 = operator_new(0x50);
      FUN_100240130(pvVar4,pDVar6,0,1,0);
      CAbstractTask::execute();
      local_90 = 1;
    }
  }
  pDVar6 = local_a8;
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_29 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007b5091;
    }
    iVar3 = *(int *)(local_a8 + 0xc);
    if (iVar3 != *(int *)(local_a8 + 8)) {
      lVar9 = (long)*(int *)(local_a8 + 8) * 8 + (long)iVar3 * -8;
      pDVar5 = local_a8 + (long)iVar3 * 8 + 8;
      do {
        pQVar8 = *(QArrayData **)pDVar5;
        if (*(int *)pQVar8 == 0) {
LAB_1007b5070:
          QArrayData::deallocate(pQVar8,2,8);
        }
        else if (*(int *)pQVar8 != -1) {
          LOCK();
          *(int *)pQVar8 = *(int *)pQVar8 + -1;
          local_29 = *(int *)pQVar8 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar8 = *(QArrayData **)pDVar5;
            goto LAB_1007b5070;
          }
        }
        pDVar5 = pDVar5 + -8;
        lVar9 = lVar9 + 8;
      } while (lVar9 != 0);
    }
    QListData::dispose(pDVar6);
  }
LAB_1007b5091:
  FUN_1008628b0(param_1,0);
  if (*(char *)(param_1 + 0x20) != '\0') {
    QObject::deleteLater();
  }
  return;
}

