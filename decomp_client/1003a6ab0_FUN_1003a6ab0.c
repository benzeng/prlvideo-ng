
void FUN_1003a6ab0(long param_1,QString *param_2,undefined8 param_3)

{
  undefined *puVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  QObject *pQVar6;
  undefined8 *puVar7;
  int *piVar8;
  int *piVar9;
  char *pcVar10;
  QVariant local_60;
  long local_50;
  QVariant local_48;
  undefined1 local_31;
  
  lVar3 = FUN_1003b0a30(*(undefined8 *)(param_1 + 0x18));
  if (lVar3 == 0) {
    pcVar10 = "(!)Error: Vm instance is null.";
  }
  else {
    uVar4 = FUN_1003b0a30(*(undefined8 *)(param_1 + 0x18));
    uVar5 = FUN_1003b0b20(*(undefined8 *)(param_1 + 0x18));
    pQVar6 = (QObject *)FUN_100197230(uVar4,param_3,uVar5);
    if (pQVar6 != (QObject *)0x0) {
      cVar2 = CAbstractTask::isFinished();
      if (cVar2 == '\0') {
        QVariant::QVariant(&local_48,param_2);
        QObject::setProperty((char *)pQVar6,(QVariant *)"hddStoragePath");
        QVariant::~QVariant(&local_48);
        puVar7 = (undefined8 *)FUN_1003ae230(param_1 + 0x30,param_2);
        piVar8 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar6);
        piVar9 = (int *)*puVar7;
        if (piVar9 != piVar8) {
          if (piVar8 != (int *)0x0) {
            LOCK();
            *piVar8 = *piVar8 + 1;
            local_31 = *piVar8 != 0;
            UNLOCK();
            piVar9 = (int *)*puVar7;
          }
          if (piVar9 != (int *)0x0) {
            LOCK();
            *piVar9 = *piVar9 + -1;
            local_31 = *piVar9 != 0;
            UNLOCK();
            if ((!(bool)local_31) && ((void *)*puVar7 != (void *)0x0)) {
              operator_delete((void *)*puVar7);
            }
          }
          *puVar7 = piVar8;
          puVar7[1] = pQVar6;
        }
        if (piVar8 != (int *)0x0) {
          LOCK();
          *piVar8 = *piVar8 + -1;
          local_31 = *piVar8 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            operator_delete(piVar8);
          }
        }
        QObject::connect(&local_50,pQVar6,"2taskFinished(PRL_RESULT)",param_1,
                         "1onCompactFinished(PRL_RESULT)",0);
        if (local_50 != 0) {
          QMetaObject::Connection::isConnected_helper();
        }
        QMetaObject::Connection::~Connection((Connection *)&local_50);
        lVar3 = FUN_1003b0b20(*(undefined8 *)(param_1 + 0x18));
        if (lVar3 != 0) {
          pcVar10 = (char *)FUN_1003b0b20(*(undefined8 *)(param_1 + 0x18));
          puVar1 = PTR_s_DynProp_CompactPerformed_102270dd0;
          QVariant::QVariant(&local_60,true);
          QObject::setProperty(pcVar10,(QVariant *)puVar1);
          QVariant::~QVariant(&local_60);
        }
        return;
      }
    }
    pcVar10 = "(!)Error: Compact task instace is null.";
  }
  FUN_100df99c0("","prl_client_app",0,pcVar10);
  return;
}

