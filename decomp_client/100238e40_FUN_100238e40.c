
void FUN_100238e40(long *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  code *UNRECOVERED_JUMPTABLE;
  Connection local_28 [8];
  
  if (param_2 < 0) {
LAB_100238eeb:
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xb0);
  }
  else {
    if (((param_1[3] != 0) && (*(int *)(param_1[3] + 4) != 0)) && (param_1[4] != 0)) {
      lVar3 = FUN_100319390();
      if (lVar3 != 0) {
        if ((*(uint *)((long)param_1 + 0x5c) | 4) == 4) {
          iVar2 = FUN_10018a9d0(lVar3);
          if (iVar2 != 0x30000001) {
            cVar1 = FUN_1002383c0(param_1);
            if (cVar1 != '\0') {
              QObject::connect(local_28,lVar3,
                               "2vmStateChanged ( VIRTUAL_MACHINE_STATE , VIRTUAL_MACHINE_STATE )",
                               param_1,
                               "1onVmWithUndoStateChanged( VIRTUAL_MACHINE_STATE, VIRTUAL_MACHINE_STATE)"
                               ,0);
              QMetaObject::Connection::~Connection(local_28);
              return;
            }
          }
        }
        goto LAB_100238eeb;
      }
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xb0);
    param_2 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000100238f05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
  return;
}

