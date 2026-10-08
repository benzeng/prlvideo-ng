
undefined8 FUN_10071fac0(long param_1,char param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  QArrayData **ppQVar5;
  QArrayData *local_30;
  undefined1 local_22;
  
  puVar1 = PTR_shared_null_1021e1288;
  local_30 = (QArrayData *)PTR_shared_null_1021e1288;
  uVar2 = FUN_100152280();
  if (*(int *)(puVar1 + 4) == 0) {
    ppQVar5 = (QArrayData **)(param_1 + 0x18);
  }
  else {
    ppQVar5 = &local_30;
  }
  lVar3 = FUN_1001548f0(uVar2,ppQVar5);
  lVar4 = 0;
  if (lVar3 != 0) {
    lVar4 = FUN_10018c280(lVar3);
  }
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_22 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_22) goto LAB_10071fb41;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10071fb41:
  uVar2 = 0;
  if (lVar4 != 0) {
    if (param_2 == '\0') {
      uVar2 = FUN_100319d40(lVar4);
      uVar2 = FUN_10035c050(uVar2);
    }
    else {
      uVar2 = FUN_100319c50();
      uVar2 = FUN_100332980(uVar2);
    }
  }
  return uVar2;
}

