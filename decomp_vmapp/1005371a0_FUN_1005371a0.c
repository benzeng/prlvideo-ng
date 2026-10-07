
void FUN_1005371a0(undefined8 *param_1,long *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  long lVar2;
  bool bVar3;
  
  UNRECOVERED_JUMPTABLE = (code *)*param_1;
  uVar1 = param_1[1];
  if (param_1 != (undefined8 *)0x0) {
    operator_delete(param_1);
  }
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
    bVar3 = true;
    if ((*param_2 != 0) && (lVar2 = *(long *)(*param_2 + 0x10), lVar2 != 0)) {
      bVar3 = *(int *)(lVar2 + 4) == -1;
    }
                    /* WARNING: Could not recover jumptable at 0x0001005371f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(uVar1,bVar3);
    return;
  }
  return;
}

