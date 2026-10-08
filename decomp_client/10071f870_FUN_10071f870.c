
undefined8 FUN_10071f870(long param_1)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  QArrayData **ppQVar7;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  puVar1 = PTR_shared_null_1021e1288;
  local_30 = (QArrayData *)PTR_shared_null_1021e1288;
  uVar3 = FUN_100152280();
  if (*(int *)(puVar1 + 4) == 0) {
    ppQVar7 = (QArrayData **)(param_1 + 0x18);
  }
  else {
    ppQVar7 = &local_30;
  }
  lVar4 = FUN_1001548f0(uVar3,ppQVar7);
  lVar5 = 0;
  if (lVar4 != 0) {
    lVar5 = FUN_10018c280(lVar4);
  }
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10071f8eb;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10071f8eb:
  if (lVar5 == 0) {
    return 0;
  }
  local_38 = (QArrayData *)puVar1;
  cVar2 = FUN_10071c5d0(param_1,&local_38);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10071f933;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10071f933:
  if (cVar2 == '\0') {
    uVar3 = FUN_100319d40(lVar5);
    uVar3 = FUN_10035c0d0(uVar3,0);
  }
  else {
    uVar3 = FUN_100319c50();
    plVar6 = (long *)FUN_100332980(uVar3);
    uVar3 = (**(code **)(*plVar6 + 0x80))(plVar6);
  }
  return uVar3;
}

