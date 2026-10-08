
void FUN_100432940(QWidget *param_1,QAbstractItemModel *param_2,QModelIndex *param_3,long param_4)

{
  code *pcVar1;
  bool bVar2;
  QVariant local_50;
  QVariant local_40;
  QVariant local_30;
  
  if (*(int *)(param_4 + 4) == 3) {
    pcVar1 = *(code **)(*(long *)param_3 + 0x98);
    QObject::property((char *)&local_40);
    QVariant::QVariant(&local_50,0);
    bVar2 = (bool)QVariant::cmp(&local_40);
    QVariant::QVariant(&local_30,bVar2);
    (*pcVar1)(param_3,param_4,&local_30,2);
    QVariant::~QVariant(&local_30);
    QVariant::~QVariant(&local_50);
    QVariant::~QVariant(&local_40);
    return;
  }
  QStyledItemDelegate::setModelData(param_1,param_2,param_3);
  return;
}

