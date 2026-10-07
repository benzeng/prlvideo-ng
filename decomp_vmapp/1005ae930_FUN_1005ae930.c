
undefined1 FUN_1005ae930(long *param_1)

{
  long lVar1;
  long *plVar2;
  uint uVar3;
  undefined4 uVar4;
  char cVar5;
  uint *puVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined4 *puVar14;
  ulong uVar15;
  undefined1 uVar16;
  long lVar17;
  int local_34;
  
  plVar2 = param_1 + 0x215;
  uVar3 = *(uint *)(param_1[0x215] + 4);
  uVar8 = *(uint *)(param_1[0x215] + 8) & 0x7fffffff;
  uVar9 = uVar8;
  if ((int)uVar8 < (int)uVar3) {
    uVar9 = uVar3;
  }
  FUN_1005b5560(plVar2,uVar3,uVar9,(ulong)((int)uVar8 < (int)uVar3) << 3);
  lVar11 = param_1[0x215];
  uVar10 = (ulong)*(int *)(lVar11 + 4);
  if ((uVar10 != 0) && ((uVar10 & 0x3fffffffffffffff) != 0)) {
    lVar17 = lVar11 + *(long *)(lVar11 + 0x10);
    uVar12 = (uVar10 * 4 - 4 >> 2) + 1;
    uVar15 = 0;
    if ((uVar12 & 0x7ffffffffffffff8) != 0) {
      lVar1 = uVar10 * 4;
      uVar10 = uVar10 - (uVar12 & 0x7ffffffffffffff8);
      puVar14 = (undefined4 *)(lVar11 + -0x10 + *(long *)(lVar11 + 0x10) + lVar1);
      uVar7 = uVar12 & 0xfffffffffffffff8;
      do {
        *puVar14 = 0xffffffff;
        puVar14[1] = 0xffffffff;
        puVar14[2] = 0xffffffff;
        puVar14[3] = 0xffffffff;
        puVar14[-4] = 0xffffffff;
        puVar14[-3] = 0xffffffff;
        puVar14[-2] = 0xffffffff;
        puVar14[-1] = 0xffffffff;
        puVar14 = puVar14 + -8;
        uVar7 = uVar7 - 8;
        uVar15 = uVar12 & 0x7ffffffffffffff8;
      } while (uVar7 != 0);
    }
    lVar11 = lVar17 + uVar10 * 4;
    if (uVar12 != uVar15) {
      do {
        *(undefined4 *)(lVar11 + -4) = 0xffffffff;
        lVar11 = lVar11 + -4;
      } while (lVar17 != lVar11);
    }
  }
  QMutex::lock();
  uVar4 = *(undefined4 *)(*param_1 + 0x30);
  puVar6 = (uint *)param_1[0x215];
  if (1 < *puVar6) {
    if ((puVar6[2] & 0x7fffffff) == 0) {
      puVar6 = (uint *)QArrayData::allocate(4,8,0,2);
      *plVar2 = (long)puVar6;
    }
    else {
      FUN_1005b5560(plVar2,puVar6[1],puVar6[2] & 0x7fffffff,0);
      puVar6 = (uint *)*plVar2;
    }
  }
  *(undefined4 *)((long)puVar6 + *(long *)(puVar6 + 4)) = uVar4;
  lVar11 = *param_1;
  lVar17 = 0;
  for (puVar13 = *(undefined8 **)(lVar11 + 0x20); puVar13 != (undefined8 *)(lVar11 + 0x20);
      puVar13 = (undefined8 *)*puVar13) {
    uVar4 = *(undefined4 *)(puVar13 + 2);
    if (1 < *puVar6) {
      if ((puVar6[2] & 0x7fffffff) == 0) {
        puVar6 = (uint *)QArrayData::allocate(4,8,0,2);
        *plVar2 = (long)puVar6;
      }
      else {
        FUN_1005b5560(plVar2,puVar6[1],puVar6[2] & 0x7fffffff,0);
        puVar6 = (uint *)*plVar2;
      }
    }
    *(undefined4 *)((long)puVar6 + lVar17 + 4 + *(long *)(puVar6 + 4)) = uVar4;
    lVar11 = *param_1;
    lVar17 = lVar17 + 4;
  }
  QMutex::unlock();
  local_34 = 0;
  puVar6 = (uint *)param_1[0x215];
  if (1 < *puVar6) {
    if ((puVar6[2] & 0x7fffffff) == 0) {
      puVar6 = (uint *)QArrayData::allocate(4,8,0,2);
      *plVar2 = (long)puVar6;
    }
    else {
      FUN_1005b5560(plVar2,puVar6[1],puVar6[2] & 0x7fffffff,0);
      puVar6 = (uint *)*plVar2;
    }
  }
  cVar5 = FUN_1007080a0(param_1 + 5,(long)puVar6 + *(long *)(puVar6 + 4),0x1004,&local_34,0x1000);
  if ((local_34 != 0x1004) || (uVar16 = 1, cVar5 != '\x01')) {
    uVar16 = 0;
    FUN_1008e3970("","vdisk",0,"Unable to write LRU (written %u, expected %u), err = %u",local_34,
                  0x1004,*(undefined4 *)((long)param_1 + 0x3c));
  }
  return uVar16;
}

