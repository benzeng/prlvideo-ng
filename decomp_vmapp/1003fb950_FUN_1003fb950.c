
undefined8 FUN_1003fb950(long param_1,QString *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  long *plVar4;
  long lVar5;
  QString local_30;
  undefined1 local_22;
  
  if (param_1 == 0) {
    return 0;
  }
  plVar4 = (long *)___dynamic_cast(param_1,&PTR_vtable_100baea70,&PTR_vtable_100bef130,
                                   0xfffffffffffffffe);
  if (param_2 == (QString *)0x0) {
    return 0;
  }
  if (plVar4 == (long *)0x0) {
    return 0;
  }
  plVar4 = (long *)(**(code **)(*plVar4 + 0x10))(plVar4);
  if (plVar4 == (long *)0x0) {
    return 0;
  }
  if (*(int *)(param_2->field0_0x0 + 4) == 0) {
    lVar5 = *plVar4;
    uVar1 = *(undefined4 *)&param_2[2].field0_0x0;
    uVar2 = *(undefined4 *)((long)&param_2[2].field0_0x0 + 4);
    goto LAB_1003fba25;
  }
  (**(code **)(*plVar4 + 0x178))(&local_30,plVar4);
  cVar3 = operator==(&local_30,param_2);
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      local_22 = *(int *)local_30.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_22) goto LAB_1003fba04;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
LAB_1003fba04:
  if (cVar3 == '\0') {
    return 0;
  }
  lVar5 = *plVar4;
  uVar1 = *(undefined4 *)&param_2[2].field0_0x0;
  uVar2 = *(undefined4 *)((long)&param_2[2].field0_0x0 + 4);
LAB_1003fba25:
  (**(code **)(lVar5 + 0x2a0))(plVar4,param_2 + 1,uVar2,uVar1);
  return 0;
}

