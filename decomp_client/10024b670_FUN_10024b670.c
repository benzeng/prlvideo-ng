
void FUN_10024b670(long *param_1,int param_2)

{
  int iVar1;
  long lVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  lVar2 = QObject::sender();
  if (lVar2 != 0) {
    lVar2 = ___dynamic_cast(lVar2,PTR_typeinfo_1021e1720,PTR_typeinfo_1021e1640,0);
    if ((-1 < param_2) && (lVar2 != 0)) {
      iVar1 = (**(code **)(*param_1 + 0x118))(param_1);
      if (iVar1 != 0) {
        return;
      }
      UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xb0);
      param_2 = 0;
      goto LAB_10024b6ce;
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xb0);
LAB_10024b6ce:
                    /* WARNING: Could not recover jumptable at 0x00010024b6d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
  return;
}

