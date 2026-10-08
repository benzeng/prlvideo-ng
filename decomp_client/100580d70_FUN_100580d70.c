
ulong FUN_100580d70(QStyleOptionViewItem *param_1,QModelIndex *param_2)

{
  uint uVar1;
  
  uVar1 = QStyledItemDelegate::sizeHint(param_1,param_2);
  return (ulong)uVar1 | 0x1300000000;
}

