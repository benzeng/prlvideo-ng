
undefined8 FUN_10079a1e0(CContentProvider *param_1)

{
  QMapNodeBase *pQVar1;
  CQmlContentInfo *this;
  undefined8 uVar2;
  long local_48;
  QMapNodeBase *local_40;
  QArrayData *local_38;
  QUrl local_30 [15];
  undefined1 local_21;
  
  local_38 = (QArrayData *)QString::fromAscii_helper("qrc:/qml/DownloadProgressPage.qml",0x21);
  QUrl::QUrl(local_30,&local_38,0);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10079a244;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10079a244:
  this = operator_new(0x30);
  local_40 = (QMapNodeBase *)PTR_shared_null_1021e12f0;
  CQmlContentInfo::CQmlContentInfo(this,local_30,param_1,(QMap *)&local_40,(QObject *)0x0);
  pQVar1 = local_40;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10079a2ba;
    }
    if (*(long *)(local_40 + 0x10) != 0) {
      FUN_100037d60();
      QMapDataBase::freeTree(pQVar1,(int)*(undefined8 *)(pQVar1 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar1);
  }
LAB_10079a2ba:
  uVar2 = CContentWidget::setContent(*(undefined8 *)(param_1 + 0x20),this,1);
  QObject::connect(&local_48,uVar2,"2contentLoaded(QObject*)",param_1,"1onContentLoaded(QObject*)",0
                  );
  if (local_48 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_48);
  QUrl::~QUrl(local_30);
  return uVar2;
}

