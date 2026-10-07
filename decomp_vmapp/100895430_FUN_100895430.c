
undefined8
FUN_100895430(char *param_1,uint param_2,undefined8 param_3,int param_4,int param_5,
             undefined8 param_6,uint param_7,uint *param_8)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  size_t sVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  byte *pbVar13;
  ulong uVar14;
  byte *pbVar15;
  undefined8 uVar16;
  uint uVar17;
  uint uVar18;
  uint *puVar19;
  uint *puVar20;
  undefined1 *puVar21;
  uint uVar22;
  undefined1 local_2bc;
  undefined1 local_2bb;
  undefined1 local_2ba;
  undefined1 local_2b9;
  undefined1 local_2b8 [288];
  undefined1 local_198 [288];
  undefined4 local_78;
  uint auStack_74 [15];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  uVar3 = FUN_1008946d0(param_6);
  uVar16 = 0;
  if (-1 < (int)uVar3) {
    FUN_100829f90(local_198);
    sVar7 = 0;
    if ((param_1 != (char *)0x0) && (sVar7 = (size_t)param_2, param_2 == 0xffffffff)) {
      sVar7 = _strlen(param_1);
    }
    uVar16 = 0;
    iVar4 = FUN_100829c00(local_198,param_1,sVar7,param_6,0);
    if (iVar4 == 0) {
      FUN_10082a130(local_198);
    }
    else {
      if (param_7 != 0) {
        uVar22 = ~uVar3;
        lVar10 = 1;
        do {
          uVar17 = param_7;
          if ((int)uVar3 < (int)param_7) {
            uVar17 = uVar3;
          }
          local_2bc = (undefined1)((ulong)lVar10 >> 0x18);
          local_2bb = (undefined1)((ulong)lVar10 >> 0x10);
          local_2ba = (undefined1)((ulong)lVar10 >> 8);
          local_2b9 = (undefined1)lVar10;
          iVar4 = FUN_10082a0a0(local_2b8,local_198);
          if (iVar4 == 0) {
LAB_1008958b3:
            puVar21 = local_198;
LAB_1008958ba:
            FUN_10082a130(puVar21);
            uVar16 = 0;
            goto LAB_1008958c1;
          }
          iVar4 = FUN_100829fd0(local_2b8,param_3,(long)param_4);
          if (((iVar4 == 0) || (iVar4 = FUN_100829fd0(local_2b8,&local_2bc,4), iVar4 == 0)) ||
             (iVar4 = FUN_100829ff0(local_2b8,&local_78,0), iVar4 == 0)) {
LAB_10089589e:
            FUN_10082a130(local_198);
            puVar21 = local_2b8;
            goto LAB_1008958ba;
          }
          FUN_10082a130(local_2b8);
          _memcpy(param_8,&local_78,(long)(int)uVar17);
          if (1 < param_5) {
            iVar4 = 1;
            if ((int)uVar17 < 1) {
              do {
                iVar5 = FUN_10082a0a0(local_2b8,local_198);
                if (iVar5 == 0) goto LAB_1008958b3;
                iVar5 = FUN_100829fd0(local_2b8,&local_78,(long)(int)uVar3);
                if ((iVar5 == 0) || (iVar5 = FUN_100829ff0(local_2b8,&local_78,0), iVar5 == 0))
                goto LAB_10089589e;
                FUN_10082a130(local_2b8);
                iVar4 = iVar4 + 1;
              } while (iVar4 < param_5);
            }
            else {
              uVar18 = ~param_7;
              uVar6 = uVar18;
              if ((int)uVar18 <= (int)uVar22) {
                uVar6 = uVar22;
              }
              uVar11 = (ulong)(-uVar6 - 2);
              if ((int)uVar18 <= (int)uVar22) {
                uVar18 = uVar22;
              }
              uVar8 = (ulong)(-uVar18 - 2) + 1 & 0xfffffffffffffff0;
              iVar4 = 1;
              do {
                iVar5 = FUN_10082a0a0(local_2b8,local_198);
                if (iVar5 == 0) goto LAB_1008958b3;
                iVar5 = FUN_100829fd0(local_2b8,&local_78,(long)(int)uVar3);
                if ((iVar5 == 0) || (iVar5 = FUN_100829ff0(local_2b8,&local_78,0), iVar5 == 0))
                goto LAB_10089589e;
                FUN_10082a130(local_2b8);
                uVar12 = uVar11 + 1 & 0x1fffffff0;
                uVar9 = 0;
                if ((uVar12 != 0) &&
                   ((uVar14 = uVar8, puVar19 = param_8, puVar20 = &local_78,
                    (uint *)((long)auStack_74 + (uVar11 - 4)) < param_8 ||
                    (uVar9 = 0, (uint *)((long)param_8 + uVar11) < &local_78)))) {
                  do {
                    uVar6 = puVar20[1];
                    uVar1 = puVar20[2];
                    uVar2 = puVar20[3];
                    *puVar19 = *puVar19 ^ *puVar20;
                    puVar19[1] = puVar19[1] ^ uVar6;
                    puVar19[2] = puVar19[2] ^ uVar1;
                    puVar19[3] = puVar19[3] ^ uVar2;
                    uVar14 = uVar14 - 0x10;
                    uVar9 = uVar12;
                    puVar19 = puVar19 + 4;
                    puVar20 = puVar20 + 4;
                  } while (uVar14 != 0);
                }
                if (uVar11 + 1 != uVar9) {
                  uVar6 = (uint)uVar9;
                  if ((~uVar18 & 1) != 0) {
                    *(byte *)((long)param_8 + uVar9) =
                         *(byte *)((long)param_8 + uVar9) ^
                         *(byte *)((long)auStack_74 + (uVar9 - 4));
                    uVar9 = uVar9 + 1;
                  }
                  if (-uVar18 - 2 != uVar6) {
                    pbVar13 = (byte *)((long)auStack_74 + (uVar9 - 3));
                    pbVar15 = (byte *)((long)param_8 + uVar9 + 1);
                    iVar5 = -((int)uVar9 + 1) - uVar18;
                    do {
                      pbVar15[-1] = pbVar15[-1] ^ pbVar13[-1];
                      *pbVar15 = *pbVar15 ^ *pbVar13;
                      pbVar13 = pbVar13 + 2;
                      pbVar15 = pbVar15 + 2;
                      iVar5 = iVar5 + -2;
                    } while (iVar5 != 0);
                  }
                }
                iVar4 = iVar4 + 1;
              } while (iVar4 < param_5);
            }
          }
          lVar10 = lVar10 + 1;
          param_8 = (uint *)((long)param_8 + (long)(int)uVar17);
          param_7 = param_7 - uVar17;
        } while (param_7 != 0);
      }
      FUN_10082a130(local_198);
      uVar16 = 1;
    }
  }
LAB_1008958c1:
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar16;
}

