
void FUN_100434c20(long param_1)

{
  QString *pQVar1;
  char *pcVar2;
  undefined *puVar3;
  QString local_78;
  QVariant local_70;
  QString local_60;
  QVariant local_58;
  QString local_48;
  QVariant local_40;
  QArrayData *local_30;
  undefined1 local_21;
  
  pQVar1 = *(QString **)(param_1 + 0x10);
  QCoreApplication::translate
            ((char *)&local_30,"CVmEdUserFoldersDialog","User-defined Mac folders:",0);
  QLabel::setText(pQVar1);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100434c91;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100434c91:
  pcVar2 = *(char **)(param_1 + 0x10);
  QCoreApplication::translate
            ((char *)&local_48,"CVmEdUserFoldersDialog","User-defined OS X folders:",0);
  QVariant::QVariant(&local_40,&local_48);
  QObject::setProperty(pcVar2,(QVariant *)"DynProp_MacText");
  QVariant::~QVariant(&local_40);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_21 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100434d0f;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_100434d0f:
  pcVar2 = *(char **)(param_1 + 0x10);
  QCoreApplication::translate
            ((char *)&local_60,"CVmEdUserFoldersDialog","User-defined host computer folders:",0);
  QVariant::QVariant(&local_58,&local_60);
  QObject::setProperty(pcVar2,(QVariant *)"DynProp_WinLinText");
  QVariant::~QVariant(&local_58);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_21 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100434d8d;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_100434d8d:
  pcVar2 = *(char **)(param_1 + 0x10);
  QCoreApplication::translate
            ((char *)&local_78,"CVmEdUserFoldersDialog","User-defined Parallels server folders:",0);
  QVariant::QVariant(&local_70,&local_78);
  QObject::setProperty(pcVar2,(QVariant *)"DynProp_ServerText");
  QVariant::~QVariant(&local_70);
  if (*(int *)local_78.field0_0x0 != -1) {
    if (*(int *)local_78.field0_0x0 != 0) {
      LOCK();
      *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
      local_21 = *(int *)local_78.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100434e0b;
    }
    QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
  }
LAB_100434e0b:
  puVar3 = PTR_shared_null_1021e1288;
  QAbstractButton::setText(*(QString **)(param_1 + 0x28));
  if (*(int *)puVar3 != -1) {
    if (*(int *)puVar3 != 0) {
      LOCK();
      *(int *)puVar3 = *(int *)puVar3 + -1;
      local_21 = *(int *)puVar3 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100434e53;
    }
    QArrayData::deallocate((QArrayData *)puVar3,2,8);
  }
LAB_100434e53:
  QAbstractButton::setText(*(QString **)(param_1 + 0x30));
  if (*(int *)puVar3 != -1) {
    if (*(int *)puVar3 != 0) {
      LOCK();
      *(int *)puVar3 = *(int *)puVar3 + -1;
      UNLOCK();
      if (*(int *)puVar3 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate((QArrayData *)puVar3,2,8);
  }
  return;
}

