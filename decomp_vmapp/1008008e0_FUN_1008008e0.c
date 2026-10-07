
int FUN_1008008e0(int *param_1)

{
  char cVar1;
  byte *pbVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  ulong uVar10;
  long lVar11;
  time_t tVar12;
  byte *pbVar13;
  undefined4 *puVar14;
  long lVar15;
  code *pcVar16;
  byte bVar17;
  uint uVar18;
  undefined8 uVar19;
  uint uVar20;
  undefined8 uVar21;
  byte bVar22;
  uint uVar23;
  code *pcVar24;
  long local_70;
  time_t local_48;
  undefined4 local_40;
  undefined2 local_3c;
  char local_3a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_48 = _time((time_t *)0x0);
  FUN_100886e60(0,&local_48,8);
  FUN_100888070();
  piVar9 = ___error();
  *piVar9 = 0;
  pcVar24 = *(code **)(param_1 + 0x54);
  if (pcVar24 == (code *)0x0) {
    pcVar24 = *(code **)(*(long *)(param_1 + 0x5c) + 0x108);
  }
  param_1[0xb] = param_1[0xb] + 1;
  uVar10 = FUN_10080ee80(param_1);
  if (((uVar10 & 0x3000) == 0) || (uVar10 = FUN_10080ee80(param_1), (uVar10 & 0x4000) != 0)) {
    FUN_10080d4e0(param_1);
  }
  do {
    iVar4 = param_1[0x12];
LAB_100800998:
    iVar8 = iVar4;
    if (iVar8 < 0x4000) {
      if (iVar8 < 0x1210) {
        if ((iVar8 == 0x1000) || (iVar8 == 0x1003)) goto LAB_1008009e6;
LAB_100801112:
        uVar19 = 0xff;
        uVar21 = 0xeb;
LAB_10080112e:
        FUN_100887ce0(0x14,0x75,uVar19,"s23_clnt.c",uVar21);
        iVar4 = -1;
        param_1[0xb] = param_1[0xb] + -1;
        goto LAB_1008012de;
      }
      if (1 < iVar8 - 0x1210U) {
        if (1 < iVar8 - 0x1220U) goto LAB_100801112;
        iVar4 = FUN_1008018e0(param_1,7);
        if (iVar4 != 7) goto LAB_1008012d1;
        pcVar3 = *(char **)(param_1 + 0x1a);
        local_3a = pcVar3[6];
        local_3c = *(undefined2 *)(pcVar3 + 4);
        local_40 = *(undefined4 *)pcVar3;
        cVar1 = *pcVar3;
        if ((((cVar1 < '\0') && (pcVar3[2] == '\x04')) && (pcVar3[5] == '\0')) &&
           (pcVar3[6] == '\x02')) {
          iVar4 = 0x102;
          uVar19 = 0x272;
LAB_1008012c6:
          FUN_100887ce0(0x14,0x77,iVar4,"s23_clnt.c",uVar19);
          iVar4 = -1;
        }
        else {
          if ((pcVar3[1] != '\x03') || (bVar22 = pcVar3[2], 3 < bVar22)) {
LAB_1008012aa:
            iVar4 = 0xfc;
            uVar19 = 0x30e;
            goto LAB_1008012c6;
          }
          if (cVar1 != '\x15') {
            if (cVar1 == '\x16') {
              cVar1 = pcVar3[5];
              goto LAB_100801271;
            }
            goto LAB_1008012aa;
          }
          if (pcVar3[3] != '\0') goto LAB_1008012aa;
          cVar1 = pcVar3[4];
LAB_100801271:
          if (cVar1 != '\x02') goto LAB_1008012aa;
          if (bVar22 == 2) {
            if ((*(byte *)((long)param_1 + 0x1ab) & 0x10) != 0) goto LAB_100801469;
            *param_1 = 0x302;
            uVar19 = FUN_100801a50();
          }
          else if (bVar22 == 1) {
            if ((*(byte *)((long)param_1 + 0x1ab) & 4) != 0) goto LAB_100801469;
            *param_1 = 0x301;
            uVar19 = FUN_100801a60();
          }
          else if (bVar22 == 0) {
            if ((*(byte *)((long)param_1 + 0x1ab) & 2) != 0) {
LAB_100801469:
              iVar4 = 0x102;
              uVar19 = 0x2d6;
              goto LAB_1008012c6;
            }
            *param_1 = 0x300;
            uVar19 = FUN_1007f1db0();
          }
          else {
            if ((*(byte *)((long)param_1 + 0x1ab) & 8) != 0) goto LAB_100801469;
            *param_1 = 0x303;
            uVar19 = FUN_100801a10();
          }
          *(undefined8 *)(param_1 + 2) = uVar19;
          iVar4 = *param_1;
          **(int **)(param_1 + 0x4c) = iVar4;
          if (0x303 < iVar4) {
            FUN_10081d560("s23_clnt.c",0x2dd,"s->version <= TLS_MAX_VERSION");
          }
          if ((*pcVar3 == '\x15') && (pcVar3[5] != '\x01')) {
            pcVar16 = *(code **)(param_1 + 0x54);
            if ((pcVar16 != (code *)0x0) ||
               (pcVar16 = *(code **)(*(long *)(param_1 + 0x5c) + 0x108), pcVar16 != (code *)0x0)) {
              (*pcVar16)(param_1,0x4004,CONCAT11(pcVar3[5],pcVar3[6]));
            }
            if (*(code **)(param_1 + 0x26) != (code *)0x0) {
              (**(code **)(param_1 + 0x26))
                        (0,*param_1,0x15,pcVar3 + 5,2,param_1,*(undefined8 *)(param_1 + 0x28));
            }
            param_1[10] = 1;
            iVar4 = (byte)pcVar3[6] + 1000;
            uVar19 = 0x2f5;
            goto LAB_1008012c6;
          }
          iVar8 = FUN_100811450(param_1,1);
          iVar4 = -1;
          if (iVar8 != 0) {
            param_1[0x12] = 0x1120;
            param_1[0x13] = 0xf0;
            param_1[0x1c] = 7;
            puVar14 = *(undefined4 **)(*(long *)(param_1 + 0x20) + 0xf0);
            if (puVar14 == (undefined4 *)0x0) {
              iVar8 = FUN_1007fe5e0(param_1);
              if (iVar8 == 0) goto LAB_1008012d1;
              puVar14 = *(undefined4 **)(*(long *)(param_1 + 0x20) + 0xf0);
            }
            *(undefined4 **)(param_1 + 0x1a) = puVar14;
            *(char *)((long)puVar14 + 6) = local_3a;
            *(undefined2 *)(puVar14 + 1) = local_3c;
            *puVar14 = local_40;
            lVar11 = *(long *)(param_1 + 0x20);
            *(undefined4 *)(lVar11 + 0x104) = 7;
            *(undefined4 *)(lVar11 + 0x100) = 0;
            *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(*(long *)(param_1 + 2) + 0x28);
            param_1[0x18] = 0;
            iVar4 = FUN_10080ec10(param_1);
          }
        }
LAB_1008012d1:
        if (-1 < iVar4) {
          pcVar24 = (code *)0x0;
        }
        goto LAB_1008012da;
      }
      param_1[0x11] = 0;
      uVar10 = *(ulong *)(param_1 + 0x6a);
      uVar23 = ~((uint)(uVar10 >> 0x18) & 0xff) & 1;
      uVar20 = 0;
      if (uVar23 != 0) {
        uVar19 = FUN_10080f360(param_1);
        iVar4 = FUN_100885600(uVar19);
        iVar5 = 0;
        if (iVar4 < 1) {
          uVar20 = 0;
        }
        else {
          do {
            lVar11 = FUN_100885620(uVar19,iVar5);
            uVar20 = uVar23;
            if (*(long *)(lVar11 + 0x38) == 1) goto LAB_100800b20;
            iVar5 = iVar5 + 1;
            iVar4 = FUN_100885600(uVar19);
          } while (iVar5 < iVar4);
          uVar20 = 0;
        }
      }
LAB_100800b20:
      uVar23 = (uVar10 & 0x16000000) == 0x16000000 | 0x302;
      if ((uVar10 & 0x8000000) == 0) {
        uVar23 = 0x303;
      }
      uVar18 = 0x301;
      if ((uVar10 & 0x6000000) == 0x6000000) {
        uVar18 = uVar23;
      }
      if ((uVar10 & 0x10000000) == 0) {
        uVar18 = uVar23;
      }
      if ((uVar10 & 0x6000000) == 0x4000000) {
        uVar18 = 0x300;
      }
      if (param_1[0x7b] != -1) {
        uVar20 = 0;
      }
      if (*(long *)(param_1 + 0x78) != 0) {
        uVar20 = 0;
      }
      if (param_1[0x12] == 0x1210) {
        pbVar2 = *(byte **)(*(long *)(param_1 + 0x14) + 8);
        iVar5 = FUN_1008134d0(param_1,0);
        iVar4 = -1;
        if (iVar5 == 0) {
          param_1[0xb] = param_1[0xb] + -1;
          goto LAB_1008012de;
        }
        lVar11 = *(long *)(param_1 + 0x20);
        if ((*(byte *)(param_1 + 0x6c) & 0x20) == 0) {
          lVar11 = lVar11 + 0xc4;
          uVar19 = 0x20;
        }
        else {
          tVar12 = _time((time_t *)0x0);
          *(char *)(lVar11 + 0xc4) = (char)((ulong)tVar12 >> 0x18);
          *(char *)(lVar11 + 0xc5) = (char)((ulong)tVar12 >> 0x10);
          *(char *)(lVar11 + 0xc6) = (char)((ulong)tVar12 >> 8);
          *(char *)(lVar11 + 199) = (char)tVar12;
          lVar11 = lVar11 + 200;
          uVar19 = 0x1c;
        }
        iVar5 = FUN_100886f90(lVar11,uVar19);
        if (iVar5 < 1) {
          param_1[0xb] = param_1[0xb] + -1;
          goto LAB_1008012de;
        }
        param_1[0x71] = uVar18;
        bVar22 = (byte)uVar18;
        if (uVar20 == 0) {
          pbVar2[9] = 3;
          pbVar2[10] = bVar22;
          lVar11 = *(long *)(param_1 + 0x20);
          *(undefined8 *)(pbVar2 + 0x23) = *(undefined8 *)(lVar11 + 0xdc);
          *(undefined8 *)(pbVar2 + 0x1b) = *(undefined8 *)(lVar11 + 0xd4);
          uVar19 = *(undefined8 *)(lVar11 + 0xc4);
          *(undefined8 *)(pbVar2 + 0x13) = *(undefined8 *)(lVar11 + 0xcc);
          *(undefined8 *)(pbVar2 + 0xb) = uVar19;
          pbVar2[0x2b] = 0;
          uVar19 = FUN_10080f360(param_1);
          iVar5 = FUN_10080f610(param_1,uVar19,pbVar2 + 0x2e,FUN_1007f8b30);
          if (iVar5 == 0) {
            uVar19 = 0xb5;
            uVar21 = 0x1f6;
          }
          else {
            pbVar2[0x2c] = (byte)((uint)iVar5 >> 8);
            pbVar2[0x2d] = (byte)iVar5;
            lVar11 = (long)iVar5;
            if (((*(byte *)((long)param_1 + 0x1aa) & 2) == 0) &&
               (*(long *)(*(long *)(param_1 + 0x5c) + 0x100) != 0)) {
              iVar5 = FUN_100885600();
              pbVar2[lVar11 + 0x2e] = (char)iVar5 + 1;
              if (iVar5 < 1) {
                pbVar13 = pbVar2 + lVar11 + 0x2f;
                local_70 = lVar11 + 0x2f;
              }
              else {
                uVar10 = 0;
                do {
                  pbVar13 = (byte *)FUN_100885620(*(undefined8 *)(*(long *)(param_1 + 0x5c) + 0x100)
                                                  ,uVar10 & 0xffffffff);
                  pbVar2[uVar10 + lVar11 + 0x2f] = *pbVar13;
                  uVar10 = uVar10 + 1;
                } while (iVar5 != (int)uVar10);
                local_70 = lVar11 + 0x30 + (ulong)(iVar5 - 1);
                pbVar13 = pbVar2 + local_70;
              }
            }
            else {
              local_70 = lVar11 + 0x2f;
              pbVar13 = pbVar2 + lVar11 + 0x2f;
              pbVar2[lVar11 + 0x2e] = 1;
            }
            *pbVar13 = 0;
            iVar5 = FUN_100803ed0(param_1);
            if (iVar5 < 1) {
              uVar19 = 0xe2;
              uVar21 = 0x21a;
            }
            else {
              lVar11 = FUN_100801cd0(param_1,pbVar2 + local_70 + 1,pbVar2 + 0x4000);
              if (lVar11 != 0) {
                lVar15 = lVar11 - (long)(pbVar2 + 9);
                pbVar2[5] = 1;
                pbVar2[6] = (byte)((ulong)lVar15 >> 0x10);
                pbVar2[7] = (byte)((ulong)lVar15 >> 8);
                pbVar2[8] = (byte)lVar15;
                uVar10 = lVar15 + 4;
                if (0x4000 < uVar10) {
                  FUN_100887ce0(0x14,0x74,0x44,"s23_clnt.c",0x231);
                  param_1[0xb] = param_1[0xb] + -1;
                  goto LAB_1008012de;
                }
                pbVar2[0] = 0x16;
                pbVar2[1] = 3;
                bVar17 = 1;
                if ((param_1[0x71] & 0xffffff00U) != 0x300) {
                  bVar17 = bVar22;
                }
                if (param_1[0x71] < 0x302) {
                  bVar17 = bVar22;
                }
                pbVar2[2] = bVar17;
                pbVar2[3] = (byte)(uVar10 >> 8);
                pbVar2[4] = (byte)uVar10;
                iVar4 = (int)lVar11 - (int)pbVar2;
                param_1[0x18] = iVar4;
                param_1[0x19] = 0;
                FUN_1007fa5f0(param_1,pbVar2 + 5,iVar4 + -5);
                goto LAB_100800f81;
              }
              uVar19 = 0x44;
              uVar21 = 0x222;
            }
          }
        }
        else {
          pbVar2[2] = 1;
          pbVar2[3] = 3;
          pbVar2[4] = bVar22;
          uVar19 = FUN_10080f360(param_1);
          iVar5 = FUN_10080f610(param_1,uVar19,pbVar2 + 0xb,0);
          if (iVar5 != 0) {
            pbVar2[5] = (byte)((uint)iVar5 >> 8);
            pbVar2[6] = (byte)iVar5;
            pbVar2[7] = 0;
            pbVar2[8] = 0;
            uVar6 = ~(param_1[0x6a] << 3) & 0x10;
            uVar23 = uVar6 + 0x10;
            pbVar2[9] = 0;
            pbVar2[10] = (byte)uVar23;
            lVar11 = *(long *)(param_1 + 0x20);
            *(undefined8 *)(lVar11 + 0xdc) = 0;
            *(undefined8 *)(lVar11 + 0xd4) = 0;
            *(undefined8 *)(lVar11 + 0xcc) = 0;
            *(undefined8 *)(lVar11 + 0xc4) = 0;
            uVar10 = (ulong)(0x10 - uVar6);
            iVar7 = FUN_100886f90(*(long *)(param_1 + 0x20) + 0xc4 + uVar10,uVar23);
            if (iVar7 < 1) {
              param_1[0xb] = param_1[0xb] + -1;
              goto LAB_1008012de;
            }
            _memcpy(pbVar2 + (long)iVar5 + 0xb,(void *)(*(long *)(param_1 + 0x20) + 0xc4 + uVar10),
                    (ulong)uVar23);
            lVar11 = (long)iVar5 + (ulong)uVar23;
            uVar10 = lVar11 + 0x100000009;
            *pbVar2 = (byte)(uVar10 >> 8) | 0x80;
            pbVar2[1] = (byte)uVar10;
            param_1[0x18] = (int)lVar11 + 0xb;
            param_1[0x19] = 0;
            FUN_1007fa5f0(param_1,pbVar2 + 2,uVar10 & 0xffffffff);
LAB_100800f81:
            param_1[0x12] = 0x1211;
            param_1[0x19] = 0;
            goto LAB_100800f91;
          }
          uVar19 = 0xb5;
          uVar21 = 0x1b2;
        }
        FUN_100887ce0(0x14,0x74,uVar19,"s23_clnt.c",uVar21);
        param_1[0xb] = param_1[0xb] + -1;
        goto LAB_1008012de;
      }
LAB_100800f91:
      iVar4 = FUN_100801840(param_1);
      if (iVar4 < 2) {
        if (iVar4 < 1) goto LAB_1008012da;
      }
      else if (*(code **)(param_1 + 0x26) != (code *)0x0) {
        if (uVar20 == 0) {
          lVar11 = *(long *)(*(long *)(param_1 + 0x14) + 8) + 5;
          iVar4 = iVar4 + -5;
          uVar19 = 0x16;
        }
        else {
          lVar11 = *(long *)(*(long *)(param_1 + 0x14) + 8) + 2;
          iVar4 = iVar4 + -2;
          uVar18 = 2;
          uVar19 = 0;
        }
        (**(code **)(param_1 + 0x26))
                  (1,uVar18,uVar19,lVar11,(long)iVar4,param_1,*(undefined8 *)(param_1 + 0x28));
      }
      param_1[0x12] = 0x1220;
    }
    else {
      if ((iVar8 != 0x4000) && (iVar8 != 0x5000)) goto LAB_100801112;
LAB_1008009e6:
      if (*(long *)(param_1 + 0x4c) != 0) {
        uVar19 = 0xdd;
        uVar21 = 0xb2;
        goto LAB_10080112e;
      }
      param_1[0xe] = 0;
      if (pcVar24 != (code *)0x0) {
        (*pcVar24)(param_1,0x10,1);
      }
      param_1[1] = 0x1000;
      if (*(long *)(param_1 + 0x14) == 0) {
        lVar11 = FUN_10087ccc0();
        iVar4 = -1;
        if (lVar11 == 0) goto LAB_1008012da;
        iVar4 = FUN_10087cd60(lVar11);
        if (iVar4 == 0) {
          param_1[0xb] = param_1[0xb] + -1;
          FUN_10087cd20(lVar11);
          iVar4 = -1;
          goto LAB_1008012de;
        }
        *(long *)(param_1 + 0x14) = lVar11;
      }
      iVar5 = FUN_1007fe8e0(param_1);
      iVar4 = -1;
      if (iVar5 == 0) {
LAB_1008012da:
        param_1[0xb] = param_1[0xb] + -1;
LAB_1008012de:
        if (pcVar24 != (code *)0x0) {
          (*pcVar24)(param_1,0x1002,iVar4);
        }
        if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
          ___stack_chk_fail();
        }
        return iVar4;
      }
      FUN_1007fa490(param_1);
      param_1[0x12] = 0x1210;
      *(int *)(*(long *)(param_1 + 0x5c) + 0x68) = *(int *)(*(long *)(param_1 + 0x5c) + 0x68) + 1;
    }
    param_1[0x18] = 0;
    if (param_1[0x5e] != 0) {
      FUN_10087db60(*(undefined8 *)(param_1 + 6),0xb,0,0);
    }
  } while (pcVar24 == (code *)0x0);
  iVar4 = param_1[0x12];
  if (iVar4 != iVar8) {
    param_1[0x12] = iVar8;
    (*pcVar24)(param_1,0x1001,1);
    param_1[0x12] = iVar4;
  }
  goto LAB_100800998;
}

