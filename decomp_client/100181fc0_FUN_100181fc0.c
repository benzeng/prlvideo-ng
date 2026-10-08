
QPointF * FUN_100181fc0(QGraphicsItem *param_1,undefined8 param_2,long param_3,char param_4)

{
  int iVar1;
  int iVar2;
  QPointF *pQVar3;
  QArrayData *local_60;
  Data *local_58;
  QPointF *local_50;
  QVariant local_48;
  undefined1 local_31;
  
  pQVar3 = operator_new(0x20);
  FUN_10017ff70(pQVar3,param_2);
  local_50 = pQVar3;
  QGraphicsScene::addItem(param_1);
  FUN_1001863a0(param_1 + 0x10,&local_50);
  QGraphicsScene::selectedItems();
  iVar1 = *(int *)(local_58 + 0xc);
  iVar2 = *(int *)(local_58 + 8);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10018204a;
    }
    QListData::dispose(local_58);
  }
LAB_10018204a:
  if (iVar1 == iVar2) {
    QGraphicsItem::data((int)&local_48);
    QVariant::toString();
    QVariant::~QVariant(&local_48);
    FUN_100182180(param_1,&local_60);
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001820b1;
      }
      QArrayData::deallocate(local_60,2,8);
    }
  }
LAB_1001820b1:
  if (param_3 != 0) {
    QGraphicsItem::setPos(pQVar3);
  }
  if (param_4 != '\0') {
    FUN_1001832f0(param_1,1);
    FUN_1001832f0(param_1,2);
    FUN_100183da0(param_1);
    FUN_100182a20(param_1);
    FUN_1007fda60(param_1);
  }
  FUN_1007fd9a0(param_1,pQVar3);
  return pQVar3;
}

