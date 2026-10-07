
void FUN_100297f40(long param_1)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  
  plVar2 = *(long **)(param_1 + 0x13780);
  while (plVar2 != (long *)(param_1 + 0x13780)) {
    lVar5 = *plVar2;
    plVar3 = (long *)plVar2[1];
    *(long **)(lVar5 + 8) = plVar3;
    *plVar3 = lVar5;
    *plVar2 = (long)plVar2;
    plVar2[1] = (long)plVar2;
    *(undefined4 *)(plVar2 + -1) = 1;
    uVar1 = *(uint *)(plVar2 + -2);
    if (*(int *)(param_1 + 0x1010) == 0) {
      plVar3 = plVar2 + -0x123;
      if ((uVar1 & 1) == 0) {
        lVar5 = *(long *)(param_1 + 0xfb8);
      }
      else {
        lVar5 = *(long *)(param_1 + 0xfc0);
      }
      *(long *)(lVar5 + 0xf0) = *(long *)(lVar5 + 0xf0) + 1;
      *(undefined4 *)(plVar2 + -0x10b) = 0;
      plVar2[-0x123] = param_1;
      plVar2[-0x121] = 0;
      plVar2[-0x122] = (long)FUN_100296a10;
      lVar5 = *(long *)(param_1 + 0x13800);
      plVar2[-0x120] = *(int *)((long)plVar2 + -0xc) * lVar5;
      plVar2[-0x11f] = lVar5 * plVar2[-3];
      plVar2[-0x11e] = (long)plVar3;
      *(uint *)(plVar2 + -0x11d) = uVar1;
      plVar2[-0x11c] = (long)plVar3;
      *(undefined4 *)(plVar2 + -0x11b) = 0;
      FUN_1004035a0(param_1 + 0x137b8,plVar3,*(undefined8 *)(param_1 + 0x1008),8000000);
      *(byte *)((long)plVar2 + -0x8e7) = *(byte *)((long)plVar2 + -0x8e7) | 0x10;
      FUN_100296b80(param_1,plVar3);
    }
    else {
      *(uint *)(plVar2 + -2) = uVar1 | 8;
      puVar4 = *(undefined8 **)(param_1 + 0x137a8);
      *(long **)(param_1 + 0x137a8) = plVar2;
      *plVar2 = param_1 + 0x137a0;
      plVar2[1] = (long)puVar4;
      *puVar4 = plVar2;
    }
    plVar2 = *(long **)(param_1 + 0x13780);
  }
  plVar2 = *(long **)(param_1 + 0x13790);
  while (plVar2 != (long *)(param_1 + 0x13790)) {
    lVar5 = *plVar2;
    plVar3 = (long *)plVar2[1];
    *(long **)(lVar5 + 8) = plVar3;
    *plVar3 = lVar5;
    *plVar2 = (long)plVar2;
    plVar2[1] = (long)plVar2;
    *(undefined4 *)(plVar2 + -1) = 1;
    uVar1 = *(uint *)(plVar2 + -2);
    if (*(int *)(param_1 + 0x1010) == 0) {
      plVar3 = plVar2 + -0x123;
      if ((uVar1 & 1) == 0) {
        lVar5 = *(long *)(param_1 + 0xfb8);
      }
      else {
        lVar5 = *(long *)(param_1 + 0xfc0);
      }
      *(long *)(lVar5 + 0xf0) = *(long *)(lVar5 + 0xf0) + 1;
      *(undefined4 *)(plVar2 + -0x10b) = 0;
      plVar2[-0x123] = param_1;
      plVar2[-0x121] = 0;
      plVar2[-0x122] = (long)FUN_100296a10;
      lVar5 = *(long *)(param_1 + 0x13800);
      plVar2[-0x120] = *(int *)((long)plVar2 + -0xc) * lVar5;
      plVar2[-0x11f] = lVar5 * plVar2[-3];
      plVar2[-0x11e] = (long)plVar3;
      *(uint *)(plVar2 + -0x11d) = uVar1;
      plVar2[-0x11c] = (long)plVar3;
      *(undefined4 *)(plVar2 + -0x11b) = 0;
      FUN_1004035a0(param_1 + 0x137b8,plVar3,*(undefined8 *)(param_1 + 0x1008),8000000);
      *(byte *)((long)plVar2 + -0x8e7) = *(byte *)((long)plVar2 + -0x8e7) | 0x10;
      FUN_100296b80(param_1,plVar3);
    }
    else {
      *(uint *)(plVar2 + -2) = uVar1 | 8;
      puVar4 = *(undefined8 **)(param_1 + 0x137a8);
      *(long **)(param_1 + 0x137a8) = plVar2;
      *plVar2 = param_1 + 0x137a0;
      plVar2[1] = (long)puVar4;
      *puVar4 = plVar2;
    }
    plVar2 = *(long **)(param_1 + 0x13790);
  }
  return;
}

