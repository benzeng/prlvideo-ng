
void FUN_10035df80(long param_1,QObject *param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  int *piVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  lVar7 = 0;
  if ((*(long *)(param_1 + 0x48) != 0) && (lVar7 = 0, *(int *)(*(long *)(param_1 + 0x48) + 4) != 0))
  {
    lVar7 = *(long *)(param_1 + 0x50);
  }
  piVar3 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  piVar4 = *(int **)(param_1 + 0x48);
  if (piVar4 != piVar3) {
    if (piVar3 != (int *)0x0) {
      LOCK();
      *piVar3 = *piVar3 + 1;
      local_31 = *piVar3 != 0;
      UNLOCK();
      piVar4 = *(int **)(param_1 + 0x48);
    }
    if (piVar4 != (int *)0x0) {
      LOCK();
      *piVar4 = *piVar4 + -1;
      local_31 = *piVar4 != 0;
      UNLOCK();
      if ((!(bool)local_31) && (*(void **)(param_1 + 0x48) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + 0x48));
      }
    }
    *(int **)(param_1 + 0x48) = piVar3;
    *(QObject **)(param_1 + 0x50) = param_2;
  }
  if (piVar3 != (int *)0x0) {
    LOCK();
    *piVar3 = *piVar3 + -1;
    local_31 = *piVar3 != 0;
    UNLOCK();
    if (!(bool)local_31) {
      operator_delete(piVar3);
    }
  }
  *(undefined4 *)(param_1 + 0x68) = param_3;
  if (DAT_10230ffd0 < 3) goto LAB_10035e121;
  puVar2 = *(undefined8 **)(param_1 + 0x50);
  iVar1 = *(int *)(*(long *)(param_1 + 0x48) + 4);
  (**(code **)*puVar2)(puVar2);
  uVar5 = QMetaObject::className();
  EnumUtils::enumToString(&local_48,*(undefined4 *)(param_1 + 0x68));
  QString::toLocal8Bit();
  puVar6 = (undefined8 *)0x0;
  if (iVar1 != 0) {
    puVar6 = puVar2;
  }
  FUN_100df99c0("[HID_CTL]","prl_client_app",3,"Set new mouse grabber: %p (%s). Reason: <%s>",puVar6
                ,uVar5,local_40 + *(long *)(local_40 + 0x10));
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10035e0e9;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_10035e0e9:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10035e121;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10035e121:
  if (lVar7 == 0) {
    uVar5 = 0;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
      uVar5 = *(undefined8 *)(param_1 + 0x18);
    }
    FUN_1003193e0(&local_50,uVar5);
    FUN_1008322b0(param_1,&local_50,1,param_3);
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

