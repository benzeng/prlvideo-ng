
undefined8 FUN_100518610(long param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  undefined8 local_30;
  undefined4 local_24;
  
  local_30 = param_2;
  QMutex::lock();
  iVar2 = FUN_100036ff0((long *)(param_1 + 0x78),&local_30);
  if (iVar2 == 0) {
    FUN_100036ff0(param_1 + 0x70,&local_30);
  }
  lVar1 = *(long *)(param_1 + 0x78);
  if ((*(int *)(lVar1 + 0xc) == *(int *)(lVar1 + 8)) && (*(char *)(param_1 + 0x68) != '\0')) {
    *(undefined1 *)(param_1 + 0x68) = 0;
    local_24 = 1;
    FUN_100518f50(param_1,&local_24,4);
  }
  QMutex::unlock();
  return 0xf0000000;
}

