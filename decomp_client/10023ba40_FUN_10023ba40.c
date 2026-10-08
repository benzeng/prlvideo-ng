
undefined8 FUN_10023ba40(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  QArrayData *pQVar4;
  undefined8 uVar5;
  QArrayData *local_38;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  uVar2 = FUN_100370280();
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_100323d90(&local_28,uVar5);
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
  }
  uVar1 = FUN_100323e20(uVar5);
  lVar3 = FUN_1003704b0(uVar2,&local_28,uVar1);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10023bad3;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_10023bad3:
  if (lVar3 != 0) {
    FUN_10036d2b0(lVar3);
    return 0;
  }
  if (DAT_10230ffd0 < 1) {
    return 0;
  }
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_100323d90(&local_38,uVar5);
  QString::toLocal8Bit();
  pQVar4 = local_30 + *(long *)(local_30 + 0x10);
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
  }
  uVar1 = FUN_100323e20(uVar5);
  FUN_100df99c0("","prl_client_app",1,
                "Inconsistency detected while leave Modality mode for VM\'s [%s] display [%d]. Display window doesn\'t exist!"
                ,pQVar4,uVar1);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10023bb9f;
    }
    QArrayData::deallocate(local_30,1,8);
  }
LAB_10023bb9f:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return 0;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
  return 0;
}

