
undefined8 FUN_100035c10(long param_1,long param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  long local_30;
  
  local_30 = param_2;
  QMutex::lock();
  iVar2 = FUN_100036ff0(param_1 + 0x48,&local_30);
  QMutex::unlock();
  if (iVar2 == 0) {
    cVar1 = FUN_100034ae0(param_1,param_2);
    if (cVar1 == '\0') {
      if (*(long *)(param_1 + 0xa0) != param_2) {
        return 0xffffffff;
      }
      *(undefined8 *)(param_1 + 0xa0) = 0;
      if (DAT_1011b55f8 < 3) {
        return 0xf0000000;
      }
      pcVar3 = "Pending notify TG request canceled";
    }
    else {
      if (DAT_1011b55f8 < 3) {
        return 0xf0000000;
      }
      pcVar3 = "Pending command TG request canceled";
    }
  }
  else {
    if (DAT_1011b55f8 < 3) {
      return 0xf0000000;
    }
    pcVar3 = "Pending default TG request canceled";
  }
  FUN_1008e3970("PRINTING_TOOL","vm",3,pcVar3);
  return 0xf0000000;
}

