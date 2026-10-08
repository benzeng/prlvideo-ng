
undefined8 * FUN_100d2d7e0(undefined8 *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  QDomNodeList local_30 [8];
  
  plVar1 = operator_new(0x30);
  FUN_100d25c40(local_30,param_2 + 0x10);
  plVar4 = (long *)0x0;
  if (*(long *)(param_2 + 8) != 0) {
    plVar4 = *(long **)(*(long *)(param_2 + 8) + 0x10);
  }
  lVar2 = (**(code **)(*plVar4 + 0x10))();
  *plVar1 = (long)&PTR_FUN_10230f718;
  QDomNodeList::QDomNodeList((QDomNodeList *)(plVar1 + 1),local_30);
  plVar1[2] = lVar2;
  *(undefined4 *)(plVar1 + 3) = 0xffffffff;
  plVar1[4] = 0;
  plVar1[5] = (long)FUN_100d267d0;
  puVar3 = operator_new(0x18,(nothrow_t *)PTR_nothrow_1021e1620);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
    (**(code **)(*plVar1 + 8))(plVar1);
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    puVar3[2] = plVar1;
    *puVar3 = &PTR_FUN_10230f778;
  }
  *param_1 = puVar3;
  QDomNodeList::~QDomNodeList(local_30);
  return param_1;
}

