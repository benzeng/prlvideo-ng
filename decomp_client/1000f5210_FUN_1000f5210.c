
void FUN_1000f5210(long param_1,QString *param_2,QString *param_3,QString *param_4,QString *param_5)

{
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QString local_40;
  undefined1 local_31;
  
  local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  QString::operator=(&local_40,param_2);
  QString::append(&local_40);
  QString::operator=(param_3,(QString *)(param_1 + 8));
  if (*(int *)(param_2[1].field0_0x0 + 4) != 0) {
    local_50 = (QArrayData *)QString::fromAscii_helper("/%1",3);
    QString::arg(&local_48,&local_50,param_2 + 1,0,0x20);
    QString::append(param_3);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000f52ff;
      }
      QArrayData::deallocate(local_48,2,8);
    }
LAB_1000f52ff:
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000f532f;
      }
      QArrayData::deallocate(local_50,2,8);
    }
  }
LAB_1000f532f:
  QString::operator=(param_4,param_3);
  local_60 = (QArrayData *)QString::fromAscii_helper("/%1",3);
  QString::arg(&local_58,&local_60,&local_40,0,0x20);
  QString::append(param_4);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000f53a4;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1000f53a4:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000f53d4;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1000f53d4:
  QString::operator=(param_5,param_3);
  local_70 = (QArrayData *)QString::fromAscii_helper("/.%1~",5);
  QString::arg(&local_68,&local_70,&local_40,0,0x20);
  QString::append(param_5);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000f544b;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1000f544b:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000f547b;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1000f547b:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_40.field0_0x0 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
  return;
}

