
undefined8 * FUN_100109d60(undefined8 *param_1,undefined8 param_2,char param_3)

{
  char cVar1;
  QString local_40;
  QString local_38;
  QString local_30;
  undefined1 local_21;
  
  CVmConfiguration::getVmIdentification();
  CVmIdentification::getHomePath();
  QDir::fromNativeSeparators(&local_38);
  QString::operator=(&local_30,&local_38);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_21 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100109dd3;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_100109dd3:
  FUN_100109830(&local_30);
  if (*(int *)(local_30.field0_0x0 + 4) == 0) {
    *param_1 = PTR_shared_null_1021e1288;
    goto LAB_100109e86;
  }
  cVar1 = QString::endsWith(&local_30,0x2f,1);
  if (cVar1 == '\0') {
    QString::append(&local_30,0x2f);
  }
  if (param_3 != '\0') {
    QDir::toNativeSeparators(&local_40);
    QString::operator=(&local_30,&local_40);
    if (*(int *)local_40.field0_0x0 != -1) {
      if (*(int *)local_40.field0_0x0 != 0) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
        local_21 = *(int *)local_40.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100109e5e;
      }
      QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
    }
  }
LAB_100109e5e:
  *param_1 = local_30.field0_0x0;
  if (1 < *(int *)local_30.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + 1;
    local_21 = *(int *)local_30.field0_0x0 != 0;
    UNLOCK();
  }
LAB_100109e86:
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_30.field0_0x0 != 0) {
        return param_1;
      }
      local_21 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
  return param_1;
}

