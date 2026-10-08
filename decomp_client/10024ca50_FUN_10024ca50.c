
undefined8
FUN_10024ca50(long param_1,int param_2,int param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6)

{
  undefined8 uVar1;
  
  if (param_2 == 0x3b26) {
    if (param_3 != 1) {
      return 0x80000275;
    }
    CAbstractTask::insertAfterSubTask((int)param_1,7);
    CAbstractTask::removeSubTask((int)param_1);
  }
  else {
    if (param_2 != -0x7ffffcef) {
      return 0x80000009;
    }
    if (param_3 == 2) {
      return 0x80000275;
    }
    if (param_3 == 3) {
      uVar1 = 0;
      if ((*(long *)(param_1 + 0x18) != 0) &&
         (uVar1 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
        uVar1 = *(undefined8 *)(param_1 + 0x20);
      }
      QMetaObject::invokeMethod
                (uVar1,"shutDown",2,0,0,param_6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
      return 0x80000275;
    }
  }
  return 0;
}

