
void FUN_10068e130(char *param_1,long param_2,undefined8 param_3,uint param_4)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  size_t sVar5;
  long lVar6;
  QList *pQVar7;
  QVariant *pQVar8;
  QKeySequence *this;
  QVariant local_60;
  Data *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  if (param_1 == (char *)0x0) {
    return;
  }
  if (param_2 == 0) {
    return;
  }
  pcVar4 = (char *)QMetaProperty::name();
  iVar3 = -1;
  if (pcVar4 != (char *)0x0) {
    sVar5 = _strlen(pcVar4);
    iVar3 = (int)sVar5;
  }
  local_40 = (QArrayData *)QString::fromAscii_helper(pcVar4,iVar3);
  local_48 = (QArrayData *)QString::fromAscii_helper("shortcut",8);
  iVar3 = QString::compare(&local_40,&local_48,0);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10068e1e1;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10068e1e1:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10068e211;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10068e211:
  puVar1 = PTR_staticMetaObject_1021e1500;
  if (iVar3 == 0) {
    if ((param_4 & 2) == 0) {
      return;
    }
    lVar6 = QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e1500);
    pQVar7 = (QList *)QMetaObject::cast((QObject *)puVar1);
    if ((lVar6 != 0) && (pQVar7 != (QList *)0x0)) {
      QAction::shortcuts();
      QAction::setShortcuts(pQVar7);
      if (*(int *)local_50 != -1) {
        if (*(int *)local_50 != 0) {
          LOCK();
          *(int *)local_50 = *(int *)local_50 + -1;
          local_31 = *(int *)local_50 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10068e2db;
        }
        iVar3 = *(int *)(local_50 + 0xc);
        if (iVar3 != *(int *)(local_50 + 8)) {
          lVar6 = (long)*(int *)(local_50 + 8) * 8 + (long)iVar3 * -8;
          this = (QKeySequence *)(local_50 + (long)iVar3 * 8 + 8);
          do {
            QKeySequence::~QKeySequence(this);
            this = this + -8;
            lVar6 = lVar6 + 8;
          } while (lVar6 != 0);
        }
        QListData::dispose(local_50);
      }
    }
  }
LAB_10068e2db:
  cVar2 = QMetaProperty::isWritable();
  if (cVar2 != '\0') {
    pQVar8 = (QVariant *)QMetaProperty::name();
    QMetaProperty::read((QObject *)&local_60);
    QObject::setProperty(param_1,pQVar8);
    QVariant::~QVariant(&local_60);
  }
  return;
}

