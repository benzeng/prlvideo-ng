
void FUN_100766d40(long param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  char cVar7;
  bool bVar8;
  Data *local_50;
  Data *local_48;
  Data *local_40;
  Data *local_38;
  uint local_30;
  undefined1 local_21;
  
  uVar3 = FUN_100152280();
  FUN_100154b10(&local_50,uVar3);
  local_48 = local_50;
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 == 0) {
      QListData::detach((int)&local_48);
      lVar5 = (long)*(int *)(local_48 + 8);
      if ((local_50 + (long)*(int *)(local_50 + 8) * 8 != local_48 + lVar5 * 8) &&
         (lVar6 = *(int *)(local_48 + 0xc) - lVar5, lVar6 != 0 && lVar5 <= *(int *)(local_48 + 0xc))
         ) {
        _memcpy(local_48 + lVar5 * 8 + 0x10,local_50 + (long)*(int *)(local_50 + 8) * 8 + 0x10,
                lVar6 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + 1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
    }
  }
  local_40 = local_48 + (long)*(int *)(local_48 + 8) * 8 + 0x10;
  local_38 = local_48 + (long)*(int *)(local_48 + 0xc) * 8 + 0x10;
  local_30 = 1;
  if (*(int *)local_50 == -1) {
LAB_100766e1e:
    cVar1 = '\0';
    do {
      while( true ) {
        cVar7 = cVar1;
        if (local_40 == local_38) goto LAB_100766ead;
        if (local_30 != 0) break;
LAB_100766e30:
        local_40 = local_40 + 8;
        local_30 = 1;
        cVar1 = cVar7;
      }
      uVar3 = *(undefined8 *)local_40;
      cVar1 = FUN_10018ed10(uVar3);
      if (((cVar1 != '\0') || (iVar2 = FUN_10018bce0(uVar3), iVar2 != 0)) ||
         (cVar1 = FUN_10018c770(uVar3), cVar1 != '\0')) goto LAB_100766e30;
      local_40 = local_40 + 8;
      uVar4 = local_30 ^ 1;
      cVar7 = '\x01';
      bVar8 = local_30 != 1;
      cVar1 = '\x01';
      local_30 = uVar4;
    } while (bVar8);
  }
  else {
    if (*(int *)local_50 == 0) {
LAB_100766e0e:
      QListData::dispose(local_50);
    }
    else {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if (!(bool)local_21) goto LAB_100766e0e;
    }
    if (local_30 != 0) goto LAB_100766e1e;
    cVar7 = '\0';
  }
LAB_100766ead:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100766ed3;
    }
    QListData::dispose(local_48);
  }
LAB_100766ed3:
  if (cVar7 != *(char *)(param_1 + 0x21)) {
    *(char *)(param_1 + 0x21) = cVar7;
    FUN_10085bca0(param_1);
  }
  return;
}

