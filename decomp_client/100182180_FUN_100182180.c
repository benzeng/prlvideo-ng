
void FUN_100182180(undefined8 param_1,QString *param_2)

{
  undefined8 uVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  QVariant local_78;
  QString local_68;
  Data *local_60;
  Data *local_58;
  Data *local_50;
  undefined4 local_48;
  Data *local_40;
  undefined1 local_31;
  
  QGraphicsScene::clearSelection();
  FUN_100182540(&local_40,param_1,param_2);
  local_60 = local_40;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 == 0) {
      QListData::detach((int)&local_60);
      lVar3 = (long)*(int *)(local_60 + 8);
      if ((local_40 + (long)*(int *)(local_40 + 8) * 8 != local_60 + lVar3 * 8) &&
         (lVar4 = *(int *)(local_60 + 0xc) - lVar3, lVar4 != 0 && lVar3 <= *(int *)(local_60 + 0xc))
         ) {
        _memcpy(local_60 + lVar3 * 8 + 0x10,local_40 + (long)*(int *)(local_40 + 8) * 8 + 0x10,
                lVar4 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + 1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
    }
  }
  local_58 = local_60 + (long)*(int *)(local_60 + 8) * 8 + 0x10;
  local_50 = local_60 + (long)*(int *)(local_60 + 0xc) * 8 + 0x10;
  if (*(int *)(local_60 + 8) != *(int *)(local_60 + 0xc)) {
    do {
      local_48 = 1;
      uVar1 = *(undefined8 *)local_58;
      QGraphicsItem::data((int)&local_78);
      QVariant::toString();
      cVar2 = operator==(&local_68,param_2);
      if (*(int *)local_68.field0_0x0 != -1) {
        if (*(int *)local_68.field0_0x0 != 0) {
          LOCK();
          *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
          local_31 = *(int *)local_68.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1001822a8;
        }
        QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
      }
LAB_1001822a8:
      QVariant::~QVariant(&local_78);
      if (cVar2 != '\0') {
        QGraphicsItem::setSelected(SUB81(uVar1,0));
      }
      local_58 = local_58 + 8;
    } while (local_58 != local_50);
  }
  local_48 = 1;
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100182304;
    }
    QListData::dispose(local_60);
  }
LAB_100182304:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_31 = 0;
    }
    QListData::dispose(local_40);
  }
  return;
}

