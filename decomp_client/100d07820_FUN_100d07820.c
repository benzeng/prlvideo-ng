
undefined8 FUN_100d07820(long param_1,undefined8 param_2)

{
  int iVar1;
  uint *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  
  puVar2 = *(uint **)(param_1 + 0x18);
  uVar4 = (ulong)puVar2[1];
  if (0 < (int)puVar2[1]) {
    puVar5 = (undefined8 *)(param_1 + 0x18);
    lVar3 = 0;
    do {
      if (1 < *puVar2) {
        if ((puVar2[2] & 0x7fffffff) == 0) {
          puVar2 = (uint *)QArrayData::allocate(8,8,0,2);
          *puVar5 = puVar2;
        }
        else {
          FUN_100d14250(puVar5,uVar4,puVar2[2] & 0x7fffffff,0);
          puVar2 = (uint *)*puVar5;
        }
      }
      iVar1 = QString::compare(*(long *)((long)puVar2 + lVar3 * 8 + *(long *)(puVar2 + 4)) + 8,
                               param_2,0);
      puVar2 = (uint *)*puVar5;
      if (iVar1 == 0) {
        if (1 < *puVar2) {
          if ((puVar2[2] & 0x7fffffff) == 0) {
            puVar2 = (uint *)QArrayData::allocate(8,8,0,2);
            *puVar5 = puVar2;
          }
          else {
            FUN_100d14250(puVar5,puVar2[1],puVar2[2] & 0x7fffffff,0);
            puVar2 = (uint *)*puVar5;
          }
        }
        return *(undefined8 *)((long)puVar2 + lVar3 * 8 + *(long *)(puVar2 + 4));
      }
      lVar3 = lVar3 + 1;
      uVar4 = (ulong)(int)puVar2[1];
    } while (lVar3 < (long)uVar4);
  }
  return 0;
}

