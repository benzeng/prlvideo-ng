
undefined8 FUN_10010d7b0(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  
  plVar5 = operator_new(0x18);
  FUN_1000836f0(plVar5);
  DAT_1011c3660 = plVar5;
  QThread::start(plVar5,7);
  QMutex::lock();
  cVar1 = FUN_100710e30();
  if (cVar1 == '\0') {
    QThread::wait((ulong)DAT_1011c3660);
    if (DAT_1011c3660 != (long *)0x0) {
      (**(code **)(*DAT_1011c3660 + 0x20))();
    }
    DAT_1011c3660 = (long *)0x0;
    uVar6 = 0;
  }
  else {
    iVar2 = FUN_1007da300("vm.dark_wake.enable",1);
    iVar3 = FUN_1007da300("vm.dark_wake.wtime",5);
    iVar3 = iVar3 * 0x3c;
    iVar4 = FUN_1007da300("vm.dark_wake.period",0x3c);
    iVar4 = iVar4 * 0x3c;
    iVar8 = 300;
    if (0 < iVar4 && iVar3 < iVar4) {
      iVar8 = iVar3;
    }
    iVar7 = 0xe10;
    if (0 < iVar4 && iVar3 < iVar4) {
      iVar7 = iVar4;
    }
    FUN_100712310(iVar2 != 0);
    FUN_1007122b0(iVar7,iVar8);
    uVar6 = 1;
  }
  return uVar6;
}

