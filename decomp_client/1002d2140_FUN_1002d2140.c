
void FUN_1002d2140(long *param_1,undefined8 param_2)

{
  void *pvVar1;
  long lVar2;
  QObject *pQVar3;
  int *piVar4;
  int *piVar5;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar6;
  long local_40;
  long local_38;
  undefined1 local_29;
  
  if ((int)param_2 < 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xb0);
  }
  else {
    QObject::sender();
    lVar2 = QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e12a0);
    if (lVar2 != 0) {
      CSdkRequest::getResultParam((uint)&local_38);
      lVar2 = local_38;
      if (local_38 == 0) {
        FUN_100df99c0("","prl_client_app",0,"(!)Error: Invalid guest session param");
      }
      else {
        pQVar3 = operator_new(0x18);
        local_40 = lVar2;
        _PrlHandle_AddRef(lVar2);
        lVar2 = 0;
        if ((param_1[3] != 0) && (lVar2 = 0, *(int *)(param_1[3] + 4) != 0)) {
          lVar2 = param_1[4];
        }
        FUN_10019ae40(pQVar3,&local_40,lVar2);
        piVar4 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar3);
        piVar5 = (int *)param_1[5];
        if (piVar5 != piVar4) {
          if (piVar4 != (int *)0x0) {
            LOCK();
            *piVar4 = *piVar4 + 1;
            local_29 = *piVar4 != 0;
            UNLOCK();
            piVar5 = (int *)param_1[5];
          }
          if (piVar5 != (int *)0x0) {
            LOCK();
            *piVar5 = *piVar5 + -1;
            local_29 = *piVar5 != 0;
            UNLOCK();
            if ((!(bool)local_29) && (pvVar1 = (void *)param_1[5], pvVar1 != (void *)0x0)) {
              operator_delete(pvVar1);
            }
          }
          param_1[5] = (long)piVar4;
          param_1[6] = (long)pQVar3;
        }
        if (piVar4 != (int *)0x0) {
          LOCK();
          *piVar4 = *piVar4 + -1;
          local_29 = *piVar4 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            operator_delete(piVar4);
          }
        }
        if (local_40 != 0) {
          _PrlHandle_Free();
        }
      }
      uVar6 = 0x80000009;
      if (((param_1[5] != 0) && (*(int *)(param_1[5] + 4) != 0)) && (uVar6 = 0, param_1[6] == 0)) {
        uVar6 = 0x80000009;
      }
      (**(code **)(*param_1 + 0xb0))(param_1,uVar6);
      if (local_38 != 0) {
        _PrlHandle_Free();
      }
      return;
    }
    FUN_100df99c0("","prl_client_app",0,
                  "(!)Error: can\'t get sender request to retrieve guest session");
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xb0);
    param_2 = 0x80000009;
  }
                    /* WARNING: Could not recover jumptable at 0x0001002d22a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
  return;
}

