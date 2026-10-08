
long FUN_1004dcaa0(long param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  QArrayData *local_40;
  undefined1 local_32;
  
  uVar2 = FUN_1003b0ad0(*(undefined8 *)(param_1 + 0x40));
  lVar3 = FUN_1003e5be0(uVar2,param_2,param_3);
  if (lVar3 == 0) {
    return 0;
  }
  lVar4 = FUN_1004dcc10(param_1,param_2,param_3);
  cVar1 = FUN_1003a4e60(lVar3,2);
  if (cVar1 != '\0') {
    return lVar4;
  }
  lVar3 = FUN_1004dcc10(param_1,0x1d,0);
  if (lVar3 == 0) {
    return 0;
  }
  lVar5 = ___dynamic_cast(lVar3,&PTR_vtable_102213140,&PTR_vtable_102216700,0);
  if (lVar5 == 0) {
    return 0;
  }
  QMetaObject::tr((char *)&local_40,PTR_staticMetaObject_1021e1520,0x1df8f9b);
  FUN_1004b2a70(lVar5,&local_40);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_32 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_32) goto LAB_1004dcba8;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1004dcba8:
  FUN_1004b2990(lVar5,lVar4);
  return lVar3;
}

