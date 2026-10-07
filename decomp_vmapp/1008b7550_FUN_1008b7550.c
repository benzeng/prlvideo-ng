
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_1008b7550(undefined8 *param_1,char *param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  undefined8 *puVar10;
  char *pcVar11;
  size_t sVar12;
  byte *pbVar13;
  ulong uVar14;
  char *pcVar15;
  long lVar16;
  bool bVar17;
  bool bVar18;
  int local_c4;
  undefined8 local_98;
  undefined8 uStack_90;
  char local_88 [80];
  long local_38;
  
  lVar16 = *(long *)PTR____stack_chk_guard_100ba2320;
  lVar9 = 0;
  local_c4 = param_3;
  local_38 = lVar16;
  if (param_2 == (char *)0x0) {
    lVar9 = FUN_10087ccc0();
    if (lVar9 == 0) {
      FUN_100887ce0(0xb,0x74,0x41,"x509_obj.c",0xd0);
      param_2 = (char *)0x0;
      goto LAB_1008b79dc;
    }
    iVar4 = FUN_10087cd60(lVar9,200);
    if (iVar4 == 0) {
LAB_1008b79b0:
      FUN_100887ce0(0xb,0x74,0x41,"x509_obj.c",0xd0);
      FUN_10087cd20(lVar9);
      param_2 = (char *)0x0;
      goto LAB_1008b79dc;
    }
    **(undefined1 **)(lVar9 + 8) = 0;
    local_c4 = 200;
  }
  if (param_1 == (undefined8 *)0x0) {
    if (lVar9 != 0) {
      param_2 = *(char **)(lVar9 + 8);
      FUN_10081e1a0(lVar9);
    }
    _strncpy(param_2,"NO X509_NAME",(long)local_c4);
    param_2[(long)local_c4 - 1] = '\0';
  }
  else {
    iVar5 = FUN_100885600(*param_1);
    iVar4 = 0;
    if (0 < iVar5) {
      iVar4 = 0;
      iVar5 = 0;
      do {
        puVar10 = (undefined8 *)FUN_100885620(*param_1,iVar4);
        iVar6 = FUN_100821ab0(*puVar10);
        if ((iVar6 == 0) || (pcVar11 = (char *)FUN_100821930(iVar6), pcVar11 == (char *)0x0)) {
          pcVar11 = local_88;
          FUN_1008993a0(pcVar11,0x50,*puVar10);
        }
        sVar12 = _strlen(pcVar11);
        puVar3 = (uint *)puVar10[1];
        uVar2 = *puVar3;
        pcVar15 = *(char **)(puVar3 + 2);
        if ((puVar3[1] == 0x1b) && ((uVar2 & 3) == 0)) {
          bVar18 = false;
          if (0 < (int)uVar2) {
            bVar17 = (uVar2 & 1) != 0;
            bVar18 = false;
            if (bVar17) {
              bVar18 = *pcVar15 != '\0';
            }
            uVar14 = (ulong)bVar17;
            if (uVar2 != 1) {
              do {
                if (pcVar15[uVar14] != '\0') {
                  *(undefined4 *)((uVar14 & 3) << 2 | (ulong)&local_98) = 1;
                }
                if (pcVar15[uVar14 + 1] != '\0') {
                  *(undefined4 *)((uVar14 + 1 & 3) << 2 | (ulong)&local_98) = 1;
                }
                uVar14 = uVar14 + 2;
              } while (uVar2 != (uint)uVar14);
            }
          }
          if (bVar18) {
            local_98 = CONCAT44(_UNK_100b2dda4,_DAT_100b2dda0);
            uStack_90 = CONCAT44(_UNK_100b2ddac,_UNK_100b2dda8);
          }
          else {
            local_98 = 0;
            uStack_90 = 0x100000000;
          }
        }
        else {
          local_98 = CONCAT44(_UNK_100b2dda4,_DAT_100b2dda0);
          uStack_90 = CONCAT44(_UNK_100b2ddac,_UNK_100b2dda8);
        }
        iVar6 = 0;
        if (0 < (int)uVar2) {
          uVar14 = 0;
          iVar6 = 0;
          do {
            if (*(int *)((uVar14 & 3) << 2 | (ulong)&local_98) != 0) {
              if (((byte)pcVar15[uVar14] < 0x20) || (0x7e < (byte)pcVar15[uVar14])) {
                iVar6 = iVar6 + 4;
              }
              else {
                iVar6 = iVar6 + 1;
              }
            }
            uVar14 = uVar14 + 1;
          } while (uVar2 != (uint)uVar14);
        }
        iVar8 = (int)sVar12;
        iVar6 = iVar6 + 2 + iVar5 + iVar8;
        if (lVar9 == 0) {
          if (local_c4 + -1 < iVar6) goto LAB_1008b795d;
          pcVar15 = param_2 + iVar5;
        }
        else {
          iVar7 = FUN_10087cd60(lVar9,(long)(iVar6 + 1));
          if (iVar7 == 0) {
            lVar16 = *(long *)PTR____stack_chk_guard_100ba2320;
            goto LAB_1008b79b0;
          }
          pcVar15 = (char *)((long)iVar5 + *(long *)(lVar9 + 8));
        }
        *pcVar15 = '/';
        _memcpy(pcVar15 + 1,pcVar11,sVar12 & 0xffffffff);
        pbVar13 = (byte *)(pcVar15 + (long)iVar8 + 2);
        pcVar15[(long)iVar8 + 1] = '=';
        if (0 < (int)uVar2) {
          lVar16 = *(long *)(puVar10[1] + 8);
          uVar14 = 0;
          do {
            if (*(int *)((uVar14 & 3) << 2 | (ulong)&local_98) != 0) {
              bVar1 = *(byte *)(lVar16 + uVar14);
              if ((byte)(bVar1 - 0x20) < 0x5f) {
                *pbVar13 = bVar1;
                pbVar13 = pbVar13 + 1;
              }
              else {
                *pbVar13 = 0x5c;
                pbVar13[1] = 0x78;
                pbVar13[2] = "0123456789ABCDEF"[bVar1 >> 4];
                pbVar13[3] = "0123456789ABCDEF"[bVar1 & 0xf];
                pbVar13 = pbVar13 + 4;
              }
            }
            uVar14 = uVar14 + 1;
          } while (uVar2 != (uint)uVar14);
        }
        *pbVar13 = 0;
        iVar4 = iVar4 + 1;
        iVar8 = FUN_100885600(*param_1);
        iVar5 = iVar6;
      } while (iVar4 < iVar8);
    }
    if (lVar9 == 0) {
LAB_1008b795d:
      lVar16 = *(long *)PTR____stack_chk_guard_100ba2320;
    }
    else {
      param_2 = *(char **)(lVar9 + 8);
      FUN_10081e1a0(lVar9);
      lVar16 = *(long *)PTR____stack_chk_guard_100ba2320;
    }
    if (iVar4 == 0) {
      *param_2 = '\0';
    }
  }
LAB_1008b79dc:
  if (lVar16 == local_38) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

