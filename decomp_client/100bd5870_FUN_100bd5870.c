
int FUN_100bd5870(int *param_1)

{
  byte bVar1;
  char *pcVar2;
  byte *pbVar3;
  long lVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  undefined2 *puVar11;
  undefined1 *puVar12;
  short sVar13;
  undefined8 uVar14;
  ulong uVar15;
  void *pvVar16;
  undefined8 uVar17;
  uint uVar18;
  uint uVar19;
  bool bVar20;
  undefined8 local_48;
  undefined2 local_40;
  char local_3e;
  long local_38;
  
  lVar9 = *(long *)PTR____stack_chk_guard_1021e1840;
  uVar8 = 0;
  local_38 = lVar9;
  if (param_1[0x12] != 0x2210) {
    uVar18 = 0;
    goto LAB_100bd596f;
  }
  iVar6 = FUN_100bd4050(param_1);
  iVar7 = -1;
  if ((iVar6 == 0) || (iVar7 = FUN_100bd7050(param_1,0xb), iVar7 != 0xb)) goto LAB_100bd5ec1;
  pcVar2 = *(char **)(param_1 + 0x1a);
  local_3e = pcVar2[10];
  local_40 = *(undefined2 *)(pcVar2 + 8);
  local_48 = *(undefined8 *)pcVar2;
  if (-1 < *pcVar2) {
    if (((*pcVar2 == '\x16') && (pcVar2[1] == '\x03')) && (pcVar2[5] == '\x01')) {
      if ((pcVar2[3] != '\0') || (4 < (byte)pcVar2[4])) {
        if (2 < (byte)pcVar2[9]) {
          if (pcVar2[3] == '\0') goto LAB_100bd593e;
          goto LAB_100bd5ee8;
        }
        goto LAB_100bd5c63;
      }
LAB_100bd593e:
      if (5 < (byte)pcVar2[4]) {
LAB_100bd5ee8:
        if ((byte)pcVar2[9] < 4) {
          bVar1 = pcVar2[10];
          if (bVar1 == 0) {
            if ((*(ulong *)(param_1 + 0x6a) & 0x2000000) != 0) {
              uVar18 = 0xb;
              if ((*(ulong *)(param_1 + 0x6a) & 0x4000000) != 0) goto LAB_100bd596f;
              *param_1 = 0x301;
              goto LAB_100bd601e;
            }
            *param_1 = 0x300;
          }
          else {
            if (2 < bVar1) goto LAB_100bd5f08;
            uVar15 = *(ulong *)(param_1 + 0x6a);
            if (1 < bVar1) goto LAB_100bd5fbd;
LAB_100bd5fcd:
            if ((uVar15 & 0x4000000) != 0) {
              uVar18 = 0xb;
              uVar8 = 0;
              if ((uVar15 & 0x2000000) != 0) goto LAB_100bd596f;
              *param_1 = 0x300;
LAB_100bd601e:
              uVar18 = 0xb;
              uVar8 = 3;
              goto LAB_100bd596f;
            }
            *param_1 = 0x301;
          }
        }
        else {
LAB_100bd5f08:
          uVar15 = *(ulong *)(param_1 + 0x6a);
          if ((uVar15 & 0x8000000) == 0) {
            *param_1 = 0x303;
          }
          else {
LAB_100bd5fbd:
            if ((uVar15 & 0x10000000) != 0) goto LAB_100bd5fcd;
            *param_1 = 0x302;
          }
        }
        uVar18 = 0xb;
        uVar8 = 3;
        goto LAB_100bd596f;
      }
      uVar14 = 0x12a;
      uVar17 = 0x15c;
    }
    else {
LAB_100bd5c63:
      iVar6 = _strncmp("GET ",pcVar2,4);
      if (((iVar6 == 0) || (iVar6 = _strncmp("POST ",pcVar2,5), iVar6 == 0)) ||
         ((iVar6 = _strncmp("HEAD ",pcVar2,5), iVar6 == 0 ||
          (iVar6 = _strncmp("PUT ",pcVar2,4), iVar6 == 0)))) {
        uVar14 = 0x9c;
        uVar17 = 0x18a;
      }
      else {
        iVar6 = _strncmp("CONNECT",pcVar2,7);
        uVar18 = 0xb;
        if (iVar6 != 0) goto LAB_100bd596f;
        uVar14 = 0x9b;
        uVar17 = 0x18d;
      }
    }
LAB_100bd5d41:
    FUN_100c62ee0(0x14,0x76,uVar14,"s23_srvr.c",uVar17);
    iVar7 = -1;
    goto LAB_100bd5ec1;
  }
  if (pcVar2[2] != '\x01') goto LAB_100bd5c63;
  uVar18 = 0xb;
  if (pcVar2[3] == '\x03') {
    bVar1 = pcVar2[4];
    if (bVar1 == 0) {
      uVar15 = *(ulong *)(param_1 + 0x6a);
    }
    else {
      if (bVar1 < 3) {
        if (1 < bVar1) goto LAB_100bd5f2b;
        uVar15 = *(ulong *)(param_1 + 0x6a);
      }
      else {
        if ((*(byte *)((long)param_1 + 0x1ab) & 8) == 0) {
          *param_1 = 0x303;
          param_1[0x12] = 0x2211;
          goto LAB_100bd596f;
        }
LAB_100bd5f2b:
        uVar15 = *(ulong *)(param_1 + 0x6a);
        if ((uVar15 & 0x10000000) == 0) {
          *param_1 = 0x302;
          param_1[0x12] = 0x2211;
          goto LAB_100bd596f;
        }
      }
      if ((uVar15 & 0x4000000) == 0) {
        *param_1 = 0x301;
        param_1[0x12] = 0x2211;
        goto LAB_100bd596f;
      }
    }
    if ((uVar15 & 0x2000000) == 0) {
      *param_1 = 0x300;
      param_1[0x12] = 0x2211;
    }
    else {
      uVar8 = ~((uint)uVar15 >> 0x18) & 1;
    }
  }
  else if ((pcVar2[3] == '\0') && (pcVar2[4] == '\x02')) {
    uVar8 = ~(uint)*(byte *)((long)param_1 + 0x1ab) & 1;
  }
LAB_100bd596f:
  if (0x303 < *param_1) {
    FUN_100bf2cd0("s23_srvr.c",0x193,"s->version <= TLS_MAX_VERSION");
  }
  if (param_1[0x12] == 0x2211) {
    pbVar3 = *(byte **)(param_1 + 0x1a);
    uVar18 = (uint)pbVar3[1] | (*pbVar3 & 0x7f) << 8;
    if (uVar18 < 0x1001) {
      if (uVar18 < 9) {
        uVar14 = 0xd5;
        uVar17 = 0x1bc;
      }
      else {
        bVar1 = pbVar3[4];
        iVar7 = FUN_100bd7050(param_1,uVar18 + 2);
        if (iVar7 < 1) goto LAB_100bd5ec1;
        FUN_100bcfd60(param_1,*(long *)(param_1 + 0x1a) + 2,param_1[0x1c] + -2);
        if (*(code **)(param_1 + 0x26) != (code *)0x0) {
          (**(code **)(param_1 + 0x26))
                    (0,2,0,*(long *)(param_1 + 0x1a) + 2,param_1[0x1c] + -2,param_1,
                     *(undefined8 *)(param_1 + 0x28));
        }
        lVar4 = *(long *)(param_1 + 0x1a);
        uVar19 = (uint)CONCAT11(*(undefined1 *)(lVar4 + 5),*(undefined1 *)(lVar4 + 6));
        uVar10 = (uint)CONCAT11(*(undefined1 *)(lVar4 + 9),*(undefined1 *)(lVar4 + 10));
        uVar8 = CONCAT11(*(undefined1 *)(lVar4 + 7),*(undefined1 *)(lVar4 + 8)) + uVar19;
        if (uVar10 + 0xb + uVar8 == param_1[0x1c]) {
          puVar5 = *(undefined1 **)(*(long *)(param_1 + 0x14) + 8);
          *puVar5 = 1;
          puVar5[4] = 3;
          puVar5[5] = bVar1;
          if (0x20 < uVar10) {
            uVar10 = 0x20;
          }
          *(undefined8 *)(puVar5 + 0x1e) = 0;
          *(undefined8 *)(puVar5 + 0x16) = 0;
          *(undefined8 *)(puVar5 + 0xe) = 0;
          *(undefined8 *)(puVar5 + 6) = 0;
          _memcpy(puVar5 + (ulong)(0x20 - uVar10) + 6,(void *)((ulong)uVar8 + 0xb + lVar4),
                  (ulong)uVar10);
          puVar5[0x26] = 0;
          puVar11 = (undefined2 *)(puVar5 + 0x29);
          sVar13 = 0;
          if (uVar19 != 0) {
            uVar15 = 0;
            sVar13 = 0;
            do {
              if (*(char *)(lVar4 + 0xb + uVar15) == '\0') {
                *(undefined1 *)puVar11 = *(undefined1 *)(lVar4 + 0xc + uVar15);
                *(undefined1 *)((long)puVar11 + 1) = *(undefined1 *)(lVar4 + 0xd + uVar15);
                puVar11 = puVar11 + 1;
                sVar13 = sVar13 + 2;
              }
              uVar15 = uVar15 + 3;
            } while (uVar15 < uVar19);
          }
          puVar5[0x27] = (char)((ushort)sVar13 >> 8);
          puVar5[0x28] = (char)sVar13;
          *puVar11 = 1;
          puVar12 = (undefined1 *)
                    ((long)puVar11 + (0xfffffffe - *(long *)(*(long *)(param_1 + 0x14) + 8)));
          puVar5[1] = (char)((ulong)puVar12 >> 0x10);
          puVar5[2] = (char)((ulong)puVar12 >> 8);
          puVar5[3] = (char)puVar12;
          lVar9 = *(long *)(param_1 + 0x20);
          *(undefined4 *)(lVar9 + 0x3c4) = 1;
          *(undefined4 *)(lVar9 + 0x3a0) = 1;
          *(ulong *)(lVar9 + 0x398) = (ulong)puVar12 & 0xffffffff;
          uVar8 = 2;
          bVar20 = false;
          goto LAB_100bd5be3;
        }
        uVar14 = 0xd5;
        uVar17 = 0x1de;
      }
    }
    else {
      uVar14 = 0xd6;
      uVar17 = 0x1b7;
    }
    goto LAB_100bd5d41;
  }
  if (uVar8 == 1) {
    uVar14 = 0x102;
    uVar17 = 0x21d;
    goto LAB_100bd5d41;
  }
  bVar20 = uVar8 == 3;
  if ((uVar8 & 2) == 0) {
LAB_100bd5e78:
    if (uVar8 == 0) {
      uVar14 = 0xfc;
      uVar17 = 0x27b;
LAB_100bd5ead:
      FUN_100c62ee0(0x14,0x76,uVar14,"s23_srvr.c",uVar17);
      iVar7 = -1;
    }
    else {
      param_1[0x18] = 0;
      iVar7 = FUN_100be4280(param_1);
    }
  }
  else {
LAB_100bd5be3:
    switch(*param_1) {
    case 0x300:
      lVar9 = FUN_100bc1cb0();
      break;
    case 0x301:
      lVar9 = FUN_100bd7170();
      break;
    case 0x302:
      lVar9 = FUN_100bd7160();
      break;
    case 0x303:
      lVar9 = FUN_100bd7120();
      break;
    default:
      goto switchD_100bd5c02_default;
    }
    if (lVar9 == 0) {
switchD_100bd5c02_default:
      uVar14 = 0x102;
      uVar17 = 0x255;
      goto LAB_100bd5ead;
    }
    *(long *)(param_1 + 2) = lVar9;
    iVar6 = FUN_100be6bc0(param_1,1);
    iVar7 = -1;
    if (iVar6 != 0) {
      param_1[0x12] = 0x2110;
      if (bVar20) {
        param_1[0x13] = 0xf0;
        param_1[0x1c] = uVar18;
        pvVar16 = *(void **)(*(long *)(param_1 + 0x20) + 0xf0);
        if (pvVar16 == (void *)0x0) {
          iVar6 = FUN_100bd3d50(param_1);
          lVar9 = *(long *)PTR____stack_chk_guard_1021e1840;
          if (iVar6 == 0) goto LAB_100bd5ec1;
          pvVar16 = *(void **)(*(long *)(param_1 + 0x20) + 0xf0);
        }
        *(void **)(param_1 + 0x1a) = pvVar16;
        _memcpy(pvVar16,&local_48,(long)(int)uVar18);
        lVar9 = *(long *)(param_1 + 0x20);
        *(uint *)(lVar9 + 0x104) = uVar18;
      }
      else {
        param_1[0x1c] = 0;
        lVar9 = *(long *)(param_1 + 0x20);
        *(undefined4 *)(lVar9 + 0x104) = 0;
      }
      *(undefined4 *)(lVar9 + 0x100) = 0;
      *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(*(long *)(param_1 + 2) + 0x20);
      goto LAB_100bd5e78;
    }
  }
  lVar9 = *(long *)PTR____stack_chk_guard_1021e1840;
LAB_100bd5ec1:
  if (lVar9 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar7;
}

