
void FUN_1009abc20(long param_1,char *param_2)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  char *pcVar5;
  QVariant local_b0;
  QVariant local_a0;
  QArrayData *local_90;
  long local_88;
  long local_80;
  long local_78;
  QCursor local_70 [8];
  QArrayData *local_68;
  QCursor local_60 [8];
  QArrayData *local_58;
  QVariant local_50;
  QLocale local_40 [8];
  QArrayData *local_38;
  QString local_30;
  undefined1 local_21;
  
  if (param_2 == (char *)0x0) {
    return;
  }
  uVar2 = FUN_1009983a0(param_1);
  cVar1 = FUN_100990a80(uVar2);
  pcVar5 = "http://www.parallels.com/12/pc";
  if (cVar1 != '\0') {
    pcVar5 = "http://www.parallels.com/products/ptfas/ptafw12-@LOCALE@";
  }
  iVar4 = 0x1e;
  if (cVar1 != '\0') {
    iVar4 = 0x38;
  }
  local_38 = (QArrayData *)QString::fromAscii_helper(pcVar5,iVar4);
  QLocale::QLocale(local_40);
  FUN_100d3f730(&local_30,&local_38,local_40);
  QLocale::~QLocale(local_40);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1009abccc;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1009abccc:
  QVariant::QVariant(&local_50,&local_30);
  QObject::setProperty(param_2,(QVariant *)"downloadAgentUrl");
  QVariant::~QVariant(&local_50);
  local_58 = (QArrayData *)QString::fromAscii_helper("downloadAgentUrlObjName",0x17);
  lVar3 = qt_qFindChild_helper(param_2,&local_58,PTR_staticMetaObject_1021e1390,1);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_21 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1009abd55;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1009abd55:
  if (lVar3 != 0) {
    QCursor::QCursor(local_60,0xd);
    QGraphicsItem::setCursor((QCursor *)(lVar3 + 0x10));
    QCursor::~QCursor(local_60);
  }
  local_68 = (QArrayData *)QString::fromAscii_helper("switchStateText",0xf);
  lVar3 = qt_qFindChild_helper(param_2,&local_68,PTR_staticMetaObject_1021e1390,1);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_21 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1009abde1;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1009abde1:
  if (lVar3 != 0) {
    QCursor::QCursor(local_70,0xd);
    QGraphicsItem::setCursor((QCursor *)(lVar3 + 0x10));
    QCursor::~QCursor(local_70);
  }
  QObject::connect(&local_78,param_2,"2stateChanged(QString)",param_1,"1onStateChanged(QString)",0);
  if (local_78 == 0) {
    cVar1 = '\0';
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_78);
  QObject::connect(&local_80,param_2,"2agentChanged(QString)",param_1,"1onAgentChanged(QString)",0);
  if (cVar1 == '\0') {
    cVar1 = '\0';
  }
  else if (local_80 == 0) {
    cVar1 = '\0';
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_80);
  QObject::connect(&local_88,param_2,"2agentSubmitted(QString)",param_1,"1onAgentSubmitted(QString)"
                   ,0);
  if ((cVar1 != '\0') && (local_88 != 0)) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_88);
  QObject::property((char *)&local_a0);
  QVariant::toString();
  FUN_1009ac1d0(param_1,&local_90);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_21 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1009abf60;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_1009abf60:
  QVariant::~QVariant(&local_a0);
  pcVar5 = (char *)CDeclarativeWizardPage::pageContentItem();
  if (DAT_102273ff8 == 0) {
    DAT_102273ff8 = FUN_1004466c0("QList<QObject*>",0xffffffffffffffff,1);
  }
  QVariant::QVariant(&local_b0,DAT_102273ff8,(void *)(param_1 + 0x50),0);
  QObject::setProperty(pcVar5,(QVariant *)"agentListModel");
  QVariant::~QVariant(&local_b0);
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_30.field0_0x0 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
  return;
}

