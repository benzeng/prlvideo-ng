
undefined8 FUN_100347640(long param_1,int *param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  int *piVar11;
  uint uVar12;
  bool bVar13;
  
  uVar7 = 9;
  if ((((0xf < (ulong)(uint)param_2[1]) &&
       (uVar1 = param_2[2], (ulong)uVar1 <= (ulong)(uint)param_2[1] - 0x10 >> 4)) &&
      (uVar7 = 4, uVar1 < 0x11)) && (uVar12 = param_2[3], uVar12 <= 0x10 - uVar1)) {
    uVar7 = 0;
    uVar8 = 0;
    if (uVar1 != 0) {
      piVar11 = (int *)(param_1 + 0x524);
      iVar9 = 0;
      piVar2 = param_2;
      do {
        iVar3 = piVar2[4];
        iVar4 = piVar2[5];
        iVar5 = piVar2[6];
        iVar6 = piVar2[7];
        if (((piVar11[-3] != iVar3) || (piVar11[-2] != iVar4)) ||
           ((piVar11[-1] != iVar5 || (*piVar11 != iVar6)))) {
          piVar11[-3] = iVar3;
          piVar11[-2] = iVar4;
          piVar11[-1] = iVar5;
          *piVar11 = iVar6;
          *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 1 << ((byte)iVar9 & 0x1f);
          *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) | 0x80;
        }
        piVar11 = piVar11 + 4;
        bVar13 = iVar9 != uVar1 - 1;
        iVar9 = iVar9 + 1;
        piVar2 = piVar2 + 4;
      } while (bVar13);
      uVar12 = param_2[3];
      uVar8 = uVar1;
    }
    if (uVar8 < uVar12 + uVar1) {
      piVar11 = (int *)((ulong)uVar8 * 0x10 + 0x524 + param_1);
      uVar10 = (ulong)uVar8;
      do {
        if (((piVar11[-3] != 0) || (piVar11[-2] != 0)) || ((piVar11[-1] != 0 || (*piVar11 != 0)))) {
          *(undefined1 (*) [16])(piVar11 + -3) = (undefined1  [16])0x0;
          *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 1 << ((byte)uVar10 & 0x1f);
          *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) | 0x80;
        }
        piVar11 = piVar11 + 4;
        iVar9 = (int)uVar10;
        uVar10 = uVar10 + 1;
      } while (iVar9 != (uVar12 + uVar1) - 1);
    }
  }
  return uVar7;
}

