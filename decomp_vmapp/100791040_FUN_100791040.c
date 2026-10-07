
undefined8 * FUN_100791040(undefined8 *param_1,long *param_2,char param_3)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  char cVar4;
  void *pvVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  ulong uVar9;
  size_t sVar10;
  long lVar11;
  
  lVar11 = *param_2;
  uVar9 = (ulong)*(uint *)(*(long *)(lVar11 + 0x10) + 0x4c);
  sVar10 = 0x90;
  if (1 < uVar9) {
    sVar10 = uVar9 * 0x10 + 0x80;
  }
  pvVar5 = _malloc(sVar10);
  uVar7 = 0;
  if (lVar11 != 0) {
    uVar7 = *(undefined8 *)(lVar11 + 0x10);
  }
  FUN_100791b60(pvVar5,uVar7);
  plVar6 = (long *)FUN_100792890(pvVar5,FUN_100790ef0,1);
  if ((plVar6 == (long *)0x0) || (lVar11 = plVar6[2], lVar11 == 0)) {
    FUN_1008e3970("","IOCommunication",0,"Can\'t allocate memory!");
LAB_100791152:
    *param_1 = 0;
    if (plVar6 == (long *)0x0) {
      return param_1;
    }
  }
  else {
    if (param_3 != '\0') {
      uVar2 = *(uint *)(lVar11 + 0x4c);
      if ((ulong)uVar2 != 0) {
        uVar9 = 1;
        if (1 < uVar2) {
          uVar9 = (ulong)uVar2;
        }
        lVar1 = lVar11 + 0x84 + uVar9 * 8;
        uVar9 = 0;
        do {
          lVar3 = *(long *)(*(long *)(*param_2 + 0x10) + 0x80 + uVar9 * 8);
          uVar7 = 0;
          if (lVar3 != 0) {
            uVar7 = *(undefined8 *)(lVar3 + 0x10);
          }
          cVar4 = FUN_10078f730(lVar11,uVar9 & 0xffffffff,*(undefined4 *)(lVar1 + -4 + uVar9 * 8),
                                uVar7,*(undefined4 *)(lVar1 + uVar9 * 8));
          if (cVar4 == '\0') {
            FUN_1008e3970("","IOCommunication",0,"Can\'t fill buffer!");
            goto LAB_100791152;
          }
          lVar11 = plVar6[2];
          uVar9 = uVar9 + 1;
        } while ((uint)uVar9 < *(uint *)(lVar11 + 0x4c));
      }
    }
    *param_1 = plVar6;
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  plVar8 = plVar6 + 1;
  LOCK();
  lVar11 = *plVar8;
  *(int *)plVar8 = (int)*plVar8 + -1;
  UNLOCK();
  if ((int)lVar11 == 1) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  return param_1;
}

