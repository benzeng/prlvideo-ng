
void FUN_1009a5ab0(QString *param_1)

{
  int iVar1;
  QTypedArrayData<unsigned_short> *pQVar2;
  QString *pQVar3;
  char cVar4;
  undefined8 uVar5;
  long local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  pQVar2 = param_1[0xc].field0_0x0;
  uVar5 = CDeclarativeWizardProxyPage::sourcePage();
  FUN_1009a6240(pQVar2,uVar5);
  QMetaObject::tr((char *)&local_30,PTR_staticMetaObject_1021e1520,
                  (int)PTR_s_Windows_Reactivation_10227df20);
  CAbstractWizardPage::setTitle(param_1);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1009a5b34;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1009a5b34:
  uVar5 = FUN_1009983a0(param_1);
  cVar4 = FUN_100990a80(uVar5);
  pQVar3 = *(QString **)(param_1[0xc].field0_0x0 + 0x18);
  if (cVar4 == '\0') {
    QMetaObject::tr((char *)&local_50,PTR_staticMetaObject_1021e1520,
                    (int)PTR_s_Product_reactivation_may_be_requ_10227e028);
    QString::arg(&local_48,&local_50,0xae,0,0x20);
    QLabel::setText(pQVar3);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_21 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1009a5c7a;
      }
      QArrayData::deallocate(local_48,2,8);
    }
LAB_1009a5c7a:
    if (*(int *)local_50 == -1) goto LAB_1009a5caa;
    local_40 = local_50;
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      iVar1 = *(int *)local_50;
      UNLOCK();
      goto joined_r0x0001009a5c95;
    }
  }
  else {
    QMetaObject::tr((char *)&local_40,PTR_staticMetaObject_1021e1520,
                    (int)PTR_s_To_be_able_to_use_some_software_a_10227e030);
    QString::arg(&local_38,&local_40,0xae,0,0x20);
    QLabel::setText(pQVar3);
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        local_21 = *(int *)local_38 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1009a5bce;
      }
      QArrayData::deallocate(local_38,2,8);
    }
LAB_1009a5bce:
    if (*(int *)local_40 == -1) goto LAB_1009a5caa;
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      iVar1 = *(int *)local_40;
      UNLOCK();
joined_r0x0001009a5c95:
      local_21 = iVar1 != 0;
      if ((bool)local_21) goto LAB_1009a5caa;
    }
  }
  QArrayData::deallocate(local_40,2,8);
LAB_1009a5caa:
  QObject::connect(&local_58,*(undefined8 *)(param_1[0xc].field0_0x0 + 0x20),"2stateChanged(int)",
                   param_1,"2DataChanged()",0);
  if (local_58 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_58);
  return;
}

