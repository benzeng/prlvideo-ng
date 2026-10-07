
undefined1 FUN_1005aebd0(long *param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  char cVar7;
  uint *puVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  undefined1 uVar14;
  undefined4 *puVar15;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  int local_2c;
  
  plVar6 = param_1 + 0x215;
  uVar3 = *(uint *)(param_1[0x215] + 4);
  uVar11 = *(uint *)(param_1[0x215] + 8) & 0x7fffffff;
  uVar17 = uVar11;
  if ((int)uVar11 < (int)uVar3) {
    uVar17 = uVar3;
  }
  FUN_1005b5560(plVar6,uVar3,uVar17,(ulong)((int)uVar11 < (int)uVar3) << 3);
  puVar8 = (uint *)param_1[0x215];
  uVar12 = (ulong)(int)puVar8[1];
  if ((uVar12 != 0) && ((uVar12 & 0x3fffffffffffffff) != 0)) {
    lVar1 = (long)puVar8 + *(long *)(puVar8 + 4);
    uVar18 = (uVar12 * 4 - 4 >> 2) + 1;
    uVar16 = 0;
    if ((uVar18 & 0x7ffffffffffffff8) != 0) {
      lVar13 = uVar12 * 4;
      uVar12 = uVar12 - (uVar18 & 0x7ffffffffffffff8);
      puVar15 = (undefined4 *)((long)puVar8 + *(long *)(puVar8 + 4) + lVar13 + -0x10);
      uVar9 = uVar18 & 0xfffffffffffffff8;
      do {
        *puVar15 = 0xffffffff;
        puVar15[1] = 0xffffffff;
        puVar15[2] = 0xffffffff;
        puVar15[3] = 0xffffffff;
        puVar15[-4] = 0xffffffff;
        puVar15[-3] = 0xffffffff;
        puVar15[-2] = 0xffffffff;
        puVar15[-1] = 0xffffffff;
        puVar15 = puVar15 + -8;
        uVar9 = uVar9 - 8;
        uVar16 = uVar18 & 0x7ffffffffffffff8;
      } while (uVar9 != 0);
    }
    lVar13 = lVar1 + uVar12 * 4;
    if (uVar18 != uVar16) {
      do {
        *(undefined4 *)(lVar13 + -4) = 0xffffffff;
        lVar13 = lVar13 + -4;
      } while (lVar1 != lVar13);
    }
  }
  local_2c = 0;
  if (1 < *puVar8) {
    if ((puVar8[2] & 0x7fffffff) == 0) {
      puVar8 = (uint *)QArrayData::allocate(4,8,0,2);
      *plVar6 = (long)puVar8;
    }
    else {
      FUN_1005b5560(plVar6,puVar8[1],puVar8[2] & 0x7fffffff,0);
      puVar8 = (uint *)*plVar6;
    }
  }
  cVar7 = FUN_100707fb0(param_1 + 5,(long)puVar8 + *(long *)(puVar8 + 4),0x1004,&local_2c,0x1000);
  if ((local_2c == 0x1004) && (cVar7 == '\x01')) {
    QMutex::lock();
    lVar1 = param_1[0x215];
    lVar13 = *(long *)(lVar1 + 0x10);
    uVar3 = *(uint *)(lVar1 + lVar13);
    lVar4 = *param_1;
    *(uint *)(lVar4 + 0x30) = uVar3;
    if (uVar3 != 0) {
      lVar5 = *(long *)(lVar4 + 0x10);
      uVar17 = 1;
      do {
        lVar10 = (ulong)*(uint *)(lVar1 + lVar13 + (long)(int)uVar17 * 4) * 0x40;
        lVar2 = lVar5 + 0x28 + lVar10;
        plVar6 = *(long **)(lVar4 + 0x28);
        *(long *)(lVar4 + 0x28) = lVar2;
        *(long *)(lVar5 + 0x28 + lVar10) = lVar4 + 0x20;
        *(long **)(lVar5 + 0x30 + lVar10) = plVar6;
        *plVar6 = lVar2;
        uVar17 = uVar17 + 1;
      } while (uVar17 <= uVar3);
    }
    QMutex::unlock();
    uVar14 = 1;
  }
  else {
    uVar14 = 0;
    FUN_1008e3970("","vdisk",0,"Unable to read LRU (readed %u, expected %u), err = %u",local_2c,
                  0x1004,*(undefined4 *)((long)param_1 + 0x3c));
  }
  return uVar14;
}

