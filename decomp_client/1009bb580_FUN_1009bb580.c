
void FUN_1009bb580(QString *param_1,undefined8 param_2,undefined8 param_3)

{
  QTypedArrayData<unsigned_short> *pQVar1;
  undefined4 *puVar2;
  Connection local_58 [8];
  QArrayData *local_50;
  code *local_48;
  undefined8 local_40;
  code *local_38;
  undefined8 local_30;
  undefined1 local_21;
  
  FUN_1009985f0(param_1,param_2,4,param_3);
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)&PTR_FUN_102236110;
  pQVar1 = operator_new(0x18);
  FUN_1009bce60(pQVar1,param_1);
  param_1[10].field0_0x0 = pQVar1;
  QMetaObject::tr((char *)&local_50,PTR_staticMetaObject_1021e1520,
                  (int)PTR_s_Preparing_to_Copy_10227df28);
  CAbstractWizardPage::setTitle(param_1);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1009bb628;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1009bb628:
  pQVar1 = param_1[10].field0_0x0;
  local_38 = FUN_1009c1920;
  local_30 = 0;
  local_48 = FUN_1009bb720;
  local_40 = 0;
  puVar2 = operator_new(0x20);
  *puVar2 = 1;
  *(code **)(puVar2 + 2) = FUN_1009bc600;
  *(code **)(puVar2 + 4) = FUN_1009bb720;
  *(undefined8 *)(puVar2 + 6) = 0;
  QObject::connectImpl
            (local_58,pQVar1,&local_38,param_1,&local_48,puVar2,0,0,&PTR_staticMetaObject_102236300)
  ;
  QMetaObject::Connection::~Connection(local_58);
  return;
}

