
void FUN_100271b40(long param_1)

{
  byte bVar1;
  long *plVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  
  lVar5 = FUN_100257d80();
  if (*(char *)(lVar5 + 0x31cae) == '\0') {
    return;
  }
  *(undefined1 *)(lVar5 + 0x31cae) = 0;
  QTime::start();
  uVar7 = 2;
  if (*(int *)(lVar5 + 0x31c8c) != 2) {
    uVar7 = 1;
  }
  FUN_10025b2f0(param_1 + 0x68,uVar7);
  QMutex::lock();
  bVar1 = *(byte *)(lVar5 + 0x31cad);
  uVar3 = (uint)bVar1;
  if (bVar1 < 0xc5) {
    if (1 < bVar1 - 0x45) {
      if (uVar3 == 0x4d) {
        plVar2 = *(long **)(param_1 + 0x90);
        lVar5 = FUN_100257d80(param_1);
        plVar6 = (long *)(param_1 + 0x98);
        if (plVar2 != (long *)0x0) {
          plVar6 = plVar2;
        }
        FUN_1002724a0(param_1);
        iVar4 = (**(code **)(*plVar6 + 0x30))
                          (plVar6,*(undefined4 *)(lVar5 + 0x31c84),*(undefined4 *)(lVar5 + 0x31c88),
                           *(undefined1 *)(lVar5 + 0x31cac));
        if (iVar4 == *(int *)(lVar5 + 0x31c88)) {
          *(undefined4 *)(lVar5 + 0x31ca8) = 0;
        }
        else {
          *(undefined4 *)(lVar5 + 0x31ca8) = 1;
        }
        goto LAB_100271c59;
      }
      if (uVar3 != 0x66) goto LAB_100271c59;
    }
  }
  else if ((0x21 < uVar3 - 0xc5) || ((0x200000003U >> ((ulong)(uVar3 - 0xc5) & 0x3f) & 1) == 0))
  goto LAB_100271c59;
  FUN_100271cb0(param_1);
LAB_100271c59:
  QMutex::unlock();
  iVar4 = QTime::elapsed();
  if (iVar4 < 10) {
    QThread::msleep((long)(10 - iVar4));
  }
  FUN_100257d60(param_1,0x80);
  return;
}

