
void FUN_1005b3150(long param_1,QString *param_2)

{
  QTypedArrayData<unsigned_short> *pQVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  size_t sVar6;
  long lVar7;
  undefined8 uVar8;
  QArrayData *local_88;
  QArrayData *local_80;
  uint *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  uint *local_60;
  QArrayData *local_58;
  QString local_50;
  undefined1 local_48 [12];
  QArrayData *local_38;
  undefined1 local_29;
  
  if (1 < DAT_10230ffd0) {
    QString::toUtf8();
    FUN_100df99c0("","prl_client_app",2,"New Vm Wizard scenario item: [%s]",
                  local_38 + *(long *)(local_38 + 0x10));
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        local_29 = *(int *)local_38 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1005b31d8;
      }
      QArrayData::deallocate(local_38,1,8);
    }
  }
LAB_1005b31d8:
  QMetaObject::indexOfEnumerator((char *)&PTR_staticMetaObject_10221e2a0);
  local_48 = QMetaObject::enumerator(0x221e2a0);
  local_50.field0_0x0 = param_2->field0_0x0;
  if (1 < *(int *)local_50.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + 1;
    local_29 = *(int *)local_50.field0_0x0 != 0;
    UNLOCK();
  }
  pcVar5 = (char *)QMetaEnum::valueToKey((int)local_48);
  iVar3 = -1;
  if (pcVar5 != (char *)0x0) {
    sVar6 = _strlen(pcVar5);
    iVar3 = (int)sVar6;
  }
  local_58 = (QArrayData *)QString::fromAscii_helper(pcVar5,iVar3);
  cVar2 = QString::startsWith(param_2,&local_58,1);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005b328c;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1005b328c:
  if (cVar2 == '\0') {
    pcVar5 = (char *)QMetaEnum::valueToKey((int)local_48);
    iVar3 = -1;
    if (pcVar5 != (char *)0x0) {
      sVar6 = _strlen(pcVar5);
      iVar3 = (int)sVar6;
    }
    local_70 = (QArrayData *)QString::fromAscii_helper(pcVar5,iVar3);
    cVar2 = QString::startsWith(param_2,&local_70,1);
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_29 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1005b33dc;
      }
      QArrayData::deallocate(local_70,2,8);
    }
LAB_1005b33dc:
    if (cVar2 == '\0') {
      uVar8 = QMetaEnum::valueToKey((int)local_48);
      pQVar1 = param_2->field0_0x0;
      iVar3 = QString::compare_helper
                        (pQVar1 + *(long *)(pQVar1 + 0x10),*(undefined4 *)(pQVar1 + 4),uVar8,
                         0xffffffff,1);
      if (iVar3 == 0) {
        lVar7 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
        QString::operator=((QString *)(lVar7 + 0x98),param_2);
      }
    }
    else {
      local_80 = (QArrayData *)QString::fromAscii_helper(".",1);
      QString::split(&local_78,param_2,&local_80,0,1);
      if (*(int *)local_80 != -1) {
        if (*(int *)local_80 != 0) {
          LOCK();
          *(int *)local_80 = *(int *)local_80 + -1;
          local_29 = *(int *)local_80 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1005b3441;
        }
        QArrayData::deallocate(local_80,2,8);
      }
LAB_1005b3441:
      if (1 < *local_78) {
        FUN_100036c40(&local_78,local_78[1]);
      }
      QString::operator=(&local_50,(QString *)(local_78 + (long)(int)local_78[2] * 2 + 4));
      FUN_100039a80(&local_78);
    }
  }
  else {
    local_68 = (QArrayData *)QString::fromAscii_helper(".",1);
    QString::split(&local_60,param_2,&local_68,0,1);
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_29 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1005b32f1;
      }
      QArrayData::deallocate(local_68,2,8);
    }
LAB_1005b32f1:
    if (1 < *local_60) {
      FUN_100036c40(&local_60,local_60[1]);
    }
    QString::operator=(&local_50,(QString *)(local_60 + (long)(int)local_60[2] * 2 + 4));
    lVar7 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
    if (1 < *local_60) {
      FUN_100036c40(&local_60,local_60[1]);
    }
    QString::operator=((QString *)(lVar7 + 0x98),
                       (QString *)(local_60 + (long)(int)local_60[2] * 2 + 6));
    FUN_100039a80(&local_60);
  }
  QString::toLatin1();
  uVar4 = QMetaEnum::keyToValue(local_48,(bool *)(local_88 + *(long *)(local_88 + 0x10)));
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_29 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005b3515;
    }
    QArrayData::deallocate(local_88,1,8);
  }
LAB_1005b3515:
  if (1 < DAT_10230ffd0) {
    FUN_100df99c0("","prl_client_app",2,"Set New Vm Wizard scenario way to: %d",uVar4);
  }
  lVar7 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
  *(undefined4 *)(lVar7 + 0x50) = uVar4;
  CAbstractWizardModel::wizardCtrl();
  CWizardController::updateWizardActions();
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_50.field0_0x0 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
  return;
}

