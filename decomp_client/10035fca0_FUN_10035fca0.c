
void FUN_10035fca0(long param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  QArrayData *local_40;
  QArrayData *local_38;
  long local_30;
  undefined1 local_21;
  
  cVar1 = FUN_10035ddf0(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x18),0);
  if (cVar1 == '\0') {
    return;
  }
  uVar3 = FUN_10035da10(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x18));
  FUN_10018c250(&local_30,uVar3);
  iVar2 = _PrlDevDisplay_SetMouseCursorState(local_30,param_2);
  if (local_30 != 0) {
    _PrlHandle_Free();
  }
  if (-1 < iVar2) {
    *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x48) = param_2;
    return;
  }
  uVar3 = FUN_100dddcf0(iVar2);
  uVar4 = FUN_10035da10(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x18));
  FUN_100188480(&local_40,uVar4);
  QString::toLocal8Bit();
  FUN_100df99c0("[CURSOR_CTL]","prl_client_app",0,
                "PrlDevDisplay_SetMouseCursorState failed: %s, vmUuid: %s",uVar3,
                local_38 + *(long *)(local_38 + 0x10));
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10035fda1;
    }
    QArrayData::deallocate(local_38,1,8);
  }
LAB_10035fda1:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
  return;
}

