
long FUN_100560f00(long param_1,long param_2,int *param_3)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  CMacUserShortcutsStorage *this;
  _func_void_Node_ptr *p_Var5;
  undefined8 uVar6;
  QKeySequence *pQVar7;
  long lVar8;
  uint local_64;
  Data *local_60;
  _func_void_Node_ptr *local_58;
  int local_4c;
  Data *local_48;
  undefined4 local_40;
  Data *local_38;
  undefined1 local_29;
  
  if (((*param_3 < 0) || (param_3[1] < 0)) || (*(long *)(param_3 + 4) == 0)) {
    local_38 = (Data *)PTR_shared_null_1021e15e8;
    FUN_100708220(param_1,&local_38,2);
    local_48 = local_38;
    if (*(int *)local_38 == -1) {
      return param_1;
    }
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return param_1;
      }
      local_29 = 0;
    }
    iVar3 = *(int *)(local_38 + 0xc);
    if (iVar3 != *(int *)(local_38 + 8)) {
      lVar8 = (long)*(int *)(local_38 + 8) * 8 + (long)iVar3 * -8;
      pQVar7 = (QKeySequence *)(local_38 + (long)iVar3 * 8 + 8);
      do {
        QKeySequence::~QKeySequence(pQVar7);
        pQVar7 = pQVar7 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    goto LAB_100561182;
  }
  local_4c = param_3[2];
  FUN_100566100(&local_48,param_2 + 0x10,&local_4c);
  puVar4 = PTR_m_instance_1021e1450;
  if (*(long *)PTR_m_instance_1021e1450 == 0) {
    this = operator_new(0x18);
    CMacUserShortcutsStorage::CMacUserShortcutsStorage(this);
    *(CMacUserShortcutsStorage **)puVar4 = this;
    DAT_102274b30 = 1;
  }
  CMacUserShortcutsStorage::userShortcuts();
  if (*(uint *)(local_58 + 0x20) != 0) {
    uVar2 = param_3[2];
    p_Var5 = *(_func_void_Node_ptr **)
              (*(long *)(local_58 + 8) +
              ((ulong)(*(uint *)(local_58 + 0x24) ^ uVar2) % (ulong)*(uint *)(local_58 + 0x20)) * 8)
    ;
LAB_100560fb3:
    if (p_Var5 != local_58) {
      if ((*(uint *)(p_Var5 + 8) != (*(uint *)(local_58 + 0x24) ^ uVar2)) ||
         (uVar2 != *(uint *)(p_Var5 + 0xc))) goto LAB_100560fb0;
      if (p_Var5 == local_58) goto LAB_100561056;
      local_64 = uVar2;
      uVar6 = FUN_100566280(&local_58,&local_64);
      FUN_100566450(&local_60,uVar6);
      FUN_100708260(&local_48,&local_60);
      if (*(int *)local_60 == -1) goto LAB_100561056;
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_29 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100561056;
      }
      iVar3 = *(int *)(local_60 + 0xc);
      if (iVar3 != *(int *)(local_60 + 8)) {
        lVar8 = (long)*(int *)(local_60 + 8) * 8 + (long)iVar3 * -8;
        pQVar7 = (QKeySequence *)(local_60 + (long)iVar3 * 8 + 8);
        do {
          QKeySequence::~QKeySequence(pQVar7);
          pQVar7 = pQVar7 + -8;
          lVar8 = lVar8 + 8;
        } while (lVar8 != 0);
      }
      QListData::dispose(local_60);
    }
  }
LAB_100561056:
  FUN_1005607f0(param_1,&local_48);
  *(undefined4 *)(param_1 + 8) = local_40;
  if (*(int *)(local_58 + 0x10) != -1) {
    if (*(int *)(local_58 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_58 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_29 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100561098;
    }
    QHashData::free_helper(local_58);
  }
LAB_100561098:
  if (*(int *)local_48 == -1) {
    return param_1;
  }
  if (*(int *)local_48 != 0) {
    LOCK();
    *(int *)local_48 = *(int *)local_48 + -1;
    UNLOCK();
    if (*(int *)local_48 != 0) {
      return param_1;
    }
    local_29 = 0;
  }
  iVar3 = *(int *)(local_48 + 0xc);
  if (iVar3 != *(int *)(local_48 + 8)) {
    lVar8 = (long)*(int *)(local_48 + 8) * 8 + (long)iVar3 * -8;
    pQVar7 = (QKeySequence *)(local_48 + (long)iVar3 * 8 + 8);
    do {
      QKeySequence::~QKeySequence(pQVar7);
      pQVar7 = pQVar7 + -8;
      lVar8 = lVar8 + 8;
    } while (lVar8 != 0);
  }
LAB_100561182:
  QListData::dispose(local_48);
  return param_1;
LAB_100560fb0:
  p_Var5 = *(_func_void_Node_ptr **)p_Var5;
  goto LAB_100560fb3;
}

