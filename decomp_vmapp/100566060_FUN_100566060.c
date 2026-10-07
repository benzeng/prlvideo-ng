
ulong FUN_100566060(long *param_1,int param_2,long param_3,long param_4,uint *param_5)

{
  byte *pbVar1;
  char cVar2;
  ushort uVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  void *pvVar7;
  void *pvVar8;
  void *pvVar9;
  int *piVar10;
  long lVar11;
  ulong uVar12;
  size_t sVar13;
  int *piVar14;
  int iVar15;
  long lVar16;
  ulong uVar17;
  void *pvVar18;
  ulong uVar19;
  long lVar20;
  bool bVar21;
  bool bVar22;
  undefined **local_48;
  void *local_40;
  ulong local_38;
  
  if (param_2 == 2) {
    FUN_1008e3970("","StatesUtils",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "SuspendDiskHelper::ValidateState != action","BootCampStatesHelper.cpp",0x307,
                  "ProcessFsState");
  }
  local_48 = &PTR_FUN_10111db90;
  local_38 = 0;
  local_40 = (void *)0x0;
  uVar5 = FUN_100563210(param_1,param_4,&local_48);
  pvVar18 = local_40;
  uVar19 = (ulong)uVar5;
  if (-1 < (int)uVar5) {
    if (local_40 == (void *)0x0) {
      FUN_1008e3970("","StatesUtils",0,"ASSERT( %s ) occured in %s:%d [%s]","bootSecBuff.Get()",
                    "BootCampStatesHelper.cpp",0x333,"ProcessFsState");
    }
    uVar19 = local_38;
    if (param_2 == 0) {
      uVar5 = FUN_1005634e0(&local_48);
      param_5[8] = uVar5;
      if (1 < DAT_1011b55f8) {
        FUN_1008e3970("","StatesUtils",2,"Detected FS type %d",uVar5);
      }
    }
    if (param_5[8] == 3) {
      if (*(short *)((long)pvVar18 + 0x1fe) != -0x55ab) {
        uVar19 = 0x80000072;
        FUN_1008e3970("","StatesUtils",0,"Error : Invalid NTFS signature");
        goto LAB_100566550;
      }
      cVar2 = *(char *)((long)pvVar18 + 0x40);
      if (cVar2 == 0) {
        uVar19 = 0x80000072;
        FUN_1008e3970("","StatesUtils",0,"Error : Invalid NTFS file record size %d");
        goto LAB_100566550;
      }
      if (cVar2 < '\0') {
        iVar15 = 1 << (-cVar2 & 0x1fU);
        bVar4 = *(byte *)((long)pvVar18 + 0xd);
      }
      else {
        bVar4 = *(byte *)((long)pvVar18 + 0xd);
        iVar15 = (uint)*(ushort *)((long)pvVar18 + 0xb) * (int)cVar2 * (uint)bVar4;
        if (iVar15 == 0) {
          uVar19 = 0x80000072;
          FUN_1008e3970("","StatesUtils",0,"Error : Invalid NTFS file record size %u calculated",0);
          goto LAB_100566550;
        }
      }
      sVar13 = (((uVar19 - 1) + (ulong)(uint)(iVar15 * 0x18)) % uVar19) * uVar19;
      if (sVar13 != 0) {
        lVar16 = *(long *)((long)pvVar18 + 0x30) * (ulong)bVar4;
        lVar11 = (ulong)bVar4 * *(long *)((long)pvVar18 + 0x38);
        pvVar7 = _valloc(sVar13);
        if (pvVar7 != (void *)0x0) {
          pvVar8 = _valloc(sVar13);
          if (pvVar8 == (void *)0x0) {
            FUN_1008e3970("","StatesUtils",0,
                          "Error : Failed to alloc memory for reading disk storage state");
            _free(pvVar7);
            uVar19 = 0x80010013;
            goto LAB_100566550;
          }
          if (sVar13 % uVar19 != 0) {
            FUN_1008e3970("","StatesUtils",0,"ASSERT( %s ) occured in %s:%d [%s]",
                          "!(mftBuff.GetSize() % uiSectorSize)","BootCampStatesHelper.cpp",0x374,
                          "ProcessFsState");
            FUN_1008e3970("","StatesUtils",0,"ASSERT( %s ) occured in %s:%d [%s]",
                          "!(mftMirrBuff.GetSize() % uiSectorSize)","BootCampStatesHelper.cpp",0x375
                          ,"ProcessFsState");
          }
          uVar5 = (**(code **)(*param_1 + 0xf8))
                            (param_1,pvVar7,sVar13,*(long *)(param_4 + 8) + lVar16);
          uVar19 = (ulong)uVar5;
          if ((int)uVar5 < 0) {
            bVar22 = false;
            FUN_1008e3970("","StatesUtils",0,"Error : Reading disk storage data error 0x%X",uVar19);
          }
          else {
            uVar5 = (**(code **)(*param_1 + 0xf8))
                              (param_1,pvVar8,sVar13,*(long *)(param_4 + 8) + lVar11);
            uVar19 = (ulong)uVar5;
            if ((int)uVar5 < 0) {
              bVar22 = false;
              FUN_1008e3970("","StatesUtils",0,"Error : Reading disk storage data error 0x%X",uVar5)
              ;
            }
            else {
              uVar12 = (ulong)(uint)(iVar15 * 3);
              piVar14 = (int *)(*(ushort *)(uVar12 + 0x14 + (long)pvVar7) + uVar12);
              pvVar9 = pvVar7;
              while( true ) {
                piVar14 = (int *)((long)piVar14 + (long)pvVar9);
                if (*piVar14 == -1) break;
                if (*piVar14 == 0x70) {
                  uVar17 = (ulong)*(ushort *)(piVar14 + 5);
                  piVar10 = (int *)(*(ushort *)((long)pvVar8 + uVar12 + 0x14) + uVar12 +
                                   (long)pvVar8);
                  goto LAB_10056663f;
                }
                pvVar9 = (void *)(ulong)(uint)piVar14[1];
              }
              uVar19 = 0x80000072;
              bVar22 = false;
              FUN_1008e3970("","StatesUtils",0,
                            "Error : Failed to find NTFS $VOLUME_INFORMATION attr");
            }
          }
          goto LAB_10056661a;
        }
      }
      uVar19 = 0x80010013;
      FUN_1008e3970("","StatesUtils",0,
                    "Error : Failed to alloc memory for reading disk storage state");
      goto LAB_100566550;
    }
    if (0 < DAT_1011b55f8) {
      FUN_1008e3970("","StatesUtils",1,
                    "Warning : Unsupported FS type %d detected, consider FS state as undefined");
    }
    *(byte *)param_5 = (byte)*param_5 | 1;
    goto LAB_100566284;
  }
  FUN_1008e3970("","StatesUtils",0,"Error : Reading disk storage boot sec data error 0x%X",uVar19);
  pvVar18 = local_40;
  goto LAB_100566292;
LAB_100566639:
  piVar10 = (int *)((long)piVar10 + (ulong)(uint)piVar10[1]);
LAB_10056663f:
  if (*piVar10 == -1) {
    uVar19 = 0x80000072;
    bVar22 = false;
    FUN_1008e3970("","StatesUtils",0,"Error : Failed to find NTFS $VOLUME_INFORMATION mirr attr");
  }
  else {
    if (*piVar10 != 0x70) goto LAB_100566639;
    uVar12 = (ulong)*(ushort *)(piVar10 + 5);
    if (param_2 == 0) {
      *(undefined8 *)(param_5 + 9) = *(undefined8 *)((long)pvVar18 + 0x28);
      param_5[0xb] = (uint)*(byte *)((long)pvVar18 + 0xd);
      if ((*(byte *)(uVar17 + 10 + (long)piVar14) & 1) != 0) {
        *(byte *)(param_5 + 7) = (byte)param_5[7] | 1;
      }
      if ((*(byte *)(uVar12 + 10 + (long)piVar10) & 1) != 0) {
        *(byte *)(param_5 + 7) = (byte)param_5[7] | 2;
      }
      param_5[0xf] = 0;
      uVar19 = 0;
      uVar5 = 0;
      lVar11 = 0;
      do {
        iVar6 = _memcmp((void *)((long)pvVar7 + uVar19),(void *)((long)pvVar8 + uVar19),
                        (ulong)*(uint *)((long)pvVar7 + uVar19 + 0x18));
        if (iVar6 != 0) {
          uVar5 = uVar5 | 1 << ((byte)lVar11 & 0x1f);
          param_5[0xf] = uVar5;
        }
        lVar11 = lVar11 + 1;
        uVar19 = (ulong)(uint)((int)uVar19 + iVar15);
      } while (lVar11 != 0x18);
      if (uVar5 != 0) {
        *(byte *)(param_5 + 7) = (byte)param_5[7] | 4;
      }
LAB_1005668bd:
      bVar22 = true;
    }
    else {
      if (param_2 == 4) {
        if (*(char *)(param_3 + 4) == '\0') goto LAB_1005668bd;
        pbVar1 = (byte *)(uVar17 + 10 + (long)piVar14);
        *pbVar1 = *pbVar1 | 1;
        pbVar1 = (byte *)(uVar12 + 10 + (long)piVar10);
        *pbVar1 = *pbVar1 | 1;
        bVar22 = true;
        goto LAB_100566880;
      }
      if (param_2 == 3) {
        uVar5 = *param_5;
        bVar21 = (uVar5 & 2) != 0;
        if (bVar21) {
          pbVar1 = (byte *)(uVar17 + 10 + (long)piVar14);
          *pbVar1 = *pbVar1 & 0xfe;
          *(byte *)(param_5 + 7) = (byte)param_5[7] & 0xfe;
          uVar5 = uVar5 & 0xfffffffd;
          *param_5 = uVar5;
        }
        bVar22 = (uVar5 & 4) != 0;
        if (bVar22) {
          pbVar1 = (byte *)(uVar12 + 10 + (long)piVar10);
          *pbVar1 = *pbVar1 | 1;
          *(byte *)(param_5 + 7) = (byte)param_5[7] | 1;
          *param_5 = uVar5 & 0xfffffffb;
        }
      }
      else {
        if (param_2 != 1) goto LAB_1005668bd;
        uVar3 = *(ushort *)(uVar17 + 10 + (long)piVar14);
        bVar21 = (uVar3 & 1) == 0;
        if (bVar21) {
          *(ushort *)((long)piVar14 + uVar17 + 10) = uVar3 | 1;
          *(byte *)(param_5 + 7) = (byte)param_5[7] | 1;
          *(byte *)param_5 = (byte)*param_5 | 2;
        }
        uVar3 = *(ushort *)(uVar12 + 10 + (long)piVar10);
        uVar19 = 0;
        bVar22 = (uVar3 & 1) != 0;
        if (bVar22) {
          *(ushort *)((long)piVar10 + uVar12 + 10) = uVar3 & 0xfffe;
          *(byte *)(param_5 + 7) = (byte)param_5[7] & 0xfd;
          *(byte *)param_5 = (byte)*param_5 | 4;
        }
        param_5[0xf] = 0;
        uVar5 = 0;
        lVar20 = 0;
        do {
          iVar6 = _memcmp((void *)((long)pvVar7 + uVar19),(void *)((long)pvVar8 + uVar19),
                          (ulong)*(uint *)((long)pvVar7 + uVar19 + 0x18));
          if (iVar6 != 0) {
            uVar5 = uVar5 | 1 << ((byte)lVar20 & 0x1f);
            param_5[0xf] = uVar5;
          }
          lVar20 = lVar20 + 1;
          uVar19 = (ulong)(uint)((int)uVar19 + iVar15);
        } while (lVar20 != 0x18);
        if (uVar5 != 0) {
          *(byte *)(param_5 + 7) = (byte)param_5[7] | 4;
        }
      }
      if (bVar21) {
LAB_100566880:
        uVar5 = (**(code **)(*param_1 + 0xf0))
                          (param_1,pvVar7,sVar13,lVar16 + *(long *)(param_4 + 8));
        uVar19 = (ulong)uVar5;
        if (-1 < (int)uVar5) goto LAB_1005668b2;
        bVar22 = false;
        FUN_1008e3970("","StatesUtils",0,"Error : Writing disk storage data error 0x%X",uVar19);
        goto LAB_10056661a;
      }
LAB_1005668b2:
      if (!bVar22) goto LAB_1005668bd;
      uVar5 = (**(code **)(*param_1 + 0xf0))(param_1,pvVar8,sVar13,lVar11 + *(long *)(param_4 + 8));
      uVar19 = (ulong)uVar5;
      bVar22 = true;
      if ((int)uVar5 < 0) {
        bVar22 = false;
        FUN_1008e3970("","StatesUtils",0,"Error : Writing disk storage data error 0x%X",uVar19);
      }
    }
  }
LAB_10056661a:
  _free(pvVar8);
  _free(pvVar7);
  if (bVar22) {
LAB_100566284:
    uVar19 = 0;
  }
LAB_100566292:
  if (pvVar18 == (void *)0x0) {
    return uVar19;
  }
LAB_100566550:
  local_48 = &PTR_FUN_10111db90;
  _free(pvVar18);
  return uVar19;
}

