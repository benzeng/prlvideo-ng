
void FUN_100732ea0(undefined8 param_1,long param_2)

{
  char cVar1;
  char cVar2;
  void *pvVar3;
  undefined8 uVar4;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  
  if (param_2 != 0) {
    if (DAT_1023109d8 == (void *)0x0) {
      pvVar3 = operator_new(0x18);
      FUN_100785b00(pvVar3);
      DAT_10226c7e0 = 1;
      DAT_1023109d8 = pvVar3;
    }
    uVar4 = FUN_100785c90(DAT_1023109d8,param_2,1);
    cVar1 = '\0';
    QObject::connect(&local_38,uVar4,"2valueChanged(const QVariant&)",param_1,"1updateCounters()",0)
    ;
    if (local_38 != 0) {
      cVar1 = QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_38);
    if (DAT_1023109d8 == (void *)0x0) {
      pvVar3 = operator_new(0x18);
      FUN_100785b00(pvVar3);
      DAT_10226c7e0 = 1;
      DAT_1023109d8 = pvVar3;
    }
    uVar4 = FUN_100785c90(DAT_1023109d8,param_2,3);
    cVar2 = '\0';
    QObject::connect(&local_40,uVar4,"2valueChanged(const QVariant&)",param_1,"1updateCounters()",0)
    ;
    if (cVar1 != '\0') {
      if (local_40 == 0) {
        cVar2 = '\0';
      }
      else {
        cVar2 = QMetaObject::Connection::isConnected_helper();
      }
    }
    QMetaObject::Connection::~Connection((Connection *)&local_40);
    if (DAT_1023109d8 == (void *)0x0) {
      pvVar3 = operator_new(0x18);
      FUN_100785b00(pvVar3);
      DAT_10226c7e0 = 1;
      DAT_1023109d8 = pvVar3;
    }
    uVar4 = FUN_100785c90(DAT_1023109d8,param_2,2);
    cVar1 = '\0';
    QObject::connect(&local_48,uVar4,"2valueChanged(const QVariant&)",param_1,"1updateCounters()",0)
    ;
    if (cVar2 != '\0') {
      if (local_48 == 0) {
        cVar1 = '\0';
      }
      else {
        cVar1 = QMetaObject::Connection::isConnected_helper();
      }
    }
    QMetaObject::Connection::~Connection((Connection *)&local_48);
    if (DAT_1023109d8 == (void *)0x0) {
      pvVar3 = operator_new(0x18);
      FUN_100785b00(pvVar3);
      DAT_10226c7e0 = 1;
      DAT_1023109d8 = pvVar3;
    }
    uVar4 = FUN_100785c90(DAT_1023109d8,param_2,4);
    cVar2 = '\0';
    QObject::connect(&local_50,uVar4,"2valueChanged(const QVariant&)",param_1,"1updateCounters()",0)
    ;
    if (cVar1 != '\0') {
      if (local_50 == 0) {
        cVar2 = '\0';
      }
      else {
        cVar2 = QMetaObject::Connection::isConnected_helper();
      }
    }
    QMetaObject::Connection::~Connection((Connection *)&local_50);
    if (DAT_1023109d8 == (void *)0x0) {
      pvVar3 = operator_new(0x18);
      FUN_100785b00(pvVar3);
      DAT_10226c7e0 = 1;
      DAT_1023109d8 = pvVar3;
    }
    uVar4 = FUN_100785c90(DAT_1023109d8,param_2,8);
    cVar1 = '\0';
    QObject::connect(&local_58,uVar4,"2valueChanged(const QVariant&)",param_1,"1updateCounters()",0)
    ;
    if (cVar2 != '\0') {
      if (local_58 == 0) {
        cVar1 = '\0';
      }
      else {
        cVar1 = QMetaObject::Connection::isConnected_helper();
      }
    }
    QMetaObject::Connection::~Connection((Connection *)&local_58);
    if (DAT_1023109d8 == (void *)0x0) {
      pvVar3 = operator_new(0x18);
      FUN_100785b00(pvVar3);
      DAT_10226c7e0 = 1;
      DAT_1023109d8 = pvVar3;
    }
    uVar4 = FUN_100785c90(DAT_1023109d8,param_2,7);
    cVar2 = '\0';
    QObject::connect(&local_60,uVar4,"2valueChanged(const QVariant&)",param_1,"1updateCounters()",0)
    ;
    if (cVar1 != '\0') {
      if (local_60 == 0) {
        cVar2 = '\0';
      }
      else {
        cVar2 = QMetaObject::Connection::isConnected_helper();
      }
    }
    QMetaObject::Connection::~Connection((Connection *)&local_60);
    if (DAT_1023109d8 == (void *)0x0) {
      pvVar3 = operator_new(0x18);
      FUN_100785b00(pvVar3);
      DAT_10226c7e0 = 1;
      DAT_1023109d8 = pvVar3;
    }
    uVar4 = FUN_100785c90(DAT_1023109d8,param_2,6);
    cVar1 = '\0';
    QObject::connect(&local_68,uVar4,"2valueChanged(const QVariant&)",param_1,"1updateCounters()",0)
    ;
    if (cVar2 != '\0') {
      if (local_68 == 0) {
        cVar1 = '\0';
      }
      else {
        cVar1 = QMetaObject::Connection::isConnected_helper();
      }
    }
    QMetaObject::Connection::~Connection((Connection *)&local_68);
    if (DAT_1023109d8 == (void *)0x0) {
      pvVar3 = operator_new(0x18);
      FUN_100785b00(pvVar3);
      DAT_10226c7e0 = 1;
      DAT_1023109d8 = pvVar3;
    }
    uVar4 = FUN_100785c90(DAT_1023109d8,param_2,5);
    QObject::connect(&local_70,uVar4,"2valueChanged(const QVariant&)",param_1,"1updateCounters()",0)
    ;
    if ((cVar1 != '\0') && (local_70 != 0)) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_70);
  }
  return;
}

