
void FUN_10025ffa0(long param_1,undefined8 param_2,int param_3)

{
  undefined4 uVar1;
  long lVar2;
  void *pvVar3;
  long lVar4;
  undefined8 uVar5;
  Data *local_40;
  QArrayData *local_38;
  Data *local_30;
  undefined1 local_21;
  
  if (param_3 != 1) {
    return;
  }
  CAbstractWizardModel::pageFlow();
  lVar2 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_10221e420);
  if (lVar2 == 0) {
    return;
  }
  FUN_1005c33f0(lVar2);
  CAbstractWizardPageFlow::getPageHistory((int)&local_38);
  FUN_1002605e0(&local_30,&local_38);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100260045;
    }
    QArrayData::deallocate(local_38,4,8);
  }
LAB_100260045:
  if (DAT_102310a08 == (void *)0x0) {
    pvVar3 = operator_new(0x220);
    FUN_1007cc3f0(pvVar3);
    DAT_102273890 = 1;
    DAT_102310a08 = pvVar3;
  }
  pvVar3 = DAT_102310a08;
  local_40 = local_30;
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 == 0) {
      QListData::detach((int)&local_40);
      lVar2 = (long)*(int *)(local_40 + 8);
      if ((local_30 + (long)*(int *)(local_30 + 8) * 8 != local_40 + lVar2 * 8) &&
         (lVar4 = *(int *)(local_40 + 0xc) - lVar2, lVar4 != 0 && lVar2 <= *(int *)(local_40 + 0xc))
         ) {
        _memcpy(local_40 + lVar2 * 8 + 0x10,local_30 + (long)*(int *)(local_30 + 8) * 8 + 0x10,
                lVar4 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + 1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
    }
  }
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x48) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x48) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x50);
  }
  uVar1 = FUN_100260200(uVar5);
  FUN_1007d7d10(pvVar3,&local_40,uVar1,0);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100260127;
    }
    QListData::dispose(local_40);
  }
LAB_100260127:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return;
      }
      local_21 = 0;
    }
    QListData::dispose(local_30);
  }
  return;
}

