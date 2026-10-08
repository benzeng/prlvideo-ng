
undefined1 FUN_100ac7450(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  bool bVar7;
  undefined *puVar8;
  code *pcVar9;
  bool bVar10;
  char cVar11;
  bool bVar12;
  bool bVar13;
  undefined4 uVar14;
  int iVar15;
  int iVar16;
  long *plVar17;
  long lVar18;
  long lVar19;
  int iVar20;
  Data *pDVar21;
  int iVar22;
  ulong uVar23;
  undefined1 uVar24;
  long local_90;
  QString local_88;
  int local_7c;
  Data *local_78;
  Data *local_70;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  undefined1 local_31;
  
  puVar8 = PTR_shared_null_1021e15e8;
  if (param_3 == 3) {
    return 0;
  }
  local_70 = (Data *)PTR_shared_null_1021e15e8;
  lVar1 = param_1 + 0x100;
  if (param_3 == 2) {
    plVar17 = (long *)FUN_100adb590(lVar1,*(undefined4 *)(param_1 + 0x910));
  }
  else {
    plVar17 = (long *)FUN_100adb590(lVar1,*(undefined4 *)(param_1 + 0xb8c));
  }
  lVar4 = *plVar17;
  if (lVar4 == 0) {
    uVar24 = 0;
    goto LAB_100ac78bf;
  }
  if ((*(byte *)(lVar4 + 0x18) & 0x41) != 0) {
    uVar24 = 0;
    goto LAB_100ac78bf;
  }
  iVar20 = (int)((ulong)param_2 >> 0x20);
  if (*(int *)(lVar4 + 0x3c) != iVar20) {
    uVar24 = 0;
    goto LAB_100ac78bf;
  }
  iVar22 = (int)param_2;
  if (*(int *)(lVar4 + 0x38) != iVar22) {
    uVar24 = 0;
    goto LAB_100ac78bf;
  }
  local_78 = (Data *)puVar8;
  local_7c = FUN_100d7b300(*(undefined4 *)(lVar4 + 0x48));
  if (local_7c < 0) {
    uVar24 = 0;
  }
  else {
    FUN_100129840(&local_78,&local_7c);
    cVar11 = FUN_100d7c0a0();
    if (cVar11 != '\0') {
      uVar2 = *(undefined4 *)(lVar4 + 0x48);
      cVar11 = FUN_100d7c0a0();
      pcVar9 = DAT_102311b38;
      if (cVar11 == '\0') {
LAB_100ac7569:
        local_88.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
      }
      else {
        uVar14 = (*DAT_1023119d8)();
        iVar15 = (*pcVar9)(uVar14,uVar2,&local_58);
        if (iVar15 != 0) goto LAB_100ac7569;
        local_68 = (int)local_58;
        local_64 = (int)local_50;
        local_60 = local_68 + -1 + (int)local_48;
        local_5c = local_64 + -1 + (int)local_40;
        FUN_100d7bed0(&local_88,&local_68);
      }
      FUN_100d7b0d0(&local_90);
      if (*(int *)(local_90 + 8) != *(int *)(local_90 + 0xc)) {
        plVar17 = (long *)(local_90 + 0x10 + (long)*(int *)(local_90 + 8) * 8);
        do {
          cVar11 = operator==((QString *)(*plVar17 + 0x10),&local_88);
          if (cVar11 == '\0') {
            FUN_100129840(&local_78,*plVar17 + 4);
          }
          plVar17 = plVar17 + 1;
        } while (plVar17 != (long *)(local_90 + 0x10 + (long)*(int *)(local_90 + 0xc) * 8));
      }
      FUN_100ac9ea0(&local_90);
      if (*(int *)local_88.field0_0x0 != -1) {
        if (*(int *)local_88.field0_0x0 != 0) {
          LOCK();
          *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
          local_31 = *(int *)local_88.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100ac7671;
        }
        QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
      }
    }
LAB_100ac7671:
    lVar18 = FUN_100adc640(lVar1,*(undefined4 *)(lVar4 + 8));
    uVar3 = *(uint *)(param_1 + 0x900);
    uVar24 = 1;
    if ((ulong)uVar3 == 0) {
      bVar13 = false;
      bVar12 = true;
    }
    else {
      lVar5 = *(long *)(param_1 + 0x908);
      bVar12 = true;
      uVar23 = 0;
      bVar7 = false;
      bVar13 = false;
      do {
        plVar17 = (long *)FUN_100adb590(lVar1,*(undefined4 *)(lVar5 + uVar23 * 4));
        lVar6 = *plVar17;
        bVar10 = bVar7;
        if ((lVar6 != 0) && ((*(byte *)(lVar6 + 0x18) & 0x51) == 0)) {
          iVar15 = *(int *)(lVar6 + 0x3c);
          if (iVar15 == iVar20) {
            if (*(int *)(lVar6 + 0x38) == iVar22) {
              lVar19 = FUN_100adc640(lVar1,*(undefined4 *)(lVar6 + 8));
              if (lVar19 != lVar18) {
                iVar16 = FUN_100d7b300(*(undefined4 *)(lVar6 + 0x48));
                iVar15 = *(int *)(local_78 + 8);
                if (iVar15 != *(int *)(local_78 + 0xc)) {
                  pDVar21 = local_78 + (long)iVar15 * 8 + 0x10;
                  lVar19 = (long)*(int *)(local_78 + 0xc) * 8 + (long)iVar15 * -8;
                  do {
                    if (*(int *)pDVar21 == iVar16) {
                      FUN_1000bf010(&local_70,lVar6 + 8);
                      goto LAB_100ac76fd;
                    }
                    pDVar21 = pDVar21 + 8;
                    lVar19 = lVar19 + -8;
                  } while (lVar19 != 0);
                }
                bVar13 = true;
LAB_100ac76fd:
                if (bVar7) {
                  bVar12 = false;
                }
                goto LAB_100ac7810;
              }
              iVar15 = *(int *)(lVar6 + 0x3c);
              goto LAB_100ac77db;
            }
LAB_100ac77df:
            if (*(int *)(lVar6 + 0x38) == iVar22) goto LAB_100ac7810;
          }
          else {
LAB_100ac77db:
            if (iVar15 == iVar20) goto LAB_100ac77df;
          }
          bVar10 = true;
          if ((*(byte *)(lVar6 + 0x19) & 0x40) != 0) {
            bVar10 = bVar7;
          }
        }
LAB_100ac7810:
        bVar7 = bVar10;
        uVar23 = uVar23 + 1;
      } while (uVar23 < uVar3);
    }
    if ((*(int *)(local_70 + 0xc) != *(int *)(local_70 + 8)) && ((!bVar13 || (param_3 != 2)))) {
      FUN_100ac8440(&local_70,lVar4 + 8);
      FUN_100add410(*(undefined8 *)(param_1 + 0x9b8),&local_70);
      FUN_100ac7220(param_1,&local_70);
      if (bVar12) {
        FUN_100ad1c30(param_1);
      }
    }
  }
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100ac78bf;
    }
    QListData::dispose(local_78);
  }
LAB_100ac78bf:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      UNLOCK();
      if (*(int *)local_70 != 0) {
        return uVar24;
      }
      local_31 = 0;
    }
    QListData::dispose(local_70);
  }
  return uVar24;
}

