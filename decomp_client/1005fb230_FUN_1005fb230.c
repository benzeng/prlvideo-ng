
void FUN_1005fb230(long param_1,char *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long local_80;
  undefined1 local_71;
  QVariant local_70;
  QVariant local_60;
  Data *local_50;
  QVariant local_48;
  undefined1 local_31;
  
  if (param_2 == (char *)0x0) {
    return;
  }
  lVar2 = FUN_1005ec990(param_1 + 0x38);
  iVar1 = *(int *)(lVar2 + 0x164);
  QVariant::QVariant(&local_48,iVar1);
  QObject::setProperty(param_2,(QVariant *)"currentProfileType");
  QVariant::~QVariant(&local_48);
  lVar2 = FUN_1005ec9b0(param_1 + 0x38);
  if (lVar2 != 0) {
    FUN_1001bc100(&local_50,lVar2,iVar1);
    if (DAT_102273ff8 == 0) {
      DAT_102273ff8 = FUN_1004466c0("QList<QObject*>",0xffffffffffffffff,1);
    }
    QVariant::QVariant(&local_60,DAT_102273ff8,&local_50,0);
    QObject::setProperty(param_2,(QVariant *)"profilesModel");
    QVariant::~QVariant(&local_60);
    local_71 = 3 < *(int *)(local_50 + 0xc) - *(int *)(local_50 + 8);
    QVariant::QVariant(&local_70,1,&local_71,0);
    QObject::setProperty(param_2,(QVariant *)"compactView");
    QVariant::~QVariant(&local_70);
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005fb369;
      }
      QListData::dispose(local_50);
    }
  }
LAB_1005fb369:
  uVar3 = CAbstractWizardPage::wizardCtrl();
  QObject::connect(&local_80,param_2,"2profileDoubleClicked(int)",uVar3,"1goNext()",0);
  if (local_80 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_80);
  return;
}

