
void FUN_1001b9e10(long param_1,int param_2)

{
  int *piVar1;
  void *pvVar2;
  undefined *puVar3;
  AnonymousUnion0 AVar4;
  int iVar5;
  long lVar6;
  CScreenSaverBlocker *this;
  char cVar7;
  Data *pDVar8;
  Data *pDVar9;
  QWidget *pQVar10;
  QArrayData *pQVar11;
  char cVar12;
  int *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  Data_conflict local_68;
  undefined4 local_60;
  undefined1 local_58;
  Data *local_48;
  AnonymousUnion0 local_40;
  undefined1 local_31;
  
  lVar6 = QObject::sender();
  cVar12 = *(char *)(param_1 + 0x18);
  if ((param_2 < 0) || (cVar7 = '\x01', *(char *)(lVar6 + 0x28) == '\0')) {
    cVar7 = '\0';
  }
  *(char *)(param_1 + 0x18) = cVar7;
  if (cVar12 != cVar7) {
    FUN_100808bb0(*(undefined8 *)(param_1 + 0x10));
    cVar12 = *(char *)(param_1 + 0x18);
  }
  puVar3 = PTR_m_instance_1021e1420;
  this = *(CScreenSaverBlocker **)PTR_m_instance_1021e1420;
  if (this == (CScreenSaverBlocker *)0x0) {
    this = operator_new(0x18);
    CScreenSaverBlocker::CScreenSaverBlocker(this);
    *(CScreenSaverBlocker **)puVar3 = this;
    DAT_10226c8a0 = 1;
  }
  if (cVar12 == '\0') {
    CScreenSaverBlocker::removeBlocker(this,2);
  }
  else {
    CScreenSaverBlocker::addBlocker();
  }
  FUN_1001ba2b0(param_1);
  FUN_1001ba360(param_1);
  if (*(char *)(param_1 + 0x18) == '\0') {
    piVar1 = *(int **)(param_1 + 0x20);
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      local_31 = *piVar1 != 0;
      UNLOCK();
      if ((!(bool)local_31) && (pvVar2 = *(void **)(param_1 + 0x20), pvVar2 != (void *)0x0)) {
        operator_delete(pvVar2);
      }
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
    }
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  }
  if (param_2 < 0) {
    return;
  }
  iVar5 = CMessageManager::instance();
  pQVar10 = (QWidget *)0x3c2a;
  if (*(char *)(param_1 + 0x18) == '\0') {
    pQVar10 = (QWidget *)0x3c26;
  }
  local_40.field1 = (Data *)PTR_shared_null_1021e15e8;
  local_48 = (Data *)PTR_shared_null_1021e15e8;
  local_88 = (int *)0x0;
  uStack_80 = 0;
  local_70 = 0;
  local_78 = 0;
  local_60 = 0x80000000;
  local_68.field7 = 0;
  local_58 = 1;
  CMessageManager::showMessageBox
            (iVar5,pQVar10,(QStringList *)0x0,(QStringList *)&local_40.field0,(CSlotInfo *)&local_48
             ,SUB81(&local_88,0));
  QVariant::~QVariant((QVariant *)&local_68);
  if (local_88 != (int *)0x0) {
    LOCK();
    *local_88 = *local_88 + -1;
    local_31 = *local_88 != 0;
    UNLOCK();
    if ((!(bool)local_31) && (local_88 != (int *)0x0)) {
      operator_delete(local_88);
    }
  }
  pDVar9 = local_48;
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001ba031;
    }
    iVar5 = *(int *)(local_48 + 0xc);
    if (iVar5 != *(int *)(local_48 + 8)) {
      lVar6 = (long)*(int *)(local_48 + 8) * 8 + (long)iVar5 * -8;
      pDVar8 = local_48 + (long)iVar5 * 8 + 8;
      do {
        pQVar11 = *(QArrayData **)pDVar8;
        if (*(int *)pQVar11 == 0) {
LAB_1001ba010:
          QArrayData::deallocate(pQVar11,2,8);
        }
        else if (*(int *)pQVar11 != -1) {
          LOCK();
          *(int *)pQVar11 = *(int *)pQVar11 + -1;
          local_31 = *(int *)pQVar11 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar11 = *(QArrayData **)pDVar8;
            goto LAB_1001ba010;
          }
        }
        pDVar8 = pDVar8 + -8;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
    QListData::dispose(pDVar9);
  }
LAB_1001ba031:
  AVar4 = local_40;
  if (*(int *)local_40.field1 != -1) {
    if (*(int *)local_40.field1 != 0) {
      LOCK();
      *(int *)local_40.field1 = *(int *)local_40.field1 + -1;
      UNLOCK();
      if (*(int *)local_40.field1 != 0) {
        return;
      }
      local_31 = 0;
    }
    iVar5 = *(int *)(local_40.field1 + 0xc);
    if (iVar5 != *(int *)(local_40.field1 + 8)) {
      lVar6 = (long)*(int *)(local_40.field1 + 8) * 8 + (long)iVar5 * -8;
      pDVar9 = (Data *)(local_40.field1 + (long)iVar5 * 8 + 8);
      do {
        pQVar11 = *(QArrayData **)pDVar9;
        if (*(int *)pQVar11 == 0) {
LAB_1001ba0a0:
          QArrayData::deallocate(pQVar11,2,8);
        }
        else if (*(int *)pQVar11 != -1) {
          LOCK();
          *(int *)pQVar11 = *(int *)pQVar11 + -1;
          local_31 = *(int *)pQVar11 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar11 = *(QArrayData **)pDVar9;
            goto LAB_1001ba0a0;
          }
        }
        pDVar9 = pDVar9 + -8;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
    QListData::dispose((Data *)AVar4.field1);
  }
  return;
}

