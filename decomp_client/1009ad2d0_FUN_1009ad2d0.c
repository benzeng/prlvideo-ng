
void FUN_1009ad2d0(QObject *param_1,QObject param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  QObject *pQVar3;
  Connection local_60 [8];
  Connection local_58 [8];
  code *local_50;
  undefined8 local_48;
  code *local_40;
  undefined8 local_38;
  
  if ((param_1[0x60] == (QObject)0x0) && (param_2 != (QObject)0x0)) {
    uVar1 = FUN_1009983c0(param_1);
    local_40 = FUN_1009bebc0;
    local_38 = 0;
    local_50 = FUN_1009ad4f0;
    local_48 = 0;
    puVar2 = operator_new(0x20);
    *puVar2 = 1;
    *(code **)(puVar2 + 2) = FUN_1009b1440;
    *(code **)(puVar2 + 4) = FUN_1009ad4f0;
    *(undefined8 *)(puVar2 + 6) = 0;
    QObject::connectImpl
              (local_58,uVar1,&local_40,param_1,&local_50,puVar2,0,0,&PTR_staticMetaObject_102233d80
              );
    QMetaObject::Connection::~Connection(local_58);
    uVar1 = FUN_1009983c0(param_1);
    local_40 = FUN_1009bec20;
    local_38 = 0;
    local_50 = FUN_1009adc20;
    local_48 = 0;
    puVar2 = operator_new(0x20);
    *puVar2 = 1;
    *(code **)(puVar2 + 2) = FUN_1009b14b0;
    *(code **)(puVar2 + 4) = FUN_1009adc20;
    *(undefined8 *)(puVar2 + 6) = 0;
    QObject::connectImpl
              (local_60,uVar1,&local_40,param_1,&local_50,puVar2,0,0,&PTR_staticMetaObject_102233d80
              );
    QMetaObject::Connection::~Connection(local_60);
  }
  else if ((param_1[0x60] != (QObject)0x0) && (param_2 == (QObject)0x0)) {
    pQVar3 = (QObject *)FUN_1009983c0(param_1);
    local_40 = FUN_1009bebc0;
    local_38 = 0;
    local_50 = FUN_1009ad4f0;
    local_48 = 0;
    QObject::disconnectImpl
              (pQVar3,&local_40,param_1,&local_50,(QMetaObject *)&PTR_staticMetaObject_102233d80);
    pQVar3 = (QObject *)FUN_1009983c0(param_1);
    local_40 = FUN_1009bec20;
    local_38 = 0;
    local_50 = FUN_1009adc20;
    local_48 = 0;
    QObject::disconnectImpl
              (pQVar3,&local_40,param_1,&local_50,(QMetaObject *)&PTR_staticMetaObject_102233d80);
  }
  param_1[0x60] = param_2;
  return;
}

