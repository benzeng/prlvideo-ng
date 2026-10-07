
undefined8 FUN_100804610(int *param_1,void *param_2,int param_3,byte *param_4,long *param_5)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  size_t sVar7;
  long lVar8;
  byte *pbVar9;
  byte *pbVar10;
  ulong uVar11;
  uint uVar12;
  size_t sVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  int local_250;
  int local_24c;
  byte *local_248;
  undefined1 local_240 [168];
  undefined8 local_198 [36];
  undefined1 local_78 [64];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  *param_5 = 0;
  param_1[0x85] = 0;
  uVar15 = 0;
  uVar14 = 0;
  uVar6 = FUN_10080ef10(param_1,0x20,0,0);
  if ((((uVar6 & 0x4000) != 0) || (param_4 == (byte *)0x0)) || (iVar4 = *param_1, iVar4 < 0x301))
  goto LAB_1008049b2;
  sVar13 = (size_t)param_3;
  pbVar10 = (byte *)((long)param_2 + sVar13);
  if (pbVar10 < param_4) {
    if ((iVar4 == 0x100) || (sVar7 = sVar13, iVar4 == 0xfeff)) {
      pbVar10 = (byte *)((long)param_2 + sVar13 + *(byte *)((long)param_2 + sVar13) + 1);
      if (param_4 <= pbVar10) goto LAB_1008049ac;
      sVar7 = sVar13 + 1 + (ulong)*(byte *)((long)param_2 + sVar13);
    }
    uVar6 = (ulong)CONCAT11(*pbVar10,*(undefined1 *)(sVar7 + 1 + (long)param_2));
    pbVar10 = (byte *)(sVar7 + 2 + uVar6 + (long)param_2);
    if ((pbVar10 < param_4) &&
       (uVar11 = (ulong)*pbVar10, (byte *)(sVar7 + 3 + uVar6 + uVar11 + (long)param_2) <= param_4))
    {
      pbVar10 = (byte *)(uVar6 + uVar11 + sVar7 + 5 + (long)param_2);
      uVar15 = uVar14;
      if (param_4 <= pbVar10) goto LAB_1008049b2;
      do {
        pbVar9 = pbVar10;
        pbVar1 = pbVar9 + 4;
        if (param_4 < pbVar1) goto LAB_1008049b2;
        uVar12 = (uint)CONCAT11(pbVar9[2],pbVar9[3]);
        if (param_4 < pbVar9 + (ulong)uVar12 + 4) goto LAB_1008049b2;
        pbVar10 = pbVar9 + (ulong)uVar12 + 4;
      } while (CONCAT11(*pbVar9,pbVar9[1]) != 0x23);
      if (uVar12 == 0) {
        param_1[0x85] = 1;
        uVar15 = 1;
        goto LAB_1008049b2;
      }
      uVar15 = 2;
      if (*(long *)(param_1 + 0x98) != 0) goto LAB_1008049b2;
      iVar4 = 2;
      if (uVar12 < 0x30) {
        iVar4 = 2;
      }
      else {
        lVar8 = *(long *)(param_1 + 0x9c);
        FUN_100829f90(local_198);
        FUN_10088ae60(local_240);
        if (*(code **)(lVar8 + 0x1e0) == (code *)0x0) {
          iVar3 = _memcmp(pbVar1,(void *)(lVar8 + 0x1b0),0x10);
          if (iVar3 == 0) {
            uVar15 = FUN_100891780();
            iVar3 = 0;
            iVar4 = FUN_100829c00(local_198,lVar8 + 0x1c0,0x10,uVar15,0);
            if (0 < iVar4) {
              uVar15 = FUN_10088ed30();
              iVar4 = FUN_10088bc60(local_240,uVar15,0,lVar8 + 0x1d0,pbVar9 + 0x14);
              if (0 < iVar4) goto LAB_1008048c4;
            }
            goto LAB_100804963;
          }
        }
        else {
          iVar3 = 0;
          iVar2 = (**(code **)(lVar8 + 0x1e0))(param_1,pbVar1,pbVar9 + 0x14,local_240,local_198,0);
          iVar4 = -1;
          if (-1 < iVar2) {
            if (iVar2 == 0) {
              iVar4 = 2;
            }
            else {
              if (iVar2 == 2) {
                iVar3 = 1;
              }
LAB_1008048c4:
              iVar4 = FUN_1008946d0(local_198[0]);
              local_250 = iVar4;
              if (iVar4 < 0) {
LAB_100804963:
                FUN_10088b320(local_240);
                FUN_10082a130(local_198);
              }
              else {
                iVar2 = uVar12 - iVar4;
                iVar5 = FUN_100829fd0(local_198,pbVar1,(long)iVar2);
                if ((iVar5 < 1) || (iVar5 = FUN_100829ff0(local_198,local_78,0), iVar5 < 1))
                goto LAB_100804963;
                FUN_10082a130(local_198);
                iVar4 = FUN_10081d820(local_78,pbVar9 + (long)iVar2 + 4,(long)iVar4);
                if (iVar4 != 0) {
                  FUN_10088b320(local_240);
                  iVar4 = 2;
                  goto LAB_100804981;
                }
                iVar4 = FUN_1008944d0(local_240);
                local_248 = pbVar9 + (long)iVar4 + 0x14;
                iVar5 = FUN_1008944d0(local_240);
                iVar5 = (iVar2 + -0x10) - iVar5;
                pbVar10 = (byte *)FUN_10081ddd0(iVar5,"t1_lib.c",0x913);
                if ((pbVar10 != (byte *)0x0) &&
                   (iVar4 = FUN_10088b630(local_240,pbVar10,&local_24c,pbVar9 + (long)iVar4 + 0x14,
                                          iVar5), 0 < iVar4)) {
                  iVar4 = FUN_10088bba0(local_240,pbVar10 + local_24c,&local_250);
                  if (iVar4 < 1) {
                    FUN_10088b320(local_240);
                    FUN_10081e1a0(pbVar10);
                    iVar4 = 2;
                  }
                  else {
                    local_24c = local_24c + local_250;
                    FUN_10088b320(local_240);
                    local_248 = pbVar10;
                    lVar8 = FUN_100819430(0,&local_248,(long)local_24c);
                    FUN_10081e1a0(pbVar10);
                    if (lVar8 == 0) {
                      FUN_100888070();
                      iVar4 = 2;
                    }
                    else {
                      if (param_3 != 0) {
                        _memcpy((void *)(lVar8 + 0x48),param_2,sVar13);
                      }
                      *(int *)(lVar8 + 0x44) = param_3;
                      *param_5 = lVar8;
                      iVar4 = iVar3 + 3;
                    }
                  }
                  goto LAB_100804981;
                }
                FUN_10088b320(local_240);
              }
              iVar4 = -1;
            }
          }
        }
      }
LAB_100804981:
      uVar15 = 3;
      if (iVar4 == 4) {
        param_1[0x85] = 1;
        goto LAB_1008049b2;
      }
      if (iVar4 == 3) goto LAB_1008049b2;
      if (iVar4 == 2) {
        param_1[0x85] = 1;
        uVar15 = 2;
        goto LAB_1008049b2;
      }
    }
  }
LAB_1008049ac:
  uVar15 = 0xffffffff;
LAB_1008049b2:
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar15;
}

