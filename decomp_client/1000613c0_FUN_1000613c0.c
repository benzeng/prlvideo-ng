
undefined8 * FUN_1000613c0(undefined8 *param_1)

{
  code *pcVar1;
  undefined *puVar2;
  _func_void_Node_ptr_void_ptr *p_Var3;
  int iVar4;
  undefined8 uVar5;
  QArrayData *local_70;
  QArrayData *local_68;
  _func_void_Node_ptr *local_60;
  undefined4 local_54;
  QArrayData *local_50;
  _func_void_Node_ptr *local_48;
  undefined4 local_3c;
  undefined1 local_38 [8];
  undefined1 local_30 [8];
  undefined1 local_28 [7];
  undefined1 local_21;
  
  if ((DAT_102311df0 == '\0') && (iVar4 = ___cxa_guard_acquire(&DAT_102311df0), iVar4 != 0)) {
    DAT_102311de8 = (_func_void_Node_ptr_void_ptr *)PTR_shared_null_1021e15d0;
    ___cxa_atexit(FUN_1000626a0,&DAT_102311de8,0x100000000);
    ___cxa_guard_release(&DAT_102311df0);
  }
  puVar2 = PTR_shared_null_1021e15d0;
  if (*(int *)(DAT_102311de8 + 0x14) == 0) {
    local_3c = 2;
    local_48 = (_func_void_Node_ptr *)PTR_shared_null_1021e15d0;
    local_50 = (QArrayData *)QString::fromAscii_helper("serverUuid",10);
    FUN_100062d00(&local_48,&local_50,local_38);
    FUN_100062860(&DAT_102311de8,&local_3c,&local_48);
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_21 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1000614ab;
      }
      QArrayData::deallocate(local_50,2,8);
    }
LAB_1000614ab:
    if (*(int *)(local_48 + 0x10) != -1) {
      if (*(int *)(local_48 + 0x10) != 0) {
        LOCK();
        pcVar1 = local_48 + 0x10;
        *(int *)pcVar1 = *(int *)pcVar1 + -1;
        local_21 = *(int *)pcVar1 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1000614d6;
      }
      QHashData::free_helper(local_48);
    }
LAB_1000614d6:
    local_54 = 3;
    local_60 = (_func_void_Node_ptr *)puVar2;
    local_68 = (QArrayData *)QString::fromAscii_helper("vmUuid",6);
    FUN_100062d00(&local_60,&local_68,local_30);
    local_70 = (QArrayData *)QString::fromAscii_helper("serverUuid",10);
    FUN_100062d00(&local_60,&local_70,local_28);
    FUN_100062860(&DAT_102311de8,&local_54,&local_60);
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_21 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100061571;
      }
      QArrayData::deallocate(local_70,2,8);
    }
LAB_100061571:
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_21 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1000615a1;
      }
      QArrayData::deallocate(local_68,2,8);
    }
LAB_1000615a1:
    if (*(int *)(local_60 + 0x10) != -1) {
      if (*(int *)(local_60 + 0x10) != 0) {
        LOCK();
        pcVar1 = local_60 + 0x10;
        *(int *)pcVar1 = *(int *)pcVar1 + -1;
        local_21 = *(int *)pcVar1 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1000615cc;
      }
      QHashData::free_helper(local_60);
    }
  }
LAB_1000615cc:
  p_Var3 = DAT_102311de8;
  *param_1 = DAT_102311de8;
  if (1 < *(int *)(p_Var3 + 0x10) + 1U) {
    LOCK();
    pcVar1 = p_Var3 + 0x10;
    *(int *)pcVar1 = *(int *)pcVar1 + 1;
    local_21 = *(int *)pcVar1 != 0;
    UNLOCK();
  }
  if (((byte)p_Var3[0x28] & 1) != 0) {
    return param_1;
  }
  if (*(uint *)(p_Var3 + 0x10) < 2) {
    return param_1;
  }
  uVar5 = QHashData::detach_helper(p_Var3,FUN_100062ac0,0x62b70,0x18);
  if (*(int *)(p_Var3 + 0x10) != -1) {
    if (*(int *)(p_Var3 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var3 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_21 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100061643;
    }
    QHashData::free_helper((_func_void_Node_ptr *)p_Var3);
  }
LAB_100061643:
  *param_1 = uVar5;
  return param_1;
}

