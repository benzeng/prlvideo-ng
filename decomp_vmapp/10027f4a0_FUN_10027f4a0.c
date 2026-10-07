
void FUN_10027f4a0(long param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  
  bVar2 = true;
LAB_10027f4c6:
  iVar3 = FUN_1002efb70(*(undefined8 *)(param_1 + 0x40),1,0xffffffff);
  if (iVar3 != -0xfffd) goto code_r0x00010027f4e5;
  bVar2 = true;
  iVar3 = -0xfffd;
  goto LAB_10027f509;
code_r0x00010027f4e5:
  if (iVar3 == -0xfffc) {
    return;
  }
  if (bVar2) {
LAB_10027f509:
    FUN_1002ef6b0(*(undefined8 *)(param_1 + 0x40));
    do {
      uVar5 = FUN_1000b3d20(DAT_1011c3698);
      *(undefined8 *)(param_1 + 0x70) = uVar5;
      iVar4 = FUN_10027f620(param_1);
      if (iVar4 == 2) goto LAB_10027f560;
    } while (iVar4 != 1);
    lVar6 = FUN_100257d80(param_1);
    LOCK();
    piVar1 = (int *)(lVar6 + 0x31c3c);
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      FUN_1002effe0(*(undefined8 *)(param_1 + 0x78));
    }
LAB_10027f560:
    if (iVar3 == -0xfffe) {
      while( true ) {
        lVar6 = FUN_100257d80(param_1);
        bVar2 = false;
        if (*(int *)(lVar6 + 0x31c3c) == 0) break;
        QThread::msleep(10);
      }
    }
  }
  goto LAB_10027f4c6;
}

