
ushort * FUN_100553300(char param_1,undefined4 *param_2,uint param_3,ulong param_4,uint param_5,
                      uint param_6,code *param_7,undefined8 param_8)

{
  size_t sVar1;
  undefined8 uVar2;
  bool bVar3;
  char cVar4;
  undefined1 uVar5;
  uint uVar6;
  undefined8 *puVar7;
  void *pvVar8;
  void *pvVar9;
  ushort *puVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  int iVar14;
  char *pcVar15;
  int iVar16;
  long lVar17;
  uint *puVar18;
  ulong uVar19;
  
  uVar13 = param_4;
  if (param_1 == '\0') {
    uVar13 = param_4 & 0xffffffff;
    uVar12 = FUN_100761a10(*param_2);
    uVar19 = ((ulong)param_6 + param_5 * uVar13) * 0x1000;
    if (param_3 == 0x201) {
      if ((uVar12 & 0xfff) != 0x40) {
        pcVar15 = "ss_init(ss_v2_1) unexpected file size (%llu %llu)";
        goto LAB_1005536ea;
      }
      uVar19 = uVar12 - 0x40;
    }
    else {
      if (param_3 != 1) {
        if (param_3 != 0) {
          FUN_1008e3970("","TransMem",0,"ss_init(%x) unsupported version",param_3);
          return (ushort *)0x0;
        }
        if (uVar12 != uVar19) {
          pcVar15 = "ss_init(ss_v0) unexpected file size (%llu %llu)";
          goto LAB_1005536ea;
        }
        goto LAB_100553334;
      }
      if (uVar12 != uVar19 + 0x40 + uVar13 * 4) {
        pcVar15 = "ss_init(ss_v1) unexpected file size (%llu %llu)";
LAB_1005536ea:
        FUN_1008e3970("","TransMem",0,pcVar15,uVar12,uVar19);
        return (ushort *)0x0;
      }
    }
    uVar12 = FUN_1007616e0(param_2,uVar19,0);
    uVar13 = param_4 & 0xffffffff;
    if (uVar12 != uVar19) {
      FUN_1008e3970("","TransMem",0,"ss_init() seek failed");
      return (ushort *)0x0;
    }
  }
LAB_100553334:
  iVar14 = (int)uVar13;
  sVar1 = (param_4 & 0xffffffff) * 4;
  uVar12 = (ulong)((int)sVar1 + 0xfffU & 0xfffff000);
  uVar6 = param_5 * iVar14 + 0x1f >> 5;
  uVar13 = (ulong)(uVar6 * 4 + 0xfff & 0x3ffff000);
  uVar19 = (long)((param_4 << 0x22) + 0x103f00000000) >> 0x20 & 0xfffffffffffff000;
  puVar7 = _valloc(uVar19);
  pvVar8 = _valloc(uVar13);
  pvVar9 = _valloc(uVar12);
  puVar10 = _valloc(0x1000);
  if ((((pvVar9 == (void *)0x0) || (puVar7 == (undefined8 *)0x0)) || (pvVar8 == (void *)0x0)) ||
     (puVar10 == (ushort *)0x0)) {
    pcVar15 = "ss_init() failed to allocate storage map";
  }
  else {
    uVar6 = uVar6 << 2;
    puVar10[0x28] = 0;
    puVar10[0x29] = 0;
    puVar10[0x2a] = 0;
    puVar10[0x2b] = 0;
    puVar10[0x24] = 0;
    puVar10[0x25] = 0;
    puVar10[0x26] = 0;
    puVar10[0x27] = 0;
    puVar10[0x20] = 0;
    puVar10[0x21] = 0;
    puVar10[0x22] = 0;
    puVar10[0x23] = 0;
    puVar10[0x1c] = 0;
    puVar10[0x1d] = 0;
    puVar10[0x1e] = 0;
    puVar10[0x1f] = 0;
    puVar10[0x18] = 0;
    puVar10[0x19] = 0;
    puVar10[0x1a] = 0;
    puVar10[0x1b] = 0;
    puVar10[0x14] = 0;
    puVar10[0x15] = 0;
    puVar10[0x16] = 0;
    puVar10[0x17] = 0;
    puVar10[0x10] = 0;
    puVar10[0x11] = 0;
    puVar10[0x12] = 0;
    puVar10[0x13] = 0;
    puVar10[0xc] = 0;
    puVar10[0xd] = 0;
    puVar10[0xe] = 0;
    puVar10[0xf] = 0;
    puVar10[8] = 0;
    puVar10[9] = 0;
    puVar10[10] = 0;
    puVar10[0xb] = 0;
    puVar10[4] = 0;
    puVar10[5] = 0;
    puVar10[6] = 0;
    puVar10[7] = 0;
    puVar10[0] = 0;
    puVar10[1] = 0;
    puVar10[2] = 0;
    puVar10[3] = 0;
    if ((param_3 == 0) || (param_1 == '\x01')) {
      *puVar10 = (ushort)param_3;
      *(uint *)(puVar10 + 2) = param_5 << 0xc;
      *(int *)(puVar10 + 4) = iVar14;
      *(uint *)(puVar10 + 0x12) = param_5;
      *(uint *)(puVar10 + 8) = param_6;
      *(undefined8 **)(puVar10 + 0x20) = puVar7;
      *(void **)(puVar10 + 0x24) = pvVar8;
      *(void **)(puVar10 + 0x28) = pvVar9;
      if (param_1 != '\0') {
        uVar5 = 3;
        if (param_3 < 0x201) {
          uVar5 = 0;
        }
        *(undefined1 *)(puVar10 + 1) = uVar5;
        *(uint *)(puVar10 + 10) = param_6;
        puVar10[0xc] = 0;
        puVar10[0xd] = 0;
        _memset(puVar7,0xff,sVar1);
        _memset(pvVar8,0xff,(ulong)uVar6);
        ___bzero(pvVar9,sVar1);
        puVar10[6] = 0;
        puVar10[7] = 0;
        return puVar10;
      }
      uVar6 = 0;
      FUN_1008e3970("","TransMem",0,"ss_init() using default storage map");
      *(undefined1 *)(puVar10 + 1) = 0;
      puVar10[10] = 0;
      puVar10[0xb] = 0;
      *(uint *)(puVar10 + 0xc) = param_5 * iVar14;
      *(uint *)(puVar10 + 0x12) = param_5;
      _memset(*(void **)(puVar10 + 0x20),0xff,(ulong)*(uint *)(puVar10 + 4) << 2);
      _memset(*(void **)(puVar10 + 0x24),0xff,
              (ulong)(*(int *)(puVar10 + 4) * *(int *)(puVar10 + 0x12) + 0x1fU >> 3 & 0x1ffffffc));
      ___bzero(*(undefined8 *)(puVar10 + 0x28));
      puVar10[6] = 0;
      puVar10[7] = 0;
      iVar14 = 1;
      if (0x200 < *puVar10) {
        iVar14 = *(int *)(puVar10 + 0x12);
      }
      if (*(int *)(puVar10 + 4) != 0) {
        lVar11 = *(long *)(puVar10 + 0x20);
        iVar16 = 0;
        uVar13 = 0;
        do {
          *(int *)(lVar11 + uVar13 * 4) = iVar16;
          uVar13 = uVar13 + 1;
          uVar6 = *(uint *)(puVar10 + 4);
          iVar16 = iVar16 + iVar14;
        } while (uVar13 < uVar6);
      }
      *(uint *)(puVar10 + 6) = uVar6 * iVar14;
      return puVar10;
    }
    if (param_3 == 0x201) {
      lVar11 = FUN_100761880(param_2,FUN_1007617a0,0,puVar10,0x1000);
      if (lVar11 == 0x40) {
        if ((param_7 == (code *)0x0) || (cVar4 = (*param_7)(param_8,puVar10,0x40,0), cVar4 != '\0'))
        {
          if (*puVar10 != 0x201) {
            FUN_1008e3970("","TransMem",0,"ss_init() invalid storage descriptor version %u %u",
                          *puVar10,0x201);
            goto LAB_100553b51;
          }
          if (*(uint *)(puVar10 + 0x12) == param_5) {
            bVar3 = true;
            uVar6 = 1;
          }
          else {
            FUN_1008e3970("","TransMem",0,
                          "ss_init() uninitialized storage descriptor chunk pages %u %u",
                          *(uint *)(puVar10 + 0x12),param_5);
            *(uint *)(puVar10 + 0x12) = param_5;
            bVar3 = 0x200 < *puVar10;
            uVar6 = 1;
            if (*puVar10 < 0x201) {
              uVar6 = param_5;
            }
          }
          puVar18 = (uint *)(puVar10 + 8);
          if (bVar3) {
            puVar18 = (uint *)(puVar10 + 0xe);
          }
          lVar17 = ((ulong)*puVar18 + (ulong)(uVar6 * *(int *)(puVar10 + 6))) * 0x1000;
          lVar11 = FUN_1007616e0(param_2,lVar17,0);
          if (((lVar11 == lVar17) &&
              (uVar19 = FUN_100761880(param_2,FUN_1007617a0,0,puVar7,uVar12), uVar19 == uVar12)) &&
             (uVar19 = FUN_100761880(param_2,FUN_1007617a0,0,pvVar8,uVar13), uVar19 == uVar13)) {
            if ((param_7 != (code *)0x0) &&
               ((cVar4 = (*param_7)(param_8,puVar7,uVar12,0), cVar4 == '\0' ||
                (cVar4 = (*param_7)(param_8,pvVar8,uVar13,0), cVar4 == '\0')))) goto LAB_100553b1c;
            if (*(char *)((long)puVar10 + 3) != '\0') {
              uVar13 = FUN_100761880(param_2,FUN_1007617a0,0,pvVar9,uVar12);
              if (uVar13 != uVar12) {
                pcVar15 = "ss_init() failed to read compressed block size table";
                goto LAB_100553b48;
              }
              if ((param_7 != (code *)0x0) &&
                 (cVar4 = (*param_7)(param_8,pvVar9,uVar12,0), cVar4 == '\0')) goto LAB_100553b1c;
            }
LAB_1005537ed:
            if (((*puVar10 == param_3) &&
                ((((*(int *)(puVar10 + 2) == param_5 * 0x1000 && (*(int *)(puVar10 + 4) == iVar14))
                  && (*(uint *)(puVar10 + 0x12) == param_5)) &&
                 ((*puVar10 != 1 || (*(int *)(puVar10 + 6) == iVar14)))))) &&
               (*(uint *)(puVar10 + 8) == param_6)) {
              *(undefined8 **)(puVar10 + 0x20) = puVar7;
              *(void **)(puVar10 + 0x24) = pvVar8;
              *(void **)(puVar10 + 0x28) = pvVar9;
              return puVar10;
            }
            pcVar15 = "ss_init() the storage map is invalid";
          }
          else {
            pcVar15 = "ss_init() failed to read storage metadata v2.1";
          }
        }
        else {
LAB_100553b1c:
          pcVar15 = "ss_init() cancelled";
        }
      }
      else {
        pcVar15 = "ss_init() failed to read storage map v2.1";
      }
LAB_100553b48:
      FUN_1008e3970("","TransMem",0,pcVar15);
      goto LAB_100553b51;
    }
    if (param_3 != 1) {
      FUN_1008e3970("","TransMem",0,"ss_init(%x) unsupported version");
      goto LAB_100553b51;
    }
    lVar11 = FUN_100761880(param_2,FUN_1007617a0,0,puVar7,uVar19);
    if (lVar11 == (long)((param_4 << 0x22) + 0x4000000000) >> 0x20) {
      *(undefined8 *)(puVar10 + 0x1c) = puVar7[7];
      *(undefined8 *)(puVar10 + 0x18) = puVar7[6];
      *(undefined8 *)(puVar10 + 0x14) = puVar7[5];
      *(undefined8 *)(puVar10 + 0x10) = puVar7[4];
      *(undefined8 *)(puVar10 + 0xc) = puVar7[3];
      *(undefined8 *)(puVar10 + 8) = puVar7[2];
      uVar2 = *puVar7;
      *(undefined8 *)(puVar10 + 4) = puVar7[1];
      *(undefined8 *)puVar10 = uVar2;
      _memmove(puVar7,puVar7 + 8,sVar1 & 0xffffffff);
      _memset(pvVar8,0xff,(ulong)uVar6);
      *(uint *)(puVar10 + 0x12) = param_5;
      goto LAB_1005537ed;
    }
    pcVar15 = "ss_init() failed to read storage map v1";
  }
  FUN_1008e3970("","TransMem",0,pcVar15);
LAB_100553b51:
  if (puVar7 != (undefined8 *)0x0) {
    _free(puVar7);
  }
  if (pvVar8 != (void *)0x0) {
    _free(pvVar8);
  }
  if (pvVar9 != (void *)0x0) {
    _free(pvVar9);
  }
  if (puVar10 != (ushort *)0x0) {
    _free(puVar10);
  }
  return (ushort *)0x0;
}

