
ulong FUN_1008a5750(long *param_1,long *param_2,uint *param_3,ulong param_4,uint param_5)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  ulong uVar10;
  long *plVar11;
  void *pvVar12;
  int iVar13;
  uint uVar14;
  long *plVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint local_68;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  uVar16 = *param_3;
  if ((uVar16 & 0x18) == 0) {
    uVar14 = 0;
    if ((int)param_4 != -1) {
      uVar14 = param_5 & 0xc0;
    }
  }
  else {
    if ((int)param_4 != -1) {
      return 0xffffffff;
    }
    param_4 = (ulong)param_3[2];
    uVar14 = uVar16 & 0xc0;
  }
  uVar17 = param_5 & 0xffffff3f;
  iVar3 = ((uVar16 & param_5) >> 0xb & 1) + 1;
  local_68 = (uint)param_4;
  if ((uVar16 & 6) == 0) {
    if ((uVar16 & 0x10) == 0) {
      uVar10 = FUN_1008a5390(param_1,param_2,*(undefined8 *)(param_3 + 8),param_4,uVar14 | uVar17);
      return uVar10;
    }
    uVar10 = 0;
    iVar13 = FUN_1008a5390(param_1,0,*(undefined8 *)(param_3 + 8),0xffffffff,uVar17);
    if (iVar13 != 0) {
      uVar16 = FUN_1008af920(iVar3,iVar13,param_4 & 0xffffffff);
      uVar10 = (ulong)uVar16;
      if (param_2 != (long *)0x0) {
        FUN_1008af7d0(param_2,iVar3,iVar13,param_4 & 0xffffffff,uVar14);
        FUN_1008a5390(param_1,param_2,*(undefined8 *)(param_3 + 8),0xffffffff,uVar17);
        if (iVar3 == 2) {
          FUN_1008af900(param_2);
        }
      }
    }
  }
  else {
    lVar1 = *param_1;
    uVar10 = 0;
    if (lVar1 != 0) {
      iVar13 = 0;
      if ((uVar16 & 2) != 0) {
        iVar13 = (uVar16 >> 2 & 1) + 1;
      }
      uVar16 = uVar16 & 0x10;
      if ((uVar16 != 0) || (uVar4 = uVar14, local_68 == 0xffffffff)) {
        local_68 = iVar13 != 0 | 0x10;
        uVar4 = 0;
      }
      iVar5 = FUN_100885600(lVar1);
      iVar18 = 0;
      if (0 < iVar5) {
        iVar18 = 0;
        iVar5 = 0;
        do {
          local_48 = FUN_100885620(lVar1,iVar5);
          iVar6 = FUN_1008a5390(&local_48,0,*(undefined8 *)(param_3 + 8),0xffffffff,uVar17);
          iVar18 = iVar18 + iVar6;
          iVar5 = iVar5 + 1;
          iVar6 = FUN_100885600(lVar1);
        } while (iVar5 < iVar6);
      }
      uVar7 = FUN_1008af920(iVar3,iVar18,local_68);
      uVar8 = uVar7;
      if (uVar16 != 0) {
        uVar8 = FUN_1008af920(iVar3,uVar7,param_4 & 0xffffffff);
      }
      uVar10 = (ulong)uVar8;
      if (param_2 != (long *)0x0) {
        if (uVar16 != 0) {
          FUN_1008af7d0(param_2,iVar3,uVar7,param_4 & 0xffffffff,uVar14);
        }
        FUN_1008af7d0(param_2,iVar3,iVar18,local_68,uVar4);
        uVar2 = *(undefined8 *)(param_3 + 8);
        local_40 = (void *)0x0;
        if ((iVar13 == 0) || (iVar5 = FUN_100885600(lVar1), iVar5 < 2)) {
          iVar13 = FUN_100885600(lVar1);
          if (0 < iVar13) {
            iVar13 = 0;
            do {
              local_38 = FUN_100885620(lVar1,iVar13);
              FUN_1008a5390(&local_38,param_2,uVar2,0xffffffff,uVar17);
              iVar13 = iVar13 + 1;
              iVar5 = FUN_100885600(lVar1);
            } while (iVar13 < iVar5);
          }
        }
        else {
          iVar5 = FUN_100885600(lVar1);
          plVar11 = (long *)FUN_10081ddd0(iVar5 * 0x18,"tasn_enc.c",0x1b2);
          if (plVar11 != (long *)0x0) {
            pvVar12 = (void *)FUN_10081ddd0(iVar18,"tasn_enc.c",0x1b5);
            if (pvVar12 == (void *)0x0) {
              FUN_10081e1a0(plVar11);
            }
            else {
              local_40 = pvVar12;
              iVar5 = FUN_100885600(lVar1);
              if (0 < iVar5) {
                iVar5 = 0;
                plVar15 = plVar11;
                do {
                  local_38 = FUN_100885620(lVar1,iVar5);
                  *plVar15 = (long)local_40;
                  uVar9 = FUN_1008a5390(&local_38,&local_40,uVar2,0xffffffff,uVar17);
                  *(undefined4 *)(plVar15 + 1) = uVar9;
                  plVar15[2] = local_38;
                  iVar5 = iVar5 + 1;
                  iVar18 = FUN_100885600(lVar1);
                  plVar15 = plVar15 + 3;
                } while (iVar5 < iVar18);
              }
              iVar5 = FUN_100885600(lVar1);
              _qsort(plVar11,(long)iVar5,0x18,(int *)FUN_1008a5ec0);
              local_40 = (void *)*param_2;
              iVar5 = FUN_100885600(lVar1);
              if (0 < iVar5) {
                iVar5 = 0;
                plVar15 = plVar11;
                do {
                  _memcpy(local_40,(void *)*plVar15,(long)(int)plVar15[1]);
                  local_40 = (void *)((long)local_40 + (long)(int)plVar15[1]);
                  iVar5 = iVar5 + 1;
                  iVar18 = FUN_100885600(lVar1);
                  plVar15 = plVar15 + 3;
                } while (iVar5 < iVar18);
              }
              *param_2 = (long)local_40;
              if ((iVar13 == 2) && (iVar13 = FUN_100885600(lVar1), 0 < iVar13)) {
                plVar15 = plVar11 + 2;
                iVar13 = 0;
                do {
                  FUN_100885650(lVar1,iVar13,*plVar15);
                  iVar13 = iVar13 + 1;
                  iVar5 = FUN_100885600(lVar1);
                  plVar15 = plVar15 + 3;
                } while (iVar13 < iVar5);
              }
              FUN_10081e1a0(plVar11);
              FUN_10081e1a0(pvVar12);
            }
          }
        }
        if ((iVar3 == 2) && (FUN_1008af900(param_2), uVar16 != 0)) {
          FUN_1008af900(param_2);
        }
      }
    }
  }
  return uVar10;
}

