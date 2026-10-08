
void FUN_10035f070(QObject *param_1,QObject *param_2)

{
  QObject::QObject(param_1,param_2);
  *(undefined ***)param_1 = &PTR_FUN_10220dcf0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  QCursor::QCursor((QCursor *)(param_1 + 0x20),10);
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  param_1[0x38] = (QObject)0x1;
  *(undefined **)(param_1 + 0x40) = PTR_shared_null_1021e1288;
  *(undefined4 *)(param_1 + 0x48) = 0;
  param_1[0x4c] = (QObject)0x1;
  *(undefined8 *)(param_1 + 0x50) = 0;
  FUN_10006ac60(param_1,1);
  return;
}

