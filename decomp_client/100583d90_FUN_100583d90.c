
void FUN_100583d90(long param_1,QKeySequence *param_2,QString *param_3)

{
  long lVar1;
  long lVar2;
  QString *pQVar3;
  QTypedArrayData<unsigned_short> *pQVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  QKeySequence local_78 [8];
  QArrayData *local_70;
  QKeySequence local_68 [8];
  QKeySequence local_60 [8];
  QKeySequence local_58 [8];
  QArrayData *local_50;
  QKeySequence local_48 [8];
  QKeySequence local_40 [15];
  undefined1 local_31;
  
  *(undefined4 *)(param_1 + 0x20) = 0;
  QKeySequence::operator=((QKeySequence *)(param_1 + 0x28),param_2);
  QKeySequence::operator=((QKeySequence *)(param_1 + 0x30),param_2 + 8);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x10);
  QString::operator=((QString *)(param_1 + 0x40),param_3);
  FUN_100587720(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x10));
  lVar1 = param_1 + 0x78;
  puVar7 = (undefined4 *)FUN_100589550(lVar1,*(long *)(param_1 + 0x18) + 0x80);
  *puVar7 = 0x10000000;
  lVar2 = param_1 + 0x70;
  puVar7 = (undefined4 *)FUN_100589550(lVar2,*(long *)(param_1 + 0x18) + 0x38);
  *puVar7 = 0x10000000;
  puVar7 = (undefined4 *)FUN_100589550(lVar1,*(long *)(param_1 + 0x18) + 0x90);
  *puVar7 = 0x8000000;
  puVar7 = (undefined4 *)FUN_100589550(lVar2,*(long *)(param_1 + 0x18) + 0x40);
  *puVar7 = 0x8000000;
  puVar7 = (undefined4 *)FUN_100589550(lVar1,*(long *)(param_1 + 0x18) + 0x78);
  *puVar7 = 0x2000000;
  puVar7 = (undefined4 *)FUN_100589550(lVar2,*(long *)(param_1 + 0x18) + 0x30);
  *puVar7 = 0x2000000;
  puVar7 = (undefined4 *)FUN_100589550(lVar1,*(long *)(param_1 + 0x18) + 0x88);
  *puVar7 = 0x4000000;
  puVar7 = (undefined4 *)FUN_100589550(lVar2,*(long *)(param_1 + 0x18) + 0x48);
  *puVar7 = 0x4000000;
  FUN_1005841b0(param_1);
  FUN_100584d50(param_1);
  FUN_100714b50(local_40,param_2);
  FUN_100585370(lVar2,local_40);
  QKeySequence::~QKeySequence(local_40);
  FUN_1005855a0(lVar2,1);
  FUN_100714b50(local_48,param_2);
  uVar5 = QKeySequence::operator[]((uint)local_48);
  QKeySequence::~QKeySequence(local_48);
  pQVar3 = *(QString **)(*(long *)(param_1 + 0x18) + 0x50);
  QKeySequence::QKeySequence(local_58,uVar5 & 0x1ffffff,0,0,0);
  FUN_1007170a0(&local_50,local_58,0);
  QLineEdit::setText(pQVar3);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100583f83;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100583f83:
  QKeySequence::~QKeySequence(local_58);
  FUN_100714b80(local_60,param_2);
  FUN_100585370(lVar1,local_60);
  QKeySequence::~QKeySequence(local_60);
  pQVar4 = ((QString *)(param_1 + 0x40))->field0_0x0;
  iVar6 = QString::compare_helper
                    (pQVar4 + *(long *)(pQVar4 + 0x10),*(undefined4 *)(pQVar4 + 4),
                     PTR_s_Mac_OS_X_102274b50);
  FUN_1005855a0(lVar1,2 - (uint)(iVar6 == 0));
  FUN_100714b80(local_68,param_2);
  uVar5 = QKeySequence::operator[]((uint)local_68);
  QKeySequence::~QKeySequence(local_68);
  pQVar3 = *(QString **)(*(long *)(param_1 + 0x18) + 0x98);
  QKeySequence::QKeySequence(local_78,uVar5 & 0x1ffffff,0,0,0);
  lVar1 = *(long *)(param_1 + 0x40);
  iVar6 = QString::compare_helper
                    (*(long *)(lVar1 + 0x10) + lVar1,*(undefined4 *)(lVar1 + 4),
                     PTR_s_Mac_OS_X_102274b50,0xffffffff,1);
  FUN_1007170a0(&local_70,local_78,(iVar6 != 0) * '\x02');
  QComboBox::setEditText(pQVar3);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005840b0;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1005840b0:
  QKeySequence::~QKeySequence(local_78);
  FUN_100585870(param_1);
  FUN_100585c20(param_1);
  return;
}

