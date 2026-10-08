
QListData * FUN_100d4d070(QListData *param_1,long *param_2)

{
  Data *pDVar1;
  Data *pDVar2;
  Data *in_RAX;
  undefined8 uVar3;
  QListData local_28;
  
  pDVar1 = (Data *)*param_2;
  if (*(uint *)(pDVar1 + 0xc) != *(uint *)(pDVar1 + 8)) {
    pDVar2 = param_1->field0_0x0;
    if (*(uint *)(pDVar2 + 0xc) == *(uint *)(pDVar2 + 8)) {
      if (pDVar2 != pDVar1) {
        local_28.field0_0x0 = in_RAX;
        FUN_10014a970(&local_28,param_2);
        pDVar1 = param_1->field0_0x0;
        param_1->field0_0x0 = local_28.field0_0x0;
        local_28.field0_0x0 = pDVar1;
        FUN_10014a540(&local_28);
      }
    }
    else {
      if (*(uint *)pDVar2 < 2) {
        uVar3 = QListData::append(param_1);
      }
      else {
        uVar3 = FUN_10014a6a0(param_1,0x7fffffff);
      }
      FUN_10014a880(param_1,uVar3,
                    param_1->field0_0x0 + (long)*(int *)(param_1->field0_0x0 + 0xc) * 8 + 0x10,
                    *param_2 + 0x10 + (long)*(int *)(*param_2 + 8) * 8);
    }
  }
  return param_1;
}

