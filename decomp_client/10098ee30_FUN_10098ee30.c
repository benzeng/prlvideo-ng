
void FUN_10098ee30(QObject *param_1,undefined4 param_2)

{
  long lVar1;
  QObject *pQVar2;
  long lVar3;
  long lVar4;
  Data *local_50;
  Data *local_48;
  Data *local_40;
  undefined4 local_38;
  undefined1 local_29;
  
  if (((*(long *)(param_1 + 0x30) != 0) && (*(int *)(*(long *)(param_1 + 0x30) + 4) != 0)) &&
     (*(QObject **)(param_1 + 0x38) != (QObject *)0x0)) {
    QObject::disconnect(*(QObject **)(param_1 + 0x38),(char *)0x0,param_1,(char *)0x0);
    QWidget::close();
    QObject::deleteLater();
  }
  local_50 = *(Data **)(param_1 + 0x28);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 == 0) {
      QListData::detach((int)&local_50);
      lVar3 = (long)*(int *)(local_50 + 8);
      lVar1 = *(long *)(param_1 + 0x28);
      if (((Data *)(lVar1 + (long)*(int *)(lVar1 + 8) * 8) != local_50 + lVar3 * 8) &&
         (lVar4 = *(int *)(local_50 + 0xc) - lVar3, lVar4 != 0 && lVar3 <= *(int *)(local_50 + 0xc))
         ) {
        _memcpy(local_50 + lVar3 * 8 + 0x10,(void *)(lVar1 + 0x10 + (long)*(int *)(lVar1 + 8) * 8),
                lVar4 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + 1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
    }
  }
  local_48 = local_50 + (long)*(int *)(local_50 + 8) * 8 + 0x10;
  local_40 = local_50 + (long)*(int *)(local_50 + 0xc) * 8 + 0x10;
  if (*(int *)(local_50 + 8) != *(int *)(local_50 + 0xc)) {
    do {
      local_38 = 1;
      pQVar2 = *(QObject **)local_48;
      QObject::disconnect(pQVar2,(char *)0x0,param_1,(char *)0x0);
      FUN_100990380(pQVar2);
      local_48 = local_48 + 8;
    } while (local_48 != local_40);
  }
  local_38 = 1;
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10098ef99;
    }
    QListData::dispose(local_50);
  }
LAB_10098ef99:
  FUN_1009bda70(param_1,param_2);
  return;
}

