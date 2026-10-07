
void FUN_100483b40(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  void *pvVar3;
  undefined8 uVar4;
  char cVar5;
  long *local_48;
  QArrayData *local_40;
  long *local_38;
  void *local_30;
  undefined1 local_21;
  
  lVar2 = FUN_1002a6010(param_2);
  if (lVar2 == 0) {
    return;
  }
  pvVar3 = (void *)FUN_10047dd20(param_1,lVar2 + 0x14);
  if (pvVar3 == (void *)0x0) {
    return;
  }
  local_30 = pvVar3;
  FUN_100495fe0(param_1 + 0x50,&local_30);
  uVar4 = 0x80000009;
  if ((*(int *)(lVar2 + 0x2c) == 0) && (uVar4 = 0x80000001, 0x1f < *(uint *)(lVar2 + 0x28))) {
    uVar4 = 0;
    FUN_1000a1980(DAT_1011c3698,lVar2 + 0x30);
  }
  FUN_100119090(&local_38,pvVar3,uVar4);
  uVar4 = DAT_1011c3650;
  FUN_10011cf50(&local_48);
  cVar5 = '\0';
  if (local_48 != (long *)0x0) {
    cVar5 = (char)local_48[2];
  }
  CBaseNode::toString(SUB81(&local_40,0),(bool)(cVar5 + '\b'));
  FUN_100063e20(uVar4,&local_40,0x1389,pvVar3,0);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100483c57;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100483c57:
  if (local_48 != (long *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)(*local_48 + 0x10))();
    }
  }
  if (local_38 != (long *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)(*local_38 + 0x10))();
    }
  }
  FUN_10047e550(pvVar3);
  operator_delete(pvVar3);
  return;
}

