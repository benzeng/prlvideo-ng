
void FUN_1002ed660(long *param_1,long *param_2)

{
  long lVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  
  FUN_1002eb2b0();
  lVar1 = param_1[5];
  FUN_100060bb0();
  lVar4 = 0;
  if ((*param_2 != 0) && (lVar4 = 0, *(int *)(*param_2 + 4) != 0)) {
    lVar4 = param_2[1];
  }
  iVar3 = FUN_100060e10(lVar4);
  if ((int)lVar1 == iVar3) {
    FUN_100060bb0();
    lVar4 = 0;
    if ((*param_2 != 0) && (lVar4 = 0, *(int *)(*param_2 + 4) != 0)) {
      lVar4 = param_2[1];
    }
    cVar2 = FUN_100061770(lVar4,param_1 + 6);
    if (cVar2 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001002ed6df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xb0))(param_1,0);
      return;
    }
  }
  return;
}

