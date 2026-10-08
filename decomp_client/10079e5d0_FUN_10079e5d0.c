
void FUN_10079e5d0(long *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  void *pvVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  long lVar7;
  long lVar8;
  
  iVar4 = (**(code **)(*param_1 + 0x70))();
  plVar1 = param_1 + 2;
  if (0 < iVar4) {
    lVar7 = 0;
    do {
      lVar8 = 0;
      while( true ) {
        puVar5 = (uint *)*plVar1;
        if (1 < *puVar5) {
          if ((puVar5[2] & 0x7fffffff) == 0) {
            puVar5 = (uint *)QArrayData::allocate(8,8,0,2);
            *plVar1 = (long)puVar5;
          }
          else {
            FUN_1007a20d0(plVar1,puVar5[1],puVar5[2] & 0x7fffffff,0);
            puVar5 = (uint *)*plVar1;
          }
        }
        iVar4 = *(int *)(*(long *)((long)puVar5 + lVar7 * 8 + *(long *)(puVar5 + 4)) + 4);
        if (1 < *puVar5) {
          if ((puVar5[2] & 0x7fffffff) == 0) {
            puVar5 = (uint *)QArrayData::allocate(8,8,0,2);
            *plVar1 = (long)puVar5;
          }
          else {
            FUN_1007a20d0(plVar1,puVar5[1],puVar5[2] & 0x7fffffff,0);
            puVar5 = (uint *)*plVar1;
          }
        }
        puVar2 = (undefined8 *)((long)puVar5 + lVar7 * 8 + *(long *)(puVar5 + 4));
        if (iVar4 <= lVar8) break;
        puVar5 = (uint *)*puVar2;
        if (1 < *puVar5) {
          if ((puVar5[2] & 0x7fffffff) == 0) {
            puVar5 = (uint *)QArrayData::allocate(8,8,0,2);
            *puVar2 = puVar5;
          }
          else {
            FUN_1007a1f40(puVar2,puVar5[1],puVar5[2] & 0x7fffffff,0);
            puVar5 = (uint *)*puVar2;
          }
        }
        if (*(long *)((long)puVar5 + lVar8 * 8 + *(long *)(puVar5 + 4)) != 0) {
          puVar5 = (uint *)*plVar1;
          if (1 < *puVar5) {
            if ((puVar5[2] & 0x7fffffff) == 0) {
              puVar5 = (uint *)QArrayData::allocate(8,8,0,2);
              *plVar1 = (long)puVar5;
            }
            else {
              FUN_1007a20d0(plVar1,puVar5[1],puVar5[2] & 0x7fffffff,0);
              puVar5 = (uint *)*plVar1;
            }
          }
          puVar6 = *(uint **)((long)puVar5 + lVar7 * 8 + *(long *)(puVar5 + 4));
          if (1 < *puVar6) {
            puVar2 = (undefined8 *)((long)puVar5 + lVar7 * 8 + *(long *)(puVar5 + 4));
            if ((puVar6[2] & 0x7fffffff) == 0) {
              puVar6 = (uint *)QArrayData::allocate(8,8,0,2);
              *puVar2 = puVar6;
            }
            else {
              FUN_1007a1f40(puVar2,puVar6[1],puVar6[2] & 0x7fffffff,0);
              puVar6 = (uint *)*puVar2;
            }
          }
          pvVar3 = *(void **)((long)puVar6 + lVar8 * 8 + *(long *)(puVar6 + 4));
          if (pvVar3 != (void *)0x0) {
            FUN_1007a1cf0((long)pvVar3 + 0x30);
            operator_delete(pvVar3);
          }
        }
        lVar8 = lVar8 + 1;
      }
      FUN_1007a1540(puVar2);
      lVar7 = lVar7 + 1;
      iVar4 = (**(code **)(*param_1 + 0x70))();
    } while (lVar7 < iVar4);
  }
  FUN_1007a16f0(plVar1);
  return;
}

