
void FUN_1005f3940(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  
  pcVar8 = (code *)0x0;
  uVar6 = 0;
  uVar7 = 0;
  do {
    QMutex::lock();
    lVar5 = *(long *)(param_1 + 0x58);
    if (lVar5 == 0) {
      if (*(char *)(param_1 + 0x28) == '\0') {
        QWaitCondition::wait((QMutex *)(param_1 + 0x18),param_1 + 0x20);
        lVar5 = *(long *)(param_1 + 0x58);
        if (lVar5 != 0) goto LAB_1005f39c0;
      }
    }
    else {
LAB_1005f39c0:
      uVar1 = *(ulong *)(param_1 + 0x50);
      lVar2 = (*(undefined8 **)(param_1 + 0x38))[uVar1 / 0xaa];
      uVar4 = uVar1 % 0xaa;
      uVar6 = *(undefined8 *)(lVar2 + uVar4 * 0x18);
      pcVar8 = *(code **)(lVar2 + 8 + uVar4 * 0x18);
      uVar7 = *(undefined8 *)(lVar2 + 0x10 + uVar4 * 0x18);
      *(long *)(param_1 + 0x58) = lVar5 + -1;
      *(ulong *)(param_1 + 0x50) = uVar1 + 1;
      if (0x153 < uVar1 + 1) {
        operator_delete((void *)**(undefined8 **)(param_1 + 0x38));
        *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 8;
        *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + -0xaa;
      }
    }
    QMutex::unlock();
    if (*(char *)(param_1 + 0x28) != '\0') {
      return;
    }
    uVar3 = FUN_100585990(uVar6);
    (*pcVar8)(uVar6,uVar7,uVar3);
  } while( true );
}

