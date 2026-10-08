
void FUN_10033e650(long param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  char *pcVar6;
  int iVar7;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  if (((*(long *)(param_1 + 0x10) == 0) || (*(int *)(*(long *)(param_1 + 0x10) + 4) == 0)) ||
     (*(long *)(param_1 + 0x18) == 0)) {
    pcVar6 = " Failed to switch VM desktop view mode. VM desktop object does not exist!";
LAB_10033e841:
    FUN_100df99c0("","prl_client_app",0,pcVar6);
    return;
  }
  lVar3 = FUN_100319960();
  if (lVar3 == 0) {
    pcVar6 = " Failed to switch VM desktop view mode. Primary VM display object does not exist!";
    goto LAB_10033e841;
  }
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x18);
  }
  lVar4 = FUN_100319390(uVar5);
  if (lVar4 == 0) {
    pcVar6 = " Failed to switch VM desktop view mode. VM object does not exist!";
    goto LAB_10033e841;
  }
  FUN_100188480(&local_30,lVar4);
  cVar1 = FUN_100326470(lVar3);
  if (cVar1 == '\0') goto LAB_10033e7f1;
  iVar2 = FUN_100325aa0(lVar3);
  if (iVar2 == 3) {
    uVar5 = 0;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
      uVar5 = *(undefined8 *)(param_1 + 0x18);
    }
    QMetaObject::tr((char *)&local_38,PTR_staticMetaObject_1021e1520,
                    (int)PTR_s_Shutting_down____102270ad8);
    FUN_10031c280(uVar5,&local_38);
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        local_21 = *(int *)local_38 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10033e75e;
      }
      QArrayData::deallocate(local_38,2,8);
    }
  }
LAB_10033e75e:
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x18);
  }
  uVar5 = FUN_100319c50(uVar5);
  cVar1 = FUN_100330a50(uVar5);
  if (cVar1 != '\0') {
    uVar5 = 0;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
      uVar5 = *(undefined8 *)(param_1 + 0x18);
    }
    uVar5 = FUN_100319c50(uVar5);
    FUN_100330e80(uVar5,1);
  }
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x18);
  }
  uVar5 = FUN_100319c50(uVar5);
  cVar1 = FUN_100331280(uVar5);
  uVar5 = FUN_100370280();
  iVar7 = 3;
  if (cVar1 != '\0') {
    iVar7 = iVar2;
  }
  FUN_100375300(uVar5,&local_30,iVar7);
LAB_10033e7f1:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return;
}

