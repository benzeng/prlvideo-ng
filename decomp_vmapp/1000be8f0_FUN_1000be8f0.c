
undefined8 FUN_1000be8f0(long param_1)

{
  int iVar1;
  long *plVar2;
  
  if (param_1 != 0) {
    plVar2 = (long *)___dynamic_cast(param_1,&PTR_vtable_100baea70,&PTR_vtable_100bef130,
                                     0xfffffffffffffffe);
    if (plVar2 != (long *)0x0) {
      QMutex::lock();
      iVar1 = CVmDevice::getConnected();
      QMutex::unlock();
      if (iVar1 == 1) {
        (**(code **)(*plVar2 + 0x40))(plVar2);
      }
    }
  }
  return 0;
}

