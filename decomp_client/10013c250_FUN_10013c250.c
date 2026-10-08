
undefined8 FUN_10013c250(undefined8 param_1,long param_2,long *param_3)

{
  long *plVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  QVariant local_50;
  QVariant local_40;
  
  if (*(int *)(*(long *)(param_2 + 0x30) + 8) < *(int *)(*(long *)(param_2 + 0x30) + 0xc)) {
    lVar5 = 0;
    do {
      QTreeWidgetItem::executePendingSort();
      plVar1 = *(long **)(*(long *)(param_2 + 0x30) + 0x10 +
                         (*(int *)(*(long *)(param_2 + 0x30) + 8) + lVar5) * 8);
      if (plVar1 != (long *)0x0) {
        if (*(int *)(plVar1[6] + 0xc) == *(int *)(plVar1[6] + 8)) {
          (**(code **)(*plVar1 + 0x18))(&local_50,plVar1,0,10);
          iVar4 = QVariant::toInt((bool *)&local_50);
          QVariant::~QVariant(&local_50);
          if ((plVar1 != param_3) && (iVar4 == 0)) {
            pcVar2 = *(code **)(*plVar1 + 0x20);
            QVariant::QVariant(&local_40,2);
            (*pcVar2)(plVar1,0,10,&local_40);
            QVariant::~QVariant(&local_40);
            return 1;
          }
        }
        else {
          cVar3 = FUN_10013c250(param_1,plVar1,param_3);
          if (cVar3 != '\0') {
            return 1;
          }
        }
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < (long)*(int *)(*(long *)(param_2 + 0x30) + 0xc) -
                     (long)*(int *)(*(long *)(param_2 + 0x30) + 8));
  }
  return 0;
}

