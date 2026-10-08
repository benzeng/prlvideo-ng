
void FUN_10017d650(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  char cVar3;
  uint uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  Connection local_60 [8];
  Connection local_58 [8];
  QArrayData *local_50;
  QArrayData *local_48;
  QString local_40;
  undefined1 local_31;
  
  if (param_2 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: vm object is null");
    return;
  }
  FUN_100188480(&local_40);
  plVar5 = *(long **)(param_1 + 0x18);
  uVar1 = *(uint *)(plVar5 + 4);
  plVar9 = plVar5;
  if (uVar1 != 0) {
    uVar4 = qHash(&local_40,*(uint *)((long)plVar5 + 0x24));
    uVar2 = (ulong)uVar4 % (ulong)uVar1;
    plVar6 = *(long **)(plVar5[1] + uVar2 * 8);
    if (plVar6 != plVar5) {
      plVar8 = (long *)(plVar5[1] + uVar2 * 8);
      do {
        plVar7 = plVar6;
        plVar9 = plVar5;
        if (*(uint *)(plVar6 + 1) == uVar4) {
          cVar3 = operator==(&local_40,(QString *)(plVar6 + 2));
          plVar5 = (long *)*plVar8;
          plVar7 = plVar5;
          plVar9 = *(long **)(param_1 + 0x18);
          if (cVar3 != '\0') break;
        }
        plVar5 = plVar9;
        plVar6 = (long *)*plVar7;
        plVar8 = plVar7;
        plVar9 = plVar5;
      } while (plVar6 != plVar5);
    }
  }
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_31 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10017d746;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_10017d746:
  if (plVar5 == plVar9) goto LAB_10017d7f4;
  FUN_10018d830(&local_50,param_2);
  QString::toLocal8Bit();
  FUN_100df99c0("","prl_client_app",0,
                "(!)Error: already tracking vm [%s] statistics, not connecting signals again",
                local_48 + *(long *)(local_48 + 0x10));
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10017d7c4;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_10017d7c4:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10017d7f4;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10017d7f4:
  QObject::connect(local_58,param_2,
                   "2vmStateChanged( VIRTUAL_MACHINE_STATE, VIRTUAL_MACHINE_STATE )",param_1,
                   "1onVmStateChanged( VIRTUAL_MACHINE_STATE, VIRTUAL_MACHINE_STATE )",0);
  QMetaObject::Connection::~Connection(local_58);
  QObject::connect(local_60,param_2,"2vmTypeChanged(GUI::VmType )",param_1,
                   "1onVmTypeChanged( GUI::VmType )",0);
  QMetaObject::Connection::~Connection(local_60);
  return;
}

