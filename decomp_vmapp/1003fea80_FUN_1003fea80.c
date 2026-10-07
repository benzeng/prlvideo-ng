
void FUN_1003fea80(long param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  
  if (*(long *)(param_1 + 0x838) == 0) {
    return;
  }
  puVar4 = *(uint **)(param_1 + 0x830);
  if ((*puVar4 <= puVar4[2]) || (*puVar4 <= puVar4[3])) {
    FUN_1008e3970("","HddUtils",0,"SFilter descriptor corruption? head %d, but size %d",puVar4[2]);
    return;
  }
  uVar6 = puVar4[2];
  uVar5 = uVar6;
  do {
    uVar10 = (ulong)uVar5;
    lVar9 = *(long *)(param_1 + 0x848);
    puVar4 = puVar4 + uVar10 * 0x2012 + 0xe;
    do {
      uVar1 = *puVar4;
      if ((uVar1 & 1) == 0) goto LAB_1003feb50;
      LOCK();
      uVar2 = *puVar4;
      if (uVar1 == uVar2) {
        *puVar4 = uVar1 | 4;
        uVar2 = uVar1;
      }
      UNLOCK();
    } while (uVar1 != uVar2);
    if (*(int *)(lVar9 + 0x44 + uVar10 * 0x900) == 0) {
      iVar3 = FUN_1003fe950(param_1,lVar9 + uVar10 * 0x900,uVar10);
      if (iVar3 == 0) {
        uVar8 = 1;
      }
      else {
        uVar8 = 2;
      }
      FUN_10025b2f0(param_2,uVar8);
    }
LAB_1003feb50:
    puVar4 = *(uint **)(param_1 + 0x830);
    uVar5 = (uVar5 + 1) % *puVar4;
  } while (uVar6 != uVar5);
  if (puVar4 == (uint *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = (puVar4[4] & 2) >> 1;
  }
  if (*(uint *)(param_1 + 0x890) == uVar6) goto LAB_1003febff;
  if (puVar4 == (uint *)0x0) {
    *(undefined4 *)(param_1 + 0x890) = 0;
    lVar9 = *(long *)(param_1 + 0x840);
LAB_1003febf7:
    uVar7 = *(undefined4 *)(lVar9 + 0x54);
  }
  else {
    uVar6 = puVar4[4];
    *(uint *)(param_1 + 0x890) = (uVar6 & 2) >> 1;
    lVar9 = *(long *)(param_1 + 0x840);
    uVar7 = 1;
    if ((uVar6 & 2) == 0) goto LAB_1003febf7;
  }
  FUN_100401540(lVar9,uVar7);
LAB_1003febff:
  if (*(long *)(param_1 + 0x880) == param_1 + 0x880) {
    return;
  }
  FUN_100402d70(*(undefined8 *)(param_1 + 0x840));
  return;
}

