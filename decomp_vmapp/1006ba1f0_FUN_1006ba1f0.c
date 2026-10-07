
int FUN_1006ba1f0(long *param_1)

{
  int iVar1;
  int iVar2;
  QArrayData *local_40;
  QFile local_38 [16];
  QString local_28;
  undefined1 local_19;
  
  FUN_1006dba50(&local_28);
  QFile::QFile(local_38,&local_28);
  iVar1 = (**(code **)(*param_1 + 0x60))(param_1,local_38,1,1);
  iVar2 = 0;
  if (iVar1 < 0) {
    QString::toUtf8();
    FUN_1008e3970("","prl_net",0,"Can\'t write network configuration to file %s",
                  local_40 + *(long *)(local_40 + 0x10));
    iVar2 = iVar1;
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_19 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_1006ba29f;
      }
      QArrayData::deallocate(local_40,1,8);
    }
  }
LAB_1006ba29f:
  QFile::~QFile(local_38);
  if (*(int *)local_28.field0_0x0 != -1) {
    if (*(int *)local_28.field0_0x0 != 0) {
      LOCK();
      *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_28.field0_0x0 != 0) {
        return iVar2;
      }
      local_19 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
  }
  return iVar2;
}

