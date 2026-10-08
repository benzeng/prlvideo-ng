
undefined1 FUN_10005f5d0(QObject *param_1,QObject *param_2)

{
  undefined8 uVar1;
  long lVar2;
  QObject *pQVar3;
  int *piVar4;
  int *piVar5;
  undefined1 uVar6;
  int *local_68;
  undefined8 uStack_60;
  int *local_58;
  undefined8 uStack_50;
  Connection local_48 [8];
  QVariant local_40;
  undefined1 local_29;
  
  if (param_2 == (QObject *)0x0) {
    uVar6 = 0;
    FUN_100df99c0("[CONTEXT_MNG]","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "0 != newContext","Application/CAppContextLogic.mm",0xa3,"setCurrentContext");
  }
  else {
    if (*(long *)(*(long *)(param_2 + 8) + 0x10) == 0) {
      uVar1 = FUN_100152280();
      lVar2 = FUN_1001554a0(uVar1);
      if (lVar2 != 0) {
        uVar1 = FUN_100152280();
        param_2 = (QObject *)FUN_1001554a0(uVar1);
      }
    }
    QObject::property((char *)&local_40);
    QVariant::~QVariant(&local_40);
    if ((local_40.field0_0x0.field1_0x8.bitField0_30 & 0x3fffffff) == 0) {
      (*(code *)**(undefined8 **)param_2)(param_2);
      uVar1 = QMetaObject::className();
      uVar6 = 0;
      FUN_100df99c0("[CONTEXT_MNG]","prl_client_app",0,
                    "(!)Error: wrong object type was passed as a new context: %s",uVar1);
      FUN_100df99c0("[CONTEXT_MNG]","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]","false",
                    "Application/CAppContextLogic.mm",0xb0,"setCurrentContext");
    }
    else {
      piVar4 = *(int **)(param_1 + 0x18);
      pQVar3 = (QObject *)0x0;
      if ((piVar4 != (int *)0x0) && (pQVar3 = (QObject *)0x0, piVar4[1] != 0)) {
        pQVar3 = *(QObject **)(param_1 + 0x20);
      }
      if (pQVar3 == param_2) {
        uVar6 = 0;
      }
      else {
        if (2 < DAT_10230ffd0) {
          (*(code *)**(undefined8 **)param_2)(param_2);
          uVar1 = QMetaObject::className();
          FUN_100df99c0("[CONTEXT_MNG]","prl_client_app",3,
                        "Application context was changed. Current context: %s",uVar1);
          piVar4 = *(int **)(param_1 + 0x18);
        }
        piVar5 = *(int **)(param_1 + 0x28);
        if (piVar5 != piVar4) {
          uVar1 = *(undefined8 *)(param_1 + 0x20);
          if (piVar4 != (int *)0x0) {
            LOCK();
            *piVar4 = *piVar4 + 1;
            local_29 = *piVar4 != 0;
            UNLOCK();
            piVar5 = *(int **)(param_1 + 0x28);
          }
          if (piVar5 != (int *)0x0) {
            LOCK();
            *piVar5 = *piVar5 + -1;
            local_29 = *piVar5 != 0;
            UNLOCK();
            if ((!(bool)local_29) && (*(void **)(param_1 + 0x28) != (void *)0x0)) {
              operator_delete(*(void **)(param_1 + 0x28));
            }
          }
          *(int **)(param_1 + 0x28) = piVar4;
          *(undefined8 *)(param_1 + 0x30) = uVar1;
        }
        piVar4 = (int *)0x0;
        if (param_2 != (QObject *)0x0) {
          piVar4 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
        }
        piVar5 = *(int **)(param_1 + 0x18);
        if (piVar5 != piVar4) {
          if (piVar4 != (int *)0x0) {
            LOCK();
            *piVar4 = *piVar4 + 1;
            local_29 = *piVar4 != 0;
            UNLOCK();
            piVar5 = *(int **)(param_1 + 0x18);
          }
          if (piVar5 != (int *)0x0) {
            LOCK();
            *piVar5 = *piVar5 + -1;
            local_29 = *piVar5 != 0;
            UNLOCK();
            if ((!(bool)local_29) && (*(void **)(param_1 + 0x18) != (void *)0x0)) {
              operator_delete(*(void **)(param_1 + 0x18));
            }
          }
          *(int **)(param_1 + 0x18) = piVar4;
          *(QObject **)(param_1 + 0x20) = param_2;
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
        if (((*(long *)(param_1 + 0x28) != 0) && (*(int *)(*(long *)(param_1 + 0x28) + 4) != 0)) &&
           (*(QObject **)(param_1 + 0x30) != (QObject *)0x0)) {
          QObject::disconnect(*(QObject **)(param_1 + 0x30),"2destroyed()",param_1,
                              "1onBeforeCurrentContextRemoved()");
        }
        if (param_2 != *(QObject **)PTR_self_1021e1388) {
          uVar1 = 0;
          if ((*(long *)(param_1 + 0x18) != 0) &&
             (uVar1 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
            uVar1 = *(undefined8 *)(param_1 + 0x20);
          }
          QObject::connect(local_48,uVar1,"2destroyed()",param_1,"1onBeforeCurrentContextRemoved()",
                           0x80);
          QMetaObject::Connection::~Connection(local_48);
        }
        uVar1 = *(undefined8 *)(param_1 + 0x10);
        local_58 = *(int **)(param_1 + 0x18);
        uStack_50 = *(undefined8 *)(param_1 + 0x20);
        if (local_58 != (int *)0x0) {
          LOCK();
          *local_58 = *local_58 + 1;
          local_29 = *local_58 != 0;
          UNLOCK();
        }
        local_68 = *(int **)(param_1 + 0x28);
        uStack_60 = *(undefined8 *)(param_1 + 0x30);
        if (local_68 != (int *)0x0) {
          LOCK();
          *local_68 = *local_68 + 1;
          local_29 = *local_68 != 0;
          UNLOCK();
        }
        FUN_10080a980(uVar1,&local_58,&local_68);
        if (local_68 != (int *)0x0) {
          LOCK();
          *local_68 = *local_68 + -1;
          local_29 = *local_68 != 0;
          UNLOCK();
          if ((!(bool)local_29) && (local_68 != (int *)0x0)) {
            operator_delete(local_68);
          }
        }
        uVar6 = 1;
        if (local_58 != (int *)0x0) {
          LOCK();
          *local_58 = *local_58 + -1;
          local_29 = *local_58 != 0;
          UNLOCK();
          if ((!(bool)local_29) && (local_58 != (int *)0x0)) {
            operator_delete(local_58);
          }
        }
      }
    }
  }
  return uVar6;
}

