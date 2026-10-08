
void FUN_10013aa50(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  QArrayData *local_60;
  QVariant local_58;
  QVariant local_48;
  undefined1 local_31;
  
  if (param_3 == 0) {
    param_3 = QTreeWidget::invisibleRootItem();
  }
  if (*(int *)(*(long *)(param_3 + 0x30) + 8) < *(int *)(*(long *)(param_3 + 0x30) + 0xc)) {
    lVar3 = 0;
    do {
      QTreeWidgetItem::executePendingSort();
      plVar1 = *(long **)(*(long *)(param_3 + 0x30) + 0x10 +
                         (*(int *)(*(long *)(param_3 + 0x30) + 8) + lVar3) * 8);
      if (plVar1 != (long *)0x0) {
        if (*(int *)(plVar1[6] + 0xc) == *(int *)(plVar1[6] + 8)) {
          (**(code **)(*plVar1 + 0x18))(&local_58,plVar1,0,10);
          iVar2 = QVariant::toInt((bool *)&local_58);
          QVariant::~QVariant(&local_58);
          if (iVar2 == 2) {
            (**(code **)(*plVar1 + 0x18))(&local_48,plVar1,3,0);
            QVariant::toString();
            QVariant::~QVariant(&local_48);
            FUN_1000341d0(param_2,&local_60);
            if (*(int *)local_60 != -1) {
              if (*(int *)local_60 != 0) {
                LOCK();
                *(int *)local_60 = *(int *)local_60 + -1;
                local_31 = *(int *)local_60 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_10013ab90;
              }
              QArrayData::deallocate(local_60,2,8);
            }
          }
        }
        else {
          FUN_10013aa50(param_1,param_2,plVar1);
        }
      }
LAB_10013ab90:
      lVar3 = lVar3 + 1;
    } while (lVar3 < (long)*(int *)(*(long *)(param_3 + 0x30) + 0xc) -
                     (long)*(int *)(*(long *)(param_3 + 0x30) + 8));
  }
  return;
}

