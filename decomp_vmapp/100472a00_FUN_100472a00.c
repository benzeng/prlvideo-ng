
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100472a00(QObject *param_1)

{
  int iVar1;
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_100bc1c40;
  if (DAT_1011bbfa0 == '\0') {
    iVar1 = ___cxa_guard_acquire(&DAT_1011bbfa0);
    if (iVar1 != 0) {
      _DAT_1011bbf98 = FUN_100472c20("TIS_TOOL_INFO",0,0);
      ___cxa_guard_release(&DAT_1011bbfa0);
    }
  }
  if (DAT_1011bbfb0 == '\0') {
    iVar1 = ___cxa_guard_acquire(&DAT_1011bbfb0);
    if (iVar1 != 0) {
      _DAT_1011bbfa8 = FUN_100470680("CTISBase::Record",0,0);
      ___cxa_guard_release(&DAT_1011bbfb0);
    }
  }
  if (DAT_1011bbfc0 == '\0') {
    iVar1 = ___cxa_guard_acquire(&DAT_1011bbfc0);
    if (iVar1 != 0) {
      _DAT_1011bbfb8 = FUN_100470750("CTISBase::RecordFields",0,0);
      ___cxa_guard_release(&DAT_1011bbfc0);
      return;
    }
  }
  return;
}

