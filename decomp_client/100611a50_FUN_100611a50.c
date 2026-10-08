
void FUN_100611a50(long param_1,int param_2)

{
  long lVar1;
  char cVar2;
  long lVar3;
  long *plVar4;
  char *pcVar5;
  long local_a8;
  long local_a0;
  QVariant local_98;
  int *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  Data_conflict local_68;
  undefined4 local_60;
  undefined1 local_58;
  QVariant local_50;
  QArrayData *local_40;
  undefined1 local_31;
  
  QObject::sender();
  QObject::property((char *)&local_50);
  QVariant::toString();
  QVariant::~QVariant(&local_50);
  if (*(int *)(local_40 + 4) != 0) {
    cVar2 = FUN_100611280(param_1,&local_40);
    if (cVar2 == '\0') {
      FUN_100609af0(param_1,&local_40,1);
    }
    else {
      QObject::sender();
      lVar3 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_10220a9e0);
      lVar1 = *(long *)(param_1 + 0x10);
      local_88 = (int *)0x0;
      uStack_80 = 0;
      local_70 = 0;
      local_78 = 0;
      local_60 = 0x80000000;
      local_68.field7 = 0;
      local_58 = 1;
      FUN_10060a8b0(*(undefined8 *)(lVar1 + 0x10),6,&local_40,&local_88);
      cVar2 = FUN_10060b4b0(*(undefined8 *)(lVar1 + 0x10),6,&local_40,0);
      QVariant::~QVariant((QVariant *)&local_68);
      if (local_88 != (int *)0x0) {
        LOCK();
        *local_88 = *local_88 + -1;
        local_31 = *local_88 != 0;
        UNLOCK();
        if ((!(bool)local_31) && (local_88 != (int *)0x0)) {
          operator_delete(local_88);
        }
      }
      if ((((cVar2 != '\0') && (-1 < param_2)) && (lVar3 != 0)) &&
         (cVar2 = FUN_1002e2ac0(lVar3), cVar2 != '\0')) {
        CAbstractTask::setOption(lVar3,2,0);
        plVar4 = (long *)FUN_100613ce0(param_1 + 0x28,&local_40);
        pcVar5 = (char *)0x0;
        if ((*plVar4 != 0) && (pcVar5 = (char *)0x0, *(int *)(*plVar4 + 4) != 0)) {
          pcVar5 = (char *)plVar4[1];
        }
        local_a0 = lVar3;
        QVariant::QVariant(&local_98,0x27,&local_a0,1);
        QObject::setProperty(pcVar5,(QVariant *)"PromoTask");
        QVariant::~QVariant(&local_98);
        QObject::connect(&local_a8,pcVar5,"2destroyed()",lVar3,"1deleteLater()",0);
        if (local_a8 != 0) {
          QMetaObject::Connection::isConnected_helper();
        }
        QMetaObject::Connection::~Connection((Connection *)&local_a8);
      }
      FUN_100609af0(param_1,&local_40,0);
    }
  }
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
    QArrayData::deallocate(local_40,2,8);
  }
  return;
}

