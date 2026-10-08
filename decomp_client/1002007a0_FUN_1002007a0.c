
void FUN_1002007a0(long *param_1,undefined8 param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  QArrayData *local_78;
  QString local_70;
  QString local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QString local_48;
  QArrayData *local_40;
  QString local_38;
  undefined1 local_29;
  
  if (((param_1[10] == 0) || (*(int *)(param_1[10] + 4) == 0)) || (param_1[0xb] == 0)) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: server instance is invalid.");
                    /* WARNING: Could not recover jumptable at 0x000100200a9d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xb0))(param_1,0x80000009);
    return;
  }
  if (((param_1[5] != 0) && (*(int *)(param_1[5] + 4) != 0)) && (param_1[6] != 0)) {
    local_38.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
    FUN_10018c2b0();
    CVmConfiguration::getVmIdentification();
    CVmIdentification::getHomePath();
    lVar4 = FUN_100ccebf0(&local_40);
    if (lVar4 == 0) {
LAB_1002009af:
      bVar1 = false;
    }
    else {
      local_50 = (QArrayData *)QString::fromAscii_helper("System",6);
      local_58 = (QArrayData *)QString::fromAscii_helper("VM Id",5);
      local_60 = (QArrayData *)
                 QString::fromAscii_helper("61E62DFC-6EF6-4129-9E3C-FD1E4E201B7A",0x24);
      FUN_100ccd600(&local_48,lVar4,&local_50,&local_58,&local_60);
      QString::operator=(&local_38,&local_48);
      if (*(int *)local_48.field0_0x0 != -1) {
        if (*(int *)local_48.field0_0x0 != 0) {
          LOCK();
          *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
          local_29 = *(int *)local_48.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1002008c8;
        }
        QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
      }
LAB_1002008c8:
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          local_29 = *(int *)local_60 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1002008f8;
        }
        QArrayData::deallocate(local_60,2,8);
      }
LAB_1002008f8:
      if (*(int *)local_58 != -1) {
        if (*(int *)local_58 != 0) {
          LOCK();
          *(int *)local_58 = *(int *)local_58 + -1;
          local_29 = *(int *)local_58 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100200928;
        }
        QArrayData::deallocate(local_58,2,8);
      }
LAB_100200928:
      if (*(int *)local_50 != -1) {
        if (*(int *)local_50 != 0) {
          LOCK();
          *(int *)local_50 = *(int *)local_50 + -1;
          local_29 = *(int *)local_50 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100200958;
        }
        QArrayData::deallocate(local_50,2,8);
      }
LAB_100200958:
      FUN_100188480(&local_68,param_2);
      cVar2 = operator==(&local_68,&local_38);
      if (*(int *)local_68.field0_0x0 != -1) {
        if (*(int *)local_68.field0_0x0 != 0) {
          LOCK();
          *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
          local_29 = *(int *)local_68.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1002009a4;
        }
        QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
      }
LAB_1002009a4:
      bVar1 = true;
      if (cVar2 != '\0') goto LAB_1002009af;
    }
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_29 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1002009e2;
      }
      QArrayData::deallocate(local_40,2,8);
    }
LAB_1002009e2:
    if (*(int *)local_38.field0_0x0 != -1) {
      if (*(int *)local_38.field0_0x0 != 0) {
        LOCK();
        *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
        local_29 = *(int *)local_38.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100200a12;
      }
      QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
    }
LAB_100200a12:
    if (bVar1) {
      return;
    }
  }
  if (((param_1[0x14] != 0) && (*(int *)(param_1[0x14] + 4) != 0)) && (param_1[0x15] != 0)) {
    QWidget::hide();
  }
  iVar3 = FUN_10018bce0(param_2);
  if (iVar3 == 2) {
    (**(code **)(*param_1 + 0x98))(param_1,0x80000009);
    return;
  }
  FUN_100188480(&local_70,param_2);
  QString::operator=((QString *)(param_1 + 7),&local_70);
  if (*(int *)local_70.field0_0x0 != -1) {
    if (*(int *)local_70.field0_0x0 != 0) {
      LOCK();
      *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
      local_29 = *(int *)local_70.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100200aed;
    }
    QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
  }
LAB_100200aed:
  if (((char)param_1[8] != '\0') && (cVar2 = FUN_100d80630(1), cVar2 == '\0')) {
    uVar5 = FUN_10018c2b0(param_2);
    FUN_1005ce830(uVar5);
  }
  FUN_100188480(&local_78,param_2);
  FUN_100116b80(&local_78);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_29 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100200b58;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_100200b58:
  FUN_10080da90(param_1,100);
  CAbstractTask::appendSubTask((int)param_1);
  (**(code **)(*param_1 + 0xb0))(param_1,0);
  return;
}

