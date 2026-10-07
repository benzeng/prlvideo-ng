
undefined8 FUN_100551730(undefined8 *param_1)

{
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  ushort *puVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  
  puVar3 = (ushort *)param_1[1];
  puVar4 = (ushort *)param_1[2];
  if (puVar3 < puVar4) {
    iVar2 = *(int *)(param_1 + 3);
    if (*puVar3 == 0) {
      uVar6 = *(int *)(puVar3 + 2) * iVar2;
    }
    else {
      uVar6 = -iVar2 & *puVar3 + 3 + iVar2;
    }
    if ((uVar6 != 0) && ((ushort *)((ulong)uVar6 + (long)puVar3) <= puVar4)) {
      uVar6 = (uint)puVar3[1] * iVar2;
      if (uVar6 == 0) {
        if (puVar3 == (ushort *)*param_1) {
          return CONCAT71((int7)((ulong)puVar4 >> 8),1);
        }
      }
      else {
        puVar4 = (ushort *)((long)puVar3 - (ulong)uVar6);
        if ((ushort *)*param_1 <= puVar4) {
          uVar1 = *puVar4;
          if (uVar1 == 0) {
            uVar5 = 4 - (ulong)uVar6;
            uVar7 = iVar2 * *(int *)((long)puVar3 + uVar5);
          }
          else {
            uVar7 = iVar2 + 3 + (uint)uVar1;
            uVar5 = (ulong)uVar7;
            uVar7 = -iVar2 & uVar7;
          }
          if (uVar7 == uVar6) {
            return CONCAT71((int7)(uVar5 >> 8),1);
          }
        }
      }
    }
  }
  *(undefined1 *)((long)param_1 + 0x1c) = 0;
  return 0;
}

