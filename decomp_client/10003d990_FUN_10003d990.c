
void FUN_10003d990(long param_1,undefined8 param_2)

{
  long *plVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  _func_void_Node_ptr_void_ptr *p_Var5;
  _func_void_Node_ptr_void_ptr *p_Var6;
  _func_void_Node_ptr *p_Var7;
  QArrayData *pQVar8;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  if (1 < DAT_10230ffd0) {
    QString::toUtf8();
    FUN_100df99c0("SGA_SERVER","prl_client_app",2,"Client with handle \"%s\" is disconnected",
                  local_40 + *(long *)(local_40 + 0x10));
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10003da18;
      }
      QArrayData::deallocate(local_40,1,8);
    }
  }
LAB_10003da18:
  plVar1 = (long *)(param_1 + 0x10);
  p_Var5 = (_func_void_Node_ptr_void_ptr *)FUN_10003ebe0(plVar1,param_2);
  p_Var6 = *(_func_void_Node_ptr_void_ptr **)(param_1 + 0x10);
  if (1 < *(uint *)(p_Var6 + 0x10)) {
    p_Var6 = (_func_void_Node_ptr_void_ptr *)
             QHashData::detach_helper(p_Var6,FUN_10003f440,0x3f3a0,0x20);
    p_Var7 = (_func_void_Node_ptr *)*plVar1;
    if (*(int *)(p_Var7 + 0x10) != -1) {
      if (*(int *)(p_Var7 + 0x10) != 0) {
        LOCK();
        pcVar2 = p_Var7 + 0x10;
        *(int *)pcVar2 = *(int *)pcVar2 + -1;
        local_31 = *(int *)pcVar2 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10003da87;
        p_Var7 = (_func_void_Node_ptr *)*plVar1;
      }
      QHashData::free_helper(p_Var7);
    }
LAB_10003da87:
    *plVar1 = (long)p_Var6;
  }
  if (p_Var6 == p_Var5) {
    return;
  }
  puVar3 = *(undefined8 **)(p_Var5 + 0x18);
  FUN_10003ecc0(plVar1,p_Var5);
  uVar4 = *puVar3;
  local_48 = (QArrayData *)puVar3[1];
  if (1 < *(int *)local_48 + 1U) {
    LOCK();
    *(int *)local_48 = *(int *)local_48 + 1;
    local_31 = *(int *)local_48 != 0;
    UNLOCK();
  }
  FUN_1007f7230(param_1,uVar4,&local_48);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10003dafc;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10003dafc:
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
  pQVar8 = (QArrayData *)puVar3[1];
  if (*(int *)pQVar8 != -1) {
    if (*(int *)pQVar8 != 0) {
      LOCK();
      *(int *)pQVar8 = *(int *)pQVar8 + -1;
      local_31 = *(int *)pQVar8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10003db31;
      pQVar8 = (QArrayData *)puVar3[1];
    }
    QArrayData::deallocate(pQVar8,2,8);
  }
LAB_10003db31:
  operator_delete(puVar3);
  return;
}

