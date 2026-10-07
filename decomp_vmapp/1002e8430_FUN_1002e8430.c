
uint FUN_1002e8430(long param_1,long param_2)

{
  byte bVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  size_t sVar5;
  void *pvVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  char *pcVar10;
  long lVar11;
  long lVar12;
  uint *puVar13;
  char *pcVar14;
  uint uVar15;
  
  if (*(int *)(param_2 + 0x43c) != 0x1f) {
    *(undefined4 *)(param_2 + 0x468) = 7;
    if (DAT_1011c568c < 3) {
      return 6;
    }
    FUN_1008e3970("","USB",0,"[MSC] CBW has inappropriate length: %u, should be %lu",
                  *(int *)(param_2 + 0x43c),0x1f);
    return 6;
  }
  iVar3 = *(int *)(param_2 + 0x4d8);
  if (iVar3 != 0x43425355) {
    if (DAT_1011c568c < 3) {
      return 6;
    }
    FUN_1008e3970("","USB",0,"[MSC] CBW has inappropriate signature: %x, (should be %x)",iVar3,
                  0x43425355);
    return 6;
  }
  if (*(char *)(param_2 + 0x4e5) != '\0') {
    if (DAT_1011c568c < 3) {
      return 6;
    }
    pcVar10 = "[MSC] CBW has inappropriate LUN: %d, should be 0";
LAB_1002e8577:
    FUN_1008e3970("","USB",0,pcVar10);
    return 6;
  }
  if (0xf < (byte)(*(char *)(param_2 + 0x4e6) - 1U)) {
    if (DAT_1011c568c < 3) {
      return 6;
    }
    pcVar10 = "[MSC] SCSI command block length should be from 1 to 16, really: %d";
    goto LAB_1002e8577;
  }
  sVar5 = (size_t)*(uint *)(param_2 + 0x4e0);
  if (*(ulong *)(param_1 + 0x58) < sVar5) {
    if (*(void **)(param_1 + 0x50) != (void *)0x0) {
      _free(*(void **)(param_1 + 0x50));
      *(undefined8 *)(param_1 + 0x58) = 0;
      sVar5 = (size_t)*(uint *)(param_2 + 0x4e0);
    }
    pvVar6 = _valloc(sVar5);
    *(void **)(param_1 + 0x50) = pvVar6;
    if (pvVar6 == (void *)0x0) {
      FUN_1008e3970("","USB",0,"[MSC] Couldn\'t alloc %u bytes",sVar5);
      return 6;
    }
    *(size_t *)(param_1 + 0x58) = sVar5;
  }
  *(undefined1 *)(param_1 + 0x13e) = *(undefined1 *)(param_2 + 0x4f6);
  *(undefined2 *)(param_1 + 0x13c) = *(undefined2 *)(param_2 + 0x4f4);
  *(undefined4 *)(param_1 + 0x138) = *(undefined4 *)(param_2 + 0x4f0);
  *(undefined8 *)(param_1 + 0x130) = *(undefined8 *)(param_2 + 0x4e8);
  uVar2 = *(undefined8 *)(param_2 + 0x4d8);
  *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(param_2 + 0x4e0);
  *(undefined8 *)(param_1 + 0x120) = uVar2;
  *(undefined4 *)(param_1 + 0x143) = *(undefined4 *)(param_1 + 0x124);
  *(undefined4 *)(param_1 + 0x13f) = 0x53425355;
  *(undefined4 *)(param_1 + 0x147) = 0;
  *(undefined1 *)(param_1 + 0x14b) = 0;
  *(undefined4 *)(param_1 + 0x178) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined8 *)(param_1 + 0x168) = 0;
  bVar1 = *(byte *)(param_2 + 0x4e7);
  uVar15 = 4;
  uVar9 = (uint)bVar1;
  if (bVar1 < 0x88) {
    if (0x11 < bVar1) {
      if (bVar1 < 0x35) {
        if (bVar1 < 0x1a) {
          if (bVar1 == 0x12) {
            uVar4 = FUN_1002e7770(param_1);
            goto LAB_1002e89f1;
          }
        }
        else if (bVar1 < 0x1e) {
          if (bVar1 == 0x1a) {
            uVar4 = 7;
            if (*(char *)(param_1 + 300) < '\0') {
              iVar3 = FUN_1004117f0(param_1 + 0x12f,*(undefined1 *)(param_1 + 0x12e),
                                    *(undefined8 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x128)
                                    ,param_1 + 0x150,0x12,param_1 + 0xa0,
                                    *(undefined1 *)(param_1 + 0x180));
              goto LAB_1002e89c0;
            }
            goto LAB_1002e8a8e;
          }
        }
        else if (bVar1 < 0x28) {
          uVar4 = uVar15;
          if (uVar9 == 0x1e) goto LAB_1002e8a1b;
          if (bVar1 == 0x25) goto LAB_1002e8957;
        }
        else if ((bVar1 == 0x28) || (uVar9 == 0x2a)) goto LAB_1002e89e9;
      }
      else if (bVar1 == 0x35) {
LAB_1002e8788:
        uVar4 = 7;
        if (*(int *)(param_1 + 0x128) == 0) {
          iVar3 = FUN_100410a30(param_1 + 0x12f,*(undefined1 *)(param_1 + 0x12e),
                                *(undefined8 *)(param_1 + 0x50),0,param_1 + 0x150,0x12);
          uVar4 = 5;
          if (-1 < iVar3) {
            uVar4 = uVar15;
            if (*(char *)(param_1 + 0x182) != '\0') {
              iVar3 = (**(code **)(**(long **)(param_1 + 0x40) + 0x30))();
              uVar4 = 4;
              if ((iVar3 < 0) && (-1 < DAT_1011c568c)) {
                FUN_1008e3970("","USB",0,"[MSC] Failed to synchronize cache");
                uVar4 = 4;
              }
            }
            goto LAB_1002e8a1b;
          }
        }
        goto LAB_1002e8a8e;
      }
      goto LAB_1002e8a6e;
    }
    if (7 < bVar1) {
      if ((bVar1 == 8) || (bVar1 == 10)) goto LAB_1002e89e9;
      goto LAB_1002e8a6e;
    }
    if (bVar1 == 0) {
      uVar4 = 7;
      if (*(int *)(param_1 + 0x128) == 0) {
        bVar1 = *(byte *)(param_1 + 0x12e);
        uVar9 = 1;
        if (1 < (ulong)bVar1) {
          lVar11 = 0x130;
          do {
            if (*(char *)(param_1 + lVar11) != '\0') {
              uVar9 = (int)lVar11 - 0x12f;
              goto LAB_1002e8a0b;
            }
            lVar12 = lVar11 + -0x12e;
            lVar11 = lVar11 + 1;
          } while (lVar12 < (long)(ulong)bVar1);
          uVar9 = (uint)lVar12;
        }
LAB_1002e8a0b:
        uVar4 = uVar15;
        if (uVar9 == bVar1) {
LAB_1002e8a1b:
          if (2 < DAT_1011c568c) {
            bVar1 = *(byte *)(param_2 + 0x4e7);
            puVar13 = &DAT_100bb4af0;
            uVar8 = 0;
            pcVar10 = "UNKNOWN";
            do {
              uVar7 = uVar8;
              if (((puVar13[-8] == (uint)bVar1) || (uVar7 = uVar8 + 1, puVar13[-4] == (uint)bVar1))
                 || (uVar7 = uVar8 + 2, *puVar13 == (uint)bVar1)) {
                pcVar10 = *(char **)(&UNK_100bb4ad8 + uVar7 * 0x10);
                break;
              }
              uVar8 = uVar8 + 3;
              puVar13 = puVar13 + 0xc;
            } while (uVar8 < 0x72);
            FUN_1008e3970("","USB",0,"[MSC] SCSI command \"%s\" started",pcVar10);
          }
          FUN_1004103f0(0,param_1 + 0x150,0x12,0);
          if ((*(ulong *)(param_1 + 0x168) < (ulong)*(uint *)(param_1 + 0x128)) &&
             (0 < DAT_1011c568c)) {
            FUN_1008e3970("","USB",0,"[MSC] Short SCSI transfer: requested = %u actual =%llu");
          }
          goto LAB_1002e8bce;
        }
        goto LAB_1002e8a6e;
      }
    }
    else {
      if ((((bVar1 != 3) || (*(char *)(param_1 + 0x130) != '\0')) ||
          (*(char *)(param_1 + 0x131) != '\0')) ||
         ((*(char *)(param_1 + 0x132) != '\0' || (*(char *)(param_1 + 0x134) != '\0'))))
      goto LAB_1002e8a6e;
      uVar8 = (ulong)*(byte *)(param_1 + 0x133);
      *(ulong *)(param_1 + 0x168) = uVar8;
      uVar4 = 7;
      if ((uVar8 <= *(uint *)(param_1 + 0x128)) && (*(char *)(param_1 + 300) < '\0')) {
        sVar5 = 0x12;
        if (*(byte *)(param_1 + 0x133) < 0x12) {
          sVar5 = uVar8;
        }
        *(size_t *)(param_1 + 0x168) = sVar5;
        _memcpy(*(void **)(param_1 + 0x50),(void *)(param_1 + 0x150),sVar5);
        uVar4 = 2;
        goto LAB_1002e8a1b;
      }
    }
  }
  else {
    uVar8 = (ulong)(uVar9 - 0x88);
    if (uVar9 - 0x88 < 0x23) {
      if ((0x500000005U >> (uVar8 & 0x3f) & 1) != 0) {
LAB_1002e89e9:
        uVar4 = FUN_1002e7b20(param_1);
LAB_1002e89f1:
        if (2 < uVar4 - 5) goto LAB_1002e8a1b;
        goto LAB_1002e8a8e;
      }
      if (uVar8 == 9) goto LAB_1002e8788;
      if (uVar8 == 0x16) {
LAB_1002e8957:
        uVar4 = 7;
        if (*(char *)(param_1 + 300) < '\0') {
          iVar3 = FUN_100410570(param_1 + 0x12f,*(undefined1 *)(param_1 + 0x12e),
                                *(undefined8 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x128),
                                param_1 + 0x150,0x12,*(undefined8 *)(param_1 + 0x80),
                                *(undefined8 *)(param_1 + 0x98),*(undefined8 *)(param_1 + 0x98),
                                *(undefined2 *)(param_1 + 0x108));
LAB_1002e89c0:
          uVar4 = 5;
          if (-1 < iVar3) {
            *(long *)(param_1 + 0x168) = (long)iVar3;
            uVar4 = 2;
            goto LAB_1002e8a1b;
          }
        }
        goto LAB_1002e8a8e;
      }
    }
LAB_1002e8a6e:
    FUN_1004103f0(0x52400,param_1 + 0x150,0x12,0);
    uVar4 = 5;
  }
LAB_1002e8a8e:
  bVar1 = *(byte *)(param_2 + 0x4e7);
  puVar13 = &DAT_100bb4af0;
  uVar8 = 0;
  pcVar10 = "UNKNOWN";
  do {
    uVar7 = uVar8;
    if (((puVar13[-8] == (uint)bVar1) || (uVar7 = uVar8 + 1, puVar13[-4] == (uint)bVar1)) ||
       (uVar7 = uVar8 + 2, *puVar13 == (uint)bVar1)) {
      pcVar14 = *(char **)(&UNK_100bb4ad8 + uVar7 * 0x10);
      goto LAB_1002e8ae6;
    }
    uVar8 = uVar8 + 3;
    puVar13 = puVar13 + 0xc;
  } while (uVar8 < 0x72);
  pcVar14 = "UNKNOWN";
LAB_1002e8ae6:
  if (uVar4 < 10) {
    pcVar10 = (&PTR_s_MSC_UNINITIALISED_100bb51f0)[(int)uVar4];
  }
  FUN_1008e3970("","USB",0,"[MSC] SCSI command \"%s\" failed (%s)",pcVar14,pcVar10);
  if ((-1 < DAT_1011c568c) && (*(int *)(param_2 + 0x450) == 0xe1)) {
    FUN_1002da7c0(0,param_2);
  }
LAB_1002e8bce:
  *(undefined4 *)(param_2 + 0x454) = *(undefined4 *)(param_2 + 0x43c);
  *(undefined4 *)(param_2 + 0x468) = 0;
  return uVar4;
}

