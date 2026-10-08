
ulong FUN_100bf83f0(uint *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  byte *pbVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  
  if (3 < *param_1) {
    return 0;
  }
  puVar1 = *(undefined8 **)(param_1 + 2);
  switch(*param_1) {
  case 0:
    iVar5 = *(int *)((long)puVar1 + 0x14);
    uVar8 = (ulong)iVar5;
    uVar3 = (ulong)(iVar5 << 0x14);
    if (0 < (long)uVar8) {
      uVar7 = 0;
      if (iVar5 != 0) {
        uVar4 = 0;
        uVar7 = uVar8 & 0xfffffffffffffffe;
        if (uVar7 == 0) {
          uVar7 = 0;
        }
        else {
          pbVar6 = (byte *)(puVar1[3] + 1);
          uVar10 = uVar8 & 0xfffffffffffffffe;
          iVar5 = 3;
          uVar4 = 0;
          do {
            iVar2 = iVar5 + -3;
            uVar3 = (long)(int)((uint)pbVar6[-1] <<
                               ((char)iVar5 + -3 +
                                ((char)((uint)(iVar2 / 6 + (iVar2 >> 0x1f)) >> 2) -
                                (char)(iVar2 >> 0x1f)) * -0x18 & 0x1fU)) ^ uVar3;
            uVar4 = (long)(int)((uint)*pbVar6 <<
                               ((char)iVar5 +
                                ((char)((uint)(iVar5 / 6 + (iVar5 >> 0x1f)) >> 2) -
                                (char)(iVar5 >> 0x1f)) * -0x18 & 0x1fU)) ^ uVar4;
            pbVar6 = pbVar6 + 2;
            iVar5 = iVar5 + 6;
            uVar10 = uVar10 - 2;
          } while (uVar10 != 0);
        }
        uVar3 = uVar3 ^ uVar4;
        if (uVar8 == uVar7) break;
      }
      lVar9 = uVar8 - uVar7;
      iVar5 = (int)uVar7 * 3;
      pbVar6 = (byte *)(puVar1[3] + uVar7);
      do {
        uVar3 = uVar3 ^ (long)(int)((uint)*pbVar6 <<
                                   ((char)iVar5 +
                                    ((char)((uint)(iVar5 / 6 + (iVar5 >> 0x1f)) >> 2) -
                                    (char)(iVar5 >> 0x1f)) * -0x18 & 0x1fU));
        iVar5 = iVar5 + 3;
        pbVar6 = pbVar6 + 1;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
    break;
  case 1:
    uVar3 = FUN_100c60ae0(*puVar1);
    break;
  case 2:
    uVar3 = FUN_100c60ae0(puVar1[1]);
    break;
  case 3:
    uVar3 = (ulong)*(int *)(puVar1 + 2);
  }
  return (long)(int)*param_1 << 0x1e | uVar3 & 0x3fffffff;
}

