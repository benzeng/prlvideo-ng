
void FUN_100385b50(long param_1,uint param_2,char param_3,char param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  bool bVar8;
  bool bVar9;
  char cVar10;
  undefined8 *puVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  int local_58 [8];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  uVar1 = *(uint *)(param_1 + 0x20);
  (*DAT_1011c5738)(0x8d40,*(undefined4 *)(param_1 + 0x10));
  if (*(char *)(DAT_1011c8478 + 0x47) != '\0') {
    FUN_100385710(param_1,param_2);
  }
  uVar13 = 0;
  bVar8 = false;
  if (param_2 != 0) {
    uVar13 = 0;
    bVar8 = false;
    uVar14 = 0;
    uVar15 = param_2;
    do {
      if ((uVar15 & 1) != 0) {
        lVar5 = *(long *)(param_1 + 0x28);
        lVar16 = (ulong)uVar14 * 0x20;
        lVar6 = *(long *)(lVar5 + 0x58 + lVar16);
        iVar2 = *(int *)(lVar6 + 0x14);
        iVar7 = *(int *)(lVar5 + 0x6c + lVar16) + 0x8515;
        if (iVar2 != 0x8513) {
          iVar7 = iVar2;
        }
        (*DAT_1011c5de8)(0x8d40,uVar13 + 0x8ce0,iVar7,*(undefined4 *)(lVar6 + 0xc),
                         *(undefined4 *)(lVar5 + 0x68 + lVar16));
        bVar9 = bVar8;
        if (param_3 != '\0') {
          uVar3 = *(uint *)(*(long *)(lVar5 + 0x60 + lVar16) + 8);
          if ((int)uVar3 < 0x66) {
            if (uVar3 < 9) {
              uVar3 = 0x10a >> (uVar3 & 0x1f);
joined_r0x000100385c99:
              if ((uVar3 & 1) != 0) {
                bVar9 = true;
                if (uVar14 != 0) {
                  bVar9 = bVar8;
                }
                if (param_2 != 1) {
                  bVar9 = bVar8;
                }
              }
            }
          }
          else if (uVar3 - 0x66 < 0xd) {
            uVar3 = 0x1015 >> (uVar3 - 0x66 & 0x1f);
            goto joined_r0x000100385c99;
          }
        }
        bVar8 = bVar9;
        local_58[uVar13] = uVar13 + 0x8ce0;
        uVar13 = uVar13 + 1;
      }
      uVar14 = uVar14 + 1;
      uVar15 = uVar15 >> 1;
    } while (uVar15 != 0);
  }
  *(uint *)(param_1 + 0x20) = uVar13;
  uVar15 = uVar13;
  if (uVar13 < uVar1) {
    ___bzero(local_58 + uVar13,(ulong)((uVar1 - 1) - uVar13) * 4 + 4);
    do {
      (*DAT_1011c5de8)(0x8d40,uVar13 + 0x8ce0,0xde1,0,0);
      uVar13 = uVar13 + 1;
      uVar15 = uVar1;
    } while (uVar1 != uVar13);
  }
  (*DAT_1011c5c08)(uVar15,local_58);
  lVar5 = *(long *)(param_1 + 0x28);
  if ((*(long *)(lVar5 + 0xf8) == 0) || (param_4 != '\x01')) {
    (*DAT_1011c5de8)(0x8d40,0x8d00,0xde1,0,0);
    (*DAT_1011c5de8)(0x8d40,0x8d20,0xde1,0,0);
  }
  else {
    cVar10 = FUN_1003859a0(param_1,param_2);
    if (cVar10 == '\0') {
      lVar6 = *(long *)(lVar5 + 0xf8);
      uVar4 = *(undefined4 *)(lVar5 + 0x108);
      iVar2 = *(int *)(lVar5 + 0x10c) + 0x8515;
      if (*(int *)(lVar6 + 0x14) != 0x8513) {
        iVar2 = *(int *)(lVar6 + 0x14);
      }
      (*DAT_1011c5de8)(0x8d40,0x8d00,iVar2,*(undefined4 *)(lVar6 + 0xc),uVar4);
      uVar12 = 0;
      if ((*(byte *)(lVar6 + 0xac) & 2) != 0) {
        uVar12 = *(undefined4 *)(lVar6 + 0xc);
      }
      (*DAT_1011c5de8)(0x8d40,0x8d20,iVar2,uVar12,uVar4);
    }
  }
  if (*(char *)(DAT_1011c8478 + 0x36) != '\0') {
    if (bVar8) {
      puVar11 = &DAT_1011c5c78;
    }
    else {
      puVar11 = &DAT_1011c5bc0;
    }
    (*(code *)*puVar11)(0x8db9);
  }
  if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

