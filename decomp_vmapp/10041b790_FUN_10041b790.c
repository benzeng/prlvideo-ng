
char FUN_10041b790(long param_1,undefined8 param_2)

{
  long lVar1;
  char cVar2;
  int iVar3;
  char cVar4;
  
  QMutex::lock();
  iVar3 = (**(code **)(**(long **)(param_1 + 0x10) + 0x98))(*(long **)(param_1 + 0x10),param_2);
  if (iVar3 == 0) {
    QMutex::unlock();
    cVar4 = '\0';
  }
  else {
    cVar2 = QWaitCondition::wait((QMutex *)(param_1 + 0x650),param_1 + 0x648);
    QMutex::unlock();
    cVar4 = '\0';
    if (cVar2 != '\0') {
      lVar1 = *(long *)(param_1 + 0x640);
      if ((((lVar1 != 0) && (*(int *)(lVar1 + 8) == 0x10)) && (*(int *)(lVar1 + 0x18) == 8)) &&
         (*(int *)(lVar1 + 0x10) == 0)) {
        FUN_10041d4a0(param_1,lVar1 + 0x2c);
      }
      FUN_100416cc0(param_1);
      cVar4 = cVar2;
    }
  }
  return cVar4;
}

