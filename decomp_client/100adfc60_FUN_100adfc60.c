
undefined8 *
FUN_100adfc60(undefined8 *param_1,undefined8 param_2,long param_3,undefined4 param_4,
             undefined4 param_5)

{
  long *plVar1;
  undefined8 *puVar2;
  int *piVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined8 local_40;
  undefined1 local_31;
  
  *param_1 = &PTR_FUN_10223b2c8;
  plVar1 = param_1 + 1;
  piVar3 = *(int **)(param_3 + 8);
  if (*piVar3 == 0) {
    if (piVar3[2] < 0) {
      lVar5 = QArrayData::allocate(0x20,8,piVar3[2] & 0x7fffffff,0);
      *plVar1 = lVar5;
      if (lVar5 == 0) {
        qBadAlloc();
        lVar5 = *plVar1;
      }
      *(byte *)(lVar5 + 0xb) = *(byte *)(lVar5 + 0xb) | 0x80;
    }
    else {
      lVar5 = QArrayData::allocate(0x20,8,(long)piVar3[1],0);
      *plVar1 = lVar5;
      if (lVar5 == 0) {
        qBadAlloc();
      }
    }
    lVar5 = *plVar1;
    if ((*(uint *)(lVar5 + 8) & 0x7fffffff) != 0) {
      lVar8 = *(long *)(param_3 + 8);
      lVar9 = (long)*(int *)(lVar8 + 4) << 5;
      if (lVar9 != 0) {
        puVar7 = (undefined8 *)(lVar8 + *(long *)(lVar8 + 0x10));
        puVar6 = (undefined8 *)(lVar5 + *(long *)(lVar5 + 0x10));
        do {
          puVar6[3] = puVar7[3];
          puVar6[2] = puVar7[2];
          uVar4 = *puVar7;
          puVar2 = puVar7 + 1;
          puVar7 = puVar7 + 4;
          puVar6[1] = *puVar2;
          *puVar6 = uVar4;
          puVar6 = puVar6 + 4;
          lVar9 = lVar9 + -0x20;
        } while (lVar9 != 0);
        lVar8 = *(long *)(param_3 + 8);
        lVar5 = *plVar1;
      }
      *(undefined4 *)(lVar5 + 4) = *(undefined4 *)(lVar8 + 4);
    }
  }
  else if (*piVar3 == -1) {
    *plVar1 = (long)piVar3;
  }
  else {
    LOCK();
    *piVar3 = *piVar3 + 1;
    local_31 = *piVar3 != 0;
    UNLOCK();
    *plVar1 = *(long *)(param_3 + 8);
  }
  FUN_100ae66a0(param_1,param_4,1,param_5);
  local_40 = FUN_100ae60d0(param_1,0);
  FUN_100ae65b0(param_1,&local_40);
  return param_1;
}

