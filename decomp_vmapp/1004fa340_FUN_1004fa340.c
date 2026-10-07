
undefined8 * FUN_1004fa340(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  QArrayData *pQVar3;
  
  puVar1 = operator_new(0x20);
  FUN_100501f90(puVar1,param_2,5);
  *puVar1 = &PTR_FUN_100bc3d60;
  puVar2 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 1) = 1;
    puVar2[2] = puVar1;
    *puVar2 = &PTR_FUN_10111d248;
    goto LAB_1004fa41c;
  }
  *puVar1 = &PTR_FUN_100bc3c10;
  pQVar3 = (QArrayData *)puVar1[2];
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_1004fa3e2;
      pQVar3 = (QArrayData *)puVar1[2];
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_1004fa3e2:
  pQVar3 = (QArrayData *)puVar1[1];
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_1004fa412;
      pQVar3 = (QArrayData *)puVar1[1];
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_1004fa412:
  operator_delete(puVar1);
  puVar2 = (undefined8 *)0x0;
LAB_1004fa41c:
  *param_1 = puVar2;
  return param_1;
}

