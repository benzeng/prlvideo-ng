
void FUN_10035e250(long param_1,undefined4 param_2)

{
  int *piVar1;
  void *pvVar2;
  long lVar3;
  undefined8 uVar4;
  bool bVar5;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  piVar1 = *(int **)(param_1 + 0x48);
  bVar5 = true;
  if (piVar1 != (int *)0x0) {
    lVar3 = 0;
    if (piVar1[1] != 0) {
      lVar3 = *(long *)(param_1 + 0x50);
    }
    bVar5 = lVar3 == 0;
    LOCK();
    *piVar1 = *piVar1 + -1;
    local_31 = *piVar1 != 0;
    UNLOCK();
    if ((!(bool)local_31) && (pvVar2 = *(void **)(param_1 + 0x48), pvVar2 != (void *)0x0)) {
      operator_delete(pvVar2);
    }
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  *(undefined4 *)(param_1 + 0x68) = param_2;
  if (DAT_10230ffd0 < 3) goto LAB_10035e36c;
  EnumUtils::enumToString(&local_48,param_2);
  QString::toLocal8Bit();
  FUN_100df99c0("[HID_CTL]","prl_client_app",3,"Clear mouse grabber. Reason: <%s>",
                local_40 + *(long *)(local_40 + 0x10));
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10035e33c;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_10035e33c:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10035e36c;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10035e36c:
  FUN_10035db20(param_1,0x80,0);
  if (!bVar5) {
    uVar4 = 0;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
      uVar4 = *(undefined8 *)(param_1 + 0x18);
    }
    FUN_1003193e0(&local_50,uVar4);
    FUN_1008322b0(param_1,&local_50,0,param_2);
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

