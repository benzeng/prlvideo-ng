
void FUN_1009bbe20(undefined8 param_1,long *param_2)

{
  int iVar1;
  undefined8 uVar2;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  if (*(int *)(*param_2 + 4) == 0) {
    return;
  }
  QString::toUtf8();
  FUN_100df99c0("","TransporterWizardModel",0,"VM path: \'%s\'",
                local_28 + *(long *)(local_28 + 0x10));
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1009bbea0;
    }
    QArrayData::deallocate(local_28,1,8);
  }
LAB_1009bbea0:
  uVar2 = FUN_1009983c0(param_1);
  iVar1 = FUN_100992360(uVar2,param_2);
  if (-1 < iVar1) {
    CAbstractWizardPage::pageFinished();
    return;
  }
  uVar2 = FUN_100998580(param_1);
  FUN_100998560(&local_30,param_1);
  QMetaObject::tr((char *)&local_38,PTR_staticMetaObject_1021e1520,
                  (int)PTR_s_The_specified_data_is_corrupted__10227e200);
  QMetaObject::tr((char *)&local_40,PTR_staticMetaObject_1021e1520,
                  (int)PTR_s_Please_transfer_the_remote_PC_to_10227e208);
  FUN_100a08530(uVar2,&local_30,&local_38,&local_40);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_19 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1009bbf63;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1009bbf63:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_19 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1009bbf93;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1009bbf93:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return;
}

