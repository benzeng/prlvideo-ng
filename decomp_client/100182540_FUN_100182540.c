
undefined8 * FUN_100182540(undefined8 *param_1,long param_2,QString *param_3)

{
  long lVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  QString local_78;
  undefined8 local_70;
  Data *local_68;
  Data *local_60;
  Data *local_58;
  undefined4 local_50;
  QVariant local_48;
  undefined1 local_31;
  
  *param_1 = PTR_shared_null_1021e15e8;
  local_68 = *(Data **)(param_2 + 0x10);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 == 0) {
      QListData::detach((int)&local_68);
      lVar3 = (long)*(int *)(local_68 + 8);
      lVar1 = *(long *)(param_2 + 0x10);
      if (((Data *)(lVar1 + (long)*(int *)(lVar1 + 8) * 8) != local_68 + lVar3 * 8) &&
         (lVar4 = *(int *)(local_68 + 0xc) - lVar3, lVar4 != 0 && lVar3 <= *(int *)(local_68 + 0xc))
         ) {
        _memcpy(local_68 + lVar3 * 8 + 0x10,(void *)(lVar1 + 0x10 + (long)*(int *)(lVar1 + 8) * 8),
                lVar4 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + 1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
    }
  }
  local_60 = local_68 + (long)*(int *)(local_68 + 8) * 8 + 0x10;
  local_58 = local_68 + (long)*(int *)(local_68 + 0xc) * 8 + 0x10;
  if (*(int *)(local_68 + 8) != *(int *)(local_68 + 0xc)) {
    do {
      local_50 = 1;
      local_70 = *(undefined8 *)local_60;
      QGraphicsItem::data((int)&local_48);
      QVariant::toString();
      QVariant::~QVariant(&local_48);
      cVar2 = operator==(&local_78,param_3);
      if (*(int *)local_78.field0_0x0 != -1) {
        if (*(int *)local_78.field0_0x0 != 0) {
          LOCK();
          *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
          local_31 = *(int *)local_78.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100182662;
        }
        QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
      }
LAB_100182662:
      if (cVar2 != '\0') {
        FUN_1001863a0(param_1,&local_70);
      }
      local_60 = local_60 + 8;
    } while (local_60 != local_58);
  }
  local_50 = 1;
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      UNLOCK();
      if (*(int *)local_68 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    QListData::dispose(local_68);
  }
  return param_1;
}

