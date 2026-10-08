
undefined8 FUN_100cac1b0(long param_1,long param_2,ulong param_3)

{
  char *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  char *pcVar8;
  size_t sVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  int iVar15;
  undefined8 uVar16;
  long *plVar17;
  undefined1 local_45 [13];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
  if (param_1 != 0) {
    if ((param_2 == 0) ||
       ((lVar6 = FUN_100caa530(param_1,0,param_2), (param_3 & 0x20) != 0 && (lVar6 == 0)))) {
      lVar6 = FUN_100caa530(param_1,0,"openssl_conf");
    }
    if (lVar6 == 0) {
      FUN_100c63270();
    }
    else {
      lVar6 = FUN_100caa3e0(param_1,lVar6);
      uVar14 = 0;
      if (lVar6 == 0) goto LAB_100cac6d0;
      iVar3 = FUN_100c60800(lVar6);
      if (0 < iVar3) {
        iVar3 = 0;
        do {
          lVar7 = FUN_100c60820(lVar6,iVar3);
          pcVar1 = *(char **)(lVar7 + 8);
          uVar14 = *(undefined8 *)(lVar7 + 0x10);
          pcVar8 = _strrchr(pcVar1,0x2e);
          if (pcVar8 == (char *)0x0) {
            sVar9 = _strlen(pcVar1);
            iVar15 = (int)sVar9;
          }
          else {
            iVar15 = (int)pcVar8 - (int)pcVar1;
          }
          iVar4 = FUN_100c60800(DAT_102318460);
          plVar17 = (long *)0x0;
          if (0 < iVar4) {
            iVar4 = 0;
            do {
              plVar17 = (long *)FUN_100c60820(DAT_102318460,iVar4);
              iVar5 = _strncmp((char *)plVar17[1],pcVar1,(long)iVar15);
              if (iVar5 == 0) break;
              iVar4 = iVar4 + 1;
              iVar5 = FUN_100c60800(DAT_102318460);
              plVar17 = (long *)0x0;
            } while (iVar4 < iVar5);
          }
          if (((param_3 & 8) == 0) && (plVar17 == (long *)0x0)) {
            pcVar8 = (char *)FUN_100caa530(param_1,uVar14,"path");
            if (pcVar8 == (char *)0x0) {
              FUN_100c63270();
              pcVar8 = pcVar1;
            }
            lVar7 = FUN_100c54150(0,pcVar8,0,0);
            uVar16 = 0x6e;
            if (lVar7 != 0) {
              lVar10 = FUN_100c544c0(lVar7,"OPENSSL_init");
              uVar16 = 0x70;
              if (lVar10 != 0) {
                lVar11 = FUN_100c544c0(lVar7,"OPENSSL_finish");
                if (DAT_102318460 == 0) {
                  DAT_102318460 = FUN_100c60010();
                  uVar16 = 0;
                  if (DAT_102318460 == 0) goto LAB_100cac520;
                }
                plVar17 = (long *)FUN_100bf3540(0x30,"conf_mod.c",0x11d);
                uVar16 = 0;
                if (plVar17 != (long *)0x0) {
                  *plVar17 = lVar7;
                  lVar12 = FUN_100c58250(pcVar1);
                  plVar17[1] = lVar12;
                  plVar17[2] = lVar10;
                  plVar17[3] = lVar11;
                  *(undefined4 *)(plVar17 + 4) = 0;
                  iVar15 = FUN_100c604e0(DAT_102318460,plVar17);
                  if (iVar15 != 0) goto LAB_100cac440;
                  FUN_100bf3910(plVar17);
                }
              }
LAB_100cac520:
              FUN_100c53fe0(lVar7);
            }
            FUN_100c62ee0(0xe,0x75,uVar16,"conf_mod.c",0x10f);
            FUN_100c642a0(4,"module=",pcVar1,", path=",pcVar8);
LAB_100cac56b:
            if ((param_3 & 4) == 0) {
              FUN_100c62ee0(0xe,0x76,0x71,"conf_mod.c",0xd4);
              FUN_100c642a0(2,"module=",pcVar1);
            }
LAB_100cac6a0:
            uVar14 = 0xffffffff;
            if ((param_3 & 1) == 0) goto LAB_100cac6d0;
          }
          else {
LAB_100cac440:
            if (plVar17 == (long *)0x0) goto LAB_100cac56b;
            puVar13 = (undefined8 *)FUN_100bf3540(0x28,"conf_mod.c",0x154);
            if (puVar13 == (undefined8 *)0x0) {
LAB_100cac621:
              if ((param_3 & 4) == 0) {
                FUN_100c62ee0(0xe,0x76,0x6d,"conf_mod.c",0xdf);
                FUN_100c5d5b0(local_45,0xd,"%-8d",0xffffffff);
                FUN_100c642a0(6,"module=",pcVar1,", value=",uVar14,", retcode=",local_45);
              }
              goto LAB_100cac6a0;
            }
            *puVar13 = plVar17;
            uVar16 = FUN_100c58250(pcVar1);
            puVar13[1] = uVar16;
            lVar7 = FUN_100c58250(uVar14);
            puVar13[2] = lVar7;
            puVar13[4] = 0;
            if (puVar13[1] == 0) {
LAB_100cac60b:
              if (puVar13[2] != 0) {
                FUN_100bf3910();
              }
              FUN_100bf3910(puVar13);
              goto LAB_100cac621;
            }
            if (lVar7 == 0) {
LAB_100cac606:
              FUN_100bf3910();
              goto LAB_100cac60b;
            }
            bVar2 = false;
            if ((code *)plVar17[2] != (code *)0x0) {
              iVar15 = (*(code *)plVar17[2])(puVar13,param_1);
              bVar2 = true;
              if (0 < iVar15) goto LAB_100cac4c8;
LAB_100cac5ea:
              if ((bVar2) && ((code *)plVar17[3] != (code *)0x0)) {
                (*(code *)plVar17[3])(puVar13);
              }
              if (puVar13[1] == 0) goto LAB_100cac60b;
              goto LAB_100cac606;
            }
LAB_100cac4c8:
            if ((DAT_102318468 == 0) && (DAT_102318468 = FUN_100c60010(), DAT_102318468 == 0)) {
              uVar16 = 0x16c;
LAB_100cac5de:
              FUN_100c62ee0(0xe,0x73,0x41,"conf_mod.c",uVar16);
              goto LAB_100cac5ea;
            }
            iVar15 = FUN_100c604e0(DAT_102318468,puVar13);
            if (iVar15 == 0) {
              uVar16 = 0x172;
              goto LAB_100cac5de;
            }
            *(int *)(plVar17 + 4) = (int)plVar17[4] + 1;
          }
          iVar3 = iVar3 + 1;
          iVar15 = FUN_100c60800(lVar6);
        } while (iVar3 < iVar15);
      }
    }
  }
  uVar14 = 1;
LAB_100cac6d0:
  if (*(long *)PTR____stack_chk_guard_1021e1840 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar14;
}

