
void FUN_10024b6f0(long *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  QArrayData *pQVar4;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  iVar2 = CAbstractTask::getCurrentSubTask();
  if (iVar2 != 6) {
    return;
  }
  iVar2 = (**(code **)(*param_1 + 0x118))(param_1);
  if (iVar2 == param_2) {
                    /* WARNING: Could not recover jumptable at 0x00010024b739. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xb0))(param_1,0);
    return;
  }
  cVar1 = (**(code **)(*param_1 + 0x120))(param_1,param_2);
  if (cVar1 != '\0') {
    return;
  }
  uVar3 = (**(code **)(*param_1 + 0x110))(param_1);
  EnumUtils::enumToString(&local_38,uVar3);
  QString::toUtf8();
  pQVar4 = local_30 + *(long *)(local_30 + 0x10);
  EnumUtils::enumToString(&local_48,param_2);
  QString::toUtf8();
  FUN_100df99c0("","prl_client_app",0,"Unexpected intermediate state!. Expected [%s], got [%s]",
                pQVar4,local_40 + *(long *)(local_40 + 0x10));
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10024b7f3;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_10024b7f3:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10024b823;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10024b823:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10024b853;
    }
    QArrayData::deallocate(local_30,1,8);
  }
LAB_10024b853:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10024b883;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10024b883:
  (**(code **)(*param_1 + 0xb0))(param_1,0x80000009);
  return;
}

