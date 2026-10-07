
void FUN_1004ce7d0(long *param_1,undefined8 param_2)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  cVar2 = FUN_1004ee1d0(*(undefined8 *)(*param_1 + 0x30));
  if (cVar2 == '\0') {
    lVar1 = *(long *)(*param_1 + 0xb0);
    local_38 = param_2;
    if (lVar1 != 0) {
      QMutex::lock();
    }
    iVar3 = FUN_100036ff0(lVar1 + 8,&local_38);
    if (lVar1 != 0) {
      QMutex::unlock();
    }
    if (iVar3 == 0) {
      lVar1 = *(long *)(*param_1 + 0x38);
      local_40 = param_2;
      QMutex::lock();
      iVar3 = FUN_100036ff0(lVar1 + 0x10,&local_40);
      QMutex::unlock();
      if (iVar3 == 0) {
        return;
      }
    }
  }
  FUN_1004c07d0(*param_1,param_2,0xf0000000);
  return;
}

