
void FUN_100990c10(QObject *param_1,QObject *param_2)

{
  QObject::QObject(param_1,param_2);
  *(undefined ***)param_1 = &PTR_FUN_102233dc0;
  *(QObject **)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  QObject::QObject(param_1 + 0x40,(QObject *)0x0);
  *(undefined ***)(param_1 + 0x40) = &PTR_FUN_102234660;
  param_1[0x50] = (QObject)0x0;
  *(undefined **)(param_1 + 0x58) = PTR_shared_null_1021e1288;
  FUN_100994520("NOTIFICATION_WORKING",0,0);
  FUN_10009bee0("quint32",0,0);
  FUN_1009945f0("quint16",0,0);
  FUN_100094ba0("quint64",0,0);
  FUN_10009bee0("err_status_t",0,0);
  FUN_10009bee0("Global::ErrorCode",0,0);
  FUN_1009946e0("MigrationNotification",0,0);
  return;
}

