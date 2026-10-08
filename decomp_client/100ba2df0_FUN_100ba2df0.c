
ulong FUN_100ba2df0(long *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  char *pcVar10;
  ulong uVar11;
  long lVar12;
  size_t sVar13;
  void *pvVar14;
  ulong uVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  void *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  char *local_88 [10];
  long local_38;
  
  lVar12 = *(long *)PTR____stack_chk_guard_1021e1840;
  uVar15 = 0xfffffffd;
  local_38 = lVar12;
  if (param_1 != (long *)0x0) {
    switch((int)param_1[2]) {
    case 0:
      if ((*param_1 == 0) || (param_1[1] == 0)) {
        uVar3 = FUN_100b9d470(0xfffffffd,0);
        uVar15 = (ulong)uVar3;
        if (uVar3 != 0) break;
      }
      *(undefined4 *)(param_1 + 2) = 1;
      uVar15 = 0;
      break;
    case 1:
      plVar5 = (long *)param_1[9];
      if (plVar5 == (long *)0x0) {
        puVar4 = (undefined8 *)FUN_100b93bf0();
        plVar5 = _malloc(0x18);
        if (plVar5 != (long *)0x0) {
          plVar5[2] = 0;
          plVar5[1] = 0;
          *plVar5 = 0;
          uVar17 = 0;
          uVar18 = 0;
          uVar6 = 0;
          if (puVar4 != (undefined8 *)0x0) {
            uVar17 = *puVar4;
            uVar18 = puVar4[1];
            uVar6 = puVar4[2];
          }
          lVar12 = param_1[1];
          uVar7 = FUN_100b93830();
          lVar12 = FUN_100b9fc70(lVar12,uVar17,uVar18,uVar6,uVar7);
          *plVar5 = lVar12;
          if (lVar12 != 0) {
            param_1[9] = (long)plVar5;
            *(undefined4 *)(param_1 + 2) = 1;
            lVar12 = *(long *)PTR____stack_chk_guard_1021e1840;
            goto LAB_100ba2f46;
          }
          _free(plVar5);
        }
        param_1[9] = 0;
        if (*(long *)PTR____stack_chk_guard_1021e1840 == local_38) {
          pcVar10 = "Can\'t allocate connection data";
          iVar2 = -2;
          goto LAB_100ba2e41;
        }
        goto LAB_100ba3772;
      }
LAB_100ba2f46:
      iVar2 = FUN_100b9fe20(*plVar5);
      plVar5 = (long *)param_1[9];
      piVar1 = (int *)*plVar5;
      if (*piVar1 == 8) {
        if ((*(byte *)((long)param_1 + 0x14) & 2) != 0) {
          if ((plVar5 == (long *)0x0) || (piVar1 == (int *)0x0)) {
            pcVar10 = (char *)0x0;
          }
          else {
            if (DAT_1023156e0 == '\0') {
              FUN_100c61fd0("string to make the random number generator think it has entropy",0x40);
              iVar2 = FUN_100bf0260();
              if (iVar2 == 0) {
                uVar3 = FUN_100b9d470(0xffffffff,"Unable initialize SSL library");
                uVar15 = (ulong)uVar3;
                if (uVar3 != 0) break;
              }
              else {
                DAT_1023156e0 = '\x01';
              }
            }
            uVar17 = FUN_100bd6040();
            lVar16 = FUN_100be5430(uVar17);
            plVar5[1] = lVar16;
            if (lVar16 == 0) {
              uVar15 = FUN_100c63310();
              if (((uVar15 & 0xfff000) == 0xa9000) && ((uVar15 & 0xfff) != 0x41)) {
                FUN_100c61fd0("string to make the random number generator think it has entropy",0x40
                             );
                iVar2 = FUN_100bf0260();
                if (iVar2 == 0) {
                  uVar3 = FUN_100b9d470(0xffffffff,"Unable initialize SSL library");
                  uVar15 = (ulong)uVar3;
                  if (uVar3 != 0) break;
                }
                else {
                  DAT_1023156e0 = '\x01';
                }
                uVar17 = FUN_100bd6040();
                lVar16 = FUN_100be5430(uVar17);
                plVar5[1] = lVar16;
              }
              else {
                lVar16 = plVar5[1];
              }
              if (lVar16 == 0) {
                pcVar10 = "Unable create SSL context";
                goto LAB_100ba371c;
              }
            }
            FUN_100be5a50(lVar16,1,FUN_100ba3790);
            FUN_100be4800(plVar5[1],0x20,0x4000,0);
            lVar16 = FUN_100bf0580(plVar5[1],1);
            if (lVar16 != 0) {
              uVar17 = FUN_100c591b0(lVar16,*(undefined8 *)(*plVar5 + 0xb0));
              *(undefined8 *)(*plVar5 + 0xb0) = uVar17;
              FUN_100c58d60(uVar17,0x6e,0,plVar5 + 2);
              FUN_100c58d60(*(undefined8 *)(*plVar5 + 0xb0),0x66,1,0);
              goto LAB_100ba3729;
            }
            FUN_100be37c0(plVar5[1]);
            plVar5[1] = 0;
            pcVar10 = "Unable allocate BIO SSL object";
          }
LAB_100ba371c:
          uVar3 = FUN_100b9d470(0xffffffff,pcVar10);
          uVar15 = (ulong)uVar3;
          if (uVar3 != 0) break;
        }
LAB_100ba3729:
        param_1[8] = 0;
        param_1[7] = 0;
        param_1[6] = 0;
        param_1[5] = 0;
        *(undefined4 *)(param_1 + 2) = 2;
        *(byte *)((long)param_1 + 0x14) = *(byte *)((long)param_1 + 0x14) | 1;
        uVar15 = 0;
      }
      else {
        uVar15 = 0;
        if (iVar2 != 0) {
          if (lVar12 == local_38) {
            pcVar10 = (char *)(piVar1 + 0x3e);
            goto LAB_100ba2e41;
          }
          goto LAB_100ba3772;
        }
      }
      break;
    case 2:
      plVar5 = param_1 + 5;
      lVar12 = param_1[5];
      if (lVar12 == 0) {
        local_98 = 0;
        uStack_90 = 0;
        local_a8 = (void *)0x0;
        uStack_a0 = 0;
        FUN_100ba5580(&local_a8,"<?xml version=\"1.0\"?>\r\n");
        FUN_100ba5580(&local_a8,"<methodCall>\r\n<methodName>");
        ___snprintf_chk(local_88,0x50,0,0x50,"%s",*param_1);
        FUN_100ba5580(&local_a8,local_88);
        FUN_100ba5580(&local_a8,"</methodName><params>\r\n");
        lVar12 = FUN_100ba3cf0(param_1[3],0);
        if (lVar12 != 0) {
          iVar2 = 1;
          do {
            FUN_100ba5580(&local_a8,"<param>");
            FUN_100ba55b0(lVar12,&local_a8);
            FUN_100ba5580(&local_a8,"</param>\r\n");
            lVar12 = FUN_100ba3cf0(param_1[3],iVar2);
            iVar2 = iVar2 + 1;
          } while (lVar12 != 0);
        }
        FUN_100ba5580(&local_a8,"</params></methodCall>\r\n");
        if ((int)uStack_90 == 0) {
          pcVar10 = (char *)param_1[1];
          sVar13 = _strlen(pcVar10);
          pvVar14 = _malloc(sVar13 + 0x84);
          if (pvVar14 == (void *)0x0) {
LAB_100ba33df:
            uVar3 = FUN_100b9d470(0xfffffffe,0);
            uVar15 = (ulong)uVar3;
          }
          else {
            uVar15 = 0;
            ___snprintf_chk(pvVar14,sVar13 + 0x84,0,0xffffffffffffffff,
                            "POST / HTTP/1.0\r\nUser-Agent: vzlic_manager\r\nHost: %s\r\nContent-type: text/xml\r\nContent-length: %d\r\n\r\n"
                            ,pcVar10,(int)uStack_a0 - (int)local_a8);
            FUN_100ba5580(plVar5,pvVar14);
            _free(pvVar14);
            FUN_100ba5380(plVar5,local_a8,(int)uStack_a0 - (int)local_a8);
            if ((int)param_1[8] != 0) goto LAB_100ba33df;
          }
          _free(local_a8);
        }
        else {
          if (local_a8 != (void *)0x0) {
            _free(local_a8);
          }
          uVar3 = FUN_100b9d470(0xfffffffe,0);
          uVar15 = (ulong)uVar3;
        }
        lVar12 = *(long *)PTR____stack_chk_guard_1021e1840;
        if ((int)uVar15 != 0) break;
        lVar12 = param_1[5];
        lVar16 = param_1[6] - lVar12;
        param_1[7] = lVar16;
        param_1[6] = lVar12;
        lVar8 = lVar12;
      }
      else {
        lVar16 = param_1[7];
        lVar8 = param_1[6];
      }
      iVar2 = FUN_100c58980(*(undefined8 *)(*(long *)param_1[9] + 0xb0),lVar8,
                            ((int)lVar12 + (int)lVar16) - (int)lVar8);
      if (iVar2 < 1) {
        iVar2 = FUN_100c58820(*(undefined8 *)(*(long *)param_1[9] + 0xb0),8);
        uVar15 = 0;
        lVar12 = *(long *)PTR____stack_chk_guard_1021e1840;
        if (iVar2 == 0) {
          pcVar10 = "Can\'t send data to remote host";
          uVar17 = 0xfffffff2;
          goto LAB_100ba3502;
        }
      }
      else {
        uVar15 = 0;
        FUN_100c58d60(*(undefined8 *)(*(long *)param_1[9] + 0xb0),0xb,0,0);
        lVar12 = (long)iVar2 + param_1[6];
        param_1[6] = lVar12;
        if (lVar12 - *plVar5 == param_1[7]) {
          *(undefined4 *)(param_1 + 2) = 3;
          _free((void *)*plVar5);
          param_1[8] = 0;
          param_1[7] = 0;
          param_1[6] = 0;
          *plVar5 = 0;
          FUN_100ba3950(param_1[3]);
          param_1[3] = 0;
        }
        lVar12 = *(long *)PTR____stack_chk_guard_1021e1840;
      }
      break;
    case 3:
      lVar16 = param_1[6];
      lVar8 = (param_1[5] - lVar16) + param_1[7];
      if (lVar8 == 0) {
        uVar3 = FUN_100ba54b0(param_1 + 5,0x2000);
        uVar15 = (ulong)uVar3;
        if (uVar3 != 0) break;
        lVar16 = param_1[6];
        lVar8 = (param_1[7] - lVar16) + param_1[5];
      }
      iVar2 = FUN_100c588a0(*(undefined8 *)(*(long *)param_1[9] + 0xb0),lVar16,lVar8);
      if (iVar2 == 0) {
        *(undefined4 *)(param_1 + 2) = 4;
        uVar15 = 0;
      }
      else if (iVar2 < 0) {
        iVar2 = FUN_100c58820(*(undefined8 *)(*(long *)param_1[9] + 0xb0),8);
        uVar15 = 0;
        if (iVar2 == 0) {
          if (lVar12 == local_38) {
            pcVar10 = "Can\'t read data from remote host";
            iVar2 = -0xe;
LAB_100ba2e41:
            uVar15 = FUN_100b9d470(iVar2,pcVar10);
            return uVar15;
          }
          goto LAB_100ba3772;
        }
      }
      else {
        param_1[6] = param_1[6] + (long)iVar2;
        uVar15 = 0;
      }
      break;
    case 4:
      iVar2 = FUN_100be45a0(*(undefined8 *)(param_1[9] + 0x10));
      uVar15 = 0;
      if ((iVar2 != 0) &&
         ((-1 < iVar2 ||
          (uVar3 = FUN_100be64d0(*(undefined8 *)(param_1[9] + 0x10),iVar2),
          (uVar3 & 0xfffffffe) != 2)))) {
        *(undefined4 *)(param_1 + 2) = 5;
      }
      break;
    case 5:
      lVar16 = param_1[6] - param_1[5];
      if (lVar16 == 0) {
        pcVar10 = "Connection closed by server";
LAB_100ba32f7:
        uVar17 = 0xfffffff6;
LAB_100ba3502:
        uVar3 = FUN_100b9d470(uVar17,pcVar10);
        uVar15 = (ulong)uVar3;
      }
      else {
        lVar8 = FUN_100ba2960(param_1[5],"<?xml",lVar16);
        if ((lVar8 == 0) || (lVar9 = FUN_100b9f630(param_1[5],lVar8 - param_1[5]), lVar9 == 0)) {
          uVar3 = FUN_100b9d470(0xfffffff6,"%s","Bad server response");
          uVar15 = (ulong)uVar3;
        }
        else if (*(int *)(lVar9 + 0x58) == 200) {
          pcVar10 = (char *)FUN_100b9faa0(lVar9,"Content-Length");
          if (pcVar10 == (char *)0x0) {
            FUN_100b9fa30(lVar9);
            pcVar10 = "Bad Content-Length in response";
            goto LAB_100ba32f7;
          }
          uVar11 = _strtoul(pcVar10,local_88,10);
          uVar15 = (param_1[5] - lVar8) + lVar16;
          if (uVar11 <= uVar15) {
            uVar15 = uVar11;
          }
          FUN_100b9fa30(lVar9);
          lVar12 = FUN_100ba4430(lVar8,uVar15,&local_a8);
          param_1[4] = lVar12;
          if (lVar12 == 0) {
            uVar3 = FUN_100b9d470(0xfffffff6,"Can\'t parse XML data returned by server");
            uVar15 = (ulong)uVar3;
            lVar12 = *(long *)PTR____stack_chk_guard_1021e1840;
          }
          else {
            param_1[7] = 0;
            _free((void *)param_1[5]);
            param_1[5] = 0;
            lVar12 = *(long *)PTR____stack_chk_guard_1021e1840;
            if ((int)local_a8 != 0) {
              *(byte *)((long)param_1 + 0x14) = *(byte *)((long)param_1 + 0x14) | 4;
            }
            *(undefined4 *)(param_1 + 2) = 6;
            uVar15 = 0;
          }
        }
        else {
          FUN_100b9fa30(lVar9);
          uVar3 = FUN_100b9d470(0xfffffff6,"Server return HTTP response with code %d",
                                *(undefined4 *)(lVar9 + 0x58));
          uVar15 = (ulong)uVar3;
        }
      }
      break;
    default:
      iVar2 = -1;
      pcVar10 = (char *)0x0;
      goto LAB_100ba2e41;
    }
  }
  if (lVar12 == local_38) {
    return uVar15;
  }
LAB_100ba3772:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

