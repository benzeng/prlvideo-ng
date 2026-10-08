
void FUN_100266310(long param_1,int param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long local_88;
  QString local_80;
  long local_78;
  long local_70;
  QArrayData *local_68;
  long local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QString local_40;
  long local_38;
  undefined1 local_29;
  
  iVar2 = (int)param_1;
  if (param_2 < 0) {
    CSdkRequest::getErrorEventHandle();
    if (local_38 != 0) {
      local_50 = (QArrayData *)QString::fromAscii_helper("%1 %2",5);
      local_60 = local_38;
      if (local_38 != 0) {
        _PrlHandle_AddRef();
      }
      MessageUtils::getMessageString(&local_58,&local_60,1);
      QString::arg(&local_48,&local_50,&local_58,0,0x20);
      local_70 = local_38;
      if (local_38 != 0) {
        _PrlHandle_AddRef();
      }
      MessageUtils::getMessageString(&local_68,&local_70,0);
      QString::arg(&local_40,&local_48,&local_68,0,0x20);
      QString::operator=((QString *)(param_1 + 0x88),&local_40);
      if (*(int *)local_40.field0_0x0 != -1) {
        if (*(int *)local_40.field0_0x0 != 0) {
          LOCK();
          *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
          local_29 = *(int *)local_40.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100266428;
        }
        QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
      }
LAB_100266428:
      if (*(int *)local_68 != -1) {
        if (*(int *)local_68 != 0) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + -1;
          local_29 = *(int *)local_68 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100266458;
        }
        QArrayData::deallocate(local_68,2,8);
      }
LAB_100266458:
      if (local_70 != 0) {
        _PrlHandle_Free();
      }
      if (*(int *)local_48 != -1) {
        if (*(int *)local_48 != 0) {
          LOCK();
          *(int *)local_48 = *(int *)local_48 + -1;
          local_29 = *(int *)local_48 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100266496;
        }
        QArrayData::deallocate(local_48,2,8);
      }
LAB_100266496:
      if (*(int *)local_58 != -1) {
        if (*(int *)local_58 != 0) {
          LOCK();
          *(int *)local_58 = *(int *)local_58 + -1;
          local_29 = *(int *)local_58 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1002664c6;
        }
        QArrayData::deallocate(local_58,2,8);
      }
LAB_1002664c6:
      if (local_60 != 0) {
        _PrlHandle_Free();
      }
      if (*(int *)local_50 != -1) {
        if (*(int *)local_50 != 0) {
          LOCK();
          *(int *)local_50 = *(int *)local_50 + -1;
          local_29 = *(int *)local_50 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100266504;
        }
        QArrayData::deallocate(local_50,2,8);
      }
    }
LAB_100266504:
    CAbstractTask::subTaskCompleted(iVar2);
    if (local_38 != 0) {
      _PrlHandle_Free();
    }
  }
  CSdkRequest::getResultParam((uint)&local_78);
  if (local_78 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: can\'t extract VM info handle.");
    CAbstractTask::subTaskCompleted(iVar2);
    local_88 = local_78;
    if (local_78 != 0) goto LAB_10026659f;
  }
  else {
LAB_10026659f:
    local_88 = local_78;
    _PrlHandle_AddRef();
  }
  FUN_10018d4b0(&local_80,&local_88);
  QString::operator=((QString *)(param_1 + 0x90),&local_80);
  if (*(int *)local_80.field0_0x0 != -1) {
    if (*(int *)local_80.field0_0x0 != 0) {
      LOCK();
      *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
      local_29 = *(int *)local_80.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002665ed;
    }
    QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
  }
LAB_1002665ed:
  if (local_88 != 0) {
    _PrlHandle_Free();
  }
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
  }
  lVar1 = FUN_10015cb20(uVar3,(QString *)(param_1 + 0x90));
  if (lVar1 != 0) {
    CAbstractTask::subTaskCompleted(iVar2);
  }
  if (local_78 != 0) {
    _PrlHandle_Free();
  }
  return;
}

