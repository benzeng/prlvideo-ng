
undefined8 FUN_10015da10(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  QArrayData *pQVar3;
  QArrayData *pQVar4;
  bool bVar5;
  long local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QString local_50;
  QString local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  pQVar3 = *(QArrayData **)(param_3 + 8);
  if (1 < *(int *)pQVar3 + 1U) {
    LOCK();
    *(int *)pQVar3 = *(int *)pQVar3 + 1;
    local_31 = *(int *)pQVar3 != 0;
    UNLOCK();
  }
  if (*(int *)(pQVar3 + 4) == 0) {
    bVar5 = false;
  }
  else {
    bVar5 = *(int *)(param_3 + 4) != 0x7ed;
  }
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_31 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10015da7e;
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_10015da7e:
  if (!bVar5) {
    QString::toUtf8();
    if ((1 < *(uint *)local_78) || (*(long *)(local_78 + 0x10) != 0x18)) {
      QByteArray::reallocData(&local_78,*(uint *)(local_78 + 4) + 1,*(uint *)(local_78 + 8) >> 0x1f)
      ;
    }
    pQVar3 = local_78;
    lVar1 = *(long *)(local_78 + 0x10);
    uVar2 = FUN_100dd9170(*(undefined4 *)(param_3 + 4));
    FUN_100df99c0("","prl_client_app",0,"%s: sending [%s] request...",pQVar3 + lVar1,uVar2);
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_31 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10015dddf;
      }
      QArrayData::deallocate(local_78,1,8);
    }
    goto LAB_10015dddf;
  }
  local_40 = *(QArrayData **)(param_3 + 8);
  if (1 < *(int *)local_40 + 1U) {
    LOCK();
    *(int *)local_40 = *(int *)local_40 + 1;
    local_31 = *(int *)local_40 != 0;
    UNLOCK();
  }
  lVar1 = FUN_10015cb20(param_1,&local_40);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10015dadf;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10015dadf:
  local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  if (lVar1 != 0) {
    FUN_10018d830(&local_50,lVar1);
    QString::operator=(&local_48,&local_50);
    if (*(int *)local_50.field0_0x0 != -1) {
      if (*(int *)local_50.field0_0x0 != 0) {
        LOCK();
        *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
        local_31 = *(int *)local_50.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10015db38;
      }
      QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
    }
  }
LAB_10015db38:
  QString::toUtf8();
  if ((1 < *(uint *)local_58) || (*(long *)(local_58 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_58,*(uint *)(local_58 + 4) + 1,*(uint *)(local_58 + 8) >> 0x1f);
  }
  pQVar3 = local_58 + *(long *)(local_58 + 0x10);
  uVar2 = FUN_100dd9170(*(undefined4 *)(param_3 + 4));
  local_68 = *(QArrayData **)(param_3 + 8);
  if (1 < *(int *)local_68 + 1U) {
    LOCK();
    *(int *)local_68 = *(int *)local_68 + 1;
    local_31 = *(int *)local_68 != 0;
    UNLOCK();
  }
  QString::toUtf8();
  if ((1 < *(uint *)local_60) || (*(long *)(local_60 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_60,*(uint *)(local_60 + 4) + 1,*(uint *)(local_60 + 8) >> 0x1f);
  }
  pQVar4 = local_60 + *(long *)(local_60 + 0x10);
  QString::toUtf8();
  if ((1 < *(uint *)local_70) || (*(long *)(local_70 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_70,*(uint *)(local_70 + 4) + 1,*(uint *)(local_70 + 8) >> 0x1f);
  }
  FUN_100df99c0("","prl_client_app",0,"%s: sending [%s] request for VM %s [%s] ...",pQVar3,uVar2,
                pQVar4,local_70 + *(long *)(local_70 + 0x10));
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10015dc71;
    }
    QArrayData::deallocate(local_70,1,8);
  }
LAB_10015dc71:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10015dca1;
    }
    QArrayData::deallocate(local_60,1,8);
  }
LAB_10015dca1:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10015dcd1;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_10015dcd1:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10015dd05;
    }
    QArrayData::deallocate(local_58,1,8);
  }
LAB_10015dd05:
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_31 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10015dddf;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_10015dddf:
  local_80 = param_2;
  if (param_2 != 0) {
    _PrlHandle_AddRef(param_2);
  }
  uVar2 = CSdkCommunicator::createRequest(param_1,&local_80,param_3);
  if (local_80 != 0) {
    _PrlHandle_Free();
  }
  if (param_2 != 0) {
    _PrlHandle_Free(param_2);
  }
  return uVar2;
}

