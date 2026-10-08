
void FUN_10033ce90(long param_1,QString *param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  QString local_38;
  undefined1 local_2a;
  
  if (((*(long *)(param_1 + 0x10) == 0) || (*(int *)(*(long *)(param_1 + 0x10) + 4) == 0)) ||
     (*(long *)(param_1 + 0x18) == 0)) {
    if (DAT_10230ffd0 < 1) {
      return;
    }
    FUN_100df99c0("DUCLIENT","prl_client_app",1,
                  "(!)Error: processing desktop utilities state change, VM desktop object does not exist."
                 );
    return;
  }
  FUN_1003193e0(&local_38);
  cVar1 = operator==(&local_38,param_2);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_2a = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_2a) goto LAB_10033cf18;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_10033cf18:
  if (cVar1 == '\0') {
    return;
  }
  iVar4 = (int)((ulong)param_3 >> 0x20);
  *(int *)(param_1 + 0x21) = (int)param_3;
  FUN_10082f100(param_1,(int)param_3 != 0);
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
  }
  uVar3 = FUN_100319c50(uVar3);
  cVar1 = FUN_100330a50(uVar3);
  if (cVar1 == '\0') {
    uVar3 = 0;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
      uVar3 = *(undefined8 *)(param_1 + 0x18);
    }
    uVar3 = FUN_100319c50(uVar3);
    cVar1 = FUN_100330b70(uVar3);
    if (cVar1 == '\0') {
      *(int *)(param_1 + 0x25) = iVar4;
      iVar2 = *(int *)(param_1 + 0x29);
      iVar5 = iVar4;
      goto LAB_10033cfe5;
    }
  }
  *(int *)(param_1 + 0x29) = iVar4;
  iVar5 = *(int *)(param_1 + 0x25);
  iVar2 = iVar4;
LAB_10033cfe5:
  FUN_10082f0a0(param_1,iVar5 != 0,iVar2 != 0,iVar5 != 0);
  return;
}

