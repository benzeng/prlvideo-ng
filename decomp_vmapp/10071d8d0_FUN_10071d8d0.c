
ulong FUN_10071d8d0(long *param_1)

{
  long ***ppplVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  size_t sVar10;
  long ****pppplVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 *puVar14;
  long *plVar15;
  long ***local_70;
  long ***local_68;
  uint local_60;
  undefined4 uStack_5c;
  undefined8 ***local_58;
  undefined8 ***local_50;
  undefined1 local_48 [16];
  long local_38;
  
  lVar13 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_70 = (long ***)&local_70;
  local_68 = local_70;
  local_38 = lVar13;
  if (DAT_1011ccb40 == 0) {
    uVar7 = FUN_10071e690(0xfffffffa,0);
  }
  else {
    uVar7 = FUN_100742250(DAT_10116db38);
    if ((int)uVar7 == 0) {
      uVar4 = FUN_10071ee90(&local_70,PTR_DAT_10116e310,1);
      if (uVar4 == 0) {
        uVar4 = 0;
        if ((long ****)local_70 != &local_70) {
          uVar4 = 0;
          pppplVar11 = (long ****)local_70;
          do {
            lVar8 = FUN_100714f00(pppplVar11[3]);
            if (lVar8 != 0) {
              ppplVar1 = pppplVar11[3];
              local_58 = &local_58;
              local_50 = local_58;
              iVar5 = FUN_10071e980(ppplVar1,&local_60);
              if (iVar5 != 0) {
LAB_10071dd54:
                uVar4 = FUN_10071e780();
                break;
              }
              lVar3 = CONCAT44(uStack_5c,local_60);
              puVar9 = _malloc(0x88);
              if (lVar3 == 0) {
                if (puVar9 == (undefined8 *)0x0) goto LAB_10071dd2e;
                ___bzero(puVar9,0x88);
                _strncpy((char *)((long)puVar9 + 0x14),(char *)ppplVar1,0x50);
                puVar9[0xd] = (char *)((long)puVar9 + 0x14);
                *(undefined4 *)(puVar9 + 2) = 2;
                sVar10 = _strlen((char *)ppplVar1);
                *(int *)(puVar9 + 0xe) = (int)sVar10;
                puVar9[0x10] = puVar9 + 0xf;
                puVar9[0xf] = puVar9 + 0xf;
                iVar5 = 2;
              }
              else {
                if (puVar9 == (undefined8 *)0x0) {
LAB_10071dd2e:
                  FUN_10071e690(0xfffffffe,0);
                  goto LAB_10071dd54;
                }
                ___bzero(puVar9,0x88);
                iVar5 = FUN_10071edd0(ppplVar1,puVar9 + 0xd,&local_60);
                if (iVar5 != 0) {
                  _free(puVar9);
                  lVar13 = *(long *)PTR____stack_chk_guard_100ba2320;
                  goto LAB_10071dd54;
                }
                FUN_100726d30(local_48,puVar9[0xd],*(undefined4 *)(puVar9 + 0xe));
                FUN_1007204b0(local_48,(long)puVar9 + 0x14,0x50);
                *(undefined4 *)(puVar9 + 2) = 1;
                sVar10 = (size_t)local_60;
                *(uint *)(puVar9 + 0xe) = local_60;
                puVar9[0x10] = puVar9 + 0xf;
                puVar9[0xf] = puVar9 + 0xf;
                iVar5 = 1;
              }
              plVar15 = (long *)*param_1;
              if (plVar15 != param_1) {
                do {
                  if ((((int)plVar15[2] == iVar5) && ((int)plVar15[0xe] == (int)sVar10)) &&
                     (iVar6 = _strcmp((char *)((long)plVar15 + 0x14),(char *)((long)puVar9 + 0x14)),
                     iVar6 == 0)) {
                    FUN_100719320(puVar9 + 0xf);
                    if ((*(int *)(puVar9 + 2) == 1) && ((void *)puVar9[0xd] != (void *)0x0)) {
                      _free((void *)puVar9[0xd]);
                    }
                    _free(puVar9);
                    lVar13 = *(long *)PTR____stack_chk_guard_100ba2320;
                    goto LAB_10071dd20;
                  }
                  plVar15 = (long *)*plVar15;
                } while (plVar15 != param_1);
              }
              puVar14 = puVar9 + 0xf;
              uVar4 = FUN_10071bfa0(puVar14,puVar9[0xd],sVar10 & 0xffffffff);
              if (uVar4 == 0) {
                ppplVar1 = pppplVar11[3];
                puVar12 = puVar14;
                do {
                  puVar12 = (undefined8 *)*puVar12;
                  if (puVar12 == puVar14) goto LAB_10071dc73;
                  iVar5 = _strncmp((char *)((long)puVar12 + 0x184),(char *)ppplVar1,0x50);
                } while (iVar5 != 0);
                if (puVar12 == (undefined8 *)0x0) {
LAB_10071dc73:
                  FUN_100719320(puVar14);
                  if ((*(int *)(puVar9 + 2) == 1) && ((void *)puVar9[0xd] != (void *)0x0)) {
                    _free((void *)puVar9[0xd]);
                  }
                  _free(puVar9);
                  *(undefined4 *)(lVar8 + 0x54) = 0;
                  uVar4 = 0;
                  lVar13 = *(long *)PTR____stack_chk_guard_100ba2320;
                }
                else {
                  FUN_10071de40(puVar12,lVar8);
                  *(byte *)((long)puVar12 + 0x1d4) = *(byte *)((long)puVar12 + 0x1d4) | 1;
                  puVar14 = (undefined8 *)param_1[1];
                  puVar9[1] = puVar14;
                  *puVar9 = param_1;
                  *puVar14 = puVar9;
                  param_1[1] = (long)puVar9;
                  uVar4 = 0;
                  lVar13 = *(long *)PTR____stack_chk_guard_100ba2320;
                }
              }
              else {
                FUN_100719320(puVar14);
                if ((*(int *)(puVar9 + 2) == 1) && ((void *)puVar9[0xd] != (void *)0x0)) {
                  _free((void *)puVar9[0xd]);
                }
                _free(puVar9);
                lVar13 = *(long *)PTR____stack_chk_guard_100ba2320;
                if (uVar4 != 0xfffffff4) break;
                *(undefined4 *)(lVar8 + 0x54) = 0;
                uVar4 = 0xfffffff4;
              }
            }
LAB_10071dd20:
            pppplVar11 = (long ****)*pppplVar11;
          } while (pppplVar11 != &local_70);
        }
        FUN_100742310(DAT_10116db38);
        FUN_10071f210(&local_70);
        uVar7 = 0;
        if (uVar4 != 0) {
          plVar15 = (long *)*param_1;
          while (plVar15 != param_1) {
            plVar2 = (long *)*plVar15;
            FUN_100719320(plVar15 + 0xf);
            if (((int)plVar15[2] == 1) && ((void *)plVar15[0xd] != (void *)0x0)) {
              _free((void *)plVar15[0xd]);
            }
            _free(plVar15);
            plVar15 = plVar2;
          }
          param_1[1] = (long)param_1;
          *param_1 = (long)param_1;
          uVar7 = (ulong)uVar4;
        }
      }
      else {
        uVar7 = (ulong)uVar4;
        FUN_100742310(DAT_10116db38);
      }
    }
  }
  if (lVar13 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar7;
}

