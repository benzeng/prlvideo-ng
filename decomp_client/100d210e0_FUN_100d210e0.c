
undefined8 FUN_100d210e0(undefined8 *param_1)

{
  QArrayData *pQVar1;
  char cVar2;
  undefined8 uVar3;
  QFileInfo local_48 [8];
  QArrayData *local_40;
  QArrayData *local_38;
  QString local_30;
  QArrayData *local_28;
  QDomDocument local_20 [15];
  undefined1 local_11;
  
  QDomDocument::QDomDocument(local_20);
  pQVar1 = (QArrayData *)*param_1;
  if (*(int *)(pQVar1 + 4) == 0) {
    QDir::homePath();
  }
  else {
    local_28 = pQVar1;
    if (1 < *(int *)pQVar1 + 1U) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + 1;
      local_11 = *(int *)pQVar1 != 0;
      UNLOCK();
    }
  }
  FUN_100d20b00(&local_30,&local_28);
  cVar2 = FUN_100d21390(&local_30,local_20);
  if (cVar2 == '\0') {
    QString::toUtf8();
    FUN_100df99c0("","VBoxVmModel",0,"VBox: Failed to load global config: %s",
                  local_38 + *(long *)(local_38 + 0x10));
    uVar3 = 0;
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        local_11 = *(int *)local_38 != 0;
        UNLOCK();
        uVar3 = 0;
        if ((bool)local_11) goto LAB_100d2120a;
      }
      uVar3 = 0;
      QArrayData::deallocate(local_38,1,8);
    }
  }
  else {
    QFileInfo::QFileInfo(local_48,&local_30);
    QFileInfo::absolutePath();
    uVar3 = FUN_100d20fc0(&local_40,local_20);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_11 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_11) goto LAB_100d21196;
      }
      QArrayData::deallocate(local_40,2,8);
    }
LAB_100d21196:
    QFileInfo::~QFileInfo(local_48);
  }
LAB_100d2120a:
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      local_11 = *(int *)local_30.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100d2123a;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
LAB_100d2123a:
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_11 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100d2126a;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_100d2126a:
  QDomDocument::~QDomDocument(local_20);
  return uVar3;
}

