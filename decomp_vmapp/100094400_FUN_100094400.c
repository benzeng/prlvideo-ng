
undefined8 FUN_100094400(long param_1,int *param_2)

{
  code *pcVar1;
  char *pcVar2;
  int iVar3;
  long *plVar4;
  size_t sVar5;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  if (param_1 == 0) {
    return 0;
  }
  plVar4 = (long *)___dynamic_cast(param_1,&PTR_vtable_100baea70,&PTR_vtable_100bef130,
                                   0xfffffffffffffffe);
  if (plVar4 == (long *)0x0) {
    return 0;
  }
  plVar4 = (long *)(**(code **)(*plVar4 + 0x10))(plVar4);
  if (plVar4 == (long *)0x0) {
    return 0;
  }
  (**(code **)(*plVar4 + 0x170))(&local_40,plVar4);
  QString::toUtf8();
  FUN_1008e3970("","vm",0,"SetCompatibilityLevel: processing disk %s ...",
                local_38 + *(long *)(local_38 + 0x10));
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000944c8;
    }
    QArrayData::deallocate(local_38,1,8);
  }
LAB_1000944c8:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000944f8;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1000944f8:
  pcVar1 = *(code **)(*plVar4 + 0x138);
  local_48 = (QArrayData *)QString::fromAscii_helper("CompatLevel",0xb);
  pcVar2 = *(char **)(param_2 + 2);
  iVar3 = -1;
  if (pcVar2 != (char *)0x0) {
    sVar5 = _strlen(pcVar2);
    iVar3 = (int)sVar5;
  }
  local_50 = (QArrayData *)QString::fromAscii_helper(pcVar2,iVar3);
  iVar3 = (*pcVar1)(plVar4,&local_48,&local_50);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10009457c;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10009457c:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) goto LAB_1000945ac;
      local_29 = 0;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1000945ac:
  if (-1 < iVar3) {
    *param_2 = *param_2 + 1;
  }
  return 0;
}

