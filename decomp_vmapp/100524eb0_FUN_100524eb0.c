
undefined8 FUN_100524eb0(long param_1,long param_2)

{
  bool bVar1;
  undefined8 uVar2;
  
  QMutex::lock();
  if (*(long *)(param_1 + 0xb8) == param_2) {
    *(undefined8 *)(param_1 + 0xb8) = 0;
    bVar1 = false;
    QMutex::unlock();
    uVar2 = 0xf0000000;
    if (1 < DAT_1011b55f8) {
      FUN_1008e3970("","ShellIntHost",2,"request (id = %d) has been cancelled",
                    *(undefined4 *)(param_2 + 8));
    }
  }
  else {
    bVar1 = true;
    uVar2 = 0xffffffff;
    if (1 < DAT_1011b55f8) {
      FUN_1008e3970("","ShellIntHost",2,"cannot cancel a request");
    }
  }
  if (bVar1) {
    QMutex::unlock();
  }
  return uVar2;
}

