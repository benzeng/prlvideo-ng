
QObject * FUN_10073fe80(undefined8 *param_1)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  _func_void_Node_ptr_void_ptr *p_Var4;
  _func_void_Node_ptr_void_ptr *p_Var5;
  QObject *this;
  QObject *local_30;
  undefined1 local_22;
  undefined1 local_21;
  
  if ((DAT_1023123e8 == '\0') && (iVar3 = ___cxa_guard_acquire(&DAT_1023123e8), iVar3 != 0)) {
    DAT_1023123e0 = (_func_void_Node_ptr_void_ptr *)PTR_shared_null_1021e15d0;
    ___cxa_atexit(FUN_100744be0,&DAT_1023123e0,0x100000000);
    ___cxa_guard_release(&DAT_1023123e8);
  }
  p_Var4 = (_func_void_Node_ptr_void_ptr *)FUN_100744c20(&DAT_1023123e0);
  local_30 = (QObject *)0x0;
  p_Var5 = DAT_1023123e0;
  if (1 < *(uint *)(DAT_1023123e0 + 0x10)) {
    p_Var5 = (_func_void_Node_ptr_void_ptr *)
             QHashData::detach_helper(DAT_1023123e0,FUN_100745010,0x744fc0,0x20);
    if (*(int *)(DAT_1023123e0 + 0x10) != -1) {
      if (*(int *)(DAT_1023123e0 + 0x10) != 0) {
        LOCK();
        pcVar1 = DAT_1023123e0 + 0x10;
        *(int *)pcVar1 = *(int *)pcVar1 + -1;
        local_21 = *(int *)pcVar1 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10073ff65;
      }
      QHashData::free_helper((_func_void_Node_ptr *)DAT_1023123e0);
    }
  }
LAB_10073ff65:
  DAT_1023123e0 = p_Var5;
  if (DAT_1023123e0 == p_Var4) {
    this = operator_new(0x18);
    QObject::QObject(this,(QObject *)0x0);
    *(undefined ***)this = &PTR_FUN_1022280c0;
    piVar2 = (int *)*param_1;
    *(int **)(this + 0x10) = piVar2;
    if (1 < *piVar2 + 1U) {
      LOCK();
      *piVar2 = *piVar2 + 1;
      local_22 = *piVar2 != 0;
      UNLOCK();
    }
    local_30 = this;
    FUN_100744d00(&DAT_1023123e0,param_1,&local_30);
  }
  else {
    this = *(QObject **)(p_Var4 + 0x18);
  }
  return this;
}

