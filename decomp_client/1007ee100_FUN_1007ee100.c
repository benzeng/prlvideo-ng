
void FUN_1007ee100(long param_1,long param_2)

{
  QString *pQVar1;
  char cVar2;
  long lVar3;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QString local_70;
  QArrayData *local_68;
  QString local_60;
  QString local_58;
  QString local_50;
  QArrayData *local_48;
  QString local_40;
  QString local_38;
  undefined1 local_29;
  
  QObject::sender();
  lVar3 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1022078f0);
  if (lVar3 == 0) {
    return;
  }
  local_38.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  FUN_100def650(&local_40,*(undefined8 *)(param_2 + 8),1);
  FUN_100def650(&local_48,*(undefined8 *)(param_2 + 0x10),1);
  QString::right((int)&local_50);
  QString::right((int)&local_58);
  cVar2 = operator==(&local_50,&local_58);
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_29 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007ee1ca;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_1007ee1ca:
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_29 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007ee1fa;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_1007ee1fa:
  if (cVar2 != '\0') {
    FUN_100def650(&local_60,*(undefined8 *)(param_2 + 8),0);
    QString::operator=(&local_40,&local_60);
    if (*(int *)local_60.field0_0x0 != -1) {
      if (*(int *)local_60.field0_0x0 != 0) {
        LOCK();
        *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
        local_29 = *(int *)local_60.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1007ee24a;
      }
      QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
    }
  }
LAB_1007ee24a:
  QMetaObject::tr((char *)&local_68,PTR_staticMetaObject_1021e1520,0x1dda878);
  QString::arg(&local_78,&local_68,&local_40,0,0x20);
  QString::arg(&local_70,&local_78,&local_48,0,0x20);
  QString::operator=(&local_38,&local_70);
  if (*(int *)local_70.field0_0x0 != -1) {
    if (*(int *)local_70.field0_0x0 != 0) {
      LOCK();
      *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
      local_29 = *(int *)local_70.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007ee2d8;
    }
    QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
  }
LAB_1007ee2d8:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_29 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007ee308;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1007ee308:
  if (*(int *)(param_2 + 0x18) != 0) {
    FUN_100def650(&local_80,*(int *)(param_2 + 0x18),1);
    QMetaObject::tr((char *)&local_90,PTR_staticMetaObject_1021e1520,0x1dda881);
    QString::arg(&local_88,&local_90,&local_80,0,0x20);
    QString::append(&local_38);
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_29 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1007ee39e;
      }
      QArrayData::deallocate(local_88,2,8);
    }
LAB_1007ee39e:
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 != 0) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        local_29 = *(int *)local_90 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1007ee3d4;
      }
      QArrayData::deallocate(local_90,2,8);
    }
LAB_1007ee3d4:
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_29 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1007ee404;
      }
      QArrayData::deallocate(local_80,2,8);
    }
  }
LAB_1007ee404:
  if (*(int *)(param_2 + 0x1c) != 0) {
    FUN_100defbb0(&local_98,*(int *)(param_2 + 0x1c),1);
    QMetaObject::tr((char *)&local_a8,PTR_staticMetaObject_1021e1520,0x1dda88b);
    QString::arg(&local_a0,&local_a8,&local_98,0,0x20);
    QString::append(&local_38);
    if (*(int *)local_a0 != -1) {
      if (*(int *)local_a0 != 0) {
        LOCK();
        *(int *)local_a0 = *(int *)local_a0 + -1;
        local_29 = *(int *)local_a0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1007ee4ab;
      }
      QArrayData::deallocate(local_a0,2,8);
    }
LAB_1007ee4ab:
    if (*(int *)local_a8 != -1) {
      if (*(int *)local_a8 != 0) {
        LOCK();
        *(int *)local_a8 = *(int *)local_a8 + -1;
        local_29 = *(int *)local_a8 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1007ee4e1;
      }
      QArrayData::deallocate(local_a8,2,8);
    }
LAB_1007ee4e1:
    if (*(int *)local_98 != -1) {
      if (*(int *)local_98 != 0) {
        LOCK();
        *(int *)local_98 = *(int *)local_98 + -1;
        local_29 = *(int *)local_98 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1007ee517;
      }
      QArrayData::deallocate(local_98,2,8);
    }
  }
LAB_1007ee517:
  pQVar1 = *(QString **)(param_1 + 0x30);
  QMetaObject::tr((char *)&local_b8,"",0x1e19bdf);
  FUN_1002a0af0(&local_c0,lVar3);
  QString::arg(&local_b0,&local_b8,&local_c0,0,0x20);
  CAbstractProgressOperation::setName(pQVar1);
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_29 = *(int *)local_b0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007ee5b4;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_1007ee5b4:
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_29 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007ee5ea;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_1007ee5ea:
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_29 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007ee620;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_1007ee620:
  CAbstractProgressOperation::setProgress((int)*(undefined8 *)(param_1 + 0x30));
  pQVar1 = *(QString **)(param_1 + 0x30);
  QString::simplified();
  CAbstractProgressOperation::setDescription(pQVar1);
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_29 = *(int *)local_c8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007ee687;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_1007ee687:
  if (*(char *)(param_1 + 0x39) != '\x01') {
    *(undefined1 *)(param_1 + 0x39) = 1;
    FUN_100867e50(*(undefined8 *)(param_1 + 0x10),1);
  }
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_29 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007ee6d7;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1007ee6d7:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007ee707;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1007ee707:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_29 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007ee737;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1007ee737:
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_38.field0_0x0 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
  return;
}

