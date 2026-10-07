
bool FUN_1000611c0(long param_1,char param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  pid_t pVar6;
  CVmEventParameter *pCVar7;
  void *pvVar8;
  void *pvVar9;
  undefined8 uVar10;
  bool bVar11;
  QArrayData **ppQVar12;
  long *local_1b0;
  long *local_1a8;
  QArrayData *local_1a0;
  long *local_198;
  QArrayData *local_190;
  QArrayData *local_188;
  QArrayData *local_180;
  QArrayData *local_178;
  QArrayData *local_170;
  QArrayData *local_168;
  QArrayData *local_160;
  QArrayData *local_158;
  QArrayData *local_150;
  QArrayData *local_148;
  QArrayData *local_140;
  QArrayData *local_138;
  CVmEvent local_130 [8];
  undefined1 local_128 [216];
  QEvent local_50 [38];
  char local_2a;
  undefined1 local_29;
  
  (**(code **)(**(long **)(param_1 + 0x28) + 0x70))();
  iVar5 = (**(code **)(**(long **)(param_1 + 0x28) + 0x78))();
  if (iVar5 != 1) {
    bVar11 = true;
    goto LAB_10006193b;
  }
  local_138 = *(QArrayData **)(param_1 + 0x18);
  if (1 < *(int *)local_138 + 1U) {
    LOCK();
    *(int *)local_138 = *(int *)local_138 + 1;
    local_29 = *(int *)local_138 != 0;
    UNLOCK();
  }
  local_140 = (QArrayData *)QString::fromAscii_helper("",0);
  ppQVar12 = &local_140;
  CVmEvent::CVmEvent(local_130,100000,&local_138,0,100000,0,ppQVar12,0);
  if (*(int *)local_140 != -1) {
    if (*(int *)local_140 != 0) {
      LOCK();
      *(int *)local_140 = *(int *)local_140 + -1;
      local_29 = *(int *)local_140 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100061299;
    }
    QArrayData::deallocate(local_140,2,8);
  }
LAB_100061299:
  if (*(int *)local_138 != -1) {
    if (*(int *)local_138 != 0) {
      LOCK();
      *(int *)local_138 = *(int *)local_138 + -1;
      local_29 = *(int *)local_138 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000612cf;
    }
    QArrayData::deallocate(local_138,2,8);
  }
LAB_1000612cf:
  pCVar7 = operator_new(0xd0);
  local_148 = *(QArrayData **)(param_1 + 0x20);
  if (1 < *(int *)local_148 + 1U) {
    LOCK();
    *(int *)local_148 = *(int *)local_148 + 1;
    local_29 = *(int *)local_148 != 0;
    UNLOCK();
  }
  local_150 = (QArrayData *)QString::fromAscii_helper("vm_dir_uuid",0xb);
  CVmEventParameter::CVmEventParameter(pCVar7,1,&local_148,&local_150);
  CVmEvent::addEventParameter((CVmEventParameter *)local_130);
  if (*(int *)local_150 != -1) {
    if (*(int *)local_150 != 0) {
      LOCK();
      *(int *)local_150 = *(int *)local_150 + -1;
      local_29 = *(int *)local_150 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100061379;
    }
    QArrayData::deallocate(local_150,2,8);
  }
LAB_100061379:
  if (*(int *)local_148 != -1) {
    if (*(int *)local_148 != 0) {
      LOCK();
      *(int *)local_148 = *(int *)local_148 + -1;
      local_29 = *(int *)local_148 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000613af;
    }
    QArrayData::deallocate(local_148,2,8);
  }
LAB_1000613af:
  if (param_2 != '\0') {
    pCVar7 = operator_new(0xd0);
    local_158 = (QArrayData *)QString::fromAscii_helper("12.2.1-41615",0xc);
    local_160 = (QArrayData *)QString::fromAscii_helper("server_info_product_version",0x1b);
    CVmEventParameter::CVmEventParameter(pCVar7,1,&local_158,&local_160);
    CVmEvent::addEventParameter((CVmEventParameter *)local_130);
    if (*(int *)local_160 != -1) {
      if (*(int *)local_160 != 0) {
        LOCK();
        *(int *)local_160 = *(int *)local_160 + -1;
        local_29 = *(int *)local_160 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10006145d;
      }
      QArrayData::deallocate(local_160,2,8);
    }
LAB_10006145d:
    if (*(int *)local_158 != -1) {
      if (*(int *)local_158 != 0) {
        LOCK();
        *(int *)local_158 = *(int *)local_158 + -1;
        local_29 = *(int *)local_158 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100061493;
      }
      QArrayData::deallocate(local_158,2,8);
    }
LAB_100061493:
    pCVar7 = operator_new(0xd0);
    local_170 = (QArrayData *)QString::fromAscii_helper("%1",2);
    QString::arg(&local_168,&local_170,(long)*(int *)(param_1 + 0x60),0,10,0x20);
    local_178 = (QArrayData *)QString::fromAscii_helper("vminfo_vm_state",0xf);
    CVmEventParameter::CVmEventParameter(pCVar7,1,&local_168,&local_178);
    CVmEvent::addEventParameter((CVmEventParameter *)local_130);
    if (*(int *)local_178 != -1) {
      if (*(int *)local_178 != 0) {
        LOCK();
        *(int *)local_178 = *(int *)local_178 + -1;
        local_29 = *(int *)local_178 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100061560;
      }
      QArrayData::deallocate(local_178,2,8);
    }
LAB_100061560:
    if (*(int *)local_168 != -1) {
      if (*(int *)local_168 != 0) {
        LOCK();
        *(int *)local_168 = *(int *)local_168 + -1;
        local_29 = *(int *)local_168 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100061598;
      }
      QArrayData::deallocate(local_168,2,8);
    }
LAB_100061598:
    if (*(int *)local_170 != -1) {
      if (*(int *)local_170 != 0) {
        LOCK();
        *(int *)local_170 = *(int *)local_170 + -1;
        local_29 = *(int *)local_170 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1000615ce;
      }
      QArrayData::deallocate(local_170,2,8);
    }
LAB_1000615ce:
    pCVar7 = operator_new(0xd0);
    local_188 = (QArrayData *)QString::fromAscii_helper("%1",2);
    pVar6 = _getpid();
    QString::arg(&local_180,&local_188,(long)pVar6,0,10,0x20);
    local_190 = (QArrayData *)QString::fromAscii_helper("vminfo_vm_process_id",0x14);
    CVmEventParameter::CVmEventParameter(pCVar7,1,&local_180,&local_190);
    CVmEvent::addEventParameter((CVmEventParameter *)local_130);
    if (*(int *)local_190 != -1) {
      if (*(int *)local_190 != 0) {
        LOCK();
        *(int *)local_190 = *(int *)local_190 + -1;
        local_29 = *(int *)local_190 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10006169e;
      }
      QArrayData::deallocate(local_190,2,8);
    }
LAB_10006169e:
    if (*(int *)local_180 != -1) {
      if (*(int *)local_180 != 0) {
        LOCK();
        *(int *)local_180 = *(int *)local_180 + -1;
        local_29 = *(int *)local_180 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1000616d6;
      }
      QArrayData::deallocate(local_180,2,8);
    }
LAB_1000616d6:
    if (*(int *)local_188 != -1) {
      if (*(int *)local_188 != 0) {
        LOCK();
        *(int *)local_188 = *(int *)local_188 + -1;
        local_29 = *(int *)local_188 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10006170c;
      }
      QArrayData::deallocate(local_188,2,8);
    }
  }
LAB_10006170c:
  CBaseNode::toString(SUB81(&local_1a0,0),SUB81(local_128,0));
  uVar10 = 0xbcd;
  if (param_2 != '\0') {
    uVar10 = 0xbd3;
  }
  local_1a8 = (long *)0x0;
  FUN_100069140(&local_198,uVar10,&local_1a0,&local_1a8,0,1,(ulong)ppQVar12 & 0xffffffff00000000);
  if (local_1a8 != (long *)0x0) {
    LOCK();
    plVar1 = local_1a8 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)(*local_1a8 + 0x10))();
    }
  }
  if (*(int *)local_1a0 != -1) {
    if (*(int *)local_1a0 != 0) {
      LOCK();
      *(int *)local_1a0 = *(int *)local_1a0 + -1;
      local_29 = *(int *)local_1a0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000617c2;
    }
    QArrayData::deallocate(local_1a0,2,8);
  }
LAB_1000617c2:
  (**(code **)(**(long **)(param_1 + 0x28) + 0xb8))
            (&local_1b0,*(long **)(param_1 + 0x28),&local_198);
  plVar1 = local_1b0;
  if ((local_1b0 == (long *)0x0) || (local_1b0[2] == 0)) {
    iVar5 = 2;
LAB_1000618b1:
    bVar11 = true;
    FUN_1008e3970("","vm",0,"Handshake procedure failed: waitForSend() broken with code %d",iVar5);
  }
  else {
    local_2a = '\0';
    LOCK();
    *(int *)(local_1b0 + 1) = (int)local_1b0[1] + 1;
    UNLOCK();
    cVar4 = FUN_100796350(local_1b0[2],0xffffffff,&local_2a);
    iVar5 = 4;
    if ((cVar4 != '\0') && (iVar5 = 0, local_2a != '\0')) {
      iVar5 = 5;
    }
    LOCK();
    plVar2 = plVar1 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
    }
    if (iVar5 != 0) goto LAB_1000618b1;
    if ((local_1b0 == (long *)0x0) || (local_1b0[2] == 0)) {
LAB_10006187f:
      bVar11 = true;
      FUN_1008e3970("","vm",0,"Handshake procedure failed: getSendResult() broken with code %d");
    }
    else {
      iVar5 = FUN_1007965e0();
      bVar11 = false;
      if (iVar5 != 0) goto LAB_10006187f;
    }
  }
  if (local_1b0 != (long *)0x0) {
    LOCK();
    plVar1 = local_1b0 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)(*local_1b0 + 0x10))();
    }
  }
  if (local_198 != (long *)0x0) {
    LOCK();
    plVar1 = local_198 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)(*local_198 + 0x10))();
    }
  }
  QEvent::~QEvent(local_50);
  CVmEventBase::~CVmEventBase((CVmEventBase *)local_130);
  bVar11 = !bVar11;
  if (!bVar11) {
    return bVar11;
  }
LAB_10006193b:
  if (param_2 == '\0') {
    pvVar8 = operator_new(0x378,(nothrow_t *)PTR_nothrow_100ba21c8);
    pvVar9 = (void *)0x0;
    if (pvVar8 != (void *)0x0) {
      FUN_10006b320(pvVar8,param_1);
      pvVar9 = pvVar8;
    }
    *(void **)(param_1 + 0x10) = pvVar9;
    bVar11 = pvVar9 != (void *)0x0;
  }
  return bVar11;
}

