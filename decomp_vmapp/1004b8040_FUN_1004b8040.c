
void FUN_1004b8040(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  int iVar3;
  
  if (*(int *)(*param_1 + 8) < *(int *)(*param_1 + 0xc)) {
    iVar3 = 0;
    do {
      lVar1 = param_1[1];
      puVar2 = (undefined8 *)FUN_1004ba430(param_1,iVar3);
      FUN_1002ade20(lVar1,*puVar2);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(*param_1 + 0xc) - *(int *)(*param_1 + 8));
  }
  FUN_1004ba4e0(param_1);
  return;
}

