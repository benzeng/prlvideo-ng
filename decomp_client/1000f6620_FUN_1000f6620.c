
undefined8 * FUN_1000f6620(undefined8 *param_1,undefined8 param_2,QString *param_3)

{
  long *plVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  QArrayData *local_58;
  QString local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  *param_1 = PTR_shared_null_1021e1288;
  uVar3 = FUN_100152280();
  lVar4 = FUN_1001548f0(uVar3,param_2);
  if (lVar4 == 0) {
    QString::toUtf8();
    FUN_100df99c0("SGAC","prl_client_app",0,"Failed to get Vm for vmUuid=\"%s\"",
                  local_48 + *(long *)(local_48 + 0x10));
    if (*(int *)local_48 == -1) {
      return param_1;
    }
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_48,1,8);
    return param_1;
  }
  QMutex::lock();
  plVar1 = DAT_1023108a8;
  if (DAT_1023108a8 != (long *)0x0) {
    DAT_1023108b0 = DAT_1023108b0 + 1;
  }
  QMutex::unlock();
  if (plVar1 == (long *)0x0) {
    FUN_100df99c0("SGAC","prl_client_app",0,"Failed to get CSharedAppsDsp instance");
    return param_1;
  }
  iVar2 = (**(code **)(*plVar1 + 0x68))(plVar1,param_2,param_1);
  if ((param_3 == (QString *)0x0) || (iVar2 != 0)) goto LAB_1000f67a3;
  FUN_10018d830(&local_58,lVar4);
  local_50.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_58;
  if (1 < *(int *)local_58 + 1U) {
    LOCK();
    *(int *)local_58 = *(int *)local_58 + 1;
    local_31 = *(int *)local_58 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_40,0x1db7118);
  QString::append(&local_50);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000f672e;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1000f672e:
  QString::operator=(param_3,&local_50);
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_31 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000f676a;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_1000f676a:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000f679a;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1000f679a:
  if (plVar1 == (long *)0x0) {
    return param_1;
  }
LAB_1000f67a3:
  FUN_100055290(&DAT_102310898);
  return param_1;
}

