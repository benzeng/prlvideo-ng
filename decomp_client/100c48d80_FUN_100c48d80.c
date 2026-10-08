
int FUN_100c48d80(void *param_1,int param_2,void *param_3,int param_4,int param_5,undefined8 param_6
                 ,int param_7)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  uint *puVar13;
  ulong uVar14;
  long lVar15;
  uint uVar16;
  uint uVar17;
  uint *puVar18;
  int iVar19;
  ulong uVar20;
  ulong uVar21;
  undefined1 local_b8 [64];
  uint local_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  byte local_65 [45];
  long local_38;
  
  lVar11 = *(long *)PTR____stack_chk_guard_1021e1840;
  iVar19 = -1;
  local_38 = lVar11;
  if ((param_2 < 1) || (param_4 < 1)) goto LAB_100c49166;
  pbVar9 = (byte *)0x0;
  if (param_5 < param_4) {
    pbVar8 = (byte *)0x0;
LAB_100c48ebe:
    FUN_100c62ee0(4,0x7a,0x79,"rsa_oaep.c",0xcb);
    iVar19 = -1;
  }
  else {
    pbVar8 = (byte *)0x0;
    if (param_5 < 0x2a) goto LAB_100c48ebe;
    iVar19 = param_5 + -0x15;
    pbVar9 = (byte *)FUN_100bf3540(iVar19,"rsa_oaep.c",0x78);
    pbVar8 = (byte *)FUN_100bf3540(param_5,"rsa_oaep.c",0x79);
    if ((pbVar9 == (byte *)0x0) || (pbVar8 == (byte *)0x0)) {
      FUN_100c62ee0(4,0x7a,0x41,"rsa_oaep.c",0x7b);
      iVar19 = -1;
    }
    else {
      ___bzero(pbVar8,(long)param_5);
      _memcpy(pbVar8 + ((long)param_5 - (long)param_4),param_3,(long)param_4);
      bVar1 = *pbVar8;
      uVar21 = (ulong)iVar19;
      uVar10 = FUN_100c6ca00();
      iVar5 = FUN_100c491f0(&local_78,0x14,pbVar8 + 0x15,uVar21,uVar10);
      if (iVar5 == 0) {
        lVar11 = 0;
        if ((pbVar8 + 0x14 < &local_78) || (local_65 < pbVar8 + 1)) {
          local_78 = *(uint *)(pbVar8 + 1) ^ local_78;
          uStack_74 = *(uint *)(pbVar8 + 5) ^ uStack_74;
          uStack_70 = *(uint *)(pbVar8 + 9) ^ uStack_70;
          uStack_6c = *(uint *)(pbVar8 + 0xd) ^ uStack_6c;
          lVar11 = 0x10;
        }
        do {
          *(byte *)((long)&local_78 + lVar11) =
               *(byte *)((long)&local_78 + lVar11) ^ pbVar8[lVar11 + 1];
          lVar11 = lVar11 + 1;
        } while (lVar11 != 0x14);
        uVar10 = FUN_100c6ca00();
        iVar5 = FUN_100c491f0(pbVar9,uVar21,&local_78,0x14,uVar10);
        if (iVar5 == 0) {
          if (0x15 < param_5) {
            uVar12 = 1;
            if (0 < (long)uVar21) {
              uVar12 = uVar21;
            }
            uVar14 = 0;
            if (uVar12 != 0) {
              uVar20 = 1;
              if (0 < (long)uVar21) {
                uVar20 = uVar21;
              }
              uVar14 = 0;
              if (((uVar12 & 0xffffffffffffffe0) != 0) &&
                 ((pbVar8 + uVar20 + 0x14 < pbVar9 ||
                  (uVar14 = 0, pbVar9 + (uVar20 - 1) < pbVar8 + 0x15)))) {
                puVar13 = (uint *)(pbVar8 + 0x25);
                puVar18 = (uint *)(pbVar9 + 0x10);
                uVar20 = 0;
                if (0 < (long)uVar21) {
                  uVar20 = uVar21;
                }
                uVar20 = uVar20 & 0xffffffffffffffe0;
                do {
                  uVar17 = puVar13[-3];
                  uVar6 = puVar13[-2];
                  uVar7 = puVar13[-1];
                  uVar16 = *puVar13;
                  uVar2 = puVar13[1];
                  uVar3 = puVar13[2];
                  uVar4 = puVar13[3];
                  puVar18[-4] = puVar18[-4] ^ puVar13[-4];
                  puVar18[-3] = puVar18[-3] ^ uVar17;
                  puVar18[-2] = puVar18[-2] ^ uVar6;
                  puVar18[-1] = puVar18[-1] ^ uVar7;
                  *puVar18 = *puVar18 ^ uVar16;
                  puVar18[1] = puVar18[1] ^ uVar2;
                  puVar18[2] = puVar18[2] ^ uVar3;
                  puVar18[3] = puVar18[3] ^ uVar4;
                  puVar13 = puVar13 + 8;
                  puVar18 = puVar18 + 8;
                  uVar20 = uVar20 - 0x20;
                  uVar14 = uVar12 & 0xffffffffffffffe0;
                } while (uVar20 != 0);
              }
              if (uVar12 == uVar14) goto LAB_100c49071;
            }
            do {
              pbVar9[uVar14] = pbVar9[uVar14] ^ pbVar8[uVar14 + 0x15];
              uVar14 = uVar14 + 1;
            } while ((long)uVar14 < (long)uVar21);
          }
LAB_100c49071:
          uVar10 = FUN_100c6ca00();
          uVar17 = 0;
          iVar5 = FUN_100c65f10(param_6,(long)param_7,local_b8,0,uVar10,0);
          if (iVar5 != 0) {
            uVar6 = FUN_100bf2f90(pbVar9,local_b8,0x14);
            uVar6 = (int)(~uVar6 & bVar1 - 1 & uVar6 - 1) >> 0x1f;
            iVar5 = 1;
            if (iVar19 < 0x15) {
              lVar11 = *(long *)PTR____stack_chk_guard_1021e1840;
            }
            else {
              lVar15 = 0;
              uVar7 = 0;
              uVar17 = 0;
              lVar11 = *(long *)PTR____stack_chk_guard_1021e1840;
              do {
                uVar16 = (int)((pbVar9[lVar15 + 0x14] ^ 1) - 1) >> 0x1f;
                uVar7 = uVar7 & (~uVar16 | uVar17) | (int)lVar15 + 0x14U & ~uVar17 & uVar16;
                uVar17 = uVar16 | uVar17;
                uVar6 = ((int)(pbVar9[lVar15 + 0x14] - 1) >> 0x1f | uVar17) & uVar6;
                lVar15 = lVar15 + 1;
              } while (param_5 + -0x29 != (int)lVar15);
              iVar5 = uVar7 + 1;
            }
            if ((uVar6 & uVar17) != 0) {
              iVar19 = iVar19 - iVar5;
              if (iVar19 <= param_2) {
                _memcpy(param_1,pbVar9 + iVar5,(long)iVar19);
                goto LAB_100c4914a;
              }
              FUN_100c62ee0(4,0x7a,0x6d,"rsa_oaep.c",0xbf);
            }
            goto LAB_100c48ebe;
          }
        }
        iVar19 = -1;
        lVar11 = *(long *)PTR____stack_chk_guard_1021e1840;
      }
      else {
        iVar19 = -1;
        lVar11 = *(long *)PTR____stack_chk_guard_1021e1840;
      }
    }
  }
LAB_100c4914a:
  if (pbVar9 != (byte *)0x0) {
    FUN_100bf3910(pbVar9);
  }
  if (pbVar8 != (byte *)0x0) {
    FUN_100bf3910(pbVar8);
  }
LAB_100c49166:
  if (lVar11 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar19;
}

