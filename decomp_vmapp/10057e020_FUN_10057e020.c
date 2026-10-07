
long * FUN_10057e020(long param_1,uint param_2,long *param_3,undefined4 *param_4)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  int iVar4;
  
  plVar1 = operator_new(0x28,(nothrow_t *)PTR_nothrow_100ba21c8);
  if (plVar1 == (long *)0x0) {
    *param_4 = 0x80000002;
  }
  else {
    FUN_1007d6870(plVar1 + 3);
    uVar3 = 0x80000003;
    if ((param_2 != 0) && ((param_2 & param_2 - 1) == 0)) {
      iVar4 = 0;
      if (param_2 != 0) {
        for (; (param_2 >> iVar4 & 1) == 0; iVar4 = iVar4 + 1) {
        }
      }
      if (param_2 == 0) {
        iVar4 = -1;
      }
      *(int *)(plVar1 + 1) = iVar4;
      plVar1[2] = param_1;
      lVar2 = *param_3;
      plVar1[4] = param_3[1];
      plVar1[3] = lVar2;
      lVar2 = FUN_1007dad70(param_1 + -1 + (ulong)param_2 >> ((byte)iVar4 & 0x3f));
      *plVar1 = lVar2;
      uVar3 = 0x80000002;
      if (lVar2 != 0) {
        *param_4 = 0;
        return plVar1;
      }
    }
    *param_4 = uVar3;
    FUN_1007dade0(*plVar1);
    operator_delete(plVar1);
  }
  return (long *)0x0;
}

