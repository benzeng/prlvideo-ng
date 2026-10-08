
long * FUN_100cceec0(long *param_1,undefined8 *param_2,QString *param_3)

{
  long lVar1;
  char cVar2;
  undefined8 *puVar3;
  uint *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  QString *pQVar8;
  
  puVar4 = (uint *)*param_2;
  uVar7 = (ulong)puVar4[1];
  if (0 < (int)puVar4[1]) {
    lVar6 = 0;
    do {
      if (1 < *puVar4) {
        if ((puVar4[2] & 0x7fffffff) == 0) {
          puVar4 = (uint *)QArrayData::allocate(8,8,0,2);
          *param_2 = puVar4;
        }
        else {
          FUN_100ccf490(param_2,uVar7,puVar4[2] & 0x7fffffff,0);
          puVar4 = (uint *)*param_2;
        }
      }
      lVar1 = *(long *)((long)puVar4 + lVar6 * 8 + *(long *)(puVar4 + 4));
      pQVar8 = (QString *)0x0;
      if (lVar1 != 0) {
        pQVar8 = *(QString **)(lVar1 + 0x10);
      }
      cVar2 = operator==(pQVar8,param_3);
      puVar4 = (uint *)*param_2;
      if (cVar2 != '\0') {
        if (1 < *puVar4) {
          if ((puVar4[2] & 0x7fffffff) == 0) {
            puVar4 = (uint *)QArrayData::allocate(8,8,0,2);
            *param_2 = puVar4;
          }
          else {
            FUN_100ccf490(param_2,puVar4[1],puVar4[2] & 0x7fffffff,0);
            puVar4 = (uint *)*param_2;
          }
        }
        lVar6 = *(long *)((long)puVar4 + lVar6 * 8 + *(long *)(puVar4 + 4));
        *param_1 = lVar6;
        if (lVar6 == 0) {
          return param_1;
        }
        LOCK();
        *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
        UNLOCK();
        return param_1;
      }
      lVar6 = lVar6 + 1;
      uVar7 = (ulong)(int)puVar4[1];
    } while (lVar6 < (long)uVar7);
  }
  puVar3 = operator_new(0x18,(nothrow_t *)PTR_nothrow_1021e1620);
  puVar5 = (undefined8 *)0x0;
  if (puVar3 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar3 + 1) = 1;
    puVar3[2] = 0;
    *puVar3 = &PTR_FUN_10230f430;
    puVar5 = puVar3;
  }
  *param_1 = (long)puVar5;
  return param_1;
}

