
undefined4 FUN_100276270(long param_1,char param_2)

{
  long *plVar1;
  char cVar2;
  long *plVar3;
  int iVar4;
  long lVar5;
  char cVar6;
  byte bVar7;
  int iVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  bool bVar11;
  
  cVar2 = *(char *)(param_1 + 0x169);
  QMutex::lock();
  *(undefined2 *)(param_1 + 0x1c2) = 0;
  QMutex::lock();
  plVar3 = *(long **)(param_1 + 0x80);
  if (plVar3 != (long *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  QMutex::unlock();
  uVar9 = 0;
  if (plVar3 != (long *)0x0) {
    uVar9 = 0;
    if (plVar3[2] != 0) {
      uVar9 = ___dynamic_cast(plVar3[2],PTR_typeinfo_100ba2248,PTR_typeinfo_100ba2240,0);
    }
  }
  if (*(char *)(param_1 + 0x168) == '\0') {
    uVar10 = 0x80004008;
    FUN_10025b310(param_1 + 0x68,0);
  }
  else {
    iVar8 = CVmDevice::getConnected();
    cVar6 = FUN_100276c50(param_1,uVar9,1);
    iVar4 = 0;
    if (cVar6 != '\0') {
      iVar4 = iVar8;
    }
    iVar8 = CVmDevice::getEmulatedType();
    if ((iVar8 == 2) && (iVar8 = CVmGenericNetworkAdapter::getBoundAdapterIndex(), iVar8 < 0)) {
      *(undefined1 *)(param_1 + 0x1c2) = 1;
    }
    bVar11 = *(char *)(param_1 + 0x168) != '\0';
    bVar7 = bVar11 && iVar4 == 1;
    if ((DAT_101115c70 != 0) && (bVar11 && iVar4 == 1)) {
      bVar7 = FUN_1002f0cd0(param_1);
    }
    *(uint *)(*(long *)(param_1 + 0x160) + 8) = (uint)(~bVar7 & 1);
    FUN_1002effe0(*(undefined8 *)(param_1 + 0x178));
    if ((((cVar2 != '\0') && (iVar4 == 1)) && (param_2 == '\x01')) &&
       (iVar8 = FUN_100060640(), iVar8 != 0)) {
      FUN_100272c10();
    }
    *(undefined4 *)(*(long *)(param_1 + 0x160) + 4) = 1;
    uVar10 = 0;
    FUN_10025b310(param_1 + 0x68,iVar4);
  }
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  QMutex::unlock();
  return uVar10;
}

