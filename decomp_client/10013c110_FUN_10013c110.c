
void FUN_10013c110(undefined8 param_1,int param_2,long param_3)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  QVariant local_40;
  
  if (*(int *)(*(long *)(param_3 + 0x30) + 8) < *(int *)(*(long *)(param_3 + 0x30) + 0xc)) {
    lVar3 = 0;
    do {
      QTreeWidgetItem::executePendingSort();
      plVar1 = *(long **)(*(long *)(param_3 + 0x30) + 0x10 +
                         (*(int *)(*(long *)(param_3 + 0x30) + 8) + lVar3) * 8);
      if (*(int *)(plVar1[6] + 0xc) == *(int *)(plVar1[6] + 8)) {
        pcVar2 = *(code **)(*plVar1 + 0x20);
        QVariant::QVariant(&local_40,param_2);
        (*pcVar2)(plVar1,0,10,&local_40);
        QVariant::~QVariant(&local_40);
      }
      else {
        FUN_10013c110(param_1,param_2,plVar1);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < (long)*(int *)(*(long *)(param_3 + 0x30) + 0xc) -
                     (long)*(int *)(*(long *)(param_3 + 0x30) + 8));
  }
  return;
}

