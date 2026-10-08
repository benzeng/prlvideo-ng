
void FUN_100d31140(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = QTime::currentTime();
  param_1[1] = uVar1;
  QTime::start();
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0xffffffff;
  *param_1 = 0;
  param_1[0x12] = param_2;
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 != 0) {
    uVar3 = *(ulong *)(param_1 + 0xe);
    do {
      lVar2 = lVar2 + -1;
      *(long *)(param_1 + 0x10) = lVar2;
      uVar3 = uVar3 + 1;
      *(ulong *)(param_1 + 0xe) = uVar3;
      if (0x3ff < uVar3) {
        operator_delete((void *)**(undefined8 **)(param_1 + 8));
        *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
        uVar3 = *(long *)(param_1 + 0xe) - 0x200;
        *(ulong *)(param_1 + 0xe) = uVar3;
        lVar2 = *(long *)(param_1 + 0x10);
      }
    } while (lVar2 != 0);
  }
  return;
}

