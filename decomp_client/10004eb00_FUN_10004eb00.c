
QString * FUN_10004eb00(QString *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  QString local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  uVar1 = FUN_100152280();
  lVar2 = FUN_1001548f0(uVar1,param_2);
  if (lVar2 == 0) {
    QString::toUtf8();
    FUN_100df99c0("SGASMGMT","prl_client_app",0,"Failed to get Vm for vmUuid=\"%s\"",
                  local_38 + *(long *)(local_38 + 0x10));
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        UNLOCK();
        if (*(int *)local_38 != 0) goto LAB_10004ec3d;
        local_21 = 0;
      }
      QArrayData::deallocate(local_38,1,8);
    }
LAB_10004ec3d:
    param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
    return param_1;
  }
  FUN_10018d830(&local_40,lVar2);
  param_1->field0_0x0 = local_40.field0_0x0;
  if (1 < *(int *)local_40.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + 1;
    local_21 = *(int *)local_40.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_30,0x1db7118);
  QString::append(param_1);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10004eba1;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10004eba1:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_40.field0_0x0 != 0) {
        return param_1;
      }
      local_21 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
  return param_1;
}

