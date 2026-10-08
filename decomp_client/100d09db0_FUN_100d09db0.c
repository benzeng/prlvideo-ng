
undefined4 FUN_100d09db0(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  char local_31;
  
  puVar3 = *(uint **)(param_1 + 0x10);
  uVar5 = (ulong)puVar3[1];
  if (0 < (int)puVar3[1]) {
    puVar6 = (undefined8 *)(param_1 + 0x10);
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
      iVar1 = QString::compare((long)puVar3 + lVar7 + *(long *)(puVar3 + 4),param_2,1);
      if (iVar1 == 0) {
        local_31 = '\0';
        puVar3 = (uint *)*puVar6;
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
        uVar2 = QString::toLongLong((bool *)((long)puVar3 + lVar4 * 0x10 + 8 + *(long *)(puVar3 + 4)
                                            ),(int)&local_31);
        if (local_31 == '\0') {
          return param_4;
        }
        return uVar2;
      }
      lVar4 = lVar4 + 1;
      puVar3 = (uint *)*puVar6;
      uVar5 = (ulong)(int)puVar3[1];
      lVar7 = lVar7 + 0x10;
    } while (lVar4 < (long)uVar5);
  }
  return param_4;
}

