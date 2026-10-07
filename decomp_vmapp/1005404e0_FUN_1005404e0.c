
bool FUN_1005404e0(QString *param_1,QString *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  bool bVar4;
  QString local_90;
  QDir local_88 [8];
  QString local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QString local_60;
  QDir local_58 [8];
  QArrayData *local_50;
  QArrayData *local_48;
  QString local_40;
  undefined1 local_31;
  
  QFileInfo::QFileInfo((QFileInfo *)&local_40,param_1);
  uVar2 = QDir::separator();
  local_48 = (QArrayData *)PTR_shared_null_100ba20d0;
  do {
    QFileInfo::filePath();
    QDir::QDir(local_58,&local_60);
    QDir::canonicalPath();
    iVar1 = *(int *)(local_50 + 4);
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100540586;
      }
      QArrayData::deallocate(local_50,2,8);
    }
LAB_100540586:
    QDir::~QDir(local_58);
    if (*(int *)local_60.field0_0x0 != -1) {
      if (*(int *)local_60.field0_0x0 != 0) {
        LOCK();
        *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
        local_31 = *(int *)local_60.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005405be;
      }
      QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
    }
LAB_1005405be:
    if (iVar1 != 0) break;
    QFileInfo::fileName();
    uVar3 = QString::insert((int)&local_48,(QChar *)0x0,
                            (int)*(undefined8 *)(local_68 + 0x10) + (int)local_68);
    QString::insert(uVar3,0,uVar2);
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10054062c;
      }
      QArrayData::deallocate(local_68,2,8);
    }
LAB_10054062c:
    QFileInfo::path();
    QFileInfo::setFile(&local_40);
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_31 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100540674;
      }
      QArrayData::deallocate(local_70,2,8);
    }
LAB_100540674:
    QFileInfo::filePath();
    iVar1 = *(int *)(local_78 + 4);
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_31 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005406b3;
      }
      QArrayData::deallocate(local_78,2,8);
    }
LAB_1005406b3:
  } while (iVar1 != 0);
  QFileInfo::filePath();
  QDir::QDir(local_88,&local_90);
  QDir::canonicalPath();
  QString::operator=(param_2,&local_80);
  if (*(int *)local_80.field0_0x0 != -1) {
    if (*(int *)local_80.field0_0x0 != 0) {
      LOCK();
      *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
      local_31 = *(int *)local_80.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10054072b;
    }
    QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
  }
LAB_10054072b:
  QDir::~QDir(local_88);
  if (*(int *)local_90.field0_0x0 != -1) {
    if (*(int *)local_90.field0_0x0 != 0) {
      LOCK();
      *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
      local_31 = *(int *)local_90.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10054076a;
    }
    QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
  }
LAB_10054076a:
  bVar4 = *(int *)(param_2->field0_0x0 + 4) != 0;
  if (bVar4) {
    QString::append(param_2);
  }
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005407bf;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1005407bf:
  QFileInfo::~QFileInfo((QFileInfo *)&local_40);
  return bVar4;
}

