
void FUN_100260370(long param_1,int param_2)

{
  undefined4 uVar1;
  long lVar2;
  void *pvVar3;
  undefined8 uVar4;
  QArrayData *local_48;
  Data *local_40;
  undefined1 local_31;
  
  if (((*(long *)(param_1 + 0x48) == 0) || (*(int *)(*(long *)(param_1 + 0x48) + 4) == 0)) ||
     (*(long *)(param_1 + 0x50) == 0)) goto LAB_1002604a9;
  CAbstractWizardModel::pageFlow();
  lVar2 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_10221e420);
  if (lVar2 == 0) goto LAB_1002604a9;
  if (DAT_102310a08 == (void *)0x0) {
    pvVar3 = operator_new(0x220);
    FUN_1007cc3f0(pvVar3);
    DAT_102273890 = 1;
    DAT_102310a08 = pvVar3;
  }
  pvVar3 = DAT_102310a08;
  FUN_1005c33f0(lVar2);
  CAbstractWizardPageFlow::getPageHistory((int)&local_48);
  FUN_1002605e0(&local_40,&local_48);
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x48) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x48) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x50);
  }
  uVar1 = FUN_100260200(uVar4);
  FUN_1007d7d10(pvVar3,&local_40,uVar1,param_2 == 0);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100260479;
    }
    QListData::dispose(local_40);
  }
LAB_100260479:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002604a9;
    }
    QArrayData::deallocate(local_48,4,8);
  }
LAB_1002604a9:
  CAbstractTask::finish((int)param_1);
  return;
}

