
undefined8
FUN_100198ef0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  QArrayData *pQVar2;
  long lVar3;
  undefined8 uVar4;
  Data_conflict local_60;
  undefined4 local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  long local_40;
  undefined1 local_31;
  
  FUN_10018c250(&local_40,param_1);
  lVar3 = local_40;
  QString::toUtf8();
  pQVar2 = local_48;
  lVar1 = *(long *)(local_48 + 0x10);
  QString::toUtf8();
  uVar4 = _PrlVm_LoginInGuest(lVar3,pQVar2 + lVar1,local_50 + *(long *)(local_50 + 0x10),param_4);
  local_58 = 0x80000000;
  local_60.field7 = 0;
  uVar4 = FUN_100191960(param_1,uVar4,0x40d,&local_60);
  QVariant::~QVariant((QVariant *)&local_60);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100198fb5;
    }
    QArrayData::deallocate(local_50,1,8);
  }
LAB_100198fb5:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100198fe5;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_100198fe5:
  if (local_40 != 0) {
    _PrlHandle_Free();
  }
  return uVar4;
}

