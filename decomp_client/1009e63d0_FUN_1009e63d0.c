
QString * FUN_1009e63d0(QString *param_1,uint param_2,long *param_3)

{
  QFileInfo local_68 [8];
  QArrayData *local_60;
  QArrayData *local_58;
  QString local_50;
  QArrayData *local_48;
  QString local_40;
  QString local_38;
  QString local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  if (param_2 - 2 < 2) {
    QDir::tempPath();
    FUN_1009e3350(&local_50,&local_58);
    QString::operator=(param_1,&local_50);
    if (*(int *)local_50.field0_0x0 != -1) {
      if (*(int *)local_50.field0_0x0 != 0) {
        LOCK();
        *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
        local_19 = *(int *)local_50.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_1009e6449;
      }
      QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
    }
LAB_1009e6449:
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_19 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_1009e65ab;
      }
      QArrayData::deallocate(local_58,2,8);
    }
  }
  else if (param_2 < 2) {
    FUN_100d84b80(&local_30);
    QString::operator=(param_1,&local_30);
    if (*(int *)local_30.field0_0x0 != -1) {
      if (*(int *)local_30.field0_0x0 != 0) {
        LOCK();
        *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
        local_19 = *(int *)local_30.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_1009e64d4;
      }
      QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
    }
LAB_1009e64d4:
    FUN_1009e3350(&local_38,param_1);
    QString::operator=(param_1,&local_38);
    if (*(int *)local_38.field0_0x0 != -1) {
      if (*(int *)local_38.field0_0x0 != 0) {
        LOCK();
        *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
        local_19 = *(int *)local_38.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_1009e651c;
      }
      QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
    }
LAB_1009e651c:
    if (*(int *)(param_1->field0_0x0 + 4) == 0) {
      QDir::tempPath();
      FUN_1009e3350(&local_40,&local_48);
      QString::operator=(param_1,&local_40);
      if (*(int *)local_40.field0_0x0 != -1) {
        if (*(int *)local_40.field0_0x0 != 0) {
          LOCK();
          *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
          local_19 = *(int *)local_40.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_19) goto LAB_1009e657b;
        }
        QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
      }
LAB_1009e657b:
      if (*(int *)local_48 != -1) {
        if (*(int *)local_48 != 0) {
          LOCK();
          *(int *)local_48 = *(int *)local_48 + -1;
          local_19 = *(int *)local_48 != 0;
          UNLOCK();
          if ((bool)local_19) goto LAB_1009e65ab;
        }
        QArrayData::deallocate(local_48,2,8);
      }
    }
  }
LAB_1009e65ab:
  QString::truncate((int)param_1);
  if (*(int *)(*param_3 + 4) == 0) goto LAB_1009e662b;
  QFileInfo::QFileInfo(local_68,param_1);
  QFileInfo::fileName();
  QString::replace(param_1,&local_60,param_3,1);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_19 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1009e6622;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1009e6622:
  QFileInfo::~QFileInfo(local_68);
LAB_1009e662b:
  QString::fromUtf8_helper((char *)&local_28,0x1e3a327);
  QString::append(param_1);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return param_1;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_28,2,8);
  }
  return param_1;
}

