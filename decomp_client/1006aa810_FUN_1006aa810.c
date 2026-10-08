
bool FUN_1006aa810(void)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  Data *local_48;
  Data *local_40;
  Data *local_38;
  undefined4 local_30;
  Data *local_28;
  undefined1 local_19;
  
  uVar3 = FUN_100152280();
  FUN_100154b10(&local_28,uVar3);
  local_48 = local_28;
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 == 0) {
      QListData::detach((int)&local_48);
      lVar5 = (long)*(int *)(local_48 + 8);
      if ((local_28 + (long)*(int *)(local_28 + 8) * 8 != local_48 + lVar5 * 8) &&
         (lVar6 = *(int *)(local_48 + 0xc) - lVar5, lVar6 != 0 && lVar5 <= *(int *)(local_48 + 0xc))
         ) {
        _memcpy(local_48 + lVar5 * 8 + 0x10,local_28 + (long)*(int *)(local_28 + 8) * 8 + 0x10,
                lVar6 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + 1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
    }
  }
  local_40 = local_48 + (long)*(int *)(local_48 + 8) * 8 + 0x10;
  local_38 = local_48 + (long)*(int *)(local_48 + 0xc) * 8 + 0x10;
  iVar7 = 0;
  if (*(int *)(local_48 + 8) != *(int *)(local_48 + 0xc)) {
    iVar7 = 0;
    do {
      local_30 = 1;
      bVar1 = FUN_10018c1f0(*(undefined8 *)local_40,1);
      iVar7 = (bVar1 ^ 1) + iVar7;
      local_40 = local_40 + 8;
    } while (local_40 != local_38);
  }
  local_30 = 1;
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_19 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1006aa918;
    }
    QListData::dispose(local_48);
  }
LAB_1006aa918:
  uVar3 = FUN_100794960();
  uVar4 = FUN_100152280();
  uVar4 = FUN_1001554a0(uVar4);
  iVar2 = FUN_100796670(uVar3,uVar4);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) goto LAB_1006aa964;
      local_19 = 0;
    }
    QListData::dispose(local_28);
  }
LAB_1006aa964:
  return 0 < iVar2 + iVar7;
}

