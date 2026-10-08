
void FUN_1009b5410(QObject *param_1,QObject param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  QObject *pQVar3;
  Connection local_68 [8];
  Connection local_60 [8];
  Connection local_58 [8];
  code *local_50;
  undefined8 local_48;
  code *local_40;
  undefined8 local_38;
  
  if ((param_1[0x4e] == (QObject)0x0) && (param_2 != (QObject)0x0)) {
    uVar1 = FUN_1009983c0(param_1);
    local_40 = FUN_1009bebc0;
    local_38 = 0;
    local_50 = FUN_1009b5700;
    local_48 = 0;
    puVar2 = operator_new(0x20);
    *puVar2 = 1;
    *(code **)(puVar2 + 2) = FUN_1009b7520;
    *(code **)(puVar2 + 4) = FUN_1009b5700;
    *(undefined8 *)(puVar2 + 6) = 0;
    QObject::connectImpl
              (local_58,uVar1,&local_40,param_1,&local_50,puVar2,0,0,&PTR_staticMetaObject_102233d80
              );
    QMetaObject::Connection::~Connection(local_58);
    uVar1 = FUN_1009983c0(param_1);
    local_40 = FUN_1009bec80;
    local_38 = 0;
    local_50 = FUN_1009b5880;
    local_48 = 0;
    puVar2 = operator_new(0x20);
    *puVar2 = 1;
    *(code **)(puVar2 + 2) = FUN_1009b7590;
    *(code **)(puVar2 + 4) = FUN_1009b5880;
    *(undefined8 *)(puVar2 + 6) = 0;
    QObject::connectImpl
              (local_60,uVar1,&local_40,param_1,&local_50,puVar2,0,0,&PTR_staticMetaObject_102233d80
              );
    QMetaObject::Connection::~Connection(local_60);
    uVar1 = FUN_1009983c0(param_1);
    local_40 = FUN_1009bece0;
    local_38 = 0;
    local_50 = FUN_1009b60f0;
    local_48 = 0;
    puVar2 = operator_new(0x20);
    *puVar2 = 1;
    *(code **)(puVar2 + 2) = FUN_1009b7590;
    *(code **)(puVar2 + 4) = FUN_1009b60f0;
    *(undefined8 *)(puVar2 + 6) = 0;
    QObject::connectImpl
              (local_68,uVar1,&local_40,param_1,&local_50,puVar2,0,0,&PTR_staticMetaObject_102233d80
              );
    QMetaObject::Connection::~Connection(local_68);
  }
  else if ((param_1[0x4e] != (QObject)0x0) && (param_2 == (QObject)0x0)) {
    pQVar3 = (QObject *)FUN_1009983c0(param_1);
    local_40 = FUN_1009bebc0;
    local_38 = 0;
    local_50 = FUN_1009b5700;
    local_48 = 0;
    QObject::disconnectImpl
              (pQVar3,&local_40,param_1,&local_50,(QMetaObject *)&PTR_staticMetaObject_102233d80);
    pQVar3 = (QObject *)FUN_1009983c0(param_1);
    local_40 = FUN_1009bec80;
    local_38 = 0;
    local_50 = FUN_1009b5880;
    local_48 = 0;
    QObject::disconnectImpl
              (pQVar3,&local_40,param_1,&local_50,(QMetaObject *)&PTR_staticMetaObject_102233d80);
    pQVar3 = (QObject *)FUN_1009983c0(param_1);
    local_40 = FUN_1009bece0;
    local_38 = 0;
    local_50 = FUN_1009b60f0;
    local_48 = 0;
    QObject::disconnectImpl
              (pQVar3,&local_40,param_1,&local_50,(QMetaObject *)&PTR_staticMetaObject_102233d80);
  }
  param_1[0x4e] = param_2;
  return;
}

