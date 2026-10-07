
undefined8 FUN_10004fae0(long param_1,long param_2)

{
  undefined8 uVar1;
  
  QMutex::lock();
  if (*(long *)(param_1 + 0x88) == param_2) {
    *(undefined8 *)(param_1 + 0x88) = 0;
    uVar1 = 0xf0000000;
  }
  else {
    uVar1 = 0xffffffff;
    FUN_1008e3970("UIEMU","vm",0,
                  "Error: this UIEMU TG request can\'t be not completed (pr=%p, request=0x%x)",
                  param_2,*(undefined4 *)(param_2 + 8));
  }
  QMutex::unlock();
  return uVar1;
}

