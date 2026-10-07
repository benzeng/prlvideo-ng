
undefined8 FUN_100542390(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  int local_34;
  long local_30;
  
  uVar2 = 0xf0000003;
  if (((*(short *)(param_2 + 0x16) != 0) &&
      (local_30 = param_2, lVar1 = FUN_1002a6120(param_2,0,1), lVar1 != 0)) &&
     (3 < *(uint *)(lVar1 + 8))) {
    FUN_1002a5990(lVar1,0,&local_34,4);
    QMutex::lock();
    if (local_34 == *(int *)(param_1 + 0x78)) {
      uVar2 = 0xffffffff;
      FUN_100036f00(param_1 + 0x68,&local_30);
      QMutex::unlock();
    }
    else {
      local_34 = *(int *)(param_1 + 0x78);
      QMutex::unlock();
      uVar2 = 0;
      FUN_1002a5a50(lVar1,0,&local_34,4);
    }
  }
  return uVar2;
}

