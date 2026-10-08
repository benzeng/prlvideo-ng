
int FUN_10038ca90(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int extraout_EDX;
  int extraout_EDX_00;
  QArrayData *local_58;
  QString local_50;
  QArrayData *local_48;
  QString local_40;
  undefined1 local_31;
  
  QFontMetrics::QFontMetrics
            ((QFontMetrics *)&local_40,
             (QFont *)(*(long *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x28) + 0x38));
  QLabel::text();
  iVar4 = QFontMetrics::boundingRect(&local_40);
  lVar3 = *(long *)(*(long *)(*(long *)(param_1 + 0x18) + 0xe0) + 0x28);
  iVar1 = *(int *)(lVar3 + 0x14);
  iVar2 = *(int *)(lVar3 + 0x1c);
  QFontMetrics::QFontMetrics
            ((QFontMetrics *)&local_50,
             (QFont *)(*(long *)(*(long *)(*(long *)(param_1 + 0x18) + 0xe8) + 0x28) + 0x38));
  QLabel::text();
  iVar5 = QFontMetrics::boundingRect(&local_50);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10038cb6e;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10038cb6e:
  QFontMetrics::~QFontMetrics((QFontMetrics *)&local_50);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10038cba7;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10038cba7:
  QFontMetrics::~QFontMetrics((QFontMetrics *)&local_40);
  return (((((extraout_EDX + 0x1b) - iVar4) + iVar2) - iVar1) + extraout_EDX_00) - iVar5;
}

