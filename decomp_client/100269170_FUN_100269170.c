
long * FUN_100269170(QString *param_1)

{
  bool bVar1;
  char cVar2;
  QString *pQVar3;
  long lVar4;
  long lVar5;
  long *unaff_RBX;
  QString local_68;
  Data *local_60;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  int local_40;
  undefined1 local_31;
  
  QApplication::topLevelWidgets();
  local_58 = local_60;
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 == 0) {
      QListData::detach((int)&local_58);
      lVar4 = (long)*(int *)(local_58 + 8);
      unaff_RBX = (long *)(long)*(int *)(local_60 + 8);
      if ((local_60 + (long)unaff_RBX * 8 != local_58 + lVar4 * 8) &&
         (lVar5 = *(int *)(local_58 + 0xc) - lVar4, lVar5 != 0 && lVar4 <= *(int *)(local_58 + 0xc))
         ) {
        _memcpy(local_58 + lVar4 * 8 + 0x10,local_60 + (long)unaff_RBX * 8 + 0x10,lVar5 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + 1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
    }
  }
  local_50 = local_58 + (long)*(int *)(local_58 + 8) * 8 + 0x10;
  local_48 = local_58 + (long)*(int *)(local_58 + 0xc) * 8 + 0x10;
  local_40 = 1;
  if (*(int *)local_60 == -1) {
LAB_100269244:
    bVar1 = true;
    if (local_50 != local_48) {
      do {
        unaff_RBX = (long *)QMetaObject::cast((QObject *)&PTR_staticMetaObject_10222d000);
        if ((unaff_RBX != (long *)0x0) && ((*(byte *)(unaff_RBX[5] + 9) & 0x80) != 0)) {
          (**(code **)(*unaff_RBX + 0x1c8))(&local_68,unaff_RBX);
          cVar2 = operator==(&local_68,param_1);
          if (*(int *)local_68.field0_0x0 != -1) {
            if (*(int *)local_68.field0_0x0 != 0) {
              LOCK();
              *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
              local_31 = *(int *)local_68.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1002692cd;
            }
            QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
          }
LAB_1002692cd:
          if (cVar2 != '\0') {
            bVar1 = false;
            goto LAB_1002692fe;
          }
        }
        local_50 = local_50 + 8;
        local_40 = 1;
      } while (local_50 != local_48);
      bVar1 = true;
    }
  }
  else {
    if (*(int *)local_60 == 0) {
LAB_100269235:
      QListData::dispose(local_60);
    }
    else {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if (!(bool)local_31) goto LAB_100269235;
    }
    if (local_40 != 0) goto LAB_100269244;
    bVar1 = true;
  }
LAB_1002692fe:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100269324;
    }
    QListData::dispose(local_58);
  }
LAB_100269324:
  if (bVar1) {
    pQVar3 = (QString *)CSearchParentHelper::instance();
    unaff_RBX = (long *)CSearchParentHelper::getParentForMessage
                                  (pQVar3,SUB81(param_1,0),(QWidget *)0x0);
  }
  return unaff_RBX;
}

