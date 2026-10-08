
void FUN_1004e6650(long param_1,ulong param_2,undefined1 param_3)

{
  QObject *pQVar1;
  int *piVar2;
  int *piVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long local_48;
  Data *local_40;
  undefined1 local_31;
  
  lVar4 = *(long *)(param_1 + 0x88);
  if (((lVar4 == 0) || (*(int *)(lVar4 + 4) == 0)) || (*(long *)(param_1 + 0x90) == 0)) {
    pQVar1 = operator_new(0x18);
    uVar7 = *(undefined8 *)(param_1 + 0x18);
    local_40 = *(Data **)(param_1 + 0x38);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 == 0) {
        QListData::detach((int)&local_40);
        lVar5 = (long)*(int *)(local_40 + 8);
        lVar4 = *(long *)(param_1 + 0x38);
        if (((Data *)(lVar4 + (long)*(int *)(lVar4 + 8) * 8) != local_40 + lVar5 * 8) &&
           (lVar6 = *(int *)(local_40 + 0xc) - lVar5,
           lVar6 != 0 && lVar5 <= *(int *)(local_40 + 0xc))) {
          _memcpy(local_40 + lVar5 * 8 + 0x10,(void *)(lVar4 + 0x10 + (long)*(int *)(lVar4 + 8) * 8)
                  ,lVar6 * 8);
        }
      }
      else {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + 1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
      }
    }
    FUN_10006ef10(pQVar1,uVar7,&local_40,param_1 + 0x40);
    piVar2 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar1);
    piVar3 = *(int **)(param_1 + 0x88);
    if (piVar3 != piVar2) {
      if (piVar2 != (int *)0x0) {
        LOCK();
        *piVar2 = *piVar2 + 1;
        local_31 = *piVar2 != 0;
        UNLOCK();
        piVar3 = *(int **)(param_1 + 0x88);
      }
      if (piVar3 != (int *)0x0) {
        LOCK();
        *piVar3 = *piVar3 + -1;
        local_31 = *piVar3 != 0;
        UNLOCK();
        if ((!(bool)local_31) && (*(void **)(param_1 + 0x88) != (void *)0x0)) {
          operator_delete(*(void **)(param_1 + 0x88));
        }
      }
      *(int **)(param_1 + 0x88) = piVar2;
      *(QObject **)(param_1 + 0x90) = pQVar1;
    }
    if (piVar2 != (int *)0x0) {
      LOCK();
      *piVar2 = *piVar2 + -1;
      local_31 = *piVar2 != 0;
      UNLOCK();
      if (!(bool)local_31) {
        operator_delete(piVar2);
      }
    }
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1004e67b4;
      }
      QListData::dispose(local_40);
    }
LAB_1004e67b4:
    uVar7 = 0;
    if ((*(long *)(param_1 + 0x88) != 0) &&
       (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x88) + 4) != 0)) {
      uVar7 = *(undefined8 *)(param_1 + 0x90);
    }
    QObject::connect(&local_48,uVar7,"2blinkFinished(VmEditorTypes::VmEditorItems, int)",param_1,
                     "1onBlinkFinished(VmEditorTypes::VmEditorItems, int)",0);
    if (local_48 != 0) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_48);
    lVar4 = *(long *)(param_1 + 0x88);
    uVar7 = 0;
    param_2 = param_2 & 0xffffffff;
    if (lVar4 == 0) goto LAB_1004e682a;
  }
  uVar7 = 0;
  if (*(int *)(lVar4 + 4) != 0) {
    uVar7 = *(undefined8 *)(param_1 + 0x90);
  }
LAB_1004e682a:
  FUN_10006f060(uVar7,param_2,param_3);
  return;
}

