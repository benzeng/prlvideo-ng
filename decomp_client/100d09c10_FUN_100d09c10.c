
void FUN_100d09c10(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  
  puVar3 = *(uint **)(param_2 + 0x10);
  uVar5 = (ulong)puVar3[1];
  if (0 < (int)puVar3[1]) {
    puVar6 = (undefined8 *)(param_2 + 0x10);
    lVar7 = 0;
    lVar4 = 0;
    do {
      if (1 < *puVar3) {
        if ((puVar3[2] & 0x7fffffff) == 0) {
          puVar3 = (uint *)QArrayData::allocate(0x10,8,0,2);
          *puVar6 = puVar3;
        }
        else {
          FUN_100d13c20(puVar6,uVar5,puVar3[2] & 0x7fffffff,0);
          puVar3 = (uint *)*puVar6;
        }
      }
      iVar2 = QString::compare((long)puVar3 + lVar7 + *(long *)(puVar3 + 4),param_3,1);
      puVar3 = (uint *)*puVar6;
      if (iVar2 == 0) {
        if (1 < *puVar3) {
          if ((puVar3[2] & 0x7fffffff) == 0) {
            puVar3 = (uint *)QArrayData::allocate(0x10,8,0,2);
            *puVar6 = puVar3;
          }
          else {
            FUN_100d13c20(puVar6,puVar3[1],puVar3[2] & 0x7fffffff,0);
            puVar3 = (uint *)*puVar6;
          }
        }
        piVar1 = *(int **)((long)puVar3 + lVar4 * 0x10 + 8 + *(long *)(puVar3 + 4));
        *param_1 = piVar1;
        if (*piVar1 + 1U < 2) {
          return;
        }
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
        return;
      }
      lVar4 = lVar4 + 1;
      uVar5 = (ulong)(int)puVar3[1];
      lVar7 = lVar7 + 0x10;
    } while (lVar4 < (long)uVar5);
  }
  piVar1 = (int *)*param_4;
  *param_1 = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  return;
}

