
ulong FUN_100535d30(QStyleOptionViewItem *param_1,QModelIndex *param_2)

{
  uint uVar1;
  
  uVar1 = QItemDelegate::sizeHint(param_1,param_2);
  return (ulong)uVar1 | 0x1a00000000;
}

