
void FUN_10042ef10(long param_1)

{
  long lVar1;
  long lVar2;
  void *pvVar3;
  long lVar4;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  lVar1 = *(long *)(param_1 + 0x68);
  if (((lVar1 == 0) || (*(int *)(lVar1 + 4) == 0)) ||
     (lVar2 = *(long *)(param_1 + 0x70), lVar2 == 0)) {
    FUN_100df99c0("","prl_client_app",0,"Vm was lost");
    goto LAB_10042f024;
  }
  pvVar3 = operator_new(0x48);
  lVar4 = 0;
  if (*(int *)(lVar1 + 4) != 0) {
    lVar4 = lVar2;
  }
  QLineEdit::text();
  QLineEdit::text();
  FUN_10022f870(pvVar3,lVar4,&local_40,&local_48);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10042efcc;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10042efcc:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10042effc;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10042effc:
  CAbstractTask::execute();
LAB_10042f024:
  QDialog::accept();
  return;
}

