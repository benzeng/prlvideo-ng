
void FUN_1004cda40(long param_1,QAbstractItemModel *param_2)

{
  if ((param_2 != (QAbstractItemModel *)0x0) &&
     ((*(QAbstractItemModel **)(*(long *)(param_1 + 0x38) + 0xb8) == param_2 ||
      (*(QAbstractItemModel **)(*(long *)(param_1 + 0x38) + 200) == param_2)))) {
    QComboBox::setModel(param_2);
    return;
  }
  return;
}

