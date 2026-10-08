
void FUN_10017d090(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  int iVar11;
  long *plVar12;
  Connection local_68 [8];
  Connection local_60 [8];
  Connection local_58 [8];
  QArrayData *local_50;
  QArrayData *local_48;
  QString local_40;
  undefined1 local_31;
  
  if (param_2 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: server object is null");
    return;
  }
  FUN_10015aab0(&local_40,param_2);
  plVar7 = *(long **)(param_1 + 0x10);
  uVar1 = *(uint *)(plVar7 + 4);
  plVar10 = plVar7;
  if (uVar1 != 0) {
    uVar4 = qHash(&local_40,*(uint *)((long)plVar7 + 0x24));
    uVar2 = (ulong)uVar4 % (ulong)uVar1;
    plVar8 = *(long **)(plVar7[1] + uVar2 * 8);
    if (plVar8 != plVar7) {
      plVar12 = (long *)(plVar7[1] + uVar2 * 8);
      do {
        plVar9 = plVar8;
        plVar10 = plVar7;
        if (*(uint *)(plVar8 + 1) == uVar4) {
          cVar3 = operator==(&local_40,(QString *)(plVar8 + 2));
          plVar7 = (long *)*plVar12;
          plVar9 = plVar7;
          plVar10 = *(long **)(param_1 + 0x10);
          if (cVar3 != '\0') break;
        }
        plVar7 = plVar10;
        plVar8 = (long *)*plVar9;
        plVar10 = plVar7;
        plVar12 = plVar9;
      } while (plVar8 != plVar7);
    }
  }
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_31 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10017d199;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_10017d199:
  if (plVar7 == plVar10) goto LAB_10017d247;
  FUN_10015a020(&local_50,param_2);
  QString::toLocal8Bit();
  FUN_100df99c0("","prl_client_app",0,
                "(!)Error: already tracking server [%s] statistics, not connecting signals again",
                local_48 + *(long *)(local_48 + 0x10));
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10017d217;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_10017d217:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10017d247;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10017d247:
  iVar11 = 0;
  QObject::connect(local_58,param_2,"2serverStateChanged( GUI::ServerState )",param_1,
                   "1onServerStateChanged( GUI::ServerState )",0);
  QMetaObject::Connection::~Connection(local_58);
  QObject::connect(local_60,param_2,"2afterVmAdded( const CVmWrap& )",param_1,
                   "1onVmAdded( const CVmWrap& )",0);
  QMetaObject::Connection::~Connection(local_60);
  QObject::connect(local_68,param_2,"2afterVmRemoved( const QString& )",param_1,
                   "1onVmRemoved( const QString& )",0);
  QMetaObject::Connection::~Connection(local_68);
  iVar5 = FUN_10015d3a0(param_2);
  if (0 < iVar5) {
    do {
      uVar6 = FUN_10015d330(param_2,iVar11);
      FUN_10017d650(param_1,uVar6);
      FUN_10017d910(param_1,uVar6);
      iVar11 = iVar11 + 1;
    } while (iVar5 != iVar11);
  }
  return;
}

