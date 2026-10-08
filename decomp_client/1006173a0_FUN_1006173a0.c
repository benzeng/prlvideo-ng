
undefined1 FUN_1006173a0(long param_1,QString *param_2,undefined8 param_3)

{
  long *plVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  CVmEvent *this;
  long *plVar5;
  long lVar6;
  undefined1 uVar7;
  QString local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  char *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_31;
  
  this = operator_new(0x100);
  CVmEvent::CVmEvent(this);
  plVar5 = operator_new(0x18,(nothrow_t *)PTR_nothrow_1021e1620);
  if (plVar5 == (long *)0x0) {
    (**(code **)(*(long *)this + 8))(this);
    plVar5 = (long *)0x0;
  }
  else {
    *(undefined4 *)(plVar5 + 1) = 1;
    plVar5[2] = (long)this;
    *plVar5 = (long)&PTR_FUN_1022748a8;
  }
  local_50 = (char *)0x0;
  lVar6 = *(long *)(param_1 + 0x28);
  if (lVar6 != 0) {
    _PrlHandle_AddRef(lVar6);
  }
  iVar4 = _PrlLic_ToString(lVar6,&local_50);
  if (lVar6 != 0) {
    _PrlHandle_Free(lVar6);
  }
  pcVar2 = local_50;
  if ((iVar4 < 0) || (local_50 == (char *)0x0)) {
    _PrlDbg_PrlResultToString(iVar4,&local_48);
    uVar7 = 0;
    FUN_100df99c0("[LICENSE]","prl_client_app",0,
                  "(!)Error: failed to retrieve license data, %.8X \'%s\'",iVar4,local_48);
    goto LAB_10061764b;
  }
  lVar6 = 0;
  if (plVar5 != (long *)0x0) {
    lVar6 = plVar5[2];
  }
  _strlen(local_50);
  QString::fromUtf8_helper((char *)&local_60,(int)pcVar2);
  QString::normalized(&local_58,&local_60,1);
  iVar4 = CBaseNode::fromString
                    ((QTypedArrayData<unsigned_short> *)(lVar6 + 8),SUB81(&local_58,0),
                     (QString *)0x0,(int *)0x0,(int *)0x0);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006174df;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1006174df:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10061750f;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_10061750f:
  _PrlBuffer_Free(local_50);
  if (iVar4 < 0) {
    _PrlDbg_PrlResultToString(iVar4,&local_40);
    uVar7 = 0;
    FUN_100df99c0("[LICENSE]","prl_client_app",0,
                  "(!)Error: failed to retrieve CVmEvent from string, %.8X \'%s\'",iVar4,local_40);
    goto LAB_10061764b;
  }
  lVar6 = 0;
  if (plVar5 != (long *)0x0) {
    lVar6 = plVar5[2];
  }
  cVar3 = FUN_100b7a580(lVar6,param_3);
  if (cVar3 == '\0') {
    uVar7 = 0;
    FUN_100df99c0("[LICENSE]","prl_client_app",0,"Unable to parse VzLicense from VmEvent");
    goto LAB_10061764b;
  }
  FUN_100b674f0(&local_68,param_3);
  cVar3 = operator==(&local_68,param_2);
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      local_31 = *(int *)local_68.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100617587;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
LAB_100617587:
  uVar7 = 1;
  if (cVar3 == '\0') {
    uVar7 = 0;
    FUN_100df99c0("[LICENSE]","prl_client_app",0,
                  "(!)Error: failed to fetch license data, reason: serial number is invalid");
  }
LAB_10061764b:
  if (plVar5 != (long *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
  return uVar7;
}

