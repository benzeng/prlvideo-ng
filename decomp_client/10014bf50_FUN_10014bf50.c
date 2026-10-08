
undefined1
FUN_10014bf50(QEvent *param_1,QAbstractItemModel *param_2,QStyleOptionViewItem *param_3,
             QModelIndex *param_4,long param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  int extraout_EDX;
  long lVar8;
  QModelIndex local_100 [16];
  int local_f0;
  int local_e8;
  Data_conflict local_40;
  uint local_38;
  
  plVar7 = *(long **)(param_5 + 0x10);
  if (plVar7 == (long *)0x0) {
    local_38 = 0x80000000;
    local_40.field7 = 0;
    QVariant::~QVariant((QVariant *)&local_40);
  }
  else {
    (**(code **)(*plVar7 + 0x90))(&local_40,plVar7,param_5,10);
    uVar3 = local_38;
    QVariant::~QVariant((QVariant *)&local_40);
    if ((uVar3 & 0x3fffffff) != 0) {
      if (((*(int *)param_4 < 4) || (*(int *)(param_4 + 4) != 10)) ||
         (lVar8 = *(long *)(param_4 + 0x78), lVar8 == 0)) {
        lVar8 = 0;
        plVar7 = (long *)QApplication::style();
      }
      else {
        plVar7 = (long *)QWidget::style();
      }
      iVar5 = (**(code **)(*plVar7 + 0xe0))(plVar7,0x44,0,lVar8);
      plVar7 = (long *)QApplication::style();
      iVar6 = (**(code **)(*plVar7 + 0xc0))(plVar7,2,param_4,0);
      iVar6 = (extraout_EDX + 1) - iVar6;
      iVar1 = *(int *)(param_4 + 0x18);
      iVar2 = *(int *)(param_4 + 0x10);
      FUN_10014c170(local_100,param_4);
      local_f0 = ((iVar5 * -2 + -2 + ((iVar1 + 1) - iVar2) / 2) - iVar6 / 2) + local_f0;
      local_e8 = iVar6 + 1 + iVar5 * 2 + local_f0;
      uVar4 = QItemDelegate::editorEvent(param_1,param_2,param_3,local_100);
      FUN_10014c380(local_100);
      return uVar4;
    }
  }
  uVar4 = QItemDelegate::editorEvent(param_1,param_2,param_3,param_4);
  return uVar4;
}

