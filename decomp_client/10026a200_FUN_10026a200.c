
void FUN_10026a200(long *param_1,int param_2)

{
  long *plVar1;
  QString *pQVar2;
  undefined8 uVar3;
  long lVar4;
  QString local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  if (param_2 < 0) goto LAB_10026a317;
  plVar1 = operator_new(0x38);
  pQVar2 = (QString *)CSearchParentHelper::instance();
  lVar4 = 0;
  if ((param_1[3] != 0) && (lVar4 = 0, *(int *)(param_1[3] + 4) != 0)) {
    lVar4 = param_1[4];
  }
  FUN_100188480(&local_40,lVar4);
  uVar3 = CSearchParentHelper::getParentForMessage(pQVar2,SUB81(&local_40,0),(QWidget *)0x0);
  lVar4 = 0;
  if ((param_1[3] != 0) && (lVar4 = 0, *(int *)(param_1[3] + 4) != 0)) {
    lVar4 = param_1[4];
  }
  FUN_1007b3640(plVar1,uVar3,lVar4,param_1,1);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10026a2c0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10026a2c0:
  FUN_1007a1300(&local_48,plVar1);
  QString::operator=((QString *)(param_1 + 9),&local_48);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_31 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10026a30e;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_10026a30e:
  (**(code **)(*plVar1 + 0x20))(plVar1);
LAB_10026a317:
  (**(code **)(*param_1 + 0xb0))(param_1,param_2);
  return;
}

