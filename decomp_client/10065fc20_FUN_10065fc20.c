
void FUN_10065fc20(undefined8 param_1,QUrl *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QUrlQuery local_38 [15];
  undefined1 local_29;
  
  QUrlQuery::QUrlQuery(local_38,param_2);
  local_48 = (QArrayData *)QString::fromAscii_helper("goStandardTrial",0xf);
  QUrlQuery::queryItemValue(&local_40,local_38,&local_48,0);
  iVar1 = QString::compare_helper
                    (local_40 + *(long *)(local_40 + 0x10),*(undefined4 *)(local_40 + 4),"1",
                     0xffffffff,1);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10065fcbe;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10065fcbe:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10065fcee;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10065fcee:
  uVar3 = 1;
  if (iVar1 != 0) {
    local_58 = (QArrayData *)QString::fromAscii_helper("goProfessionalTrial",0x13);
    QUrlQuery::queryItemValue(&local_50,local_38,&local_58,0);
    iVar1 = QString::compare_helper
                      (local_50 + *(long *)(local_50 + 0x10),*(undefined4 *)(local_50 + 4),"1",
                       0xffffffff,1);
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_29 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10065fd7c;
      }
      QArrayData::deallocate(local_50,2,8);
    }
LAB_10065fd7c:
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_29 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10065fdac;
      }
      QArrayData::deallocate(local_58,2,8);
    }
LAB_10065fdac:
    uVar3 = 3;
    if (iVar1 != 0) {
      local_68 = (QArrayData *)QString::fromAscii_helper("goBusinessTrial",0xf);
      QUrlQuery::queryItemValue(&local_60,local_38,&local_68,0);
      iVar1 = QString::compare_helper
                        (local_60 + *(long *)(local_60 + 0x10),*(undefined4 *)(local_60 + 4),"1",
                         0xffffffff,1);
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          local_29 = *(int *)local_60 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_10065fe3a;
        }
        QArrayData::deallocate(local_60,2,8);
      }
LAB_10065fe3a:
      if (*(int *)local_68 != -1) {
        if (*(int *)local_68 != 0) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + -1;
          local_29 = *(int *)local_68 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_10065fe6a;
        }
        QArrayData::deallocate(local_68,2,8);
      }
LAB_10065fe6a:
      uVar3 = 2;
      if (iVar1 != 0) {
        QDesktopServices::openUrl(param_2);
        goto LAB_10065fe9f;
      }
    }
  }
  CAbstractWizardPage::wizardModel();
  uVar2 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1022241f0);
  FUN_10067a130(uVar2,uVar3);
LAB_10065fe9f:
  QUrlQuery::~QUrlQuery(local_38);
  return;
}

