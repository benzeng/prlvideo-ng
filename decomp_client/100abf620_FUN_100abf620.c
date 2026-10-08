
undefined8 FUN_100abf620(undefined8 *param_1,ulong *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  uint *puVar3;
  uint *puVar4;
  void *pvVar5;
  uint *puVar6;
  uint *puVar7;
  ulong uVar8;
  bool bVar9;
  void *local_30;
  
  puVar1 = param_1 + 1;
  puVar4 = (uint *)param_1[1];
  if (1 < *puVar4) {
    FUN_100abfda0(puVar1);
    puVar4 = (uint *)*puVar1;
  }
  if (*(uint **)(puVar4 + 4) != (uint *)0x0) {
    uVar2 = *param_2;
    puVar3 = *(uint **)(puVar4 + 4);
    puVar7 = (uint *)0x0;
    do {
      while( true ) {
        puVar6 = puVar3;
        uVar8 = *(ulong *)(puVar6 + 6);
        if (uVar8 == uVar2) break;
        if (uVar2 <= uVar8) goto LAB_100abf693;
LAB_100abf682:
        puVar3 = *(uint **)(puVar6 + 4);
        if (*(uint **)(puVar6 + 4) == (uint *)0x0) {
          if (puVar7 == (uint *)0x0) goto LAB_100abf6b4;
          uVar8 = *(ulong *)(puVar7 + 6);
          puVar6 = puVar7;
          goto LAB_100abf6aa;
        }
      }
      uVar8 = uVar2;
      if (puVar6[8] < (uint)param_2[1]) goto LAB_100abf682;
LAB_100abf693:
      puVar3 = *(uint **)(puVar6 + 2);
      puVar7 = puVar6;
    } while (*(uint **)(puVar6 + 2) != (uint *)0x0);
LAB_100abf6aa:
    bVar9 = uVar2 < uVar8;
    if (uVar2 == uVar8) {
      bVar9 = (uint)param_2[1] < puVar6[8];
    }
    if (!bVar9) goto LAB_100abf6bb;
  }
LAB_100abf6b4:
  puVar6 = puVar4 + 2;
LAB_100abf6bb:
  if (1 < *puVar4) {
    FUN_100abfda0(puVar1);
    puVar4 = (uint *)*puVar1;
  }
  if (puVar6 == puVar4 + 2) {
    pvVar5 = operator_new(0x88);
    FUN_100ac0240(pvVar5,*param_1);
    *(int *)((long)pvVar5 + 0x30) = (int)param_2[1];
    *(ulong *)((long)pvVar5 + 0x28) = *param_2;
    local_30 = pvVar5;
    puVar6 = (uint *)FUN_100abfb90(puVar1,param_2,&local_30);
  }
  return *(undefined8 *)(puVar6 + 10);
}

