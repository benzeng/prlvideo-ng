
void FUN_100415d60(QThread *param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  QThread::QThread(param_1,(QObject *)0x0);
  ___bzero(param_1 + 0x18,0x88);
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined ***)param_1 = &PTR_FUN_100bc0738;
  QMutex::QMutex((QMutex *)(param_1 + 0x618),0);
  QWaitCondition::QWaitCondition((QWaitCondition *)(param_1 + 0x620));
  puVar1 = PTR_shared_null_100ba20d0;
  *(undefined **)(param_1 + 0x628) = PTR_shared_null_100ba20d0;
  QMutex::QMutex((QMutex *)(param_1 + 0x648),0);
  QWaitCondition::QWaitCondition((QWaitCondition *)(param_1 + 0x650));
  *(undefined **)(param_1 + 0x658) = PTR_shared_null_100ba20d8;
  *(undefined **)(param_1 + 0x668) = puVar1;
  *(undefined4 *)(param_1 + 0x60c) = 0;
  *(undefined2 *)(param_1 + 0x604) = 0x759;
  *(undefined4 *)(param_1 + 0x608) = 1;
  *(undefined4 *)(param_1 + 0x630) = 0;
  *(undefined4 *)(param_1 + 0x610) = 0;
  *(undefined8 *)(param_1 + 0x640) = 0;
  *(undefined8 *)(param_1 + 0x638) = 0;
  return;
}

