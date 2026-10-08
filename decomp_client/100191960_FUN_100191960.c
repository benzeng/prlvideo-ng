
/* WARNING: Removing unreachable block (ram,0x000100191dee) */

bool * FUN_100191960(long param_1,long param_2,uint param_3,QVariant *param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  _func_void_Node_ptr *p_Var4;
  bool *pbVar5;
  _func_void_Node_ptr *p_Var6;
  QArrayData *pQVar7;
  QArrayData *pQVar8;
  undefined1 local_c1;
  long local_c0;
  QString local_b8;
  CRequestInfo local_b0 [8];
  QArrayData *local_a8;
  int *local_98;
  QVariant local_88;
  _func_void_Node_ptr *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  _func_void_Node_ptr *local_40;
  undefined1 local_31;
  
  uVar2 = FUN_100152280();
  lVar3 = FUN_100152a20(uVar2,param_1 + 0x28);
  if (lVar3 == 0) {
    uVar2 = FUN_100dd9170(param_3);
    pbVar5 = (bool *)0x0;
    FUN_100df99c0("","prl_client_app",0,
                  "(!)Error: [%s] can\'t get server instance to send the request.",uVar2);
    goto LAB_100191f03;
  }
  FUN_100192270(&local_40);
  p_Var6 = local_40;
  if (*(uint *)(local_40 + 0x20) != 0) {
    for (p_Var4 = *(_func_void_Node_ptr **)
                   (*(long *)(local_40 + 8) +
                   ((ulong)(*(uint *)(local_40 + 0x24) ^ param_3) %
                   (ulong)*(uint *)(local_40 + 0x20)) * 8);
        (p_Var6 = local_40, p_Var4 != local_40 &&
        ((*(uint *)(p_Var4 + 8) != (*(uint *)(local_40 + 0x24) ^ param_3) ||
         (p_Var6 = p_Var4, *(uint *)(p_Var4 + 0xc) != param_3))));
        p_Var4 = *(_func_void_Node_ptr **)p_Var4) {
    }
  }
  if (*(int *)(local_40 + 0x10) != -1) {
    if (*(int *)(local_40 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_40 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_31 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100191a25;
    }
    QHashData::free_helper(local_40);
  }
LAB_100191a25:
  if (p_Var6 == local_40) {
    FUN_10015a060(&local_50,lVar3);
    QString::toUtf8();
    if ((1 < *(uint *)local_48) || (*(long *)(local_48 + 0x10) != 0x18)) {
      QByteArray::reallocData(&local_48,*(uint *)(local_48 + 4) + 1,*(uint *)(local_48 + 8) >> 0x1f)
      ;
    }
    pQVar8 = local_48 + *(long *)(local_48 + 0x10);
    uVar2 = FUN_100dd9170(param_3);
    FUN_100188480(&local_60,param_1);
    QString::toUtf8();
    if ((1 < *(uint *)local_58) || (*(long *)(local_58 + 0x10) != 0x18)) {
      QByteArray::reallocData(&local_58,*(uint *)(local_58 + 4) + 1,*(uint *)(local_58 + 8) >> 0x1f)
      ;
    }
    pQVar7 = local_58 + *(long *)(local_58 + 0x10);
    FUN_10018d830(&local_70,param_1);
    QString::toUtf8();
    if ((1 < *(uint *)local_68) || (*(long *)(local_68 + 0x10) != 0x18)) {
      QByteArray::reallocData(&local_68,*(uint *)(local_68 + 4) + 1,*(uint *)(local_68 + 8) >> 0x1f)
      ;
    }
    FUN_100df99c0("","prl_client_app",0,"%s: sending [%s] request for VM %s [%s] ...",pQVar8,uVar2,
                  pQVar7,local_68 + *(long *)(local_68 + 0x10));
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100191b80;
      }
      QArrayData::deallocate(local_68,1,8);
    }
LAB_100191b80:
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_31 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100191bb0;
      }
      QArrayData::deallocate(local_70,2,8);
    }
LAB_100191bb0:
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100191be0;
      }
      QArrayData::deallocate(local_58,1,8);
    }
LAB_100191be0:
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100191c10;
      }
      QArrayData::deallocate(local_60,2,8);
    }
LAB_100191c10:
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100191c47;
      }
      QArrayData::deallocate(local_48,1,8);
    }
LAB_100191c47:
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100191c77;
      }
      QArrayData::deallocate(local_50,2,8);
    }
  }
LAB_100191c77:
  if (param_2 == 0) {
    FUN_100192270(&local_78);
    p_Var6 = local_78;
    if (*(uint *)(local_78 + 0x20) != 0) {
      for (p_Var4 = *(_func_void_Node_ptr **)
                     (*(long *)(local_78 + 8) +
                     ((ulong)(*(uint *)(local_78 + 0x24) ^ param_3) %
                     (ulong)*(uint *)(local_78 + 0x20)) * 8);
          (p_Var6 = local_78, p_Var4 != local_78 &&
          ((*(uint *)(p_Var4 + 8) != (*(uint *)(local_78 + 0x24) ^ param_3) ||
           (p_Var6 = p_Var4, *(uint *)(p_Var4 + 0xc) != param_3))));
          p_Var4 = *(_func_void_Node_ptr **)p_Var4) {
      }
    }
    if (*(int *)(local_78 + 0x10) != -1) {
      if (*(int *)(local_78 + 0x10) != 0) {
        LOCK();
        pcVar1 = local_78 + 0x10;
        *(int *)pcVar1 = *(int *)pcVar1 + -1;
        local_31 = *(int *)pcVar1 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100191cf5;
      }
      QHashData::free_helper(local_78);
    }
LAB_100191cf5:
    if (p_Var6 == local_78) {
      uVar2 = FUN_100dd9170(param_3);
      pbVar5 = (bool *)0x0;
      FUN_100df99c0("","prl_client_app",0,"(!)Error: [%s] request failed. Job handle is invalid.",
                    uVar2);
      goto LAB_100191f03;
    }
  }
  FUN_100188480(&local_b8,param_1);
  CRequestInfo::CRequestInfo(local_b0,param_3,&local_b8,param_4);
  if (*(int *)local_b8.field0_0x0 != -1) {
    if (*(int *)local_b8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_b8.field0_0x0 = *(int *)local_b8.field0_0x0 + -1;
      local_31 = *(int *)local_b8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100191d60;
    }
    QArrayData::deallocate((QArrayData *)local_b8.field0_0x0,2,8);
  }
LAB_100191d60:
  uVar2 = CSdkCommunicator::requestStorage();
  local_c0 = param_2;
  if (param_2 != 0) {
    _PrlHandle_AddRef(param_2);
  }
  pbVar5 = (bool *)CRequestStorage::addRequest(uVar2,&local_c0,local_b0);
  if (local_c0 != 0) {
    _PrlHandle_Free();
  }
  local_c1 = 0;
  CSdkRequest::isCompleted(pbVar5,(int *)&local_c1);
  QVariant::~QVariant(&local_88);
  if (local_98 != (int *)0x0) {
    LOCK();
    *local_98 = *local_98 + -1;
    local_31 = *local_98 != 0;
    UNLOCK();
    if ((!(bool)local_31) && (local_98 != (int *)0x0)) {
      operator_delete(local_98);
    }
  }
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_31 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100191f03;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_100191f03:
  if (param_2 != 0) {
    _PrlHandle_Free();
  }
  return pbVar5;
}

