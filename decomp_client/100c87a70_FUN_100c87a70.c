
long FUN_100c87a70(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  char *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  size_t sVar14;
  char *pcVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  char cVar20;
  long local_470;
  undefined8 local_440;
  undefined8 local_438;
  long local_38;
  
  lVar16 = *(long *)PTR____stack_chk_guard_1021e1840;
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = 0;
  }
  local_38 = lVar16;
  lVar11 = FUN_100c88200(param_1);
  if (lVar11 == 0) {
    uVar18 = 0xcf;
    uVar19 = 0x1b2;
  }
  else {
    local_438 = "content-type";
    iVar7 = FUN_100c60360(lVar11,&local_438);
    if (((iVar7 < 0) || (local_440 = param_1, lVar12 = FUN_100c60820(lVar11,iVar7), lVar12 == 0)) ||
       (pcVar1 = *(char **)(lVar12 + 8), pcVar1 == (char *)0x0)) {
      FUN_100c60790(lVar11,FUN_100c884e0);
      uVar18 = 0xd1;
      uVar19 = 0x1b8;
    }
    else {
      iVar7 = _strcmp(pcVar1,"multipart/signed");
      if (iVar7 == 0) {
        local_438 = "boundary";
        iVar7 = FUN_100c60360(*(undefined8 *)(lVar12 + 0x10),&local_438);
        if (((-1 < iVar7) &&
            (lVar12 = FUN_100c60820(*(undefined8 *)(lVar12 + 0x10),iVar7), lVar12 != 0)) &&
           (pcVar1 = *(char **)(lVar12 + 8), pcVar1 != (char *)0x0)) {
          sVar14 = _strlen(pcVar1);
          uVar18 = FUN_100c60010();
          iVar7 = (int)sVar14;
          bVar3 = true;
          local_470 = 0;
          cVar20 = '\0';
          bVar4 = false;
          do {
            cVar6 = cVar20;
            if (iVar7 == -1) {
LAB_100c87e07:
              do {
                cVar20 = cVar6;
                iVar8 = FUN_100c58b50(local_440,&local_438,0x400);
                if (iVar8 < 1) goto LAB_100c87f80;
                sVar14 = _strlen(pcVar1);
                iVar9 = (int)sVar14;
                if ((iVar9 + 2 <= iVar8) &&
                   (iVar10 = _strncmp((char *)&local_438,"--",2), iVar10 == 0)) {
                  iVar10 = _strncmp((char *)((long)&local_438 + 2),pcVar1,(long)iVar9);
                  if (iVar10 == 0) {
                    iVar8 = _strncmp((char *)((long)&local_438 + (long)iVar9 + 2),"--",2);
                    bVar3 = true;
                    cVar6 = cVar20 + '\x01';
                    if (iVar8 == 0) goto LAB_100c87fd5;
                    goto LAB_100c87e07;
                  }
                }
                cVar6 = '\0';
              } while (cVar20 == '\0');
            }
            else {
              do {
                while( true ) {
                  cVar20 = cVar6;
                  iVar8 = FUN_100c58b50(local_440,&local_438,0x400);
                  if (iVar8 < 1) goto LAB_100c87f80;
                  if (((iVar8 < iVar7 + 2) ||
                      (iVar9 = _strncmp((char *)&local_438,"--",2), iVar9 != 0)) ||
                     (iVar9 = _strncmp((char *)((long)&local_438 + 2),pcVar1,(long)iVar7),
                     iVar9 != 0)) break;
                  iVar8 = _strncmp((char *)((long)&local_438 + (long)iVar7 + 2),"--",2);
                  bVar3 = true;
                  cVar6 = cVar20 + '\x01';
                  if (iVar8 == 0) goto LAB_100c87fd5;
                }
                cVar6 = '\0';
              } while (cVar20 == '\0');
            }
            pcVar15 = (char *)((long)&local_438 + (long)iVar8 + -1);
            bVar5 = false;
            do {
              bVar2 = true;
              if ((*pcVar15 != '\n') && (bVar2 = bVar5, iVar9 = iVar8, *pcVar15 != '\r')) break;
              bVar5 = bVar2;
              iVar9 = iVar8 + -1;
              pcVar15 = pcVar15 + -1;
              bVar2 = 1 < iVar8;
              iVar8 = iVar9;
            } while (bVar2);
            if (bVar3) {
              if (local_470 != 0) {
                FUN_100c604e0(uVar18);
              }
              uVar19 = FUN_100c59860();
              local_470 = FUN_100c58530(uVar19);
              FUN_100c58d60(local_470,0x82,0,0);
            }
            else if (bVar4) {
              FUN_100c58980(local_470,"\r\n",2);
            }
            bVar3 = false;
            bVar4 = bVar5;
            if (iVar9 != 0) {
              FUN_100c58980(local_470,&local_438,iVar9);
              bVar3 = false;
            }
          } while( true );
        }
        FUN_100c60790(lVar11,FUN_100c884e0);
        uVar18 = 0xd3;
        uVar19 = 0x1c3;
      }
      else {
        iVar7 = _strcmp(pcVar1,"application/x-pkcs7-mime");
        if ((iVar7 != 0) && (iVar7 = _strcmp(pcVar1,"application/pkcs7-mime"), iVar7 != 0)) {
          FUN_100c62ee0(0xd,0xd4,0xcd,"asn_mime.c",0x1fc);
          lVar13 = 0;
          FUN_100c642a0(2,"type: ",*(undefined8 *)(lVar12 + 8));
          FUN_100c60790(lVar11,FUN_100c884e0);
          goto LAB_100c87bf2;
        }
        FUN_100c60790(lVar11,FUN_100c884e0);
        lVar13 = FUN_100c88530(local_440,param_3);
        if (lVar13 != 0) goto LAB_100c87bf2;
        uVar18 = 0xcb;
        uVar19 = 0x205;
      }
    }
  }
  FUN_100c62ee0(0xd,0xd4,uVar18,"asn_mime.c",uVar19);
  lVar13 = 0;
  goto LAB_100c87bf2;
LAB_100c87f80:
  FUN_100c60790(lVar11,FUN_100c884e0);
LAB_100c87f8f:
  uVar19 = 0xd2;
  uVar17 = 0x1c9;
LAB_100c87fab:
  FUN_100c62ee0(0xd,0xd4,uVar19,"asn_mime.c",uVar17);
  FUN_100c60790(uVar18,FUN_100c58780);
  goto LAB_100c87fc3;
LAB_100c87fd5:
  FUN_100c604e0(uVar18,local_470);
  FUN_100c60790(lVar11,FUN_100c884e0);
  iVar7 = FUN_100c60800(uVar18);
  if (iVar7 != 2) goto LAB_100c87f8f;
  uVar19 = FUN_100c60820(uVar18,1);
  lVar16 = FUN_100c88200(uVar19);
  if (lVar16 == 0) {
    uVar19 = 0xd0;
    uVar17 = 0x1d2;
    goto LAB_100c87fab;
  }
  local_438 = "content-type";
  iVar7 = FUN_100c60360(lVar16,&local_438);
  if (((-1 < iVar7) && (lVar11 = FUN_100c60820(lVar16,iVar7), lVar11 != 0)) &&
     (pcVar1 = *(char **)(lVar11 + 8), pcVar1 != (char *)0x0)) {
    iVar7 = _strcmp(pcVar1,"application/x-pkcs7-signature");
    if ((iVar7 == 0) || (iVar7 = _strcmp(pcVar1,"application/pkcs7-signature"), iVar7 == 0)) {
      FUN_100c60790(lVar16,FUN_100c884e0);
      lVar13 = FUN_100c88530(uVar19,param_3);
      if (lVar13 == 0) {
        uVar19 = 0xcc;
        uVar17 = 0x1ea;
        goto LAB_100c87fab;
      }
      if (param_2 != (undefined8 *)0x0) {
        uVar17 = FUN_100c60820(uVar18,0);
        *param_2 = uVar17;
        FUN_100c586e0(uVar19);
        FUN_100c5ffd0(uVar18);
        lVar16 = *(long *)PTR____stack_chk_guard_1021e1840;
        goto LAB_100c87bf2;
      }
    }
    else {
      FUN_100c62ee0(0xd,0xd4,0xd5,"asn_mime.c",0x1e1);
      lVar13 = 0;
      FUN_100c642a0(2,"type: ",*(undefined8 *)(lVar11 + 8));
      FUN_100c60790(lVar16,FUN_100c884e0);
    }
    FUN_100c60790(uVar18,FUN_100c58780);
    lVar16 = *(long *)PTR____stack_chk_guard_1021e1840;
    goto LAB_100c87bf2;
  }
  FUN_100c60790(lVar16,FUN_100c884e0);
  FUN_100c62ee0(0xd,0xd4,0xd4,"asn_mime.c",0x1db);
LAB_100c87fc3:
  lVar13 = 0;
  lVar16 = *(long *)PTR____stack_chk_guard_1021e1840;
LAB_100c87bf2:
  if (lVar16 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return lVar13;
}

