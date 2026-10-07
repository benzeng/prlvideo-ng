
void FUN_1002a5650(undefined8 *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  
  uVar4 = *param_2;
  uVar1 = param_2[1];
  lVar6 = FUN_1002a6380(*(undefined8 *)param_2);
  if (lVar6 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001002a56d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1);
    return;
  }
  QMutex::lock();
  uVar2 = *(uint *)(lVar6 + 8);
  if (uVar2 < 0x10000) {
    iVar5 = 0;
    uVar8 = *(uint *)(param_1 + 3);
    while (uVar7 = uVar8, uVar7 != 0) {
      uVar8 = uVar7 >> 1;
      lVar10 = (ulong)(uVar8 + iVar5) * 0x10;
      uVar3 = *(uint *)(param_1[4] + lVar10);
      if (uVar2 > uVar3 || uVar3 == uVar2) {
        if (uVar2 <= uVar3) {
          plVar9 = (long *)(param_1[4] + 8 + lVar10);
          goto LAB_1002a5744;
        }
        iVar5 = uVar8 + iVar5 + 1;
        uVar8 = (uVar7 - 1) - uVar8;
      }
    }
    if (iVar5 != 0) {
      lVar10 = (ulong)(iVar5 - 1) * 0x10;
      if (uVar2 <= *(uint *)(param_1[4] + 4 + lVar10)) {
        plVar9 = (long *)(param_1[4] + 8 + lVar10);
        goto LAB_1002a5744;
      }
    }
LAB_1002a5732:
    *(undefined8 *)(lVar6 + 0x28) = 0;
  }
  else {
    if (*(uint *)((long)param_1 + 0x2c) <= uVar2 - 0x10000) goto LAB_1002a5732;
    plVar9 = (long *)(param_1[6] + 8 + (ulong)(uVar2 - 0x10000) * 0x10);
LAB_1002a5744:
    lVar10 = *plVar9;
    *(long *)(lVar6 + 0x28) = lVar10;
    if (lVar10 != 0) {
      uVar4 = (uVar4 ^ uVar1) >> 0x10 ^ uVar4 ^ uVar1;
      uVar11 = (ulong)((uVar4 >> 8 ^ uVar4) & 0xff);
      QMutex::lock();
      *(undefined8 *)(lVar6 + 0x20) = param_1[uVar11 + 8];
      param_1[uVar11 + 8] = lVar6;
      QMutex::unlock();
      iVar5 = (**(code **)(**(long **)(lVar6 + 0x28) + 0x10))(*(long **)(lVar6 + 0x28),lVar6);
      QMutex::unlock();
      if (iVar5 == -1) {
        return;
      }
      plVar9 = param_1 + uVar11 + 8;
      QMutex::lock();
      while( true ) {
        lVar10 = *plVar9;
        if (lVar10 == 0) {
          QMutex::unlock();
          return;
        }
        if (lVar10 == lVar6) break;
        plVar9 = (long *)(lVar10 + 0x20);
      }
      *plVar9 = *(long *)(lVar6 + 0x20);
      QMutex::unlock();
      goto LAB_1002a580b;
    }
  }
  QMutex::unlock();
  iVar5 = -0xffffffe;
LAB_1002a580b:
  FUN_1002a69c0(lVar6,iVar5);
  return;
}

