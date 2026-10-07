
void FUN_1004673d0(QObject *param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  CVmTools local_1a0 [368];
  
  QObject::QObject(param_1,(QObject *)0x0);
  FUN_1004c0650(param_1 + 0x10,param_2);
  *(undefined ***)param_1 = &PTR_FUN_100bc1330;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_100bc13c0;
  QMutex::QMutex((QMutex *)(param_1 + 0x38),0);
  puVar2 = PTR_shared_null_100ba2188;
  *(undefined **)(param_1 + 0x40) = PTR_shared_null_100ba2188;
  *(undefined8 *)(param_1 + 0x48) = 0;
  QMutex::QMutex((QMutex *)(param_1 + 0x50),0);
  param_1[0x58] = (QObject)0x0;
  *(undefined **)(param_1 + 0x60) = puVar2;
  QMutex::QMutex((QMutex *)(param_1 + 0x68),0);
  *(undefined **)(param_1 + 0x70) = PTR_shared_null_100ba20d0;
  param_1[0x78] = (QObject)0x0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  FUN_1004c0790(param_1 + 0x10,0x8010,0x8012);
  pcVar1 = *(code **)(*(long *)param_1 + 0x70);
  CVmTools::CVmTools(local_1a0);
  (*pcVar1)(param_1,local_1a0);
  CVmTools::~CVmTools(local_1a0);
  return;
}

