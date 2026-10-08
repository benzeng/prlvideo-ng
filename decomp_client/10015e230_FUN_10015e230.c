
undefined8
FUN_10015e230(long param_1,undefined8 param_2,char param_3,QString *param_4,QVariant *param_5)

{
  undefined8 uVar1;
  QArrayData *local_70;
  CRequestInfo local_68 [8];
  QArrayData *local_60;
  int *local_50;
  QVariant local_40;
  undefined1 local_29;
  
  CRequestInfo::CRequestInfo(local_68,0x7f1,param_4,param_5);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  QString::toUtf8();
  uVar1 = _PrlSrv_RegisterVmEx
                    (uVar1,local_70 + *(long *)(local_70 + 0x10),(ulong)(param_3 == '\0') << 2);
  uVar1 = FUN_10015da10(param_1,uVar1,local_68);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_29 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10015e2ce;
    }
    QArrayData::deallocate(local_70,1,8);
  }
LAB_10015e2ce:
  QVariant::~QVariant(&local_40);
  if (local_50 != (int *)0x0) {
    LOCK();
    *local_50 = *local_50 + -1;
    local_29 = *local_50 != 0;
    UNLOCK();
    if ((!(bool)local_29) && (local_50 != (int *)0x0)) {
      operator_delete(local_50);
    }
  }
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      UNLOCK();
      if (*(int *)local_60 != 0) {
        return uVar1;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_60,2,8);
  }
  return uVar1;
}

