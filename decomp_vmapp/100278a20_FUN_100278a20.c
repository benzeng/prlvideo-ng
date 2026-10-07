
undefined8 * FUN_100278a20(undefined8 *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  
  QMutex::lock();
  plVar2 = *(long **)(param_2 + 0x80);
  if (plVar2 == (long *)0x0) {
    QMutex::unlock();
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    QMutex::unlock();
    if (plVar2[2] != 0) {
      ___dynamic_cast(plVar2[2],PTR_typeinfo_100ba2248,PTR_typeinfo_100ba2240,0);
    }
  }
  iVar4 = FUN_100060640();
  if (iVar4 == 0) {
    CVmGenericNetworkAdapter::getVirtualNetworkID();
  }
  else {
    uVar5 = QString::fromAscii_helper("",0);
    *param_1 = uVar5;
  }
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  return param_1;
}

