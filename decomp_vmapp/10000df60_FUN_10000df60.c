
undefined4 FUN_10000df60(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 local_80 [16];
  undefined4 local_70;
  char local_21;
  
  local_21 = '\x01';
  FUN_10000dbf0(local_80,param_1,param_2,&local_21,param_3);
  puVar2 = PTR_s_run_100bed298;
  puVar1 = PTR__NSApp_100ba2068;
  while( true ) {
    QMutex::lock();
    if (local_21 == '\0') break;
    QMutex::unlock();
    (*(code *)PTR__objc_msgSend_100ba25e8)(*(undefined8 *)puVar1,puVar2);
  }
  QMutex::unlock();
  QThread::wait((ulong)local_80);
  FUN_10000ddb0(local_80);
  return local_70;
}

