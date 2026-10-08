
undefined8
FUN_10015e4c0(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,QString *param_5
             ,QVariant *param_6)

{
  long lVar1;
  undefined8 uVar2;
  QArrayData *local_80;
  QArrayData *local_78;
  CRequestInfo local_70 [8];
  QArrayData *local_68;
  int *local_58;
  QVariant local_48;
  undefined1 local_31;
  
  CRequestInfo::CRequestInfo(local_70,0x856,param_5,param_6);
  uVar2 = *(undefined8 *)(param_1 + 0x80);
  QString::toUtf8();
  lVar1 = *(long *)(local_78 + 0x10);
  QString::toUtf8();
  uVar2 = _PrlSrv_Register3rdPartyVm
                    (uVar2,local_78 + lVar1,local_80 + *(long *)(local_80 + 0x10),param_4);
  uVar2 = FUN_10015da10(param_1,uVar2,local_70);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10015e573;
    }
    QArrayData::deallocate(local_80,1,8);
  }
LAB_10015e573:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10015e5a3;
    }
    QArrayData::deallocate(local_78,1,8);
  }
LAB_10015e5a3:
  QVariant::~QVariant(&local_48);
  if (local_58 != (int *)0x0) {
    LOCK();
    *local_58 = *local_58 + -1;
    local_31 = *local_58 != 0;
    UNLOCK();
    if ((!(bool)local_31) && (local_58 != (int *)0x0)) {
      operator_delete(local_58);
    }
  }
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      UNLOCK();
      if (*(int *)local_68 != 0) {
        return uVar2;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_68,2,8);
  }
  return uVar2;
}

