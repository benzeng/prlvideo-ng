
void FUN_10007f920(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  void *pvVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  Data *local_60;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  int local_40;
  undefined1 local_31;
  
  uVar2 = FUN_100152280();
  FUN_100154b10(&local_60,uVar2);
  local_58 = local_60;
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 == 0) {
      QListData::detach((int)&local_58);
      lVar5 = (long)*(int *)(local_58 + 8);
      if ((local_60 + (long)*(int *)(local_60 + 8) * 8 != local_58 + lVar5 * 8) &&
         (lVar6 = *(int *)(local_58 + 0xc) - lVar5, lVar6 != 0 && lVar5 <= *(int *)(local_58 + 0xc))
         ) {
        _memcpy(local_58 + lVar5 * 8 + 0x10,local_60 + (long)*(int *)(local_60 + 8) * 8 + 0x10,
                lVar6 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + 1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
    }
  }
  local_50 = local_58 + (long)*(int *)(local_58 + 8) * 8 + 0x10;
  local_48 = local_58 + (long)*(int *)(local_58 + 0xc) * 8 + 0x10;
  local_40 = 1;
  if (*(int *)local_60 == -1) {
LAB_10007fa13:
    for (; local_50 != local_48; local_50 = local_50 + 8) {
      uVar2 = *(undefined8 *)local_50;
      pvVar3 = operator_new(0x18);
      FUN_10008b530(pvVar3,uVar2);
      FUN_10007f510(param_1,pvVar3);
      local_40 = 1;
    }
  }
  else {
    if (*(int *)local_60 == 0) {
LAB_10007f9ed:
      QListData::dispose(local_60);
    }
    else {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if (!(bool)local_31) goto LAB_10007f9ed;
    }
    if (local_40 != 0) goto LAB_10007fa13;
  }
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10007fa73;
    }
    QListData::dispose(local_58);
  }
LAB_10007fa73:
  uVar2 = FUN_100152280();
  uVar2 = FUN_1001554a0(uVar2);
  uVar4 = FUN_100794960();
  iVar1 = FUN_100796670(uVar4,uVar2);
  if (0 < iVar1) {
    iVar7 = 0;
    do {
      uVar4 = FUN_100794960();
      lVar5 = FUN_1007964d0(uVar4,uVar2,iVar7);
      if (lVar5 != 0) {
        pvVar3 = operator_new(0x18);
        FUN_10008b700(pvVar3,lVar5);
        FUN_10007f510(param_1,pvVar3);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar1);
  }
  return;
}

