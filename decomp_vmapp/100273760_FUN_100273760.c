
uint FUN_100273760(long param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  FUN_1002ef6d0(*(undefined8 *)(param_1 + 0x40));
  uVar5 = 0;
  if (DAT_1011b89cc == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    do {
      uVar1 = 0;
      do {
        uVar3 = uVar1;
        iVar2 = FUN_100273810(param_1);
        uVar1 = 1;
      } while (iVar2 != 0);
      if (((uVar3 == 0) && (DAT_101115c79 != '\0')) && (uVar5 != DAT_1011b89cc - 1)) {
        QThread::yieldCurrentThread();
      }
      uVar4 = uVar4 | uVar3;
      uVar5 = uVar5 + 1;
    } while (uVar5 < DAT_1011b89cc);
  }
  FUN_1002ef6b0(*(undefined8 *)(param_1 + 0x40));
  uVar5 = FUN_100273810(param_1);
  return uVar5 | uVar4;
}

