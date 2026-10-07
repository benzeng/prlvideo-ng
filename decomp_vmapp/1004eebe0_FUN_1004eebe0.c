
void FUN_1004eebe0(undefined8 *param_1,long param_2,long param_3)

{
  QArrayData *pQVar1;
  byte bVar2;
  int iVar3;
  long *****ppppplVar4;
  long *plVar5;
  long *****ppppplVar6;
  long lVar7;
  long lVar8;
  QArrayData *pQVar9;
  QArrayData *pQVar10;
  short sVar11;
  int iVar12;
  long ******pppppplVar13;
  uint uVar14;
  QArrayData *pQVar15;
  long lVar16;
  ulong uVar17;
  char *pcVar18;
  long lVar19;
  long ******pppppplVar20;
  ulong uVar21;
  QArrayData *pQVar22;
  QArrayData *pQVar23;
  ulong uVar24;
  QArrayData *pQVar25;
  ulong local_98;
  long *****local_88;
  long *****local_80;
  long local_78;
  long local_70;
  long local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  long *****local_50;
  long *****local_48;
  long local_40;
  undefined1 uStack_31;
  
  QMutex::lock();
  uVar21 = (ulong)(param_1 + 6) | 1;
  local_98 = uVar21;
  if (*(char *)(param_1 + 7) == '\0') {
    *(undefined1 *)((long)param_1 + 0x39) = 1;
    uVar24 = (ulong)(param_1 + 6) & 0xfffffffffffffffe;
    QMutex::unlock();
    local_40 = 0;
    lVar19 = 0;
    local_50 = (long *****)&local_50;
    local_48 = (long *****)&local_50;
    if (param_2 != 0) {
      lVar19 = 0;
      local_98 = param_2;
      do {
        if ((*(byte *)(param_3 + 0x10) & 1) != 0) {
          local_98 = 0;
          if (uVar24 != 0) {
            QMutex::lock();
            local_98 = uVar21;
          }
          *(undefined1 *)((long)param_1 + 0x39) = 0;
          goto LAB_1004ef2ec;
        }
        iVar12 = FUN_1004eea20(param_1,param_3);
        if (iVar12 != 0) {
          bVar2 = *(byte *)*param_1;
          if ((bVar2 & 1) == 0) {
            uVar17 = (ulong)(bVar2 >> 1);
          }
          else {
            uVar17 = *(ulong *)((byte *)*param_1 + 8);
          }
          pcVar18 = (char *)(uVar17 + *(long *)(param_3 + 8) + 1);
          if (pcVar18 != (char *)0x0) {
            _strlen(pcVar18);
          }
          QString::fromUtf8_helper((char *)&local_60,(int)pcVar18);
          QString::normalized(&local_58,&local_60,1,0);
          if (*(int *)local_60 != -1) {
            if (*(int *)local_60 != 0) {
              LOCK();
              *(int *)local_60 = *(int *)local_60 + -1;
              uStack_31 = *(int *)local_60 != 0;
              UNLOCK();
              if ((bool)uStack_31) goto LAB_1004eed2f;
            }
            QArrayData::deallocate(local_60,2,8);
          }
LAB_1004eed2f:
          if ((1 < *(uint *)local_58) || (*(long *)(local_58 + 0x10) != 0x18)) {
            QString::reallocData((uint)&local_58,(bool)((char)*(uint *)(local_58 + 4) + '\x01'));
          }
          uVar17 = (ulong)(int)*(uint *)(local_58 + 4);
          if ((uVar17 & 0x7fffffffffffffff) != 0) {
            pQVar25 = local_58 + *(long *)(local_58 + 0x10);
            pQVar1 = pQVar25 + uVar17 * 2;
            pQVar15 = local_58 + *(long *)(local_58 + 0x10) + uVar17 * 2;
            do {
              if (*(short *)pQVar25 == 0x2f) {
                pQVar25 = pQVar25 + 2;
              }
              else {
                pQVar23 = pQVar1;
                pQVar22 = pQVar25;
                if (pQVar25 != pQVar1) {
                  do {
                    pQVar22 = pQVar22 + 2;
                    pQVar23 = pQVar1;
                    if (pQVar15 == pQVar22) break;
                    pQVar23 = pQVar22;
                  } while (*(short *)pQVar22 != 0x2f);
                }
                if ((long)pQVar23 - (long)pQVar25 != 0) {
                  sVar11 = FUN_100541f30(*(short *)pQVar25);
                  *(short *)pQVar25 = sVar11;
                  pQVar10 = pQVar25 + 2;
                  pQVar22 = pQVar25;
                  while (pQVar9 = pQVar10, pQVar9 != pQVar23) {
                    sVar11 = FUN_100541f30(*(short *)(pQVar22 + 2));
                    *(short *)(pQVar22 + 2) = sVar11;
                    pQVar10 = pQVar22 + 4;
                    pQVar22 = pQVar9;
                  }
                  if (*(short *)(pQVar23 + -2) == 0x2e) {
                    if ((2 < (ulong)((long)pQVar23 - (long)pQVar25 >> 1)) ||
                       (sVar11 = *(short *)pQVar25, pQVar25 = pQVar23, sVar11 != 0x2e)) {
                      *(short *)(pQVar23 + -2) = -0xfd7;
                      pQVar25 = pQVar23;
                    }
                  }
                  else {
                    pQVar25 = pQVar23;
                    if (*(short *)(pQVar23 + -2) == 0x20) {
                      *(short *)(pQVar23 + -2) = -0xfd8;
                    }
                  }
                }
              }
            } while (pQVar25 != pQVar1);
          }
          if (*(char *)((long)param_1 + 0x14) != '\0') {
            QString::replace(&local_58,0x2f,0x5c,1);
          }
          pQVar25 = local_58;
          iVar3 = *(int *)(local_58 + 4);
          if (1 < *(int *)local_58 + 1U) {
            LOCK();
            *(int *)local_58 = *(int *)local_58 + 1;
            uStack_31 = *(int *)local_58 != 0;
            UNLOCK();
          }
          pppppplVar13 = operator_new(0x28);
          uVar14 = iVar3 * 2 + 0xfU & 0xfffffffc;
          *(int *)(pppppplVar13 + 2) = iVar12;
          pppppplVar13[3] = (long *****)pQVar25;
          if (1 < *(int *)pQVar25 + 1U) {
            LOCK();
            *(int *)pQVar25 = *(int *)pQVar25 + 1;
            uStack_31 = *(int *)pQVar25 != 0;
            UNLOCK();
          }
          *(uint *)(pppppplVar13 + 4) = uVar14;
          pppppplVar13[1] = (long *****)&local_50;
          *pppppplVar13 = local_50;
          local_50[1] = (long ****)pppppplVar13;
          local_40 = local_40 + 1;
          local_50 = (long *****)pppppplVar13;
          if (*(int *)pQVar25 != -1) {
            if (*(int *)pQVar25 != 0) {
              LOCK();
              *(int *)pQVar25 = *(int *)pQVar25 + -1;
              uStack_31 = *(int *)pQVar25 != 0;
              UNLOCK();
              if ((bool)uStack_31) goto LAB_1004eef69;
            }
            QArrayData::deallocate(pQVar25,2,8);
          }
LAB_1004eef69:
          lVar19 = (ulong)uVar14 + lVar19;
          if (*(int *)local_58 != -1) {
            if (*(int *)local_58 != 0) {
              LOCK();
              *(int *)local_58 = *(int *)local_58 + -1;
              uStack_31 = *(int *)local_58 != 0;
              UNLOCK();
              if ((bool)uStack_31) goto LAB_1004eefb0;
            }
            QArrayData::deallocate(local_58,2,8);
          }
        }
LAB_1004eefb0:
        local_98 = local_98 + -1;
        param_3 = param_3 + 0x18;
      } while (local_98 != 0);
    }
    local_98 = 0;
    if (uVar24 != 0) {
      QMutex::lock();
      local_98 = uVar21;
    }
    ppppplVar6 = local_50;
    *(undefined1 *)((long)param_1 + 0x39) = 0;
    if (lVar19 != 0) {
      if ((long ******)local_48 != &local_50) {
        pppppplVar13 = (long ******)(param_1 + 0xb);
        if (pppppplVar13 != &local_50) {
          lVar16 = 0;
          pppppplVar20 = (long ******)local_48;
          do {
            lVar16 = lVar16 + 1;
            pppppplVar20 = (long ******)pppppplVar20[1];
          } while (pppppplVar20 != &local_50);
          local_40 = local_40 - lVar16;
          param_1[0xd] = param_1[0xd] + lVar16;
        }
        ppppplVar4 = (long *****)*local_48;
        ppppplVar4[1] = local_50[1];
        *local_50[1] = (long ***)ppppplVar4;
        ppppplVar4 = *pppppplVar13;
        ppppplVar4[1] = (long ****)local_48;
        *local_48 = (long ****)ppppplVar4;
        *pppppplVar13 = ppppplVar6;
        ppppplVar6[1] = (long ****)pppppplVar13;
      }
      *(int *)((long)param_1 + 0x3c) = *(int *)((long)param_1 + 0x3c) + (int)lVar19;
    }
    lVar19 = param_1[10];
    if (lVar19 != 0) {
      do {
        if (param_1[0xd] == 0) break;
        plVar5 = (long *)param_1[9];
        local_70 = plVar5[2];
        local_68 = plVar5[3];
        lVar16 = *plVar5;
        *(long *)(lVar16 + 8) = plVar5[1];
        *(long *)plVar5[1] = lVar16;
        param_1[10] = lVar19 + -1;
        operator_delete(plVar5);
        local_78 = 0;
        local_88 = (long *****)&local_88;
        local_80 = (long *****)&local_88;
        lVar19 = FUN_1004ee820(param_1,&local_70,&local_88);
        if (lVar19 == 0) {
          FUN_1004ef7f0(param_1 + 0xb);
          *(undefined4 *)((long)param_1 + 0x3c) = 0;
          if ((local_98 & 1) != 0) {
            local_98 = 0;
            QMutex::unlock();
          }
          lVar19 = local_68;
          lVar16 = FUN_1002a6120(local_68,0,1);
          *(undefined4 *)(lVar16 + 0x10) = 0;
          FUN_1004c07d0(local_70,lVar19,0);
          local_68 = 0;
          FUN_1004ef7b0(param_1 + 3,param_1[4]);
          param_1[5] = 0;
          param_1[3] = param_1 + 4;
          param_1[4] = 0;
          if (local_78 == 0) goto LAB_1004ef3a5;
          ppppplVar6 = (long *****)*local_80;
          ppppplVar6[1] = local_88[1];
          *local_88[1] = (long ***)ppppplVar6;
          local_78 = 0;
          pppppplVar13 = (long ******)local_80;
          goto joined_r0x0001004ef5df;
        }
        if ((local_98 & 1) != 0) {
          local_98 = local_98 & 0xfffffffffffffffe;
          QMutex::unlock();
        }
        FUN_1004ee8e0(&local_70,&local_88);
        if ((local_98 != 0) && ((local_98 & 1) == 0)) {
          QMutex::lock();
          local_98 = local_98 | 1;
        }
        if (local_78 != 0) {
          ppppplVar6 = (long *****)*local_80;
          ppppplVar6[1] = local_88[1];
          *local_88[1] = (long ***)ppppplVar6;
          local_78 = 0;
          pppppplVar13 = (long ******)local_80;
          while (pppppplVar13 != &local_88) {
            pppppplVar20 = (long ******)pppppplVar13[1];
            pQVar25 = (QArrayData *)pppppplVar13[3];
            if (*(int *)pQVar25 != -1) {
              if (*(int *)pQVar25 != 0) {
                LOCK();
                *(int *)pQVar25 = *(int *)pQVar25 + -1;
                uStack_31 = *(int *)pQVar25 != 0;
                UNLOCK();
                if ((bool)uStack_31) goto LAB_1004ef160;
                pQVar25 = (QArrayData *)pppppplVar13[3];
              }
              QArrayData::deallocate(pQVar25,2,8);
            }
LAB_1004ef160:
            operator_delete(pppppplVar13);
            pppppplVar13 = pppppplVar20;
          }
        }
        lVar19 = param_1[10];
      } while (lVar19 != 0);
    }
    if ((ulong)param_1[1] < (ulong)*(uint *)((long)param_1 + 0x3c)) {
LAB_1004ef2ec:
      FUN_1004ef7f0(param_1 + 0xb);
      *(undefined4 *)((long)param_1 + 0x3c) = 0;
      lVar19 = param_1[10];
      if (lVar19 == 0) {
        *(undefined1 *)(param_1 + 7) = 1;
      }
      else {
        plVar5 = (long *)param_1[9];
        lVar16 = plVar5[2];
        lVar7 = plVar5[3];
        lVar8 = *plVar5;
        *(long *)(lVar8 + 8) = plVar5[1];
        *(long *)plVar5[1] = lVar8;
        param_1[10] = lVar19 + -1;
        operator_delete(plVar5);
        if ((local_98 & 1) != 0) {
          local_98 = 0;
          QMutex::unlock();
        }
        lVar19 = FUN_1002a6120(lVar7,0,1);
        *(undefined4 *)(lVar19 + 0x10) = 0;
        FUN_1004c07d0(lVar16,lVar7,0);
      }
      FUN_1004ef7b0(param_1 + 3,param_1[4]);
      param_1[5] = 0;
      param_1[3] = param_1 + 4;
      param_1[4] = 0;
    }
LAB_1004ef3a5:
    if (local_40 != 0) {
      ppppplVar6 = (long *****)*local_48;
      ppppplVar6[1] = local_50[1];
      *local_50[1] = (long ***)ppppplVar6;
      local_40 = 0;
      pppppplVar13 = (long ******)local_48;
      while (pppppplVar13 != &local_50) {
        pppppplVar20 = (long ******)pppppplVar13[1];
        pQVar25 = (QArrayData *)pppppplVar13[3];
        if (*(int *)pQVar25 != -1) {
          if (*(int *)pQVar25 != 0) {
            LOCK();
            *(int *)pQVar25 = *(int *)pQVar25 + -1;
            uStack_31 = *(int *)pQVar25 != 0;
            UNLOCK();
            if ((bool)uStack_31) goto LAB_1004ef3e0;
            pQVar25 = (QArrayData *)pppppplVar13[3];
          }
          QArrayData::deallocate(pQVar25,2,8);
        }
LAB_1004ef3e0:
        operator_delete(pppppplVar13);
        pppppplVar13 = pppppplVar20;
      }
    }
  }
  if ((local_98 & 1) != 0) {
    QMutex::unlock();
  }
  return;
joined_r0x0001004ef5df:
  if (pppppplVar13 == &local_88) goto LAB_1004ef3a5;
  pppppplVar20 = (long ******)pppppplVar13[1];
  pQVar25 = (QArrayData *)pppppplVar13[3];
  if (*(int *)pQVar25 != -1) {
    if (*(int *)pQVar25 != 0) {
      LOCK();
      *(int *)pQVar25 = *(int *)pQVar25 + -1;
      uStack_31 = *(int *)pQVar25 != 0;
      UNLOCK();
      if ((bool)uStack_31) goto LAB_1004ef627;
      pQVar25 = (QArrayData *)pppppplVar13[3];
    }
    QArrayData::deallocate(pQVar25,2,8);
  }
LAB_1004ef627:
  operator_delete(pppppplVar13);
  pppppplVar13 = pppppplVar20;
  goto joined_r0x0001004ef5df;
}

