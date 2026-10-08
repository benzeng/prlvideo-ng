
void FUN_10022fea0(long *param_1,int param_2)

{
  long lVar1;
  QObject *pQVar2;
  int *piVar3;
  int *piVar4;
  undefined8 uVar5;
  long local_40;
  long local_38;
  undefined1 local_29;
  
  if (-1 < param_2) {
    QObject::sender();
    lVar1 = QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e12a0);
    if (lVar1 == 0) {
      FUN_100df99c0("","prl_client_app",0,
                    "(!)Error: can\'t get sender request to retrieve guest session");
    }
    else {
      CSdkRequest::getResultParam((uint)&local_38);
      lVar1 = local_38;
      if (local_38 == 0) {
        FUN_100df99c0("","prl_client_app",0,
                      "(!)Error: can\'t get request paramto retrieve guest session");
      }
      else {
        pQVar2 = operator_new(0x18);
        local_40 = lVar1;
        _PrlHandle_AddRef(lVar1);
        lVar1 = 0;
        if ((param_1[3] != 0) && (lVar1 = 0, *(int *)(param_1[3] + 4) != 0)) {
          lVar1 = param_1[4];
        }
        FUN_10019ae40(pQVar2,&local_40,lVar1);
        piVar3 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar2);
        piVar4 = (int *)param_1[5];
        if (piVar4 != piVar3) {
          if (piVar3 != (int *)0x0) {
            LOCK();
            *piVar3 = *piVar3 + 1;
            local_29 = *piVar3 != 0;
            UNLOCK();
            piVar4 = (int *)param_1[5];
          }
          if (piVar4 != (int *)0x0) {
            LOCK();
            *piVar4 = *piVar4 + -1;
            local_29 = *piVar4 != 0;
            UNLOCK();
            if ((!(bool)local_29) && ((void *)param_1[5] != (void *)0x0)) {
              operator_delete((void *)param_1[5]);
            }
          }
          param_1[5] = (long)piVar3;
          param_1[6] = (long)pQVar2;
        }
        if (piVar3 != (int *)0x0) {
          LOCK();
          *piVar3 = *piVar3 + -1;
          local_29 = *piVar3 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            operator_delete(piVar3);
          }
        }
        if (local_40 != 0) {
          _PrlHandle_Free();
        }
      }
      if (local_38 != 0) {
        _PrlHandle_Free();
      }
    }
    uVar5 = 0x80000009;
    if (((param_1[5] != 0) && (*(int *)(param_1[5] + 4) != 0)) && (uVar5 = 0, param_1[6] == 0)) {
      uVar5 = 0x80000009;
    }
    (**(code **)(*param_1 + 0xb0))(param_1,uVar5);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010022ffd6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb0))(param_1);
  return;
}

