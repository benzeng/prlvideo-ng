
long * FUN_1003f6300(long *param_1,long param_2,QString *param_3)

{
  long lVar1;
  char cVar2;
  undefined8 *puVar3;
  uint *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  
  puVar4 = *(uint **)(param_2 + 8);
  uVar6 = (ulong)puVar4[1];
  if (0 < (int)puVar4[1]) {
    puVar8 = (undefined8 *)(param_2 + 8);
    lVar5 = 0;
    do {
      if (1 < *puVar4) {
        if ((puVar4[2] & 0x7fffffff) == 0) {
          puVar4 = (uint *)QArrayData::allocate(8,8,0,2);
          *puVar8 = puVar4;
        }
        else {
          FUN_1003f8c60(puVar8,uVar6,puVar4[2] & 0x7fffffff,0);
          puVar4 = (uint *)*puVar8;
        }
      }
      lVar1 = *(long *)((long)puVar4 + lVar5 * 8 + *(long *)(puVar4 + 4));
      lVar7 = 0;
      if (lVar1 != 0) {
        lVar7 = *(long *)(lVar1 + 0x10);
      }
      cVar2 = operator==((QString *)(lVar7 + 8),param_3);
      puVar4 = (uint *)*puVar8;
      if (cVar2 != '\0') {
        if (1 < *puVar4) {
          if ((puVar4[2] & 0x7fffffff) == 0) {
            puVar4 = (uint *)QArrayData::allocate(8,8,0,2);
            *puVar8 = puVar4;
          }
          else {
            FUN_1003f8c60(puVar8,puVar4[1],puVar4[2] & 0x7fffffff,0);
            puVar4 = (uint *)*puVar8;
          }
        }
        lVar5 = *(long *)((long)puVar4 + lVar5 * 8 + *(long *)(puVar4 + 4));
        *param_1 = lVar5;
        if (lVar5 == 0) {
          return param_1;
        }
        LOCK();
        *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
        UNLOCK();
        return param_1;
      }
      lVar5 = lVar5 + 1;
      uVar6 = (ulong)(int)puVar4[1];
    } while (lVar5 < (long)uVar6);
  }
  puVar3 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
  puVar8 = (undefined8 *)0x0;
  if (puVar3 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar3 + 1) = 1;
    puVar3[2] = 0;
    *puVar3 = &PTR_FUN_101119c38;
    puVar8 = puVar3;
  }
  *param_1 = (long)puVar8;
  return param_1;
}

