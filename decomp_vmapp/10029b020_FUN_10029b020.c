
undefined8 FUN_10029b020(undefined8 param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  lVar2 = *(long *)(param_2 + 0x108);
  QMutex::lock();
  plVar3 = *(long **)(lVar2 + 0x18);
  if (plVar3 == (long *)0x0) {
    QMutex::unlock();
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    QMutex::unlock();
    if (plVar3[2] != 0) {
      ___dynamic_cast(plVar3[2],PTR_typeinfo_100ba2248,PTR_typeinfo_100ba2200,0);
    }
  }
  CVmSoundDevice::getSoundOutputs();
  CVmDevice::getSystemName();
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  return param_1;
}

