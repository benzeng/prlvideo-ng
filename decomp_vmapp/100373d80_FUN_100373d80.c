
long FUN_100373d80(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  long lVar7;
  
  lVar1 = param_1 + 8;
  lVar2 = FUN_100373e60(param_1,param_2,*(undefined8 *)(param_1 + 8),lVar1);
  if (lVar2 == lVar1) {
    return lVar1;
  }
  puVar4 = (uint *)*param_2;
  puVar6 = *(uint **)(lVar2 + 0x20);
  puVar3 = puVar4;
  for (puVar5 = puVar6; puVar5 != *(uint **)(lVar2 + 0x28); puVar5 = puVar5 + 1) {
    if ((uint *)param_2[1] == puVar3) {
      return lVar1;
    }
    if (*puVar3 < *puVar5) {
      return lVar1;
    }
    if (*puVar5 < *puVar3) break;
    puVar3 = puVar3 + 1;
  }
  do {
    if (puVar4 == (uint *)param_2[1]) {
LAB_100373e0f:
      puVar4 = *(uint **)(lVar2 + 0xe0);
      lVar7 = lVar2;
      if (puVar4 != *(uint **)(lVar2 + 0xe8)) {
        puVar6 = (uint *)param_2[0x18];
        while (lVar7 = lVar1, (uint *)param_2[0x19] != puVar6) {
          if (*puVar6 < *puVar4) {
            return lVar1;
          }
          if (*puVar4 < *puVar6) {
            return lVar2;
          }
          puVar6 = puVar6 + 1;
          puVar4 = puVar4 + 1;
          if (*(uint **)(lVar2 + 0xe8) == puVar4) {
            return lVar2;
          }
        }
      }
      return lVar7;
    }
    if (*(uint **)(lVar2 + 0x28) == puVar6) {
      return lVar2;
    }
    if (*puVar6 < *puVar4) {
      return lVar2;
    }
    if (*puVar4 < *puVar6) goto LAB_100373e0f;
    puVar6 = puVar6 + 1;
    puVar4 = puVar4 + 1;
  } while( true );
}

