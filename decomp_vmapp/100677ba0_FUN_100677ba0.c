
ulong FUN_100677ba0(long param_1,char *param_2,undefined4 param_3,undefined8 param_4,int *param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  short sVar4;
  ushort uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  undefined4 uVar12;
  __darwin_ct_rune_t _Var13;
  __darwin_ct_rune_t _Var14;
  size_t sVar15;
  ulong uVar16;
  uint uVar17;
  uint *puVar18;
  ushort uVar19;
  ulong uVar20;
  int iVar21;
  int *piVar22;
  uint uVar23;
  long lVar24;
  long lVar25;
  QArrayData *pQVar26;
  uint local_e4;
  QArrayData *local_58;
  undefined4 local_50;
  int local_4c;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  iVar21 = -1;
  if (param_2 != (char *)0x0) {
    sVar15 = _strlen(param_2);
    iVar21 = (int)sVar15;
  }
  local_40 = (QArrayData *)QString::fromAscii_helper(param_2,iVar21);
  QString::toLatin1();
  if ((1 < *(uint *)local_48) || (*(long *)(local_48 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_48,*(uint *)(local_48 + 4) + 1,*(uint *)(local_48 + 8) >> 0x1f);
  }
  pQVar26 = local_48;
  lVar6 = *(long *)(local_48 + 0x10);
  local_50 = param_3;
  if (*(long *)(param_1 + 8) == 0) {
LAB_10067821a:
    FUN_1008e3970("","WinRegistry",0,"OA00002.19:");
    uVar16 = 0x8158002;
  }
  else {
    puVar7 = *(undefined8 **)(*(long *)(param_1 + 8) + 8);
    if (puVar7 == (undefined8 *)0x0) {
      FUN_1008e3970("","WinRegistry",0,"OA00004.10:");
      goto LAB_10067821a;
    }
    puVar18 = (uint *)*puVar7;
    if ((1 < *puVar18) || (*(long *)(puVar18 + 4) != 0x18)) {
      QByteArray::reallocData(puVar7,puVar18[1] + 1,puVar18[2] >> 0x1f);
      puVar18 = (uint *)*puVar7;
    }
    lVar8 = *(long *)(puVar18 + 4);
    if ((long)puVar18 + lVar8 == 0) goto LAB_10067821a;
    uVar16 = (ulong)((int)param_4 + 0x1004);
    lVar1 = lVar8 + uVar16;
    if (*(short *)((long)puVar18 + lVar1) == 0x6972) {
      pQVar26 = pQVar26 + lVar6;
      *param_5 = (int)param_4 + 0x1000;
      lVar1 = lVar1 + 4;
      lVar3 = uVar16 + 2 + lVar8;
      lVar6 = lVar8 + 0x48;
      lVar11 = lVar8 + 0x4c;
      local_e4 = 0x815801b;
      uVar19 = 0;
      do {
        sVar15 = _strlen((char *)pQVar26);
        do {
          iVar21 = *(int *)((long)puVar18 + (ulong)uVar19 * 4 + lVar1);
          uVar16 = (ulong)(iVar21 + 0x1004);
          sVar4 = *(short *)((long)puVar18 + uVar16 + lVar8);
          uVar17 = (uint)sVar15;
          if ((sVar4 == 0x666c) || (sVar4 == 0x686c)) {
            lVar2 = lVar8 + 4 + uVar16;
            uVar20 = (ulong)(*(int *)((long)puVar18 + lVar2) + 0x1004);
            lVar25 = lVar6 + uVar20;
            uVar5 = *(ushort *)((long)puVar18 + lVar25);
            uVar23 = (uint)uVar5;
            if ((int)uVar17 <= (int)(uint)uVar5) {
              uVar23 = uVar17;
            }
            if (0 < (int)uVar23) {
              lVar24 = 0;
              do {
                _Var13 = ___toupper((int)(char)pQVar26[lVar24]);
                _Var14 = ___toupper((int)*(char *)((long)puVar18 + lVar24 + uVar20 + lVar11));
                iVar9 = (_Var13 - _Var14) * 0x1000000;
                if (iVar9 != 0) {
                  if (-1 < iVar9) goto LAB_100677e95;
                  goto LAB_1006780f0;
                }
                lVar24 = lVar24 + 1;
              } while ((int)lVar24 < (int)uVar23);
              uVar5 = *(ushort *)((long)puVar18 + lVar25);
            }
            if ((int)(uint)uVar5 <= (int)uVar17) {
LAB_100677e95:
              piVar22 = (int *)(lVar2 + (long)puVar18);
              iVar9 = piVar22[(ulong)*(ushort *)((long)puVar18 + lVar8 + 2 + uVar16) * 2 + -2];
              lVar2 = lVar6 + (ulong)(iVar9 + 0x1004);
              uVar5 = *(ushort *)((long)puVar18 + lVar2);
              uVar23 = (uint)uVar5;
              if ((int)uVar17 <= (int)(uint)uVar5) {
                uVar23 = uVar17;
              }
              if (0 < (int)uVar23) {
                lVar25 = 0;
                do {
                  _Var13 = ___toupper((int)(char)pQVar26[lVar25]);
                  _Var14 = ___toupper((int)*(char *)((long)puVar18 +
                                                    lVar25 + (ulong)(iVar9 + 0x1004) + lVar11));
                  iVar10 = (_Var13 - _Var14) * 0x1000000;
                  if (iVar10 != 0) {
                    if (-1 < iVar10) goto LAB_100677f65;
                    goto LAB_1006780f0;
                  }
                  lVar25 = lVar25 + 1;
                } while ((int)lVar25 < (int)uVar23);
                uVar5 = *(ushort *)((long)puVar18 + lVar2);
              }
              if ((int)(uint)uVar5 <= (int)uVar17) {
LAB_100677f65:
                if (sVar4 == 0x696c) goto LAB_100677f72;
                goto LAB_1006780c0;
              }
            }
LAB_1006780f0:
            uVar5 = *(ushort *)((long)puVar18 + lVar3);
            goto LAB_100678100;
          }
          if (sVar4 == 0x696c) {
            piVar22 = (int *)(lVar8 + 4 + uVar16 + (long)puVar18);
LAB_100677f72:
            iVar9 = *piVar22;
            lVar2 = lVar6 + (ulong)(iVar9 + 0x1004);
            uVar5 = *(ushort *)((long)puVar18 + lVar2);
            uVar23 = (uint)uVar5;
            if ((int)uVar17 <= (int)(uint)uVar5) {
              uVar23 = uVar17;
            }
            if (0 < (int)uVar23) {
              lVar25 = 0;
              do {
                _Var13 = ___toupper((int)(char)pQVar26[lVar25]);
                _Var14 = ___toupper((int)*(char *)((long)puVar18 +
                                                  lVar25 + (ulong)(iVar9 + 0x1004) + lVar11));
                iVar10 = (_Var13 - _Var14) * 0x1000000;
                if (iVar10 != 0) {
                  if (-1 < iVar10) goto LAB_100678027;
                  goto LAB_1006780f0;
                }
                lVar25 = lVar25 + 1;
              } while ((int)lVar25 < (int)uVar23);
              uVar5 = *(ushort *)((long)puVar18 + lVar2);
            }
            if ((int)(uint)uVar5 <= (int)uVar17) {
LAB_100678027:
              iVar9 = piVar22[(ulong)*(ushort *)((long)puVar18 + uVar16 + lVar8 + 2) - 1];
              lVar2 = lVar6 + (ulong)(iVar9 + 0x1004);
              uVar5 = *(ushort *)((long)puVar18 + lVar2);
              uVar23 = (uint)uVar5;
              if ((int)uVar17 <= (int)(uint)uVar5) {
                uVar23 = uVar17;
              }
              if (0 < (int)uVar23) {
                lVar25 = 0;
                do {
                  _Var13 = ___toupper((int)(char)pQVar26[lVar25]);
                  _Var14 = ___toupper((int)*(char *)((long)puVar18 +
                                                    lVar25 + (ulong)(iVar9 + 0x1004) + lVar11));
                  iVar10 = (_Var13 - _Var14) * 0x1000000;
                  if (iVar10 != 0) {
                    if (-1 < iVar10) goto LAB_1006780c0;
                    goto LAB_1006780f0;
                  }
                  lVar25 = lVar25 + 1;
                } while ((int)lVar25 < (int)uVar23);
                uVar5 = *(ushort *)((long)puVar18 + lVar2);
              }
              if ((int)(uint)uVar5 <= (int)uVar17) goto LAB_1006780c0;
            }
            goto LAB_1006780f0;
          }
LAB_1006780c0:
          uVar19 = uVar19 + 1;
          uVar5 = *(ushort *)((long)puVar18 + lVar3);
        } while (uVar19 < uVar5);
        uVar19 = uVar5 - 1;
LAB_100678100:
        uVar12 = local_50;
        if (sVar4 != 0x696c) {
          if ((sVar4 == 0x666c) || (sVar4 == 0x686c)) {
            uVar16 = FUN_100676b80(param_1,pQVar26,local_50,iVar21,&local_4c);
            if ((int)uVar16 == 0x815800c) {
              FUN_1008e3970("","WinRegistry",0,"OA00002.21:");
              uVar16 = FUN_1006784d0(param_1,pQVar26,uVar12,iVar21,&local_4c);
            }
          }
          else {
            FUN_1008e3970("","WinRegistry",0,"OA00002.82:\t0x%x",sVar4);
            uVar16 = (ulong)local_e4;
          }
LAB_1006783d5:
          if ((int)uVar16 == 0x8000000) {
            *(int *)((long)puVar18 + (ulong)uVar19 * 4 + lVar1) = local_4c + -0x1000;
            uVar16 = 0x8000000;
          }
          goto LAB_10067823d;
        }
        uVar16 = FUN_1006770c0(param_1,pQVar26,local_50,iVar21,&local_4c);
        if ((int)uVar16 != 0x815800c) goto LAB_1006783d5;
        if ((uint)uVar19 == uVar5 - 1) {
          FUN_1008e3970("","WinRegistry",0,"OA00002.22:");
          uVar16 = FUN_1006768b0(param_1,pQVar26,uVar12,&local_4c);
          if ((int)uVar16 == 0x8000000) {
            uVar16 = FUN_1006774d0(param_1,param_4,local_4c,param_5);
          }
          goto LAB_10067823d;
        }
        uVar16 = FUN_100677700(param_1,&local_40,&local_50,iVar21);
        if ((int)uVar16 != 0x8000000) goto LAB_10067823d;
        QString::toLatin1();
        QByteArray::operator=((QByteArray *)&local_48,(QByteArray *)&local_58);
        if (*(int *)local_58 != -1) {
          if (*(int *)local_58 != 0) {
            LOCK();
            *(int *)local_58 = *(int *)local_58 + -1;
            local_31 = *(int *)local_58 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1006781c8;
          }
          QArrayData::deallocate(local_58,1,8);
        }
LAB_1006781c8:
        if ((1 < *(uint *)local_48) || (*(long *)(local_48 + 0x10) != 0x18)) {
          QByteArray::reallocData
                    (&local_48,*(uint *)(local_48 + 4) + 1,*(uint *)(local_48 + 8) >> 0x1f);
        }
        pQVar26 = local_48 + *(long *)(local_48 + 0x10);
        local_e4 = 0x8000000;
      } while( true );
    }
    FUN_1008e3970("","WinRegistry",0,"OA00002.20:");
    uVar16 = 0x815800a;
  }
LAB_10067823d:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100678275;
    }
    uVar16 = uVar16 & 0xffffffff;
    QArrayData::deallocate(local_48,1,8);
  }
LAB_100678275:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return uVar16;
      }
      local_31 = 0;
    }
    uVar16 = uVar16 & 0xffffffff;
    QArrayData::deallocate(local_40,2,8);
  }
  return uVar16;
}

