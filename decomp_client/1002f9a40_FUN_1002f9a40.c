
void FUN_1002f9a40(undefined8 param_1)

{
  code *pcVar1;
  int iVar2;
  AnonymousUnion0 AVar3;
  char cVar4;
  CQuitAppsDialog *this;
  void *pvVar5;
  Data *pDVar6;
  QArrayData *pQVar7;
  long lVar8;
  long local_60;
  long local_58;
  _func_void_Node_ptr *local_50;
  AnonymousUnion0 local_48;
  AnonymousUnion0 local_40;
  undefined1 local_31;
  
  this = operator_new(0x98);
  local_40.field1 = (Data *)PTR_shared_null_1021e15e8;
  local_48.field1 = (Data *)PTR_shared_null_1021e15e8;
  local_50 = (_func_void_Node_ptr *)PTR_shared_null_1021e15d0;
  CQuitAppsDialog::CQuitAppsDialog
            (this,(QStringList *)&local_40.field0,(QStringList *)&local_48.field0,(QSet *)&local_50,
             (QWidget *)0x0);
  if (*(int *)(local_50 + 0x10) != -1) {
    if (*(int *)(local_50 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_50 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_31 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002f9ac1;
    }
    QHashData::free_helper(local_50);
  }
LAB_1002f9ac1:
  AVar3 = local_48;
  if (*(int *)local_48.field1 != -1) {
    if (*(int *)local_48.field1 != 0) {
      LOCK();
      *(int *)local_48.field1 = *(int *)local_48.field1 + -1;
      local_31 = *(int *)local_48.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002f9b51;
    }
    iVar2 = *(int *)(local_48.field1 + 0xc);
    if (iVar2 != *(int *)(local_48.field1 + 8)) {
      lVar8 = (long)*(int *)(local_48.field1 + 8) * 8 + (long)iVar2 * -8;
      pDVar6 = (Data *)(local_48.field1 + (long)iVar2 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_1002f9b30:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_1002f9b30;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar3.field1);
  }
LAB_1002f9b51:
  AVar3 = local_40;
  if (*(int *)local_40.field1 != -1) {
    if (*(int *)local_40.field1 != 0) {
      LOCK();
      *(int *)local_40.field1 = *(int *)local_40.field1 + -1;
      local_31 = *(int *)local_40.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002f9be1;
    }
    iVar2 = *(int *)(local_40.field1 + 0xc);
    if (iVar2 != *(int *)(local_40.field1 + 8)) {
      lVar8 = (long)*(int *)(local_40.field1 + 8) * 8 + (long)iVar2 * -8;
      pDVar6 = (Data *)(local_40.field1 + (long)iVar2 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_1002f9bc0:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_1002f9bc0;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar3.field1);
  }
LAB_1002f9be1:
  pvVar5 = operator_new(0x20);
  FUN_1001c00f0(pvVar5,7,1);
  CQuitAppsDialog::setChecker((CAbstaractConflictsChecker *)this);
  QDialog::setModal(SUB81(this,0));
  QWidget::setWindowModality(this,2);
  QObject::connect(&local_58,this,"2finished(int)",param_1,
                   "1onQuitConflictingAppsBeforeCopyFinished(int)",0);
  if (local_58 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_58);
    QObject::connect(&local_60,this,"2finished(int)",this,"1deleteLater()",0);
  }
  else {
    cVar4 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_58);
    QObject::connect(&local_60,this,"2finished(int)",this,"1deleteLater()",0);
    if ((cVar4 != '\0') && (local_60 != 0)) {
      QMetaObject::Connection::isConnected_helper();
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_60);
  return;
}

