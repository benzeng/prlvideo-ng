
void FUN_10073cc00(QObject *param_1)

{
  code *pcVar1;
  QObject *pQVar2;
  _func_void_Node_ptr *p_Var3;
  
  *(undefined ***)param_1 = &PTR_FUN_102227f40;
  if (DAT_1023108e0 == (QObject *)0x0) {
    pQVar2 = operator_new(0x18);
    FUN_1001a61d0(pQVar2);
    DAT_10226c110 = 1;
    DAT_1023108e0 = pQVar2;
  }
  QObject::disconnect(DAT_1023108e0,
                      "2vmConfigurationChanged(const GUI::VmId &, const CVmConfiguration &)",param_1
                      ,"1onVmConfigurationChanged(const GUI::VmId &, const CVmConfiguration &)");
  if (DAT_1023108e0 == (QObject *)0x0) {
    pQVar2 = operator_new(0x18);
    FUN_1001a61d0(pQVar2);
    DAT_10226c110 = 1;
    DAT_1023108e0 = pQVar2;
  }
  QObject::disconnect(DAT_1023108e0,"2vmDesktopIOStateChanged(const GUI::VmId &, PRL_IO_STATE)",
                      param_1,"1onVmDesktopIOStateChanged(const GUI::VmId &, PRL_IO_STATE)");
  if (DAT_1023108e0 == (QObject *)0x0) {
    pQVar2 = operator_new(0x18);
    FUN_1001a61d0(pQVar2);
    DAT_10226c110 = 1;
    DAT_1023108e0 = pQVar2;
  }
  QObject::disconnect(DAT_1023108e0,"2beforeVmRemoved(const GUI::VmId &)",param_1,
                      "1onBeforeVmRemoved(const GUI::VmId &)");
  p_Var3 = *(_func_void_Node_ptr **)(param_1 + 0x10);
  if (*(int *)(p_Var3 + 0x10) != -1) {
    if (*(int *)(p_Var3 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var3 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_10073cd11;
      p_Var3 = *(_func_void_Node_ptr **)(param_1 + 0x10);
    }
    QHashData::free_helper(p_Var3);
  }
LAB_10073cd11:
  QObject::~QObject(param_1);
  return;
}

