
undefined8 * FUN_1004e0b50(undefined8 *param_1,long param_2,uint param_3)

{
  undefined8 uVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  
  *param_1 = 0;
  uVar8 = param_2 + 0x38;
  if ((uVar8 & 1) == 0) {
    QReadWriteLock::lockForWrite();
    uVar8 = uVar8 | 1;
  }
  puVar3 = *(uint **)(param_2 + 0x40);
  puVar7 = (undefined8 *)(param_2 + 0x40);
  if (1 < *puVar3) {
    FUN_1004ebd10(puVar7);
    puVar3 = (uint *)*puVar7;
  }
  puVar2 = *(uint **)(puVar3 + 4);
  puVar4 = (uint *)0x0;
  if (*(uint **)(puVar3 + 4) != (uint *)0x0) {
    do {
      while (puVar5 = puVar2, uVar6 = puVar5[6], uVar6 < param_3) {
        puVar2 = *(uint **)(puVar5 + 4);
        if (*(uint **)(puVar5 + 4) == (uint *)0x0) {
          if (puVar4 == (uint *)0x0) goto LAB_1004e0bfe;
          uVar6 = puVar4[6];
          puVar5 = puVar4;
          goto LAB_1004e0bf9;
        }
      }
      puVar2 = *(uint **)(puVar5 + 2);
      puVar4 = puVar5;
    } while (*(uint **)(puVar5 + 2) != (uint *)0x0);
LAB_1004e0bf9:
    if (uVar6 <= param_3) goto LAB_1004e0c05;
  }
LAB_1004e0bfe:
  puVar5 = puVar3 + 2;
LAB_1004e0c05:
  if (1 < *puVar3) {
    FUN_1004ebd10(puVar7);
    puVar3 = (uint *)*puVar7;
  }
  if (puVar5 != puVar3 + 2) {
    uVar1 = *(undefined8 *)(puVar5 + 8);
    puVar5[8] = 0;
    puVar5[9] = 0;
    *param_1 = uVar1;
    FUN_1004e27c0(puVar7,puVar5);
  }
  if ((uVar8 & 1) != 0) {
    QReadWriteLock::unlock();
  }
  return param_1;
}

