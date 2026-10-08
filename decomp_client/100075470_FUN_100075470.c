
void FUN_100075470(QWidget *param_1,char param_2)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  QArrayData *pQVar6;
  QArrayData *local_98;
  QArrayData *local_90;
  QVariant local_88;
  QArrayData *local_78;
  QArrayData *local_70;
  undefined1 local_68 [16];
  QString local_58;
  QVariant local_50;
  QString local_40;
  undefined1 local_31;
  
  uVar3 = MacUtils::getWindowRef(param_1);
  if (param_2 != '\0') {
    cVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (uVar3,PTR_s_respondsToSelector__102269d98,
                       PTR_s_setRestorationClass__102269e60);
    if (cVar2 != '\0') {
      if (2 < DAT_10230ffd0) {
        (*(code *)**(undefined8 **)param_1)(param_1);
        uVar4 = QMetaObject::className();
        FUN_100df99c0("[APP_RESUME]","prl_client_app",3,"Setting restoration class for %s",uVar4);
      }
      puVar1 = PTR_s_setRestorationClass__102269e60;
      uVar4 = _objc_getClass("CWindowRestoration");
      (*(code *)PTR__objc_msgSend_1021e1c68)
                (uVar3,PTR_s_performSelector_withObject__102269e68,puVar1,uVar4);
    }
    uVar4 = MacUtils::getWindowRef(param_1);
    QObject::property((char *)&local_50);
    QVariant::toString();
    QVariant::~QVariant(&local_50);
    if (*(int *)(local_40.field0_0x0 + 4) == 0) {
      local_68 = QUuid::createUuid();
      QUuid::toString();
      QString::operator=(&local_40,&local_58);
      if (*(int *)local_58.field0_0x0 != -1) {
        if (*(int *)local_58.field0_0x0 != 0) {
          LOCK();
          *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
          local_31 = *(int *)local_58.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000755b7;
        }
        QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
      }
    }
LAB_1000755b7:
    cVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (uVar4,PTR_s_respondsToSelector__102269d98,PTR_s_setIdentifier__102269e80);
    if (cVar2 != '\0') {
      uVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)
                        (PTR__OBJC_CLASS___NSString_10226a7c8,PTR_s_stringWithQString__102268d00,
                         &local_40);
      (*(code *)PTR__objc_msgSend_1021e1c68)
                (uVar4,PTR_s_performSelector_withObject__102269e68,PTR_s_setIdentifier__102269e80,
                 uVar5);
    }
    if (2 < DAT_10230ffd0) {
      local_78 = (QArrayData *)local_40.field0_0x0;
      if (1 < *(int *)local_40.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + 1;
        local_31 = *(int *)local_40.field0_0x0 != 0;
        UNLOCK();
      }
      QString::toLocal8Bit();
      pQVar6 = local_70 + *(long *)(local_70 + 0x10);
      (*(code *)**(undefined8 **)param_1)(param_1);
      uVar4 = QMetaObject::className();
      FUN_100df99c0("[APP_RESUME]","prl_client_app",3,"Setting restoration id %s for window %s",
                    pQVar6,uVar4);
      if (*(int *)local_70 != -1) {
        if (*(int *)local_70 != 0) {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + -1;
          local_31 = *(int *)local_70 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000756ad;
        }
        QArrayData::deallocate(local_70,1,8);
      }
LAB_1000756ad:
      if (*(int *)local_78 != -1) {
        if (*(int *)local_78 != 0) {
          LOCK();
          *(int *)local_78 = *(int *)local_78 + -1;
          local_31 = *(int *)local_78 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000756dd;
        }
        QArrayData::deallocate(local_78,2,8);
      }
    }
LAB_1000756dd:
    QVariant::QVariant(&local_88,&local_40);
    QObject::setProperty((char *)param_1,(QVariant *)"restorationId");
    QVariant::~QVariant(&local_88);
    if (*(int *)local_40.field0_0x0 != -1) {
      if (*(int *)local_40.field0_0x0 != 0) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
        local_31 = *(int *)local_40.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100075736;
      }
      QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
    }
LAB_100075736:
    uVar4 = MacUtils::getWindowRef(param_1);
    cVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (uVar4,PTR_s_respondsToSelector__102269d98,
                       PTR_s_invalidateRestorableState_102269e78);
    if (cVar2 != '\0') {
      (*(code *)PTR__objc_msgSend_1021e1c68)
                (uVar4,PTR_s_performSelector__102269300,PTR_s_invalidateRestorableState_102269e78);
    }
  }
  if ((DAT_10230ffd0 < 3) || (param_2 != '\0')) goto LAB_100075845;
  QWidget::windowTitle();
  QString::toUtf8();
  FUN_100df99c0("[APP_RESUME]","prl_client_app",3,"Clear restorable flag for window %s",
                local_90 + *(long *)(local_90 + 0x10));
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10007580f;
    }
    QArrayData::deallocate(local_90,1,8);
  }
LAB_10007580f:
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_31 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100075845;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_100075845:
  cVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (uVar3,PTR_s_respondsToSelector__102269d98,PTR_s_setRestorable__102269e70);
  if (cVar2 != '\0') {
    (*(code *)PTR__objc_msgSend_1021e1c68)(uVar3,PTR_s_setRestorable__102269e70,param_2);
  }
  return;
}

