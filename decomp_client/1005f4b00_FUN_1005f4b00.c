
void FUN_1005f4b00(long param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  QArrayData *pQVar3;
  ulong uVar4;
  char cVar5;
  undefined1 uVar6;
  uint uVar7;
  long lVar8;
  _func_void_Node_ptr *p_Var9;
  char *pcVar10;
  undefined8 uVar11;
  void *pvVar12;
  uint uVar13;
  int iVar14;
  undefined4 uVar15;
  _func_void_Node_ptr *p_Var16;
  _func_void_Node_ptr *p_Var17;
  _func_void_Node_ptr *p_Var18;
  bool bVar19;
  undefined8 local_110;
  QVariant local_108;
  QArrayData *local_f8;
  undefined4 local_f0;
  undefined1 local_e1;
  QVariant local_e0;
  int local_d0 [4];
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  undefined1 local_a0;
  undefined *local_98;
  undefined4 local_90;
  undefined1 local_8c;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined1 local_68 [8];
  long local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  uint local_48;
  _func_void_Node_ptr *local_40;
  undefined1 local_31;
  
  lVar8 = CDeclarativeWizardPage::pageContentItem();
  if (lVar8 == 0) {
    return;
  }
  lVar8 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x38);
  FUN_1005bca20(&local_40,lVar8,*(undefined4 *)(lVar8 + 0x158));
  p_Var9 = local_40;
  if (*(int *)(lVar8 + 0x158) == 2) {
    if ((*(int *)(local_40 + 0x14) != 0) && (uVar13 = *(uint *)(local_40 + 0x20), uVar13 != 0)) {
      uVar7 = qHash((QString *)(param_1 + 0x28),*(uint *)(local_40 + 0x24));
      uVar4 = (ulong)uVar7 % (ulong)uVar13;
      p_Var17 = *(_func_void_Node_ptr **)(*(long *)(p_Var9 + 8) + uVar4 * 8);
      if (p_Var17 != p_Var9) {
        p_Var16 = (_func_void_Node_ptr *)(*(long *)(p_Var9 + 8) + uVar4 * 8);
        do {
          p_Var18 = p_Var9;
          if (*(uint *)(p_Var17 + 8) == uVar7) {
            cVar5 = operator==((QString *)(param_1 + 0x28),(QString *)(p_Var17 + 0x10));
            p_Var9 = *(_func_void_Node_ptr **)p_Var16;
            p_Var17 = p_Var9;
            p_Var18 = local_40;
            if (cVar5 != '\0') break;
          }
          p_Var9 = p_Var18;
          p_Var16 = p_Var17;
          p_Var17 = *(_func_void_Node_ptr **)p_Var16;
          p_Var18 = p_Var9;
        } while (p_Var17 != p_Var9);
        if (p_Var9 != p_Var18) {
          FUN_100260700(local_d0,p_Var9 + 0x18);
          goto LAB_1005f4d40;
        }
      }
    }
LAB_1005f4cba:
    local_d0[0] = 0xff;
    local_d0[1] = 0;
    local_d0[2] = 0;
    local_c0._8_4_ = (int)PTR_shared_null_1021e1288;
    local_c0._0_8_ = PTR_shared_null_1021e1288;
    local_c0._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
    local_b0._8_4_ = (int)PTR_shared_null_1021e15e8;
    local_b0._0_8_ = PTR_shared_null_1021e15e8;
    local_b0._12_4_ = (int)((ulong)PTR_shared_null_1021e15e8 >> 0x20);
    local_a0 = 0;
    local_98 = PTR_shared_null_1021e1288;
    local_90 = 0;
    local_8c = 0;
    local_88 = 0;
    local_70 = 0;
    local_78 = 0;
    local_80 = 0;
  }
  else {
    FUN_1005c9700(local_68,&local_40);
    FUN_1005c9d20(&local_60,local_68);
    local_58 = (undefined8 *)(local_60 + 0x10 + (long)*(int *)(local_60 + 8) * 8);
    local_50 = (undefined8 *)(local_60 + 0x10 + (long)*(int *)(local_60 + 0xc) * 8);
    local_48 = 1;
    FUN_1005c97c0(local_68);
    if (local_48 != 0) {
      do {
        if (local_58 == local_50) break;
        FUN_100260700(local_d0,*local_58);
        if (local_48 != 0) {
          iVar14 = 1;
          if (local_d0[0] != 0xff) goto LAB_1005f4ca8;
          local_48 = 0;
        }
        FUN_10005e410(local_d0);
        local_58 = local_58 + 1;
        uVar13 = local_48 ^ 1;
        bVar19 = local_48 != 1;
        local_48 = uVar13;
      } while (bVar19);
    }
    iVar14 = 2;
LAB_1005f4ca8:
    FUN_1005c97c0(&local_60);
    if (iVar14 == 2) goto LAB_1005f4cba;
  }
LAB_1005f4d40:
  if (*(int *)(local_40 + 0x10) != -1) {
    if (*(int *)(local_40 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_40 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_31 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005f4d6f;
    }
    QHashData::free_helper(local_40);
  }
LAB_1005f4d6f:
  lVar8 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x38);
  pQVar3 = *(QArrayData **)(lVar8 + 0x150);
  if (1 < *(int *)pQVar3 + 1U) {
    LOCK();
    *(int *)pQVar3 = *(int *)pQVar3 + 1;
    local_31 = *(int *)pQVar3 != 0;
    UNLOCK();
  }
  uVar2 = *(undefined4 *)(lVar8 + 0x158);
  lVar8 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x38);
  uVar15 = 0;
  if (*(char *)(lVar8 + 0x148) == '\0') {
    pcVar10 = (char *)CDeclarativeWizardPage::pageContentItem();
    uVar11 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x38);
    cVar5 = FUN_1005bec90(uVar11);
    local_e1 = true;
    if (cVar5 == '\0') {
      local_e1 = -1 < *(int *)(param_1 + 0x50);
    }
    QVariant::QVariant(&local_e0,1,&local_e1,0);
    QObject::setProperty(pcVar10,(QVariant *)"manualDetectionInProgress");
    QVariant::~QVariant(&local_e0);
    uVar15 = uVar2;
  }
  if (*(long **)(param_1 + 0x38) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x38) + 0x20))();
  }
  pvVar12 = operator_new(0x90);
  if (1 < *(int *)pQVar3 + 1U) {
    LOCK();
    *(int *)pQVar3 = *(int *)pQVar3 + 1;
    local_31 = *(int *)pQVar3 != 0;
    UNLOCK();
  }
  local_f8 = pQVar3;
  local_f0 = uVar15;
  uVar11 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x38);
  uVar6 = FUN_1005be8e0(uVar11);
  FUN_1005fdc90(pvVar12,local_d0,&local_f8,uVar6,0);
  *(void **)(param_1 + 0x38) = pvVar12;
  if (*(int *)local_f8 != -1) {
    if (*(int *)local_f8 != 0) {
      LOCK();
      *(int *)local_f8 = *(int *)local_f8 + -1;
      local_31 = *(int *)local_f8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005f4ed3;
    }
    QArrayData::deallocate(local_f8,2,8);
  }
LAB_1005f4ed3:
  pcVar10 = (char *)CDeclarativeWizardPage::pageContentItem();
  local_110 = *(undefined8 *)(param_1 + 0x38);
  QVariant::QVariant(&local_108,0x27,&local_110,1);
  QObject::setProperty(pcVar10,(QVariant *)"detectionInfo");
  QVariant::~QVariant(&local_108);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_31 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005f4f56;
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_1005f4f56:
  FUN_10005e410(local_d0);
  return;
}

