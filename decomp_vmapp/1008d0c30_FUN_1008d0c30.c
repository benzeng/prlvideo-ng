
undefined8 FUN_1008d0c30(long param_1,long param_2,ulong param_3)

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
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  if (param_1 != 0) {
    if ((param_2 == 0) ||
       ((lVar6 = FUN_1008cefb0(param_1,0,param_2), (param_3 & 0x20) != 0 && (lVar6 == 0)))) {
      lVar6 = FUN_1008cefb0(param_1,0,"openssl_conf");
    }
    if (lVar6 == 0) {
      FUN_100888070();
    }
    else {
      lVar6 = FUN_1008cee60(param_1,lVar6);
      uVar14 = 0;
      if (lVar6 == 0) goto LAB_1008d1150;
      iVar3 = FUN_100885600(lVar6);
      if (0 < iVar3) {
        iVar3 = 0;
        do {
          lVar7 = FUN_100885620(lVar6,iVar3);
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
          iVar4 = FUN_100885600(DAT_1011c2a20);
          plVar17 = (long *)0x0;
          if (0 < iVar4) {
            iVar4 = 0;
            do {
              plVar17 = (long *)FUN_100885620(DAT_1011c2a20,iVar4);
              iVar5 = _strncmp((char *)plVar17[1],pcVar1,(long)iVar15);
              if (iVar5 == 0) break;
              iVar4 = iVar4 + 1;
              iVar5 = FUN_100885600(DAT_1011c2a20);
              plVar17 = (long *)0x0;
            } while (iVar4 < iVar5);
          }
          if (((param_3 & 8) == 0) && (plVar17 == (long *)0x0)) {
            pcVar8 = (char *)FUN_1008cefb0(param_1,uVar14,"path");
            if (pcVar8 == (char *)0x0) {
              FUN_100888070();
              pcVar8 = pcVar1;
            }
            lVar7 = FUN_100878f50(0,pcVar8,0,0);
            uVar16 = 0x6e;
            if (lVar7 != 0) {
              lVar10 = FUN_1008792c0(lVar7,"OPENSSL_init");
              uVar16 = 0x70;
              if (lVar10 != 0) {
                lVar11 = FUN_1008792c0(lVar7,"OPENSSL_finish");
                if (DAT_1011c2a20 == 0) {
                  DAT_1011c2a20 = FUN_100884e10();
                  uVar16 = 0;
                  if (DAT_1011c2a20 == 0) goto LAB_1008d0fa0;
                }
                plVar17 = (long *)FUN_10081ddd0(0x30,"conf_mod.c",0x11d);
                uVar16 = 0;
                if (plVar17 != (long *)0x0) {
                  *plVar17 = lVar7;
                  lVar12 = FUN_10087d050(pcVar1);
                  plVar17[1] = lVar12;
                  plVar17[2] = lVar10;
                  plVar17[3] = lVar11;
                  *(undefined4 *)(plVar17 + 4) = 0;
                  iVar15 = FUN_1008852e0(DAT_1011c2a20,plVar17);
                  if (iVar15 != 0) goto LAB_1008d0ec0;
                  FUN_10081e1a0(plVar17);
                }
              }
LAB_1008d0fa0:
              FUN_100878de0(lVar7);
            }
            FUN_100887ce0(0xe,0x75,uVar16,"conf_mod.c",0x10f);
            FUN_1008890a0(4,"module=",pcVar1,", path=",pcVar8);
LAB_1008d0feb:
            if ((param_3 & 4) == 0) {
              FUN_100887ce0(0xe,0x76,0x71,"conf_mod.c",0xd4);
              FUN_1008890a0(2,"module=",pcVar1);
            }
LAB_1008d1120:
            uVar14 = 0xffffffff;
            if ((param_3 & 1) == 0) goto LAB_1008d1150;
          }
          else {
LAB_1008d0ec0:
            if (plVar17 == (long *)0x0) goto LAB_1008d0feb;
            puVar13 = (undefined8 *)FUN_10081ddd0(0x28,"conf_mod.c",0x154);
            if (puVar13 == (undefined8 *)0x0) {
LAB_1008d10a1:
              if ((param_3 & 4) == 0) {
                FUN_100887ce0(0xe,0x76,0x6d,"conf_mod.c",0xdf);
                FUN_1008823b0(local_45,0xd,"%-8d",0xffffffff);
                FUN_1008890a0(6,"module=",pcVar1,", value=",uVar14,", retcode=",local_45);
              }
              goto LAB_1008d1120;
            }
            *puVar13 = plVar17;
            uVar16 = FUN_10087d050(pcVar1);
            puVar13[1] = uVar16;
            lVar7 = FUN_10087d050(uVar14);
            puVar13[2] = lVar7;
            puVar13[4] = 0;
            if (puVar13[1] == 0) {
LAB_1008d108b:
              if (puVar13[2] != 0) {
                FUN_10081e1a0();
              }
              FUN_10081e1a0(puVar13);
              goto LAB_1008d10a1;
            }
            if (lVar7 == 0) {
LAB_1008d1086:
              FUN_10081e1a0();
              goto LAB_1008d108b;
            }
            bVar2 = false;
            if ((code *)plVar17[2] != (code *)0x0) {
              iVar15 = (*(code *)plVar17[2])(puVar13,param_1);
              bVar2 = true;
              if (0 < iVar15) goto LAB_1008d0f48;
LAB_1008d106a:
              if ((bVar2) && ((code *)plVar17[3] != (code *)0x0)) {
                (*(code *)plVar17[3])(puVar13);
              }
              if (puVar13[1] == 0) goto LAB_1008d108b;
              goto LAB_1008d1086;
            }
LAB_1008d0f48:
            if ((DAT_1011c2a28 == 0) && (DAT_1011c2a28 = FUN_100884e10(), DAT_1011c2a28 == 0)) {
              uVar16 = 0x16c;
LAB_1008d105e:
              FUN_100887ce0(0xe,0x73,0x41,"conf_mod.c",uVar16);
              goto LAB_1008d106a;
            }
            iVar15 = FUN_1008852e0(DAT_1011c2a28,puVar13);
            if (iVar15 == 0) {
              uVar16 = 0x172;
              goto LAB_1008d105e;
            }
            *(int *)(plVar17 + 4) = (int)plVar17[4] + 1;
          }
          iVar3 = iVar3 + 1;
          iVar15 = FUN_100885600(lVar6);
        } while (iVar3 < iVar15);
      }
    }
  }
  uVar14 = 1;
LAB_1008d1150:
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar14;
}

