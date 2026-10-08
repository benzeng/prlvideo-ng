
undefined1 FUN_1000f5660(long param_1,long param_2)

{
  code *pcVar1;
  long *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  _func_void_Node_ptr_void_ptr *p_Var6;
  _func_void_Node_ptr_void_ptr *p_Var7;
  void *pvVar8;
  long *plVar9;
  undefined1 uVar10;
  undefined8 uVar11;
  _func_void_Node_ptr *p_Var12;
  long lVar13;
  QArrayData *local_f0;
  undefined1 local_e8 [48];
  long local_b8;
  long *local_58;
  QArrayData *local_50;
  QString local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  local_40 = (QArrayData *)PTR_shared_null_1021e1288;
  local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  local_50 = (QArrayData *)PTR_shared_null_1021e1288;
  FUN_1000f5210(param_1,param_2,&local_40,&local_48,&local_50);
  uVar11 = 0;
  if (*(long *)(param_1 + 0x40) != 0) {
    uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x40) + 0x10);
  }
  p_Var6 = (_func_void_Node_ptr_void_ptr *)FUN_1000f76b0(uVar11,&local_48);
  plVar9 = (long *)0x0;
  if (*(long *)(param_1 + 0x40) != 0) {
    plVar9 = *(long **)(*(long *)(param_1 + 0x40) + 0x10);
  }
  p_Var7 = (_func_void_Node_ptr_void_ptr *)*plVar9;
  if (1 < *(uint *)(p_Var7 + 0x10)) {
    p_Var7 = (_func_void_Node_ptr_void_ptr *)
             QHashData::detach_helper(p_Var7,FUN_1000f81e0,0xf8050,0x20);
    p_Var12 = (_func_void_Node_ptr *)*plVar9;
    if (*(int *)(p_Var12 + 0x10) != -1) {
      if (*(int *)(p_Var12 + 0x10) != 0) {
        LOCK();
        pcVar1 = p_Var12 + 0x10;
        *(int *)pcVar1 = *(int *)pcVar1 + -1;
        local_31 = *(int *)pcVar1 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000f5728;
        p_Var12 = (_func_void_Node_ptr *)*plVar9;
      }
      QHashData::free_helper(p_Var12);
    }
LAB_1000f5728:
    *plVar9 = (long)p_Var7;
  }
  if (p_Var6 == p_Var7) {
    cVar4 = QFile::exists(&local_48);
    uVar10 = 1;
    if (cVar4 != '\0') {
      pvVar8 = operator_new(0x60);
      FUN_1000e6090(pvVar8);
      plVar9 = operator_new(0x18,(nothrow_t *)PTR_nothrow_1021e1620);
      if (plVar9 == (long *)0x0) {
        FUN_1000e6210(pvVar8);
        operator_delete(pvVar8);
        plVar9 = (long *)0x0;
      }
      else {
        *(undefined4 *)(plVar9 + 1) = 1;
        plVar9[2] = (long)pvVar8;
        *plVar9 = (long)&PTR_FUN_10226d4b8;
      }
      local_58 = plVar9;
      cVar4 = FUN_1000f25e0(&local_48,&local_58);
      if (cVar4 == '\0') {
        bVar3 = false;
        if (plVar9 == (long *)0x0) goto LAB_1000f577e;
      }
      else {
        *(undefined8 *)(plVar9[2] + 0x40) = 0;
        QString::toUtf8();
        iVar5 = _stat_INODE64(local_f0 + *(long *)(local_f0 + 0x10),local_e8);
        if (*(int *)local_f0 != -1) {
          if (*(int *)local_f0 != 0) {
            LOCK();
            *(int *)local_f0 = *(int *)local_f0 + -1;
            local_31 = *(int *)local_f0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1000f587a;
          }
          QArrayData::deallocate(local_f0,1,8);
        }
LAB_1000f587a:
        if (iVar5 == 0) {
          lVar13 = plVar9[2];
          *(long *)(lVar13 + 0x40) = local_b8;
        }
        else {
          lVar13 = plVar9[2];
          local_b8 = *(long *)(lVar13 + 0x40);
        }
        if ((local_b8 == *(long *)(param_2 + 0x40)) &&
           (cVar4 = operator==((QString *)(lVar13 + 0x10),(QString *)(param_2 + 0x10)),
           cVar4 != '\0')) {
          uVar11 = 0;
          if (*(long *)(param_1 + 0x40) != 0) {
            uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x40) + 0x10);
          }
          FUN_1000f7490(uVar11,&local_48,&local_58);
          bVar3 = true;
        }
        else {
          bVar3 = false;
        }
      }
      LOCK();
      plVar2 = plVar9 + 1;
      lVar13 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
      if (!bVar3) goto LAB_1000f577e;
      uVar10 = 0;
    }
  }
  else {
    lVar13 = *(long *)(*(long *)(p_Var6 + 0x18) + 0x10);
    if (*(long *)(lVar13 + 0x40) == *(long *)(param_2 + 0x40)) {
      if (*(long *)(p_Var6 + 0x18) == 0) {
        lVar13 = 0;
      }
      cVar4 = operator==((QString *)(lVar13 + 0x10),(QString *)(param_2 + 0x10));
      if (cVar4 != '\0') {
        uVar10 = 0;
        goto LAB_1000f5909;
      }
    }
    uVar11 = 0;
    if (*(long *)(param_1 + 0x40) != 0) {
      uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x40) + 0x10);
    }
    FUN_1000f7790(uVar11,&local_48);
LAB_1000f577e:
    uVar10 = 1;
    QFile::remove(&local_48);
  }
LAB_1000f5909:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000f5939;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1000f5939:
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_31 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000f5969;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_1000f5969:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return uVar10;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
  return uVar10;
}

