
int FUN_100c93570(long param_1)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  char *pcVar15;
  undefined8 uVar16;
  int iVar17;
  int iVar18;
  undefined8 uVar19;
  ulong uVar20;
  undefined4 local_7c;
  uint local_70;
  long local_60;
  int local_40;
  long local_38;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    uVar16 = 0x69;
    uVar19 = 0xa2;
LAB_100c935d1:
    FUN_100c62ee0(0xb,0x7f,uVar16,"x509_vfy.c",uVar19);
    return -1;
  }
  if (*(long *)(param_1 + 0xa0) != 0) {
    uVar16 = 0x42;
    uVar19 = 0xaa;
    goto LAB_100c935d1;
  }
  lVar1 = *(long *)(param_1 + 0x28);
  pcVar2 = *(code **)(param_1 + 0x40);
  lVar12 = FUN_100c60010();
  *(long *)(param_1 + 0xa0) = lVar12;
  if ((lVar12 == 0) || (iVar6 = FUN_100c604e0(lVar12,*(undefined8 *)(param_1 + 0x10)), iVar6 == 0))
  {
    FUN_100c62ee0(0xb,0x7f,0x41,"x509_vfy.c",0xb6);
    local_60 = 0;
    lVar12 = 0;
    iVar6 = 0;
  }
  else {
    FUN_100bf2cf0(*(long *)(param_1 + 0x10) + 0x1c,1,3,"x509_vfy.c",0xb9);
    *(undefined4 *)(param_1 + 0x9c) = 1;
    lVar12 = 0;
    if ((*(long *)(param_1 + 0x18) == 0) || (lVar12 = FUN_100c5fe10(), lVar12 != 0)) {
      iVar7 = FUN_100c60800(*(undefined8 *)(param_1 + 0xa0));
      lVar13 = FUN_100c60820(*(undefined8 *)(param_1 + 0xa0),iVar7 + -1);
      iVar18 = *(int *)(lVar1 + 0x28);
      while( true ) {
        if (((iVar18 < iVar7) ||
            (iVar6 = (**(code **)(param_1 + 0x50))(param_1,lVar13,lVar13), iVar6 != 0)) ||
           (*(long *)(param_1 + 0x18) == 0)) goto LAB_100c9380a;
        iVar6 = FUN_100c60800(lVar12);
        iVar17 = 0;
        if (iVar6 < 1) break;
        while( true ) {
          lVar14 = FUN_100c60820(lVar12,iVar17);
          iVar6 = (**(code **)(param_1 + 0x50))(param_1,lVar13,lVar14);
          if (iVar6 != 0) break;
          iVar17 = iVar17 + 1;
          iVar6 = FUN_100c60800(lVar12);
          if (iVar6 <= iVar17) goto LAB_100c937c8;
        }
        local_38 = lVar14;
        if (lVar14 == 0) goto LAB_100c9380a;
        iVar6 = FUN_100c604e0(*(undefined8 *)(param_1 + 0xa0),lVar14);
        if (iVar6 == 0) {
          FUN_100c62ee0(0xb,0x7f,0x41,"x509_vfy.c",0xd8);
          local_60 = 0;
          iVar6 = 0;
          goto LAB_100c93fec;
        }
        FUN_100bf2cf0(lVar14 + 0x1c,1,3,"x509_vfy.c",0xdb);
        FUN_100c60170(lVar12,lVar14);
        *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + 1;
        iVar7 = iVar7 + 1;
        lVar13 = lVar14;
      }
LAB_100c937c8:
      local_38 = 0;
LAB_100c9380a:
      bVar5 = false;
      local_60 = 0;
      iVar17 = iVar7;
      do {
        iVar6 = FUN_100c60800(*(undefined8 *)(param_1 + 0xa0));
        iVar6 = iVar6 + -1;
        lVar13 = FUN_100c60820(*(undefined8 *)(param_1 + 0xa0),iVar6);
        iVar9 = (**(code **)(param_1 + 0x50))(param_1,lVar13,lVar13);
        if (iVar9 != 0) {
          iVar9 = FUN_100c60800(*(undefined8 *)(param_1 + 0xa0));
          if (iVar9 == 1) {
            iVar9 = (**(code **)(param_1 + 0x48))(&local_38,param_1,lVar13);
            if (iVar9 < 1) {
              *(undefined4 *)(param_1 + 0xb8) = 0x12;
              *(long *)(param_1 + 0xc0) = lVar13;
              *(int *)(param_1 + 0xb4) = iVar6;
            }
            else {
              iVar10 = FUN_100c92770(lVar13,local_38);
              if (iVar10 == 0) {
                FUN_100c7cd70(lVar13);
                lVar13 = local_38;
                FUN_100c60850(*(undefined8 *)(param_1 + 0xa0),iVar6);
                *(undefined4 *)(param_1 + 0x9c) = 0;
                goto joined_r0x000100c93996;
              }
              *(undefined4 *)(param_1 + 0xb8) = 0x12;
              *(long *)(param_1 + 0xc0) = lVar13;
              *(int *)(param_1 + 0xb4) = iVar6;
              if (iVar9 == 1) {
                FUN_100c7cd70(local_38);
              }
            }
            iVar6 = 0;
            iVar9 = (*pcVar2)(0,param_1);
            if (iVar9 == 0) goto LAB_100c93fec;
            bVar5 = true;
          }
          else {
            local_60 = FUN_100c60730(*(undefined8 *)(param_1 + 0xa0));
            *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + -1;
            iVar17 = iVar17 + -1;
            lVar13 = FUN_100c60820(*(undefined8 *)(param_1 + 0xa0),iVar7 + -2);
            iVar7 = iVar7 + -1;
          }
        }
joined_r0x000100c93996:
        while ((iVar7 <= iVar18 &&
               (iVar6 = (**(code **)(param_1 + 0x50))(param_1,lVar13,lVar13), iVar6 == 0))) {
          iVar6 = (**(code **)(param_1 + 0x48))(&local_38,param_1,lVar13);
          lVar14 = local_38;
          if (iVar6 < 0) {
            return iVar6;
          }
          if (iVar6 == 0) break;
          iVar6 = FUN_100c604e0(*(undefined8 *)(param_1 + 0xa0),local_38);
          if (iVar6 == 0) {
            FUN_100c7cd70(local_38);
            FUN_100c62ee0(0xb,0x7f,0x41,"x509_vfy.c",0x12f);
            return 0;
          }
          lVar13 = lVar14;
          iVar7 = iVar7 + 1;
        }
        if ((iVar7 != *(int *)(param_1 + 0x9c)) ||
           ((*(byte *)(*(long *)(param_1 + 0x28) + 0x1a) & 0x10) != 0)) {
LAB_100c93ab9:
          iVar6 = (**(code **)(param_1 + 0x50))(param_1,lVar13,lVar13);
          if (iVar6 == 0) {
            if ((local_60 == 0) ||
               (iVar6 = (**(code **)(param_1 + 0x50))(param_1,lVar13,local_60), iVar6 == 0)) {
              uVar8 = 2;
              if (iVar7 <= *(int *)(param_1 + 0x9c)) {
                uVar8 = 0x14;
              }
              *(undefined4 *)(param_1 + 0xb8) = uVar8;
              *(long *)(param_1 + 0xc0) = lVar13;
            }
            else {
              FUN_100c604e0(*(undefined8 *)(param_1 + 0xa0),local_60);
              iVar7 = iVar7 + 1;
              *(int *)(param_1 + 0x9c) = iVar7;
              *(long *)(param_1 + 0xc0) = local_60;
              *(undefined4 *)(param_1 + 0xb8) = 0x13;
              local_60 = 0;
            }
            *(int *)(param_1 + 0xb4) = iVar7 + -1;
            iVar18 = (*pcVar2)(0,param_1);
            bVar5 = true;
            iVar6 = 0;
            if (iVar18 == 0) goto LAB_100c93fec;
          }
          pcVar2 = *(code **)(param_1 + 0x40);
          if (*(long *)(param_1 + 0xe0) == 0) {
            lVar13 = *(long *)(param_1 + 0x28);
            uVar11 = *(uint *)(lVar13 + 0x18);
            pcVar15 = _getenv("OPENSSL_ALLOW_PROXY_CERTS");
            local_70 = 1;
            if (pcVar15 == (char *)0x0) {
              local_70 = uVar11 >> 6 & 1;
            }
            local_7c = *(undefined4 *)(lVar13 + 0x20);
          }
          else {
            local_70 = 0;
            local_7c = 6;
          }
          if (*(int *)(param_1 + 0x9c) < 1) goto LAB_100c93e77;
          local_40 = -1;
          uVar20 = 0;
          iVar7 = 0;
          iVar18 = 0;
          goto LAB_100c93c2b;
        }
        do {
          iVar9 = iVar17;
          if (iVar9 < 2) goto LAB_100c93ab9;
          uVar16 = FUN_100c60820(*(undefined8 *)(param_1 + 0xa0),iVar9 + -2);
          iVar6 = (**(code **)(param_1 + 0x48))(&local_38,param_1,uVar16);
          if (iVar6 < 0) goto LAB_100c93fec;
          iVar17 = iVar9 + -1;
        } while (iVar6 < 1);
        iVar17 = iVar9 + -1;
        FUN_100c7cd70(local_38);
        uVar16 = *(undefined8 *)(param_1 + 0xa0);
        for (iVar6 = iVar7; iVar17 < iVar6; iVar6 = iVar6 + -1) {
          local_38 = FUN_100c60730(uVar16);
          FUN_100c7cd70(local_38);
          uVar16 = *(undefined8 *)(param_1 + 0xa0);
          iVar7 = iVar17;
        }
        uVar8 = FUN_100c60800();
        *(undefined4 *)(param_1 + 0x9c) = uVar8;
      } while( true );
    }
    FUN_100c62ee0(0xb,0x7f,0x41,"x509_vfy.c",0xbf);
    local_60 = 0;
    iVar6 = 0;
  }
  goto LAB_100c93fec;
LAB_100c93c2b:
  do {
    uVar8 = (undefined4)uVar20;
    lVar13 = FUN_100c60820(*(undefined8 *)(param_1 + 0xa0),uVar20 & 0xffffffff);
    if (((*(byte *)(*(long *)(param_1 + 0x28) + 0x18) & 0x10) == 0) &&
       ((*(byte *)(lVar13 + 0x49) & 2) != 0)) {
      *(undefined4 *)(param_1 + 0xb8) = 0x22;
      *(undefined4 *)(param_1 + 0xb4) = uVar8;
      *(long *)(param_1 + 0xc0) = lVar13;
      iVar6 = 0;
      iVar17 = (*pcVar2)(0,param_1);
      if (iVar17 == 0) goto LAB_100c93fec;
    }
    if ((local_70 == 0) && ((*(byte *)(lVar13 + 0x49) & 4) != 0)) {
      *(undefined4 *)(param_1 + 0xb8) = 0x28;
      *(undefined4 *)(param_1 + 0xb4) = uVar8;
      *(long *)(param_1 + 0xc0) = lVar13;
      iVar6 = 0;
      iVar17 = (*pcVar2)(0,param_1);
      if (iVar17 == 0) goto LAB_100c93fec;
    }
    uVar11 = FUN_100ca5ce0(lVar13);
    if (local_40 == 0) {
      if (uVar11 != 0) {
        *(undefined4 *)(param_1 + 0xb8) = 0x25;
LAB_100c93d0c:
        *(undefined4 *)(param_1 + 0xb4) = uVar8;
        *(long *)(param_1 + 0xc0) = lVar13;
        iVar6 = 0;
        iVar17 = (*pcVar2)(0,param_1);
        if (iVar17 == 0) goto LAB_100c93fec;
      }
    }
    else if (local_40 == -1) {
      if (1 < uVar11) {
LAB_100c93cf1:
        if ((*(ulong *)(*(long *)(param_1 + 0x28) + 0x18) & 0x20) != 0) goto LAB_100c93d00;
      }
    }
    else {
      if (uVar11 == 0) {
LAB_100c93d00:
        *(undefined4 *)(param_1 + 0xb8) = 0x18;
        goto LAB_100c93d0c;
      }
      if (uVar11 != 1) goto LAB_100c93cf1;
    }
    if ((0 < *(int *)(*(long *)(param_1 + 0x28) + 0x20)) &&
       ((iVar6 = FUN_100ca5120(lVar13,local_7c,0 < local_40), iVar6 == 0 ||
        ((iVar6 != 1 && ((*(ulong *)(*(long *)(param_1 + 0x28) + 0x18) & 0x20) != 0)))))) {
      *(undefined4 *)(param_1 + 0xb8) = 0x1a;
      *(undefined4 *)(param_1 + 0xb4) = uVar8;
      *(long *)(param_1 + 0xc0) = lVar13;
      iVar6 = 0;
      iVar17 = (*pcVar2)(0,param_1);
      if (iVar17 == 0) goto LAB_100c93fec;
    }
    if ((((1 < (long)uVar20) && ((*(byte *)(lVar13 + 0x48) & 0x20) == 0)) &&
        (*(long *)(lVar13 + 0x38) != -1)) &&
       ((long)iVar7 + 1 + *(long *)(lVar13 + 0x38) < (long)iVar18)) {
      *(undefined4 *)(param_1 + 0xb8) = 0x19;
      *(undefined4 *)(param_1 + 0xb4) = uVar8;
      *(long *)(param_1 + 0xc0) = lVar13;
      iVar6 = 0;
      iVar17 = (*pcVar2)(0,param_1);
      if (iVar17 == 0) goto LAB_100c93fec;
    }
    uVar3 = *(ulong *)(lVar13 + 0x48);
    local_40 = 1;
    if ((uVar3 & 0x400) != 0) {
      if ((*(long *)(lVar13 + 0x40) != -1) && (*(long *)(lVar13 + 0x40) < (long)uVar20)) {
        *(undefined4 *)(param_1 + 0xb8) = 0x26;
        *(undefined4 *)(param_1 + 0xb4) = uVar8;
        *(long *)(param_1 + 0xc0) = lVar13;
        iVar6 = 0;
        iVar17 = (*pcVar2)(0,param_1);
        if (iVar17 == 0) goto LAB_100c93fec;
      }
      iVar7 = iVar7 + 1;
      local_40 = 0;
    }
    iVar18 = (~((uint)(uVar3 >> 5) & 0x7ffffff) & 1) + iVar18;
    uVar20 = uVar20 + 1;
  } while ((long)uVar20 < (long)*(int *)(param_1 + 0x9c));
LAB_100c93e77:
  iVar18 = FUN_100c60800(*(undefined8 *)(param_1 + 0xa0));
  if (0 < iVar18) {
    do {
      lVar13 = FUN_100c60820(*(undefined8 *)(param_1 + 0xa0),iVar18 + -1);
      iVar7 = iVar18 + -1;
      if ((iVar7 == 0) || ((*(byte *)(lVar13 + 0x48) & 0x20) == 0)) {
        iVar17 = FUN_100c60800(*(undefined8 *)(param_1 + 0xa0));
        while (iVar17 = iVar17 + -1, iVar7 < iVar17) {
          lVar14 = FUN_100c60820(*(undefined8 *)(param_1 + 0xa0),iVar17);
          if ((*(long *)(lVar14 + 0x90) != 0) && (iVar6 = FUN_100ca76c0(), iVar6 != 0)) {
            *(int *)(param_1 + 0xb8) = iVar6;
            *(int *)(param_1 + 0xb4) = iVar7;
            *(long *)(param_1 + 0xc0) = lVar13;
            iVar6 = 0;
            iVar9 = (**(code **)(param_1 + 0x40))(0,param_1);
            if (iVar9 == 0) goto LAB_100c93fec;
          }
        }
      }
      bVar4 = 1 < iVar18;
      iVar18 = iVar7;
    } while (bVar4);
  }
  if (0 < *(int *)(lVar1 + 0x24)) {
    pcVar2 = *(code **)(param_1 + 0x40);
    iVar18 = FUN_100c60800(*(undefined8 *)(param_1 + 0xa0));
    uVar16 = FUN_100c60820(*(undefined8 *)(param_1 + 0xa0),iVar18 + -1);
    iVar6 = 0;
    iVar7 = FUN_100c9ae40(uVar16,*(undefined4 *)(*(long *)(param_1 + 0x28) + 0x24),0);
    if (iVar7 != 1) {
      *(int *)(param_1 + 0xb4) = iVar18 + -1;
      *(undefined8 *)(param_1 + 0xc0) = uVar16;
      *(uint *)(param_1 + 0xb8) = (iVar7 == 2) + 0x1b;
      iVar18 = (*pcVar2)(0,param_1);
      if (iVar18 == 0) goto LAB_100c93fec;
    }
  }
  iVar6 = 0;
  FUN_100c94090(0,*(undefined8 *)(param_1 + 0xa0));
  iVar18 = (**(code **)(param_1 + 0x58))(param_1);
  if (iVar18 != 0) {
    if (*(code **)(param_1 + 0x38) == (code *)0x0) {
      iVar18 = FUN_100c941c0(param_1);
    }
    else {
      iVar18 = (**(code **)(param_1 + 0x38))();
    }
    iVar6 = 0;
    if ((iVar18 != 0) &&
       (((bVar5 || ((*(byte *)(*(long *)(param_1 + 0x28) + 0x18) & 0x80) == 0)) ||
        (iVar18 = (**(code **)(param_1 + 0x78))(param_1), iVar18 != 0)))) goto LAB_100c93ffe;
  }
LAB_100c93fec:
  FUN_100c94090(0,*(undefined8 *)(param_1 + 0xa0));
  iVar18 = iVar6;
LAB_100c93ffe:
  if (lVar12 != 0) {
    FUN_100c5ffd0(lVar12);
  }
  if (local_60 != 0) {
    FUN_100c7cd70(local_60);
  }
  return iVar18;
}

