
void FUN_100ae66a0(long param_1,int param_2,uint param_3,int param_4)

{
  int *piVar1;
  uint uVar2;
  uint *puVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
  puVar3 = *(uint **)(param_1 + 8);
  uVar2 = puVar3[1];
  if ((int)uVar2 <= param_2) {
    return;
  }
  if (3 < param_3) {
    return;
  }
  plVar5 = (long *)(param_1 + 8);
  switch(param_3) {
  case 0:
    if (1 < *puVar3) {
      if ((puVar3[2] & 0x7fffffff) == 0) {
        puVar3 = (uint *)QArrayData::allocate(0x20,8,0,2);
        *plVar5 = (long)puVar3;
      }
      else {
        FUN_100ae7220(plVar5,uVar2,puVar3[2] & 0x7fffffff,0);
        puVar3 = (uint *)*plVar5;
      }
    }
    lVar6 = (long)param_2 * 0x20;
    piVar1 = (int *)((long)puVar3 + lVar6 + 0x18 + *(long *)(puVar3 + 4));
    *piVar1 = *piVar1 - param_4;
    if (1 < *puVar3) {
      if ((puVar3[2] & 0x7fffffff) == 0) {
        puVar3 = (uint *)QArrayData::allocate(0x20,8,0,2);
        *plVar5 = (long)puVar3;
      }
      else {
        FUN_100ae7220(plVar5,puVar3[1],puVar3[2] & 0x7fffffff,0);
        puVar3 = (uint *)*plVar5;
      }
    }
    lVar4 = (long)puVar3 + *(long *)(puVar3 + 4);
    break;
  case 1:
    if (1 < *puVar3) {
      if ((puVar3[2] & 0x7fffffff) == 0) {
        puVar3 = (uint *)QArrayData::allocate(0x20,8,0,2);
        *plVar5 = (long)puVar3;
      }
      else {
        FUN_100ae7220(plVar5,uVar2,puVar3[2] & 0x7fffffff,0);
        puVar3 = (uint *)*plVar5;
      }
    }
    lVar6 = (long)param_2 * 0x20;
    piVar1 = (int *)((long)puVar3 + lVar6 + 0x1c + *(long *)(puVar3 + 4));
    *piVar1 = *piVar1 - param_4;
    if (1 < *puVar3) {
      if ((puVar3[2] & 0x7fffffff) == 0) {
        lVar4 = QArrayData::allocate(0x20,8,0,2);
        *plVar5 = lVar4;
        lVar4 = lVar4 + *(long *)(lVar4 + 0x10);
        goto LAB_100ae68cb;
      }
      FUN_100ae7220(plVar5,puVar3[1],puVar3[2] & 0x7fffffff,0);
      puVar3 = (uint *)*plVar5;
    }
    lVar4 = (long)puVar3 + *(long *)(puVar3 + 4);
    goto LAB_100ae68cb;
  case 2:
    if (1 < *puVar3) {
      if ((puVar3[2] & 0x7fffffff) == 0) {
        puVar3 = (uint *)QArrayData::allocate(0x20,8,0,2);
        *plVar5 = (long)puVar3;
      }
      else {
        FUN_100ae7220(plVar5,uVar2,puVar3[2] & 0x7fffffff,0);
        puVar3 = (uint *)*plVar5;
      }
    }
    lVar4 = (long)puVar3 + *(long *)(puVar3 + 4);
    lVar6 = (long)param_2 << 5;
    break;
  case 3:
    if (1 < *puVar3) {
      if ((puVar3[2] & 0x7fffffff) == 0) {
        puVar3 = (uint *)QArrayData::allocate(0x20,8,0,2);
        *plVar5 = (long)puVar3;
      }
      else {
        FUN_100ae7220(plVar5,uVar2,puVar3[2] & 0x7fffffff,0);
        puVar3 = (uint *)*plVar5;
      }
    }
    lVar4 = (long)puVar3 + *(long *)(puVar3 + 4);
    lVar6 = (long)param_2 << 5;
LAB_100ae68cb:
    *(short *)(lVar6 + 6 + lVar4) = *(short *)(lVar6 + 6 + lVar4) + (short)param_4;
    return;
  }
  *(short *)(lVar6 + 4 + lVar4) = *(short *)(lVar6 + 4 + lVar4) + (short)param_4;
  return;
}

