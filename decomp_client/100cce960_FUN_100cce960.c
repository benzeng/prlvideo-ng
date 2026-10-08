
bool FUN_100cce960(undefined8 param_1)

{
  long *plVar1;
  QArrayData *pQVar2;
  long lVar3;
  int iVar4;
  QArrayData *pQVar5;
  QArrayData **ppQVar6;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  long *local_30;
  undefined1 local_21;
  
  local_38 = (QArrayData *)QString::fromAscii_helper("System",6);
  local_40 = (QArrayData *)QString::fromAscii_helper("Parallels VM Name",0x11);
  pQVar5 = (QArrayData *)QString::fromAscii_helper("61E62DFC-6EF6-4129-9E3C-FD1E4E201B7A",0x24);
  local_48 = pQVar5;
  FUN_100ccd530(&local_30,param_1,&local_38,&local_40);
  if (local_30 == (long *)0x0) {
    ppQVar6 = &local_48;
  }
  else {
    ppQVar6 = &local_48;
    if (local_30[2] != 0) {
      ppQVar6 = (QArrayData **)(local_30[2] + 8);
    }
  }
  pQVar2 = *ppQVar6;
  if (1 < *(int *)pQVar2 + 1U) {
    LOCK();
    *(int *)pQVar2 = *(int *)pQVar2 + 1;
    local_21 = *(int *)pQVar2 != 0;
    UNLOCK();
  }
  if (local_30 != (long *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)(*local_30 + 0x10))();
    }
  }
  iVar4 = QString::compare_helper
                    (pQVar2 + *(long *)(pQVar2 + 0x10),*(undefined4 *)(pQVar2 + 4),
                     "61E62DFC-6EF6-4129-9E3C-FD1E4E201B7A",0xffffffff,1);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_21 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100ccea68;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_100ccea68:
  if (*(int *)pQVar5 != -1) {
    if (*(int *)pQVar5 != 0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      local_21 = *(int *)pQVar5 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100ccea95;
    }
    QArrayData::deallocate(pQVar5,2,8);
  }
LAB_100ccea95:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100cceac5;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100cceac5:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) goto LAB_100cceaf5;
      local_21 = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100cceaf5:
  return iVar4 != 0;
}

