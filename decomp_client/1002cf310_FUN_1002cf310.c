
void FUN_1002cf310(CAbstractTask *param_1,QObject *param_2,undefined4 param_3)

{
  CAbstractTask *pCVar1;
  undefined *puVar2;
  char cVar3;
  CTaskGenericId *pCVar4;
  undefined8 uVar5;
  size_t sVar6;
  QVariant *pQVar7;
  int iVar8;
  QVariant local_168;
  QArrayData *local_158;
  QVariant local_150;
  QArrayData *local_140;
  QVariant local_138;
  QArrayData *local_128;
  QVariant local_120;
  QArrayData *local_110;
  QVariant local_108;
  QArrayData *local_f8;
  QVariant local_f0;
  QArrayData *local_e0;
  QVariant local_d8;
  QArrayData *local_c8;
  QVariant local_c0;
  QArrayData *local_b0;
  QVariant local_a8;
  QArrayData *local_98;
  QVariant local_90;
  QArrayData *local_80;
  QVariant local_78;
  QArrayData *local_68;
  QVariant local_60;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  pCVar4 = operator_new(0x18);
  FUN_100188480(&local_40,param_2);
  FUN_1001884b0(&local_48,param_2);
  FUN_1002d11e0(pCVar4,&local_40,&local_48);
  CAbstractTask::CAbstractTask(param_1,pCVar4);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002cf3a9;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1002cf3a9:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002cf3d9;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1002cf3d9:
  *(undefined ***)param_1 = &PTR_FUN_102209b40;
  uVar5 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  *(undefined8 *)(param_1 + 0x18) = uVar5;
  *(QObject **)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  pCVar1 = param_1 + 0x30;
  *(undefined **)(param_1 + 0x30) = PTR_shared_null_1021e12f0;
  puVar2 = PTR_s_Hardware_Video_EnableHiResDrawin_102273168;
  switch(param_3) {
  case 1:
    break;
  case 2:
    iVar8 = -1;
    if (PTR_s_Hardware_Video_EnableHiResDrawin_102273168 != (undefined *)0x0) {
      sVar6 = _strlen(PTR_s_Hardware_Video_EnableHiResDrawin_102273168);
      iVar8 = (int)sVar6;
    }
    local_98 = (QArrayData *)QString::fromAscii_helper(puVar2,iVar8);
    pQVar7 = (QVariant *)FUN_10008c590(pCVar1,&local_98);
    QVariant::QVariant(&local_a8,true);
    QVariant::operator=(pQVar7,&local_a8);
    QVariant::~QVariant(&local_a8);
    if (*(int *)local_98 != -1) {
      if (*(int *)local_98 != 0) {
        LOCK();
        *(int *)local_98 = *(int *)local_98 + -1;
        local_31 = *(int *)local_98 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002cf6c5;
      }
      QArrayData::deallocate(local_98,2,8);
    }
LAB_1002cf6c5:
    uVar5 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar5 = *(undefined8 *)(param_1 + 0x20);
    }
    cVar3 = FUN_1001221f0(uVar5);
    puVar2 = PTR_s_Hardware_Video_UseHiResInGuest_102273170;
    if (cVar3 != '\0') {
      iVar8 = -1;
      if (PTR_s_Hardware_Video_UseHiResInGuest_102273170 != (undefined *)0x0) {
        sVar6 = _strlen(PTR_s_Hardware_Video_UseHiResInGuest_102273170);
        iVar8 = (int)sVar6;
      }
      local_b0 = (QArrayData *)QString::fromAscii_helper(puVar2,iVar8);
      pQVar7 = (QVariant *)FUN_10008c590(pCVar1,&local_b0);
      QVariant::QVariant(&local_c0,true);
      QVariant::operator=(pQVar7,&local_c0);
      QVariant::~QVariant(&local_c0);
      if (*(int *)local_b0 != -1) {
        if (*(int *)local_b0 != 0) {
          LOCK();
          *(int *)local_b0 = *(int *)local_b0 + -1;
          local_31 = *(int *)local_b0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002cf78a;
        }
        QArrayData::deallocate(local_b0,2,8);
      }
    }
LAB_1002cf78a:
    puVar2 = PTR_s_Hardware_Video_NativeScalingInGu_102273178;
    iVar8 = -1;
    if (PTR_s_Hardware_Video_NativeScalingInGu_102273178 != (undefined *)0x0) {
      sVar6 = _strlen(PTR_s_Hardware_Video_NativeScalingInGu_102273178);
      iVar8 = (int)sVar6;
    }
    local_c8 = (QArrayData *)QString::fromAscii_helper(puVar2,iVar8);
    pQVar7 = (QVariant *)FUN_10008c590(pCVar1);
    QVariant::QVariant(&local_d8,false);
    QVariant::operator=(pQVar7,&local_d8);
    QVariant::~QVariant(&local_d8);
    if (*(int *)local_c8 == -1) {
      return;
    }
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      UNLOCK();
      if (*(int *)local_c8 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_c8,2,8);
    return;
  default:
    FUN_100df99c0("","prl_client_app",0,"Unsupported retina option %i",param_3);
    return;
  case 4:
    iVar8 = -1;
    if (PTR_s_Hardware_Video_EnableHiResDrawin_102273168 != (undefined *)0x0) {
      sVar6 = _strlen(PTR_s_Hardware_Video_EnableHiResDrawin_102273168);
      iVar8 = (int)sVar6;
    }
    local_e0 = (QArrayData *)QString::fromAscii_helper(puVar2,iVar8);
    pQVar7 = (QVariant *)FUN_10008c590(pCVar1,&local_e0);
    QVariant::QVariant(&local_f0,true);
    QVariant::operator=(pQVar7,&local_f0);
    QVariant::~QVariant(&local_f0);
    if (*(int *)local_e0 != -1) {
      if (*(int *)local_e0 != 0) {
        LOCK();
        *(int *)local_e0 = *(int *)local_e0 + -1;
        local_31 = *(int *)local_e0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002cf8d2;
      }
      QArrayData::deallocate(local_e0,2,8);
    }
LAB_1002cf8d2:
    uVar5 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar5 = *(undefined8 *)(param_1 + 0x20);
    }
    cVar3 = FUN_1001221f0(uVar5);
    puVar2 = PTR_s_Hardware_Video_UseHiResInGuest_102273170;
    if (cVar3 != '\0') {
      iVar8 = -1;
      if (PTR_s_Hardware_Video_UseHiResInGuest_102273170 != (undefined *)0x0) {
        sVar6 = _strlen(PTR_s_Hardware_Video_UseHiResInGuest_102273170);
        iVar8 = (int)sVar6;
      }
      local_f8 = (QArrayData *)QString::fromAscii_helper(puVar2,iVar8);
      pQVar7 = (QVariant *)FUN_10008c590(pCVar1);
      QVariant::QVariant(&local_108,false);
      QVariant::operator=(pQVar7,&local_108);
      QVariant::~QVariant(&local_108);
      if (*(int *)local_f8 != -1) {
        if (*(int *)local_f8 != 0) {
          LOCK();
          *(int *)local_f8 = *(int *)local_f8 + -1;
          local_31 = *(int *)local_f8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002cf994;
        }
        QArrayData::deallocate(local_f8,2,8);
      }
    }
LAB_1002cf994:
    puVar2 = PTR_s_Hardware_Video_NativeScalingInGu_102273178;
    iVar8 = -1;
    if (PTR_s_Hardware_Video_NativeScalingInGu_102273178 != (undefined *)0x0) {
      sVar6 = _strlen(PTR_s_Hardware_Video_NativeScalingInGu_102273178);
      iVar8 = (int)sVar6;
    }
    local_110 = (QArrayData *)QString::fromAscii_helper(puVar2,iVar8);
    pQVar7 = (QVariant *)FUN_10008c590(pCVar1);
    QVariant::QVariant(&local_120,false);
    QVariant::operator=(pQVar7,&local_120);
    QVariant::~QVariant(&local_120);
    if (*(int *)local_110 == -1) {
      return;
    }
    if (*(int *)local_110 != 0) {
      LOCK();
      *(int *)local_110 = *(int *)local_110 + -1;
      UNLOCK();
      if (*(int *)local_110 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_110,2,8);
    return;
  case 8:
    iVar8 = -1;
    if (PTR_s_Hardware_Video_EnableHiResDrawin_102273168 != (undefined *)0x0) {
      sVar6 = _strlen(PTR_s_Hardware_Video_EnableHiResDrawin_102273168);
      iVar8 = (int)sVar6;
    }
    local_128 = (QArrayData *)QString::fromAscii_helper(puVar2,iVar8);
    pQVar7 = (QVariant *)FUN_10008c590(pCVar1,&local_128);
    QVariant::QVariant(&local_138,true);
    QVariant::operator=(pQVar7,&local_138);
    QVariant::~QVariant(&local_138);
    if (*(int *)local_128 != -1) {
      if (*(int *)local_128 != 0) {
        LOCK();
        *(int *)local_128 = *(int *)local_128 + -1;
        local_31 = *(int *)local_128 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002cfadc;
      }
      QArrayData::deallocate(local_128,2,8);
    }
LAB_1002cfadc:
    uVar5 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar5 = *(undefined8 *)(param_1 + 0x20);
    }
    cVar3 = FUN_1001221f0(uVar5);
    puVar2 = PTR_s_Hardware_Video_UseHiResInGuest_102273170;
    if (cVar3 != '\0') {
      iVar8 = -1;
      if (PTR_s_Hardware_Video_UseHiResInGuest_102273170 != (undefined *)0x0) {
        sVar6 = _strlen(PTR_s_Hardware_Video_UseHiResInGuest_102273170);
        iVar8 = (int)sVar6;
      }
      local_140 = (QArrayData *)QString::fromAscii_helper(puVar2,iVar8);
      pQVar7 = (QVariant *)FUN_10008c590(pCVar1,&local_140);
      QVariant::QVariant(&local_150,true);
      QVariant::operator=(pQVar7,&local_150);
      QVariant::~QVariant(&local_150);
      if (*(int *)local_140 != -1) {
        if (*(int *)local_140 != 0) {
          LOCK();
          *(int *)local_140 = *(int *)local_140 + -1;
          local_31 = *(int *)local_140 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002cfba1;
        }
        QArrayData::deallocate(local_140,2,8);
      }
    }
LAB_1002cfba1:
    puVar2 = PTR_s_Hardware_Video_NativeScalingInGu_102273178;
    iVar8 = -1;
    if (PTR_s_Hardware_Video_NativeScalingInGu_102273178 != (undefined *)0x0) {
      sVar6 = _strlen(PTR_s_Hardware_Video_NativeScalingInGu_102273178);
      iVar8 = (int)sVar6;
    }
    local_158 = (QArrayData *)QString::fromAscii_helper(puVar2,iVar8);
    pQVar7 = (QVariant *)FUN_10008c590(pCVar1,&local_158);
    QVariant::QVariant(&local_168,true);
    QVariant::operator=(pQVar7,&local_168);
    QVariant::~QVariant(&local_168);
    if (*(int *)local_158 == -1) {
      return;
    }
    if (*(int *)local_158 != 0) {
      LOCK();
      *(int *)local_158 = *(int *)local_158 + -1;
      UNLOCK();
      if (*(int *)local_158 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_158,2,8);
    return;
  }
  iVar8 = -1;
  if (PTR_s_Hardware_Video_EnableHiResDrawin_102273168 != (undefined *)0x0) {
    sVar6 = _strlen(PTR_s_Hardware_Video_EnableHiResDrawin_102273168);
    iVar8 = (int)sVar6;
  }
  local_50 = (QArrayData *)QString::fromAscii_helper(puVar2,iVar8);
  pQVar7 = (QVariant *)FUN_10008c590(pCVar1);
  QVariant::QVariant(&local_60,false);
  QVariant::operator=(pQVar7,&local_60);
  QVariant::~QVariant(&local_60);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002cf4b4;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1002cf4b4:
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
  }
  cVar3 = FUN_1001221f0(uVar5);
  puVar2 = PTR_s_Hardware_Video_UseHiResInGuest_102273170;
  if (cVar3 != '\0') {
    iVar8 = -1;
    if (PTR_s_Hardware_Video_UseHiResInGuest_102273170 != (undefined *)0x0) {
      sVar6 = _strlen(PTR_s_Hardware_Video_UseHiResInGuest_102273170);
      iVar8 = (int)sVar6;
    }
    local_68 = (QArrayData *)QString::fromAscii_helper(puVar2,iVar8);
    pQVar7 = (QVariant *)FUN_10008c590(pCVar1);
    QVariant::QVariant(&local_78,false);
    QVariant::operator=(pQVar7,&local_78);
    QVariant::~QVariant(&local_78);
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002cf561;
      }
      QArrayData::deallocate(local_68,2,8);
    }
  }
LAB_1002cf561:
  puVar2 = PTR_s_Hardware_Video_NativeScalingInGu_102273178;
  iVar8 = -1;
  if (PTR_s_Hardware_Video_NativeScalingInGu_102273178 != (undefined *)0x0) {
    sVar6 = _strlen(PTR_s_Hardware_Video_NativeScalingInGu_102273178);
    iVar8 = (int)sVar6;
  }
  local_80 = (QArrayData *)QString::fromAscii_helper(puVar2,iVar8);
  pQVar7 = (QVariant *)FUN_10008c590(pCVar1);
  QVariant::QVariant(&local_90,false);
  QVariant::operator=(pQVar7,&local_90);
  QVariant::~QVariant(&local_90);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      UNLOCK();
      if (*(int *)local_80 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_80,2,8);
  }
  return;
}

