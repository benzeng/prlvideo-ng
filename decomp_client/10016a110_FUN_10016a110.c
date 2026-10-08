
void FUN_10016a110(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  QArrayData *pQVar4;
  long local_68;
  long local_60;
  long local_58;
  QArrayData *local_50;
  QString local_48;
  QArrayData *local_40;
  int local_34;
  QString local_30;
  undefined1 local_21;
  
  local_30.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  local_34 = DAT_100e151c4;
  QByteArray::QByteArray((QByteArray *)&local_40,DAT_100e151c4,'?');
  uVar1 = *param_2;
  if ((1 < *(uint *)local_40) || (*(long *)(local_40 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_40,*(uint *)(local_40 + 4) + 1,*(uint *)(local_40 + 8) >> 0x1f);
  }
  iVar2 = _PrlEvent_GetIssuerId(uVar1,local_40 + *(long *)(local_40 + 0x10),&local_34);
  if (iVar2 < 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: PrlEvent_GetIssuerId failed. RC = .%8X",iVar2);
  }
  else {
    if ((1 < *(uint *)local_40) || (*(long *)(local_40 + 0x10) != 0x18)) {
      QByteArray::reallocData(&local_40,*(uint *)(local_40 + 4) + 1,*(uint *)(local_40 + 8) >> 0x1f)
      ;
    }
    pQVar4 = local_40 + *(long *)(local_40 + 0x10);
    if (pQVar4 != (QArrayData *)0x0) {
      _strlen((char *)pQVar4);
    }
    QString::fromUtf8_helper((char *)&local_50,(int)pQVar4);
    QString::normalized(&local_48,&local_50,1,0);
    QString::operator=(&local_30,&local_48);
    if (*(int *)local_48.field0_0x0 != -1) {
      if (*(int *)local_48.field0_0x0 != 0) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
        local_21 = *(int *)local_48.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10016a22a;
      }
      QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
    }
LAB_10016a22a:
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_21 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10016a27d;
      }
      QArrayData::deallocate(local_50,2,8);
    }
  }
LAB_10016a27d:
  lVar3 = FUN_10015cb20(param_1,&local_30);
  if (lVar3 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: can\'t get VM instance to update access rights.")
    ;
  }
  else {
    local_58 = 0;
    iVar2 = _PrlEvent_GetParam(*param_2,0,&local_58);
    if (iVar2 < 0) {
      FUN_100df99c0("","prl_client_app",0,"(!)Error: PrlEvent_GetParam failed. RC = %.8X",iVar2);
    }
    else {
      local_60 = 0;
      iVar2 = _PrlEvtPrm_ToHandle(local_58,&local_60);
      if (iVar2 < 0) {
        FUN_100df99c0("","prl_client_app",0,"(!)Error: PrlEvtPrm_ToHandle failed. RC = %.8X");
      }
      else {
        local_68 = local_60;
        if (local_60 != 0) {
          _PrlHandle_AddRef();
        }
        FUN_10018e250(lVar3,&local_68);
        if (local_68 != 0) {
          _PrlHandle_Free();
        }
      }
      if (local_60 != 0) {
        _PrlHandle_Free();
      }
    }
    if (local_58 != 0) {
      _PrlHandle_Free();
    }
  }
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10016a3a5;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_10016a3a5:
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_30.field0_0x0 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
  return;
}

