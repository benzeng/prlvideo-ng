
void FUN_1001872a0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  int *piVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    plVar5 = operator_new(8);
    plVar2 = (long *)*param_4;
    piVar3 = (int *)*plVar2;
    if (*piVar3 == 0) {
      if (piVar3[2] < 0) {
        lVar6 = QArrayData::allocate(0x10,8,piVar3[2] & 0x7fffffff,0);
        *plVar5 = lVar6;
        if (lVar6 == 0) {
          qBadAlloc();
          lVar6 = *plVar5;
        }
        *(byte *)(lVar6 + 0xb) = *(byte *)(lVar6 + 0xb) | 0x80;
      }
      else {
        lVar6 = QArrayData::allocate(0x10,8,(long)piVar3[1],0);
        *plVar5 = lVar6;
        if (lVar6 == 0) {
          qBadAlloc();
        }
      }
      lVar6 = *plVar5;
      if ((*(uint *)(lVar6 + 8) & 0x7fffffff) != 0) {
        lVar8 = *plVar2;
        lVar9 = (long)*(int *)(lVar8 + 4) << 4;
        if (lVar9 != 0) {
          puVar7 = (undefined8 *)(lVar8 + *(long *)(lVar8 + 0x10));
          puVar10 = (undefined8 *)(*(long *)(lVar6 + 0x10) + lVar6);
          do {
            uVar4 = *puVar7;
            puVar1 = puVar7 + 1;
            puVar7 = puVar7 + 2;
            puVar10[1] = *puVar1;
            *puVar10 = uVar4;
            puVar10 = puVar10 + 2;
            lVar9 = lVar9 + -0x10;
          } while (lVar9 != 0);
          lVar8 = *plVar2;
        }
        *(undefined4 *)(lVar6 + 4) = *(undefined4 *)(lVar8 + 4);
      }
    }
    else if (*piVar3 == -1) {
      *plVar5 = (long)piVar3;
    }
    else {
      LOCK();
      *piVar3 = *piVar3 + 1;
      UNLOCK();
      *plVar5 = *plVar2;
    }
    *param_2 = plVar5;
    param_4 = param_4 + 1;
  }
  return;
}

