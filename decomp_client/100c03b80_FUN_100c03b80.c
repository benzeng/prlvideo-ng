
void FUN_100c03b80(long param_1,byte *param_2,ulong param_3)

{
  long lVar1;
  long *plVar2;
  byte bVar3;
  sbyte sVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  
  uVar10 = *(uint *)(param_1 + 0x80);
  uVar8 = uVar10 & 7;
  iVar11 = (int)param_3;
  uVar7 = -iVar11 & 7;
  uVar6 = *(ulong *)(param_1 + 0x88);
  *(ulong *)(param_1 + 0x88) = uVar6 + param_3;
  if (CARRY8(uVar6,param_3)) {
    plVar2 = (long *)(param_1 + 0x90);
    *plVar2 = *plVar2 + 1;
    if (*plVar2 == 0) {
      plVar2 = (long *)(param_1 + 0x98);
      *plVar2 = *plVar2 + 1;
      if (*plVar2 == 0) {
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
      }
    }
  }
  if (uVar7 != 0 || uVar8 != 0) {
    if (param_3 == 0) {
      return;
    }
    lVar1 = param_1 + 0x40;
    uVar9 = 8 - uVar7;
    if (uVar8 != uVar7) {
      sVar4 = (sbyte)uVar8;
      do {
        uVar7 = uVar10 >> 3;
        uVar5 = (uint)*param_2 << ((byte)-iVar11 & 7);
        if (param_3 < 8) {
          if (uVar8 == 0) {
            *(byte *)(param_1 + 0x40 + (ulong)uVar7) = (byte)uVar5;
          }
          else {
            *(byte *)(param_1 + 0x40 + (ulong)uVar7) =
                 *(byte *)(param_1 + 0x40 + (ulong)uVar7) | (byte)((uVar5 & 0xff) >> sVar4);
          }
          iVar11 = (int)param_3 + uVar10;
          if (iVar11 == 0x200) {
            _whirlpool_block(param_1,lVar1,1);
            iVar11 = 0;
            uVar7 = 0;
          }
          else {
            uVar7 = uVar7 + 1;
          }
          if (uVar8 != 0) {
            *(char *)(param_1 + 0x40 + (ulong)uVar7) = (char)((uVar5 & 0xff) << (8U - sVar4 & 0x1f))
            ;
          }
          *(int *)(param_1 + 0x80) = iVar11;
          return;
        }
        bVar3 = param_2[1] >> ((byte)uVar9 & 0x1f);
        if (uVar8 == 0) {
          *(byte *)(param_1 + 0x40 + (ulong)uVar7) = bVar3 | (byte)uVar5;
        }
        else {
          *(byte *)(param_1 + 0x40 + (ulong)uVar7) =
               *(byte *)(param_1 + 0x40 + (ulong)uVar7) |
               (byte)(((uint)bVar3 | uVar5 & 0xff) >> sVar4);
        }
        uVar10 = uVar10 + 8;
        if (uVar10 < 0x200) {
          uVar7 = uVar7 + 1;
        }
        else {
          _whirlpool_block(param_1,lVar1,1);
          uVar10 = uVar10 & 0x1ff;
          uVar7 = 0;
        }
        param_3 = param_3 - 8;
        if (uVar8 != 0) {
          *(char *)(param_1 + 0x40 + (ulong)uVar7) =
               (char)(((uint)bVar3 | uVar5 & 0xff) << (8U - sVar4 & 0x1f));
        }
        *(uint *)(param_1 + 0x80) = uVar10;
        param_2 = param_2 + 1;
      } while (param_3 != 0);
      return;
    }
    *(byte *)(param_1 + 0x40 + (ulong)(uVar10 >> 3)) =
         *(byte *)(param_1 + 0x40 + (ulong)(uVar10 >> 3)) | (byte)(0xff >> (sbyte)uVar7) & *param_2;
    uVar10 = uVar10 + uVar9;
    if (uVar10 == 0x200) {
      _whirlpool_block(param_1,lVar1,1);
      uVar10 = 0;
    }
    param_3 = param_3 - uVar9;
    param_2 = param_2 + 1;
    *(uint *)(param_1 + 0x80) = uVar10;
  }
  if (param_3 != 0) {
    do {
      if ((uVar10 == 0) && (uVar6 = param_3 >> 9, uVar6 != 0)) {
        _whirlpool_block(param_1,param_2,uVar6);
        param_2 = param_2 + uVar6 * 0x40;
        param_3 = param_3 & 0x1ff;
        uVar10 = 0;
      }
      else {
        uVar7 = 0x200 - uVar10;
        if (param_3 < uVar7) {
          _memcpy((void *)(param_1 + 0x40 + (ulong)(uVar10 >> 3)),param_2,param_3 >> 3);
          uVar10 = (int)param_3 + uVar10;
          param_3 = 0;
        }
        else {
          _memcpy((void *)(param_1 + 0x40 + (ulong)(uVar10 >> 3)),param_2,(ulong)(uVar7 >> 3));
          param_2 = param_2 + (uVar7 >> 3);
          _whirlpool_block(param_1,param_1 + 0x40,1);
          uVar10 = 0;
          param_3 = param_3 - uVar7;
        }
        *(uint *)(param_1 + 0x80) = uVar10;
      }
    } while (param_3 != 0);
  }
  return;
}

