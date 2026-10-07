
undefined8 * FUN_1004fa550(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  QArrayData *pQVar4;
  
  puVar2 = operator_new(0x28);
  FUN_100501f90(puVar2,param_2,6);
  *puVar2 = &PTR_FUN_100bc3ed8;
  pQVar4 = (QArrayData *)PTR_shared_null_100ba20d0;
  puVar2[4] = PTR_shared_null_100ba20d0;
  *(undefined1 *)(puVar2 + 3) = 1;
  puVar3 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
  if (puVar3 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar3 + 1) = 1;
    puVar3[2] = puVar2;
    *puVar3 = &PTR_FUN_10111d248;
    goto LAB_1004fa688;
  }
  *puVar2 = &PTR_FUN_100bc3ed8;
  puVar1 = PTR_shared_null_100ba20d0;
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)PTR_shared_null_100ba20d0 = *(int *)PTR_shared_null_100ba20d0 + -1;
      UNLOCK();
      if (*(int *)puVar1 != 0) goto LAB_1004fa60b;
      pQVar4 = (QArrayData *)puVar2[4];
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_1004fa60b:
  *puVar2 = &PTR_FUN_100bc3c10;
  pQVar4 = (QArrayData *)puVar2[2];
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) goto LAB_1004fa64c;
      pQVar4 = (QArrayData *)puVar2[2];
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_1004fa64c:
  pQVar4 = (QArrayData *)puVar2[1];
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) goto LAB_1004fa67e;
      pQVar4 = (QArrayData *)puVar2[1];
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_1004fa67e:
  operator_delete(puVar2);
  puVar3 = (undefined8 *)0x0;
LAB_1004fa688:
  *param_1 = puVar3;
  return param_1;
}

