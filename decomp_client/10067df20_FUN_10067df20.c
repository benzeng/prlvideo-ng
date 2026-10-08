
bool FUN_10067df20(long param_1)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  CTaskGenericId *pCVar6;
  _func_void_Node_ptr *p_Var7;
  _func_void_Node_ptr *p_Var8;
  bool bVar9;
  undefined4 local_e4;
  QVariant local_e0;
  QVariant local_d0;
  QVariant local_c0;
  QVariant local_b0;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  _func_void_Node_ptr *local_88;
  undefined **local_80 [3];
  undefined1 local_68 [8];
  undefined1 local_60 [8];
  undefined1 local_58 [8];
  undefined1 local_50 [8];
  undefined1 local_48 [8];
  undefined1 local_40 [7];
  undefined1 local_39;
  undefined1 local_38 [8];
  
  bVar9 = true;
  if (((*(long *)(param_1 + 0x58) != 0) && (*(int *)(*(long *)(param_1 + 0x58) + 4) != 0)) &&
     (*(long *)(param_1 + 0x60) != 0)) {
    uVar5 = FUN_10016f500();
    pCVar6 = (CTaskGenericId *)CTaskManager::instance();
    CTaskGenericId::CTaskGenericId((CTaskGenericId *)local_80,0x53);
    local_80[0] = &PTR_FUN_10226c710;
    cVar2 = CTaskManager::isTaskRunning(pCVar6);
    if (cVar2 == '\0') {
      cVar2 = FUN_10061c4a0(uVar5);
      CTaskGenericId::~CTaskGenericId((CTaskGenericId *)local_80);
      if (cVar2 == '\0') {
        return true;
      }
    }
    else {
      CTaskGenericId::~CTaskGenericId((CTaskGenericId *)local_80);
    }
    local_88 = (_func_void_Node_ptr *)PTR_shared_null_1021e15d0;
    local_8c = 3;
    FUN_100131ed0(&local_88,&local_8c,local_68);
    local_90 = 4;
    FUN_100131ed0(&local_88,&local_90,local_60);
    local_94 = 0xb;
    FUN_100131ed0(&local_88,&local_94,local_58);
    if ((*(char *)(param_1 + 0x168) == '\0') || (cVar2 = FUN_10061c4a0(uVar5), cVar2 != '\0')) {
      local_98 = 0xc;
      FUN_100131ed0(&local_88,&local_98,local_50);
      local_9c = 1;
      FUN_100131ed0(&local_88,&local_9c,local_48);
      local_a0 = 6;
      FUN_100131ed0(&local_88,&local_a0,local_40);
    }
    cVar2 = FUN_10061b4d0(uVar5,0x20);
    if (cVar2 != '\0') {
      FUN_10061abe0(&local_b0,uVar5,0);
      iVar3 = QVariant::toInt((bool *)&local_b0);
      bVar9 = true;
      if (iVar3 != -0x7ffeefff) {
        FUN_10061abe0(&local_c0,uVar5,0);
        iVar3 = QVariant::toInt((bool *)&local_c0);
        bVar9 = true;
        if (iVar3 != -0x7ffeef8c) {
          FUN_10061abe0(&local_d0,uVar5,0);
          iVar3 = QVariant::toInt((bool *)&local_d0);
          bVar9 = true;
          if (iVar3 != -0x7ffeef89) {
            FUN_10061abe0(&local_e0,uVar5,0);
            iVar3 = QVariant::toInt((bool *)&local_e0);
            bVar9 = iVar3 == -0x7ffeef9b;
            QVariant::~QVariant(&local_e0);
          }
          QVariant::~QVariant(&local_d0);
        }
        QVariant::~QVariant(&local_c0);
      }
      QVariant::~QVariant(&local_b0);
      if (bVar9) {
        local_e4 = 10;
        FUN_100131ed0(&local_88,&local_e4,local_38);
      }
    }
    uVar4 = CAbstractWizardModel::currentPageId();
    p_Var8 = local_88;
    if (*(uint *)(local_88 + 0x20) != 0) {
      for (p_Var7 = *(_func_void_Node_ptr **)
                     (*(long *)(local_88 + 8) +
                     ((ulong)(*(uint *)(local_88 + 0x24) ^ uVar4) %
                     (ulong)*(uint *)(local_88 + 0x20)) * 8);
          (p_Var8 = local_88, p_Var7 != local_88 &&
          ((*(uint *)(p_Var7 + 8) != (*(uint *)(local_88 + 0x24) ^ uVar4) ||
           (p_Var8 = p_Var7, uVar4 != *(uint *)(p_Var7 + 0xc)))));
          p_Var7 = *(_func_void_Node_ptr **)p_Var7) {
      }
    }
    bVar9 = p_Var8 == local_88;
    if (*(int *)(local_88 + 0x10) != -1) {
      if (*(int *)(local_88 + 0x10) != 0) {
        LOCK();
        pcVar1 = local_88 + 0x10;
        *(int *)pcVar1 = *(int *)pcVar1 + -1;
        local_39 = *(int *)pcVar1 != 0;
        UNLOCK();
        if ((bool)local_39) {
          return bVar9;
        }
      }
      QHashData::free_helper(local_88);
    }
  }
  return bVar9;
}

