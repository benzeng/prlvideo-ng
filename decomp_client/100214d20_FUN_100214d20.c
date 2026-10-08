
void FUN_100214d20(long *param_1,int param_2)

{
  long *plVar1;
  long in_RAX;
  long lVar2;
  long *plVar3;
  code *UNRECOVERED_JUMPTABLE;
  long local_38;
  
  local_38 = in_RAX;
  if (-1 < param_2) {
    QObject::sender();
    lVar2 = QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e12a0);
    if (lVar2 == 0) {
      FUN_100df99c0("","prl_client_app",0,
                    "(!)Error: can\'t get sender request to update suspended screen");
      UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xb0);
      param_2 = -0x7ffffff7;
      goto LAB_100214df9;
    }
    plVar3 = operator_new(0x38);
    lVar2 = *(long *)(lVar2 + 0x10);
    local_38 = lVar2;
    if (lVar2 != 0) {
      _PrlHandle_AddRef(lVar2);
    }
    FUN_100214590(plVar3,&local_38,param_1);
    plVar1 = (long *)param_1[5];
    if ((plVar1 != plVar3) && (param_1[5] = (long)plVar3, plVar1 != (long *)0x0)) {
      (**(code **)(*plVar1 + 0x20))();
    }
    if (lVar2 != 0) {
      _PrlHandle_Free(lVar2);
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xb0);
LAB_100214df9:
                    /* WARNING: Could not recover jumptable at 0x000100214e07. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
  return;
}

