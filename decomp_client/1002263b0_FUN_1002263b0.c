
void FUN_1002263b0(long *param_1,int param_2)

{
  int iVar1;
  long lVar2;
  Connection local_20 [8];
  
  if ((((-1 < param_2) && (param_1[3] != 0)) && (*(int *)(param_1[3] + 4) != 0)) &&
     (param_1[4] != 0)) {
    iVar1 = FUN_100319ae0();
    if (iVar1 == 0) {
      lVar2 = 0;
      if ((param_1[3] != 0) && (lVar2 = 0, *(int *)(param_1[3] + 4) != 0)) {
        lVar2 = param_1[4];
      }
      QObject::connect(local_20,lVar2,
                       "2vmPrimaryDisplayViewModeChanged(const QString&, GUI::VmDisplayViewMode, GUI::VmDisplayViewMode)"
                       ,param_1,
                       "1onPrimaryDisplayViewModeChanged(const QString&, GUI::VmDisplayViewMode, GUI::VmDisplayViewMode)"
                       ,0);
      QMetaObject::Connection::~Connection(local_20);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001002263fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb0))(param_1,param_2);
  return;
}

