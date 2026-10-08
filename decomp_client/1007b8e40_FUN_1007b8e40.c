
void FUN_1007b8e40(long param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  QObject *pQVar4;
  int *piVar5;
  int *piVar6;
  
  uVar2 = FUN_100152280();
  lVar3 = FUN_1001548f0(uVar2,param_1 + 0x10);
  if (lVar3 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: can\'t get vmwrap instance.");
    return;
  }
  pQVar4 = (QObject *)FUN_10018f120(lVar3,10,param_2);
  bVar1 = true;
  piVar6 = (int *)0x0;
  if (pQVar4 != (QObject *)0x0) {
    piVar5 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar4);
    piVar6 = (int *)0x0;
    if (piVar5 != (int *)0x0) {
      piVar6 = piVar5;
      if (piVar5[1] != 0) {
        FUN_100149280(pQVar4,param_3,param_4);
        goto LAB_1007b8f14;
      }
      bVar1 = false;
    }
  }
  FUN_100df99c0("","prl_client_app",0,"(!)Error: can\'t get device instance.");
  if (bVar1) {
    return;
  }
LAB_1007b8f14:
  LOCK();
  *piVar6 = *piVar6 + -1;
  UNLOCK();
  if (*piVar6 == 0) {
    operator_delete(piVar6);
  }
  return;
}

