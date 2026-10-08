
undefined8 * FUN_100074d70(undefined8 *param_1)

{
  code *pcVar1;
  _func_void_Node_ptr_void_ptr *p_Var2;
  int iVar3;
  undefined8 uVar4;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  undefined1 local_50 [8];
  undefined1 local_48 [8];
  undefined1 local_40 [8];
  undefined1 local_38 [8];
  undefined1 local_30 [8];
  undefined1 local_28 [7];
  undefined1 local_21;
  
  if ((DAT_102311e28 == '\0') && (iVar3 = ___cxa_guard_acquire(&DAT_102311e28), iVar3 != 0)) {
    DAT_102311e20 = (_func_void_Node_ptr_void_ptr *)PTR_shared_null_1021e15d0;
    ___cxa_atexit(FUN_1000764f0,&DAT_102311e20,0x100000000);
    ___cxa_guard_release(&DAT_102311e28);
  }
  if (*(int *)(DAT_102311e20 + 0x14) == 0) {
    local_58 = (QArrayData *)QString::fromAscii_helper("CAppPreferencesDialog",0x15);
    FUN_100062d00(&DAT_102311e20,&local_58,local_50);
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_21 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100074e38;
      }
      QArrayData::deallocate(local_58,2,8);
    }
LAB_100074e38:
    local_60 = (QArrayData *)QString::fromAscii_helper("CVmConfigEditor",0xf);
    FUN_100062d00(&DAT_102311e20,&local_60,local_48);
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_21 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100074e91;
      }
      QArrayData::deallocate(local_60,2,8);
    }
LAB_100074e91:
    local_68 = (QArrayData *)QString::fromAscii_helper("CVmConsoleWindow",0x10);
    FUN_100062d00(&DAT_102311e20,&local_68,local_40);
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_21 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100074eea;
      }
      QArrayData::deallocate(local_68,2,8);
    }
LAB_100074eea:
    local_70 = (QArrayData *)QString::fromAscii_helper("CSnapshotDialog",0xf);
    FUN_100062d00(&DAT_102311e20,&local_70,local_38);
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_21 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100074f43;
      }
      QArrayData::deallocate(local_70,2,8);
    }
LAB_100074f43:
    local_78 = (QArrayData *)QString::fromAscii_helper("CContentWindow",0xe);
    FUN_100062d00(&DAT_102311e20,&local_78,local_30);
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_21 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100074f9c;
      }
      QArrayData::deallocate(local_78,2,8);
    }
LAB_100074f9c:
    local_80 = (QArrayData *)QString::fromAscii_helper("CControlCenterWindow",0x14);
    FUN_100062d00(&DAT_102311e20,&local_80,local_28);
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_21 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100074ff5;
      }
      QArrayData::deallocate(local_80,2,8);
    }
  }
LAB_100074ff5:
  p_Var2 = DAT_102311e20;
  *param_1 = DAT_102311e20;
  if (1 < *(int *)(p_Var2 + 0x10) + 1U) {
    LOCK();
    pcVar1 = p_Var2 + 0x10;
    *(int *)pcVar1 = *(int *)pcVar1 + 1;
    local_21 = *(int *)pcVar1 != 0;
    UNLOCK();
  }
  if (((byte)p_Var2[0x28] & 1) != 0) {
    return param_1;
  }
  if (*(uint *)(p_Var2 + 0x10) < 2) {
    return param_1;
  }
  uVar4 = QHashData::detach_helper(p_Var2,FUN_100062bb0,0x62be0,0x18);
  if (*(int *)(p_Var2 + 0x10) != -1) {
    if (*(int *)(p_Var2 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var2 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_21 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10007506c;
    }
    QHashData::free_helper((_func_void_Node_ptr *)p_Var2);
  }
LAB_10007506c:
  *param_1 = uVar4;
  return param_1;
}

