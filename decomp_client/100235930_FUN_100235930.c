
void FUN_100235930(long param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_24;
  
  if ((((-1 < param_2) || (lVar3 = *(long *)(param_1 + 0x18), lVar3 == 0)) ||
      (*(int *)(lVar3 + 4) == 0)) || (*(long *)(param_1 + 0x20) == 0)) goto LAB_100235aa1;
  if (param_2 == -0x7ffffd8b) {
    uVar4 = 0;
    FUN_100df99c0("","prl_client_app",0,"Switch to Coherence is cancelled, try to stop it!");
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar4 = *(undefined8 *)(param_1 + 0x20);
    }
    uVar2 = FUN_100319c50(uVar4);
    uVar4 = 0;
    FUN_100330e80(uVar2,0);
    lVar3 = *(long *)(param_1 + 0x18);
    if (lVar3 != 0) goto LAB_1002359cc;
  }
  else {
LAB_1002359cc:
    uVar4 = 0;
    if (*(int *)(lVar3 + 4) != 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x20);
    }
  }
  iVar1 = FUN_100319ae0(uVar4);
  if (iVar1 != 3) {
    uVar4 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar4 = *(undefined8 *)(param_1 + 0x20);
    }
    iVar1 = FUN_100319ae0(uVar4);
    if ((param_2 == -0x7ffffd8b) || (iVar1 != 0 && iVar1 != 3)) {
      if (iVar1 == 0) goto LAB_100235aa1;
    }
    else {
      FUN_100df99c0("","prl_client_app",0,"Open to Coherence has failed, switch to Window ");
      iVar1 = 1;
    }
    local_38 = 3;
    local_30 = 0;
    local_2c = 0xffff;
    local_28 = 0;
    local_24 = 0;
    local_34 = 0x10000;
    uVar4 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar4 = *(undefined8 *)(param_1 + 0x20);
    }
    uVar4 = FUN_100319cc0(uVar4);
    FUN_10033fcf0(uVar4,iVar1,&local_38);
  }
LAB_100235aa1:
  if (((*(long *)(param_1 + 0x60) != 0) && (*(int *)(*(long *)(param_1 + 0x60) + 4) != 0)) &&
     (*(long *)(param_1 + 0x68) != 0)) {
    QWidget::close();
  }
  if (((*(long *)(param_1 + 0x18) != 0) && (*(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) &&
     ((param_2 != -0x7ffffd8b && (*(long *)(param_1 + 0x20) != 0)))) {
    FUN_10031c890();
  }
  CAbstractTask::finish((int)param_1);
  return;
}

