
void FUN_100a0c410(uint param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  void *pvVar2;
  undefined *puVar3;
  uint local_24;
  
  puVar3 = (undefined *)0x0;
  if (param_1 < 9) {
    puVar3 = (&PTR_PTR_102236dd0)[(int)param_1];
  }
  local_24 = param_1;
  QMetaObject::newInstance
            (puVar3,&local_24,"WebPortal::OperationId",param_2,"QVariantHash",param_6,param_3,
             "CSlotInfo",0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  uVar1 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_102236f10);
  pvVar2 = operator_new(0x90);
  FUN_100a112a0(pvVar2,uVar1,param_4);
  FUN_100a11570(pvVar2);
  return;
}

