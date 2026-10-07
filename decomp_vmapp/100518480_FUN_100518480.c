
undefined8 FUN_100518480(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long local_38;
  undefined4 local_30;
  undefined4 local_2c;
  
  local_38 = param_2;
  QMutex::lock();
  if (*(int *)(param_2 + 8) == 0x9020) {
    if ((*(int *)(*(long *)(param_1 + 0x78) + 0xc) != *(int *)(*(long *)(param_1 + 0x78) + 8)) &&
       (*(char *)(param_1 + 0x68) != '\0')) {
      *(undefined1 *)(param_1 + 0x68) = 0;
      local_2c = 1;
      FUN_100518f50(param_1,&local_2c,4);
    }
    if (*(char *)(param_1 + 0x68) == '\0') {
      *(undefined1 *)(param_1 + 0x68) = 1;
      local_30 = 0;
      FUN_100518f50(param_1,&local_30,4);
    }
    uVar2 = 0xffffffff;
    FUN_100036f00(param_1 + 0x78,&local_38);
  }
  else {
    uVar2 = 0xf0000002;
    if ((*(int *)(param_2 + 8) == 0x9021) && (uVar2 = 0xf0000003, *(short *)(param_2 + 0x16) != 0))
    {
      lVar1 = FUN_1002a6120(param_2,0,1);
      if ((lVar1 != 0) && (uVar2 = 0xf0000009, 0x2f < *(uint *)(lVar1 + 8))) {
        uVar2 = 0xffffffff;
        FUN_100036f00(param_1 + 0x70,&local_38);
      }
    }
  }
  QMutex::unlock();
  return uVar2;
}

