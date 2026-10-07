
void FUN_10052b7b0(double param_1,long param_2)

{
  ushort uVar1;
  int iVar2;
  uint *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  
  puVar3 = *(uint **)(param_2 + 8);
  uVar5 = (ulong)puVar3[1];
  if (0 < (int)puVar3[1]) {
    puVar7 = (undefined8 *)(param_2 + 8);
    lVar4 = 0;
    lVar6 = 0;
    do {
      if (1 < *puVar3) {
        if ((puVar3[2] & 0x7fffffff) == 0) {
          puVar3 = (uint *)QArrayData::allocate(0x20,8,0,2);
          *puVar7 = puVar3;
        }
        else {
          FUN_100032120(puVar7,uVar5,puVar3[2] & 0x7fffffff,0);
          puVar3 = (uint *)*puVar7;
        }
      }
      iVar2 = *(int *)((long)puVar3 + lVar4 + 0x18 + *(long *)(puVar3 + 4));
      if (1 < *puVar3) {
        if ((puVar3[2] & 0x7fffffff) == 0) {
          puVar3 = (uint *)QArrayData::allocate(0x20,8,0,2);
          *puVar7 = puVar3;
        }
        else {
          FUN_100032120(puVar7,puVar3[1],puVar3[2] & 0x7fffffff,0);
          puVar3 = (uint *)*puVar7;
        }
      }
      *(int *)((long)puVar3 + lVar4 + 0x18 + *(long *)(puVar3 + 4)) = (int)((double)iVar2 * param_1)
      ;
      if (1 < *puVar3) {
        if ((puVar3[2] & 0x7fffffff) == 0) {
          puVar3 = (uint *)QArrayData::allocate(0x20,8,0,2);
          *puVar7 = puVar3;
        }
        else {
          FUN_100032120(puVar7,puVar3[1],puVar3[2] & 0x7fffffff,0);
          puVar3 = (uint *)*puVar7;
        }
      }
      iVar2 = *(int *)((long)puVar3 + lVar4 + 0x1c + *(long *)(puVar3 + 4));
      if (1 < *puVar3) {
        if ((puVar3[2] & 0x7fffffff) == 0) {
          puVar3 = (uint *)QArrayData::allocate(0x20,8,0,2);
          *puVar7 = puVar3;
        }
        else {
          FUN_100032120(puVar7,puVar3[1],puVar3[2] & 0x7fffffff,0);
          puVar3 = (uint *)*puVar7;
        }
      }
      *(int *)((long)puVar3 + lVar4 + 0x1c + *(long *)(puVar3 + 4)) = (int)((double)iVar2 * param_1)
      ;
      if (1 < *puVar3) {
        if ((puVar3[2] & 0x7fffffff) == 0) {
          puVar3 = (uint *)QArrayData::allocate(0x20,8,0,2);
          *puVar7 = puVar3;
        }
        else {
          FUN_100032120(puVar7,puVar3[1],puVar3[2] & 0x7fffffff,0);
          puVar3 = (uint *)*puVar7;
        }
      }
      uVar1 = *(ushort *)((long)puVar3 + lVar4 + 4 + *(long *)(puVar3 + 4));
      if (1 < *puVar3) {
        if ((puVar3[2] & 0x7fffffff) == 0) {
          puVar3 = (uint *)QArrayData::allocate(0x20,8,0,2);
          *puVar7 = puVar3;
        }
        else {
          FUN_100032120(puVar7,puVar3[1],puVar3[2] & 0x7fffffff,0);
          puVar3 = (uint *)*puVar7;
        }
      }
      *(short *)((long)puVar3 + lVar4 + 4 + *(long *)(puVar3 + 4)) =
           (short)(int)((double)uVar1 * param_1);
      if (1 < *puVar3) {
        if ((puVar3[2] & 0x7fffffff) == 0) {
          puVar3 = (uint *)QArrayData::allocate(0x20,8,0,2);
          *puVar7 = puVar3;
        }
        else {
          FUN_100032120(puVar7,puVar3[1],puVar3[2] & 0x7fffffff,0);
          puVar3 = (uint *)*puVar7;
        }
      }
      uVar1 = *(ushort *)((long)puVar3 + lVar4 + 6 + *(long *)(puVar3 + 4));
      if (1 < *puVar3) {
        if ((puVar3[2] & 0x7fffffff) == 0) {
          puVar3 = (uint *)QArrayData::allocate(0x20,8,0,2);
          *puVar7 = puVar3;
        }
        else {
          FUN_100032120(puVar7,puVar3[1],puVar3[2] & 0x7fffffff,0);
          puVar3 = (uint *)*puVar7;
        }
      }
      *(short *)((long)puVar3 + lVar4 + 6 + *(long *)(puVar3 + 4)) =
           (short)(int)((double)uVar1 * param_1);
      lVar6 = lVar6 + 1;
      uVar5 = (ulong)(int)puVar3[1];
      lVar4 = lVar4 + 0x20;
    } while (lVar6 < (long)uVar5);
  }
  return;
}

