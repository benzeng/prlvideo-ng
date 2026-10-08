
undefined8 * FUN_100d2e490(undefined8 *param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  QDomNodeList local_30 [8];
  
  plVar1 = operator_new(0x30);
  FUN_100d28b30(local_30,param_2 + 0x10);
  *plVar1 = (long)&PTR_FUN_10230f718;
  QDomNodeList::QDomNodeList((QDomNodeList *)(plVar1 + 1),local_30);
  plVar1[2] = param_2 + 0x28;
  *(undefined4 *)(plVar1 + 3) = 0xffffffff;
  plVar1[4] = 0;
  plVar1[5] = (long)FUN_100d28d70;
  puVar2 = operator_new(0x18,(nothrow_t *)PTR_nothrow_1021e1620);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
    (**(code **)(*plVar1 + 8))(plVar1);
  }
  else {
    *(undefined4 *)(puVar2 + 1) = 1;
    puVar2[2] = plVar1;
    *puVar2 = &PTR_FUN_10230f778;
  }
  *param_1 = puVar2;
  QDomNodeList::~QDomNodeList(local_30);
  return param_1;
}

