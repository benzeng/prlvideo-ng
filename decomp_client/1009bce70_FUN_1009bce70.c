
void FUN_1009bce70(long param_1)

{
  long lVar1;
  void *pvVar2;
  undefined4 *puVar3;
  Connection local_48 [8];
  code *local_40;
  undefined8 local_38;
  code *local_30;
  undefined8 local_28;
  
  if (*(long *)(*(long *)(param_1 + 0x10) + 0x38) == 0) {
    pvVar2 = operator_new(0x18);
    FUN_10098e620(pvVar2,param_1);
    lVar1 = *(long *)(param_1 + 0x10);
    *(void **)(lVar1 + 0x38) = pvVar2;
    local_30 = FUN_1009c1730;
    local_28 = 0;
    local_40 = FUN_1009bc870;
    local_38 = 0;
    puVar3 = operator_new(0x20);
    *puVar3 = 1;
    *(code **)(puVar3 + 2) = FUN_1009bd700;
    *(code **)(puVar3 + 4) = FUN_1009bc870;
    *(undefined8 *)(puVar3 + 6) = 0;
    QObject::connectImpl
              (local_48,pvVar2,&local_30,lVar1,&local_40,puVar3,0,0,&PTR_staticMetaObject_102236240)
    ;
    QMetaObject::Connection::~Connection(local_48);
  }
  return;
}

