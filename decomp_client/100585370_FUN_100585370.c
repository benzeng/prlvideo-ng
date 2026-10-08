
void FUN_100585370(long *param_1,uint param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  bool bVar7;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  Data *local_40;
  int local_38;
  undefined1 local_29;
  
  FUN_1005896e0(&local_58,param_1);
  local_50 = local_58;
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 == 0) {
      QListData::detach((int)&local_50);
      lVar4 = (long)*(int *)(local_50 + 8);
      if ((local_58 + (long)*(int *)(local_58 + 8) * 8 != local_50 + lVar4 * 8) &&
         (lVar5 = *(int *)(local_50 + 0xc) - lVar4, lVar5 != 0 && lVar4 <= *(int *)(local_50 + 0xc))
         ) {
        _memcpy(local_50 + lVar4 * 8 + 0x10,local_58 + (long)*(int *)(local_58 + 8) * 8 + 0x10,
                lVar5 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + 1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
    }
  }
  local_48 = local_50 + (long)*(int *)(local_50 + 8) * 8 + 0x10;
  local_40 = local_50 + (long)*(int *)(local_50 + 0xc) * 8 + 0x10;
  local_38 = 1;
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 == 0) {
LAB_100585439:
      QListData::dispose(local_58);
    }
    else {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if (!(bool)local_29) goto LAB_100585439;
    }
    if (local_38 == 0) goto LAB_10058552d;
  }
  for (; local_48 != local_40; local_48 = local_48 + 8) {
    uVar1 = *(ulong *)local_48;
    bVar7 = SUB81(uVar1,0);
    QObject::blockSignals(bVar7);
    QKeySequence::operator[](param_2);
    puVar2 = (undefined8 *)*param_1;
    if ((*(int *)((long)puVar2 + 0x14) != 0) && (*(uint *)(puVar2 + 4) != 0)) {
      uVar6 = (uint)(uVar1 >> 0x1f) ^ (uint)uVar1 ^ *(uint *)((long)puVar2 + 0x24);
      for (puVar3 = *(undefined8 **)(puVar2[1] + ((ulong)uVar6 % (ulong)*(uint *)(puVar2 + 4)) * 8);
          (puVar3 != puVar2 && ((*(uint *)(puVar3 + 1) != uVar6 || (uVar1 != puVar3[2]))));
          puVar3 = (undefined8 *)*puVar3) {
      }
    }
    QAbstractButton::setChecked(bVar7);
    QObject::blockSignals(bVar7);
    local_38 = 1;
  }
LAB_10058552d:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      UNLOCK();
      if (*(int *)local_50 != 0) {
        return;
      }
      local_29 = 0;
    }
    QListData::dispose(local_50);
  }
  return;
}

