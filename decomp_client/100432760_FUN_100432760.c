
char * FUN_100432760(QWidget *param_1,QStyleOptionViewItem *param_2,QModelIndex *param_3,
                    long param_4)

{
  char *pcVar1;
  char *pcVar2;
  QVariant local_28;
  
  if (*(int *)(param_4 + 4) == 3) {
    pcVar1 = (char *)FUN_100435300(param_1,param_2,param_4);
  }
  else {
    pcVar2 = (char *)QStyledItemDelegate::createEditor(param_1,param_2,param_3);
    pcVar1 = (char *)0x0;
    if ((pcVar2 != (char *)0x0) && (pcVar1 = pcVar2, *(int *)(param_4 + 4) == 1)) {
      QVariant::QVariant(&local_28,true);
      QObject::setProperty(pcVar2,(QVariant *)"Filter invalid symbols");
      QVariant::~QVariant(&local_28);
    }
  }
  return pcVar1;
}

