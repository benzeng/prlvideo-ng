
QKeySequence * FUN_1005867d0(QKeySequence *param_1,long param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  char cVar3;
  uint uVar4;
  undefined8 *puVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  QArrayData *local_70;
  QKeySequence local_68 [8];
  Data *local_60;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  int local_40;
  undefined1 local_31;
  
  FUN_1005896e0(&local_60,(long *)(param_2 + 0x78));
  local_58 = local_60;
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 == 0) {
      QListData::detach((int)&local_58);
      lVar7 = (long)*(int *)(local_58 + 8);
      if ((local_60 + (long)*(int *)(local_60 + 8) * 8 != local_58 + lVar7 * 8) &&
         (lVar8 = *(int *)(local_58 + 0xc) - lVar7, lVar8 != 0 && lVar7 <= *(int *)(local_58 + 0xc))
         ) {
        _memcpy(local_58 + lVar7 * 8 + 0x10,local_60 + (long)*(int *)(local_60 + 8) * 8 + 0x10,
                lVar8 * 8);
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
LAB_1005868b1:
    uVar9 = 0;
    for (; local_50 != local_48; local_50 = local_50 + 8) {
      uVar1 = *(ulong *)local_50;
      cVar3 = QAbstractButton::isChecked();
      if (cVar3 != '\0') {
        puVar2 = *(undefined8 **)(param_2 + 0x78);
        uVar4 = 0;
        if ((*(int *)((long)puVar2 + 0x14) != 0) && (*(uint *)(puVar2 + 4) != 0)) {
          uVar6 = (uint)(uVar1 >> 0x1f) ^ (uint)uVar1 ^ *(uint *)((long)puVar2 + 0x24);
          for (puVar5 = *(undefined8 **)
                         (puVar2[1] + ((ulong)uVar6 % (ulong)*(uint *)(puVar2 + 4)) * 8);
              puVar5 != puVar2; puVar5 = (undefined8 *)*puVar5) {
            if ((*(uint *)(puVar5 + 1) == uVar6) && (uVar1 == puVar5[2])) {
              uVar4 = 0;
              if (puVar5 != puVar2) {
                uVar4 = *(uint *)(puVar5 + 3);
              }
              break;
            }
          }
        }
        uVar9 = uVar9 | uVar4;
      }
      local_40 = 1;
    }
  }
  else {
    if (*(int *)local_60 == 0) {
LAB_10058689f:
      QListData::dispose(local_60);
    }
    else {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if (!(bool)local_31) goto LAB_10058689f;
    }
    uVar9 = 0;
    if (local_40 != 0) goto LAB_1005868b1;
  }
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10058696e;
    }
    QListData::dispose(local_58);
  }
LAB_10058696e:
  QComboBox::lineEdit();
  QLineEdit::text();
  FUN_100718da0(local_68,&local_70);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005869c9;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1005869c9:
  uVar4 = QKeySequence::operator[]((uint)local_68);
  QKeySequence::QKeySequence(param_1,uVar4 | uVar9,0,0,0);
  QKeySequence::~QKeySequence(local_68);
  return param_1;
}

