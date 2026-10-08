
void FUN_100586280(long param_1,long param_2)

{
  long lVar1;
  QString *pQVar2;
  uint uVar3;
  undefined4 *puVar4;
  QKeySequence local_38 [8];
  QArrayData *local_30;
  undefined1 local_21;
  
  *(undefined4 *)(param_1 + 0x20) = 2;
  FUN_1006b0df0(param_1 + 0x60);
  FUN_100587720(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x10));
  lVar1 = param_1 + 0x78;
  puVar4 = (undefined4 *)FUN_100589550(lVar1,*(long *)(param_1 + 0x18) + 0x80);
  *puVar4 = 0x10000000;
  puVar4 = (undefined4 *)FUN_100589550(lVar1,*(long *)(param_1 + 0x18) + 0x90);
  *puVar4 = 0x8000000;
  puVar4 = (undefined4 *)FUN_100589550(lVar1,*(long *)(param_1 + 0x18) + 0x78);
  *puVar4 = 0x2000000;
  puVar4 = (undefined4 *)FUN_100589550(lVar1,*(long *)(param_1 + 0x18) + 0x88);
  *puVar4 = 0x4000000;
  FUN_1005841b0(param_1);
  FUN_100584d50(param_1);
  FUN_100585370(lVar1,param_2 + 8);
  FUN_1005855a0(lVar1,2);
  uVar3 = QKeySequence::operator[]((uint)(param_2 + 8));
  pQVar2 = *(QString **)(*(long *)(param_1 + 0x18) + 0x98);
  QKeySequence::QKeySequence(local_38,uVar3 & 0x1ffffff,0,0,0);
  FUN_1007170a0(&local_30,local_38,2);
  QComboBox::setEditText(pQVar2);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005863bb;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1005863bb:
  QKeySequence::~QKeySequence(local_38);
  FUN_100585870(param_1);
  FUN_100585c20(param_1);
  return;
}

