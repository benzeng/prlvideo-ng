
void FUN_10035e4a0(long param_1,QObject *param_2,undefined4 param_3)

{
  int *piVar1;
  int *piVar2;
  undefined8 uVar3;
  long lVar4;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  lVar4 = 0;
  if ((*(long *)(param_1 + 0x58) != 0) && (lVar4 = 0, *(int *)(*(long *)(param_1 + 0x58) + 4) != 0))
  {
    lVar4 = *(long *)(param_1 + 0x60);
  }
  piVar1 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  piVar2 = *(int **)(param_1 + 0x58);
  if (piVar2 != piVar1) {
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      local_31 = *piVar1 != 0;
      UNLOCK();
      piVar2 = *(int **)(param_1 + 0x58);
    }
    if (piVar2 != (int *)0x0) {
      LOCK();
      *piVar2 = *piVar2 + -1;
      local_31 = *piVar2 != 0;
      UNLOCK();
      if ((!(bool)local_31) && (*(void **)(param_1 + 0x58) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + 0x58));
      }
    }
    *(int **)(param_1 + 0x58) = piVar1;
    *(QObject **)(param_1 + 0x60) = param_2;
  }
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    local_31 = *piVar1 != 0;
    UNLOCK();
    if (!(bool)local_31) {
      operator_delete(piVar1);
    }
  }
  *(undefined4 *)(param_1 + 0x6c) = param_3;
  if (DAT_10230ffd0 < 3) goto LAB_10035e610;
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x58) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x58) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x60);
  }
  EnumUtils::enumToString(&local_48,param_3);
  QString::toLocal8Bit();
  FUN_100df99c0("[HID_CTL]","prl_client_app",3,"Set new keyboard grabber: %p. Reason: <%s>",uVar3,
                local_40 + *(long *)(local_40 + 0x10));
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10035e5e0;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_10035e5e0:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10035e610;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10035e610:
  if (lVar4 == 0) {
    uVar3 = 0;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
      uVar3 = *(undefined8 *)(param_1 + 0x18);
    }
    FUN_1003193e0(&local_50,uVar3);
    FUN_100832250(param_1,&local_50,1,param_3);
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        UNLOCK();
        if (*(int *)local_50 != 0) {
          return;
        }
        local_31 = 0;
      }
      QArrayData::deallocate(local_50,2,8);
    }
  }
  return;
}

