
void FUN_10010bb70(QObject *param_1)

{
  code *pcVar1;
  int *piVar2;
  _func_void_Node_ptr *p_Var3;
  
  *(undefined ***)param_1 = &PTR_FUN_100baa810;
  QObject::disconnect(*(QObject **)(*(long *)(DAT_1011c3698 + 0xf0) + 0x10),
                      "2onPackageReceived(IOSender::Handle, const SmartPtr<IOPackage>)",param_1,
                      "1onPackageReceived(IOSender::Handle, const SmartPtr<IOPackage>)");
  QObject::disconnect(*(QObject **)(DAT_1011c3698 + 0xf0),
                      "2sigClientDetached(const IOService::ClientDesc)",param_1,
                      "1onClientDetached(const IOService::ClientDesc)");
  QObject::disconnect(*(QObject **)(DAT_1011c3698 + 0xf0),
                      "2sigClientAttached(const IOService::ClientDesc)",param_1,
                      "1onClientAttached(const IOService::ClientDesc)");
  piVar2 = *(int **)(param_1 + 0x18);
  if (*piVar2 != -1) {
    if (*piVar2 != 0) {
      LOCK();
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 != 0) goto LAB_10010bc20;
      piVar2 = *(int **)(param_1 + 0x18);
    }
    FUN_10010d220(param_1 + 0x18,piVar2);
  }
LAB_10010bc20:
  p_Var3 = *(_func_void_Node_ptr **)(param_1 + 0x10);
  if (*(int *)(p_Var3 + 0x10) != -1) {
    if (*(int *)(p_Var3 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var3 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_10010bc4f;
      p_Var3 = *(_func_void_Node_ptr **)(param_1 + 0x10);
    }
    QHashData::free_helper(p_Var3);
  }
LAB_10010bc4f:
  QObject::~QObject(param_1);
  return;
}

