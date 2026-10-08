
QObject * FUN_10032d8b0(long param_1,undefined8 param_2)

{
  long *plVar1;
  code *pcVar2;
  int iVar3;
  _func_void_Node_ptr_void_ptr *p_Var4;
  _func_void_Node_ptr_void_ptr *p_Var5;
  QObject *pQVar6;
  int *piVar7;
  QObject *pQVar8;
  undefined8 uVar9;
  _func_void_Node_ptr *p_Var10;
  int *local_50;
  QObject *local_48;
  long local_40;
  undefined1 local_31;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    return (QObject *)0x0;
  }
  if (*(int *)(*(long *)(param_1 + 0x10) + 4) == 0) {
    return (QObject *)0x0;
  }
  if (*(long *)(param_1 + 0x18) == 0) {
    return (QObject *)0x0;
  }
  plVar1 = (long *)(param_1 + 0x48);
  p_Var4 = (_func_void_Node_ptr_void_ptr *)FUN_10032de90(plVar1,param_2);
  p_Var5 = *(_func_void_Node_ptr_void_ptr **)(param_1 + 0x48);
  if (*(uint *)(p_Var5 + 0x10) < 2) goto LAB_10032d962;
  p_Var5 = (_func_void_Node_ptr_void_ptr *)
           QHashData::detach_helper(p_Var5,FUN_10032e220,0x32e1b0,0x28);
  p_Var10 = (_func_void_Node_ptr *)*plVar1;
  if (*(int *)(p_Var10 + 0x10) != -1) {
    if (*(int *)(p_Var10 + 0x10) != 0) {
      LOCK();
      pcVar2 = p_Var10 + 0x10;
      *(int *)pcVar2 = *(int *)pcVar2 + -1;
      local_31 = *(int *)pcVar2 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10032d95e;
      p_Var10 = (_func_void_Node_ptr *)*plVar1;
    }
    QHashData::free_helper(p_Var10);
  }
LAB_10032d95e:
  *plVar1 = (long)p_Var5;
LAB_10032d962:
  if ((p_Var5 != p_Var4) && (piVar7 = *(int **)(p_Var4 + 0x18), piVar7 != (int *)0x0)) {
    pQVar6 = *(QObject **)(p_Var4 + 0x20);
    LOCK();
    *piVar7 = *piVar7 + 1;
    UNLOCK();
    pQVar8 = (QObject *)0x0;
    if (piVar7[1] != 0) {
      pQVar8 = pQVar6;
    }
    LOCK();
    *piVar7 = *piVar7 + -1;
    local_31 = *piVar7 != 0;
    UNLOCK();
    if (!(bool)local_31) {
      operator_delete(piVar7);
    }
    if (pQVar8 != (QObject *)0x0) {
      return pQVar8;
    }
  }
  pQVar6 = operator_new(0x28);
  uVar9 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar9 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar9 = *(undefined8 *)(param_1 + 0x18);
  }
  FUN_1003193b0(&local_40,uVar9);
  FUN_10032bd80(pQVar6,&local_40,param_2);
  if (local_40 != 0) {
    _PrlHandle_Free();
  }
  piVar7 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar6);
  local_50 = piVar7;
  local_48 = pQVar6;
  FUN_10032df70(plVar1,param_2,&local_50);
  if (piVar7 != (int *)0x0) {
    LOCK();
    *piVar7 = *piVar7 + -1;
    local_31 = *piVar7 != 0;
    UNLOCK();
    if (!(bool)local_31) {
      operator_delete(piVar7);
    }
  }
  uVar9 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar9 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar9 = *(undefined8 *)(param_1 + 0x18);
  }
  iVar3 = FUN_100319d30(uVar9);
  if (iVar3 == 1) {
    FUN_10032c2a0(pQVar6);
  }
  return pQVar6;
}

