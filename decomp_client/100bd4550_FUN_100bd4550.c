
void FUN_100bd4550(long param_1,long param_2,uint param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  long lVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  byte local_b8 [128];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
  iVar1 = *(int *)(param_2 + 4);
  if (param_4 < param_3) {
    FUN_100bf2cd0("s3_cbc.c",0xf8,"orig_len >= md_size");
  }
  if (0x40 < param_3) {
    FUN_100bf2cd0("s3_cbc.c",0xf9,"md_size <= EVP_MAX_MD_SIZE");
  }
  uVar12 = (ulong)(uint)-(int)local_b8 & 0x30;
  uVar7 = param_3 + 0x100;
  uVar13 = param_4 - uVar7;
  if (param_4 < uVar7 || param_4 - uVar7 == 0) {
    uVar13 = 0;
  }
  uVar14 = 0;
  uVar9 = (ulong)(((param_3 & 0xfffffffe) * 0x800000 - uVar13) + (iVar1 - param_3)) % (ulong)param_3
  ;
  ___bzero(local_b8 + uVar12,param_3);
  if (uVar13 < param_4) {
    if (uVar7 < param_4) {
      uVar7 = param_4;
    }
    iVar8 = uVar7 - 0x100;
    lVar6 = *(long *)(param_2 + 0x10);
    iVar10 = -param_3;
    iVar2 = iVar8 + iVar10;
    lVar11 = 0;
    do {
      iVar3 = (int)lVar11;
      bVar5 = (byte)(iVar1 - param_3 >> 0x18);
      bVar4 = (byte)((uint)iVar1 >> 0x18);
      uVar13 = (int)uVar14 + 1;
      local_b8[uVar14 + uVar12] =
           local_b8[uVar14 + uVar12] |
           (char)((byte)((uint)(iVar2 + iVar3) >> 0x18) ^
                 ((byte)((uint)((iVar8 - iVar1) + iVar10 + iVar3) >> 0x18) ^ bVar4 |
                 (byte)((uint)(iVar2 + iVar3) >> 0x18) ^ bVar4)) >> 7 &
           ~((char)((byte)((uint)(iVar2 + iVar3) >> 0x18) ^
                   ((byte)((uint)((iVar8 - iVar1) + iVar3) >> 0x18) ^ bVar5 |
                   (byte)((uint)(iVar2 + iVar3) >> 0x18) ^ bVar5)) >> 7) &
           *(byte *)((ulong)(iVar8 - param_3) + lVar6 + lVar11);
      uVar14 = (ulong)(uVar13 & (int)((uVar13 - param_3 ^ param_3 | uVar13 ^ param_3) ^ uVar13) >>
                                0x1f);
      lVar11 = lVar11 + 1;
    } while ((iVar8 - param_4) + iVar10 + (int)lVar11 != 0);
  }
  if (param_3 != 0) {
    lVar6 = 0;
    do {
      uVar13 = (int)uVar9 + 1;
      *(byte *)(param_1 + lVar6) = local_b8[uVar9 + uVar12];
      lVar6 = lVar6 + 1;
      uVar9 = (ulong)(uVar13 & (int)((uVar13 - param_3 ^ param_3 | uVar13 ^ param_3) ^ uVar13) >>
                               0x1f);
    } while (param_3 != (uint)lVar6);
  }
  if (*(long *)PTR____stack_chk_guard_1021e1840 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

