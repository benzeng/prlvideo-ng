
void FUN_10028b7c0(long param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ushort *puVar4;
  ushort *puVar5;
  ushort uVar6;
  uint *puVar7;
  byte *pbVar8;
  ulong uVar9;
  ulong *puVar10;
  byte bVar11;
  byte local_49;
  long local_48 [2];
  undefined4 local_38;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x38) + 0x88);
  FUN_100402390(param_2,param_1);
  puVar7 = (uint *)(lVar2 + 0x30);
  if ((*(byte *)(lVar2 + 0x33) & 2) == 0) {
    do {
      uVar1 = *puVar7;
      FUN_100402710(param_2,param_1,puVar7[1],uVar1 & 0xffffff);
      puVar7 = puVar7 + 2;
    } while (-1 < (int)uVar1);
  }
  else {
    do {
      uVar1 = *puVar7;
      FUN_100402710(param_2,param_1,*(undefined8 *)(puVar7 + 1),uVar1 & 0xffffff);
      puVar7 = puVar7 + 3;
    } while (-1 < (int)uVar1);
  }
  uVar3 = (ulong)*(byte *)(lVar2 + 2);
  if ((uVar3 != 0) && (bVar11 = *(byte *)(lVar2 + 3 + uVar3 * 4), (bVar11 & 0xc1) == 0)) {
    uVar9 = *(ulong *)(lVar2 + 4 + uVar3 * 4);
    local_49 = *(byte *)(lVar2 + 2 + uVar3 * 4);
    uVar6 = *(ushort *)(lVar2 + uVar3 * 4);
    do {
      if (uVar6 == 0) {
        uVar6 = (ushort)(bVar11 & 2) * 2 | 8;
      }
      uVar3 = uVar9 & 0xffffffff;
      if ((bVar11 & 2) != 0) {
        uVar3 = uVar9;
      }
      local_48[0] = 0;
      local_48[1] = 0;
      local_38 = 0;
      FUN_10008d2d0(local_48,uVar3,uVar6);
      lVar2 = local_48[0];
      if ((*(byte *)(local_48[0] + 3) & 2) == 0) {
        puVar4 = (ushort *)(local_48[0] + -8);
        do {
          puVar5 = puVar4;
          uVar1 = *(uint *)(puVar5 + 4);
          FUN_100402710(param_2,param_1,*(undefined4 *)(puVar5 + 6),uVar1 & 0xffffff);
          puVar4 = puVar5 + 4;
        } while (-1 < (int)uVar1);
        puVar10 = (ulong *)(puVar5 + 6);
      }
      else {
        puVar4 = (ushort *)(local_48[0] + -0xc);
        do {
          puVar5 = puVar4;
          uVar1 = *(uint *)(puVar5 + 6);
          FUN_100402710(param_2,param_1,*(undefined8 *)(puVar5 + 8),uVar1 & 0xffffff);
          puVar4 = puVar5 + 6;
        } while (-1 < (int)uVar1);
        puVar10 = (ulong *)(puVar5 + 8);
      }
      if (local_49 == 0) {
        puVar5 = puVar4 + 1;
        pbVar8 = (byte *)((long)puVar4 + 3);
      }
      else {
        uVar3 = (ulong)local_49;
        puVar4 = (ushort *)(lVar2 + uVar3 * 4);
        puVar5 = (ushort *)(lVar2 + 2 + uVar3 * 4);
        pbVar8 = (byte *)(lVar2 + 3 + uVar3 * 4);
        puVar10 = (ulong *)(lVar2 + 4 + uVar3 * 4);
      }
      uVar6 = *puVar4;
      local_49 = (byte)*puVar5;
      bVar11 = *pbVar8;
      uVar9 = *puVar10;
      FUN_10008d3f0(local_48);
    } while ((bVar11 & 0xf1) == 0x30);
  }
  FUN_100402b80(param_2,param_1);
  return;
}

