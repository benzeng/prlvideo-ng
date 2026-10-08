
void FUN_1001f9cb0(long *param_1,int param_2)

{
  AnonymousUnion0 AVar1;
  int iVar2;
  Data *pDVar3;
  Data *pDVar4;
  QArrayData *pQVar5;
  long lVar6;
  int *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  Data_conflict local_68;
  undefined4 local_60;
  undefined1 local_58;
  QArrayData *local_50;
  Data *local_48;
  AnonymousUnion0 local_40;
  undefined1 local_31;
  
  if ((((param_1[3] == 0) || (*(int *)(param_1[3] + 4) == 0)) || (param_2 < 0)) || (param_1[4] == 0)
     ) goto LAB_1001f9f01;
  iVar2 = CMessageManager::instance();
  local_40.field1 = (Data *)PTR_shared_null_1021e15e8;
  local_48 = (Data *)PTR_shared_null_1021e15e8;
  lVar6 = 0;
  if ((param_1[3] != 0) && (lVar6 = 0, *(int *)(param_1[3] + 4) != 0)) {
    lVar6 = param_1[4];
  }
  FUN_10018d830(&local_50,lVar6);
  FUN_1000341d0(&local_48,&local_50);
  local_88 = (int *)0x0;
  uStack_80 = 0;
  local_70 = 0;
  local_78 = 0;
  local_60 = 0x80000000;
  local_68.field7 = 0;
  local_58 = 1;
  CMessageManager::showMessageBox
            (iVar2,(QWidget *)0x3c24,(QStringList *)0x0,(QStringList *)&local_40.field0,
             (CSlotInfo *)&local_48,SUB81(&local_88,0));
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
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001f9de4;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1001f9de4:
  pDVar4 = local_48;
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001f9e71;
    }
    iVar2 = *(int *)(local_48 + 0xc);
    if (iVar2 != *(int *)(local_48 + 8)) {
      lVar6 = (long)*(int *)(local_48 + 8) * 8 + (long)iVar2 * -8;
      pDVar3 = local_48 + (long)iVar2 * 8 + 8;
      do {
        pQVar5 = *(QArrayData **)pDVar3;
        if (*(int *)pQVar5 == 0) {
LAB_1001f9e50:
          QArrayData::deallocate(pQVar5,2,8);
        }
        else if (*(int *)pQVar5 != -1) {
          LOCK();
          *(int *)pQVar5 = *(int *)pQVar5 + -1;
          local_31 = *(int *)pQVar5 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar5 = *(QArrayData **)pDVar3;
            goto LAB_1001f9e50;
          }
        }
        pDVar3 = pDVar3 + -8;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
    QListData::dispose(pDVar4);
  }
LAB_1001f9e71:
  AVar1 = local_40;
  if (*(int *)local_40.field1 != -1) {
    if (*(int *)local_40.field1 != 0) {
      LOCK();
      *(int *)local_40.field1 = *(int *)local_40.field1 + -1;
      local_31 = *(int *)local_40.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001f9f01;
    }
    iVar2 = *(int *)(local_40.field1 + 0xc);
    if (iVar2 != *(int *)(local_40.field1 + 8)) {
      lVar6 = (long)*(int *)(local_40.field1 + 8) * 8 + (long)iVar2 * -8;
      pDVar4 = (Data *)(local_40.field1 + (long)iVar2 * 8 + 8);
      do {
        pQVar5 = *(QArrayData **)pDVar4;
        if (*(int *)pQVar5 == 0) {
LAB_1001f9ee0:
          QArrayData::deallocate(pQVar5,2,8);
        }
        else if (*(int *)pQVar5 != -1) {
          LOCK();
          *(int *)pQVar5 = *(int *)pQVar5 + -1;
          local_31 = *(int *)pQVar5 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar5 = *(QArrayData **)pDVar4;
            goto LAB_1001f9ee0;
          }
        }
        pDVar4 = pDVar4 + -8;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
    QListData::dispose((Data *)AVar1.field1);
  }
LAB_1001f9f01:
  (**(code **)(*param_1 + 0xb0))(param_1,param_2);
  return;
}

