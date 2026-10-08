
void FUN_10028a640(CAbstractTask *param_1,long *param_2,undefined8 *param_3,CAbstractTask param_4)

{
  int iVar1;
  int *piVar2;
  byte bVar3;
  CTaskGenericId *pCVar4;
  long lVar5;
  QObject *this;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long local_48;
  long local_40;
  undefined1 local_31;
  
  pCVar4 = operator_new(0x18);
  FUN_10028af20(pCVar4,param_2,param_3);
  CAbstractTask::CAbstractTask(param_1,pCVar4);
  *(undefined ***)param_1 = &PTR_FUN_1022064d0;
  piVar2 = (int *)*param_2;
  *(int **)(param_1 + 0x18) = piVar2;
  if (*piVar2 != -1) {
    if (*piVar2 == 0) {
      QListData::detach((int)(param_1 + 0x18));
      lVar5 = *(long *)(param_1 + 0x18);
      iVar1 = *(int *)(lVar5 + 8);
      if (iVar1 != *(int *)(lVar5 + 0xc)) {
        puVar6 = (undefined8 *)(*param_2 + 0x10 + (long)*(int *)(*param_2 + 8) * 8);
        puVar7 = (undefined8 *)(lVar5 + 0x10 + (long)iVar1 * 8);
        lVar5 = (long)*(int *)(lVar5 + 0xc) * 8 + (long)iVar1 * -8;
        do {
          piVar2 = (int *)*puVar6;
          *puVar7 = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            local_31 = *piVar2 != 0;
            UNLOCK();
          }
          puVar7 = puVar7 + 1;
          puVar6 = puVar6 + 1;
          lVar5 = lVar5 + -8;
        } while (lVar5 != 0);
      }
    }
    else {
      LOCK();
      *piVar2 = *piVar2 + 1;
      local_31 = *piVar2 != 0;
      UNLOCK();
    }
  }
  *(undefined **)(param_1 + 0x20) = PTR_shared_null_1021e15e8;
  piVar2 = (int *)*param_3;
  *(int **)(param_1 + 0x28) = piVar2;
  if (1 < *piVar2 + 1U) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    local_31 = *piVar2 != 0;
    UNLOCK();
  }
  param_1[0x30] = param_4;
  this = operator_new(0x10);
  QObject::QObject(this,(QObject *)0x0);
  *(undefined ***)this = &PTR_FUN_1021ef5a0;
  *(QObject **)(param_1 + 0x38) = this;
  QObject::connect(&local_40,this,"2jobComplete(PRL_RESULT)",param_1,
                   "1onIpConnectionCheckCompleted(PRL_RESULT)",2);
  bVar3 = 1;
  if (local_40 != 0) {
    bVar3 = QMetaObject::Connection::isConnected_helper();
    bVar3 = bVar3 ^ 1;
  }
  QMetaObject::Connection::~Connection((Connection *)&local_40);
  QObject::connect(&local_48,param_1,"2destroyed()",*(undefined8 *)(param_1 + 0x38),"1deleteLater()"
                   ,0);
  if ((bVar3 == 0) && (local_48 != 0)) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_48);
  return;
}

