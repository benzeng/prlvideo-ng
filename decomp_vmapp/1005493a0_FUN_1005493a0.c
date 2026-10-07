
undefined1 FUN_1005493a0(long *param_1)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  long lVar4;
  void *pvVar5;
  void *pvVar6;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  
  plVar1 = param_1 + 0xd;
  cVar3 = FUN_100761530(plVar1);
  if ((cVar3 == '\0') || (cVar3 = (**(code **)(*param_1 + 0x10))(param_1), cVar3 == '\0')) {
    FUN_1008e3970("","TransMem",0,"Anonymous guest memory init: invalid mapping");
    return 0;
  }
  QString::toUtf8();
  lVar4 = FUN_100761ab0(local_38 + *(long *)(local_38 + 0x10));
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) goto LAB_100549427;
    }
    QArrayData::deallocate(local_38,1,8);
  }
LAB_100549427:
  if (param_1[3] + param_1[2] != lVar4) {
    FUN_1008e3970("","TransMem",0,"Prepare guest memory from compressed image");
    pvVar5 = operator_new(0x98);
    FUN_10054bd60(pvVar5,plVar1,param_1[2],param_1[3],param_1[6]);
    pvVar6 = (void *)param_1[0x18];
    if ((pvVar6 != pvVar5) && (pvVar6 != (void *)0x0)) {
      FUN_100546d50(pvVar6);
      operator_delete(pvVar6);
    }
    param_1[0x18] = (long)pvVar5;
    cVar3 = FUN_10054c5d0(pvVar5);
    if (cVar3 != '\0') {
      return 1;
    }
    pvVar6 = (void *)param_1[0x18];
    if (pvVar6 != (void *)0x0) {
      FUN_100546d50(pvVar6);
      operator_delete(pvVar6);
    }
    param_1[0x18] = 0;
    goto LAB_100549620;
  }
  FUN_1008e3970("","TransMem",0,"Prepare guest memory from plain image");
  lVar4 = FUN_1007616e0(plVar1,0,0);
  if (lVar4 == 0) {
    pvVar6 = _malloc(0x100000);
    param_1[0x19] = (long)pvVar6;
    if (pvVar6 != (void *)0x0) {
      param_1[0x1a] = param_1[4];
      param_1[0x1b] = param_1[2];
      return 1;
    }
    QString::toUtf8();
    FUN_1008e3970("","TransMem",0,
                  "Anonymous guest memory prepare (%s): failed to allocate memory for reading guest image"
                  ,local_48 + *(long *)(local_48 + 0x10));
    if (*(int *)local_48 == -1) goto LAB_100549620;
    local_40 = local_48;
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      iVar2 = *(int *)local_48;
      UNLOCK();
      goto joined_r0x00010054960b;
    }
  }
  else {
    QString::toUtf8();
    FUN_1008e3970("","TransMem",0,"Anonymous guest memory init (%s): failed to seek to file start",
                  local_40 + *(long *)(local_40 + 0x10));
    if (*(int *)local_40 == -1) goto LAB_100549620;
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      iVar2 = *(int *)local_40;
      UNLOCK();
joined_r0x00010054960b:
      if (iVar2 != 0) goto LAB_100549620;
    }
  }
  QArrayData::deallocate(local_40,1,8);
LAB_100549620:
  FUN_100549720(param_1);
  return 0;
}

