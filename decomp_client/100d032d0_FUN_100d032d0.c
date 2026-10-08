
undefined8 * FUN_100d032d0(undefined8 *param_1,long param_2,int param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  int *piVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  uint uVar8;
  long lVar9;
  
  lVar2 = *(long *)(param_2 + 0x110);
  lVar3 = *(long *)(lVar2 + 0x10);
  puVar1 = (undefined8 *)(lVar2 + lVar3);
  uVar8 = param_3 + 1;
  lVar9 = 0;
  puVar6 = puVar1;
  if (*(byte *)(lVar2 + lVar3) != uVar8) {
    uVar5 = (uint)*(byte *)(lVar3 + 0x28 + lVar2) + (uint)*(byte *)(lVar2 + lVar3);
    lVar9 = 1;
    if (uVar5 == uVar8) {
      puVar6 = (undefined8 *)(lVar3 + 0x28 + lVar2);
    }
    else {
      uVar5 = *(byte *)(lVar3 + 0x50 + lVar2) + uVar5;
      lVar9 = 2;
      if (uVar5 == uVar8) {
        puVar6 = (undefined8 *)(lVar3 + 0x50 + lVar2);
      }
      else {
        lVar9 = 3;
        if (*(byte *)(lVar3 + 0x78 + lVar2) + uVar5 != uVar8) {
          uVar7 = *puVar1;
          param_1[1] = puVar1[1];
          *param_1 = uVar7;
          piVar4 = *(int **)(lVar3 + 0x10 + lVar2);
          param_1[2] = piVar4;
          if (1 < *piVar4 + 1U) {
            LOCK();
            *piVar4 = *piVar4 + 1;
            UNLOCK();
          }
          uVar7 = *(undefined8 *)(lVar3 + 0x18 + lVar2);
          param_1[4] = *(undefined8 *)(lVar3 + 0x20 + lVar2);
          goto LAB_100d03377;
        }
        puVar6 = (undefined8 *)(lVar3 + 0x78 + lVar2);
      }
    }
  }
  uVar7 = *puVar6;
  param_1[1] = puVar6[1];
  *param_1 = uVar7;
  piVar4 = (int *)puVar1[lVar9 * 5 + 2];
  param_1[2] = piVar4;
  if (1 < *piVar4 + 1U) {
    LOCK();
    *piVar4 = *piVar4 + 1;
    UNLOCK();
  }
  param_1[4] = puVar1[lVar9 * 5 + 4];
  uVar7 = puVar1[lVar9 * 5 + 3];
LAB_100d03377:
  param_1[3] = uVar7;
  return param_1;
}

