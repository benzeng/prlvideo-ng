
void FUN_100abf8a0(long param_1,ulong *param_2)

{
  ulong uVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  bool bVar8;
  
  puVar3 = *(uint **)(param_1 + 8);
  puVar7 = (undefined8 *)(param_1 + 8);
  if (1 < *puVar3) {
    FUN_100abfda0(puVar7);
    puVar3 = (uint *)*puVar7;
  }
  if (*(uint **)(puVar3 + 4) != (uint *)0x0) {
    uVar1 = *param_2;
    puVar2 = *(uint **)(puVar3 + 4);
    puVar4 = (uint *)0x0;
    do {
      while( true ) {
        puVar5 = puVar2;
        uVar6 = *(ulong *)(puVar5 + 6);
        if (uVar6 == uVar1) break;
        if (uVar1 <= uVar6) goto LAB_100abf903;
LAB_100abf8f2:
        puVar2 = *(uint **)(puVar5 + 4);
        if (*(uint **)(puVar5 + 4) == (uint *)0x0) {
          if (puVar4 == (uint *)0x0) goto LAB_100abf924;
          uVar6 = *(ulong *)(puVar4 + 6);
          puVar5 = puVar4;
          goto LAB_100abf91a;
        }
      }
      uVar6 = uVar1;
      if (puVar5[8] < (uint)param_2[1]) goto LAB_100abf8f2;
LAB_100abf903:
      puVar2 = *(uint **)(puVar5 + 2);
      puVar4 = puVar5;
    } while (*(uint **)(puVar5 + 2) != (uint *)0x0);
LAB_100abf91a:
    bVar8 = uVar1 < uVar6;
    if (uVar1 == uVar6) {
      bVar8 = (uint)param_2[1] < puVar5[8];
    }
    if (!bVar8) goto LAB_100abf92b;
  }
LAB_100abf924:
  puVar5 = puVar3 + 2;
LAB_100abf92b:
  if (1 < *puVar3) {
    FUN_100abfda0(puVar7);
    puVar3 = (uint *)*puVar7;
  }
  if (puVar5 == puVar3 + 2) {
    return;
  }
  if (*(long **)(puVar5 + 10) != (long *)0x0) {
    (**(code **)(**(long **)(puVar5 + 10) + 0x20))();
  }
  FUN_100abfc60(puVar7,puVar5);
  return;
}

