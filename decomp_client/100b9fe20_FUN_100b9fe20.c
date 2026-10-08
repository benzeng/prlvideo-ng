
int FUN_100b9fe20(int *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  void *pvVar5;
  long lVar6;
  int *piVar7;
  char *pcVar8;
  char *pcVar9;
  ulong uVar10;
  long lVar11;
  size_t sVar12;
  long *plVar13;
  char *pcVar14;
  int *piVar15;
  char *local_60;
  code *local_50;
  char *local_38;
  
  iVar2 = -3;
  if (param_1 == (int *)0x0) {
    return -3;
  }
  switch(*param_1) {
  case 1:
  case 2:
    lVar6 = *(long *)(param_1 + 0x2c);
    if (lVar6 == 0) {
      lVar6 = *(long *)(param_1 + 2);
      if (lVar6 == 0) {
        lVar6 = *(long *)(param_1 + 0x26);
      }
      lVar6 = FUN_100c5a950(lVar6);
      *(long *)(param_1 + 0x2c) = lVar6;
      if (lVar6 == 0) {
        return -2;
      }
    }
    FUN_100c58d60(lVar6,0x66,1,0);
    if (*param_1 == 1) {
      *param_1 = 2;
    }
    iVar2 = FUN_100c58d60(*(undefined8 *)(param_1 + 0x2c),0x65,0,0);
    if (0 < iVar2) {
      iVar2 = 8;
      if (*(long *)(param_1 + 2) != 0) {
        iVar2 = 3;
      }
      *param_1 = iVar2;
      return 0;
    }
    iVar2 = FUN_100c58820(*(undefined8 *)(param_1 + 0x2c),8);
    if (iVar2 != 0) {
      return 0;
    }
    lVar6 = *(long *)(param_1 + 2);
    if (lVar6 == 0) {
      lVar6 = *(long *)(param_1 + 0x26);
      pcVar14 = "Can\'t connect to server %s";
    }
    else {
      pcVar14 = "Can\'t find proxy server %s";
    }
    FUN_100ba0740(param_1,pcVar14,lVar6);
    goto LAB_100ba043a;
  case 3:
    piVar7 = param_1 + 0x2e;
    iVar4 = FUN_100ba0810(piVar7,"CONNECT %s HTTP/1.0\r\n",*(undefined8 *)(param_1 + 0x26));
    iVar2 = -2;
    if (((((0 < iVar4) &&
          (iVar4 = FUN_100ba0810(piVar7,"User-Agent: %s\r\n","vzlic_manager"), 0 < iVar4)) &&
         (iVar4 = FUN_100ba0810(piVar7,"Proxy-Connection: Keep-Alive\r\n"), 0 < iVar4)) &&
        ((iVar4 = FUN_100ba0810(piVar7,"Host: %s\r\n",*(undefined8 *)(param_1 + 2)), 0 < iVar4 &&
         ((*(long *)(param_1 + 4) == 0 ||
          (iVar4 = FUN_100ba0810(piVar7,"Proxy-Authorization: %s %s\r\n",
                                 *(undefined8 *)(param_1 + 0x2a)), 0 < iVar4)))))) &&
       (iVar4 = FUN_100ba0810(piVar7,"\r\n"), 0 < iVar4)) {
      *param_1 = 4;
      param_1[0x34] = 0;
      param_1[0x35] = 0;
      iVar2 = 0;
    }
    break;
  case 4:
    iVar4 = FUN_100c58980(*(undefined8 *)(param_1 + 0x2c),
                          *(long *)(param_1 + 0x2e) + *(long *)(param_1 + 0x34),
                          param_1[0x30] - (int)*(long *)(param_1 + 0x34));
    if (iVar4 < 1) {
      iVar4 = FUN_100c58820(*(undefined8 *)(param_1 + 0x2c),8);
      iVar2 = 0;
      if (iVar4 == 0) {
        *param_1 = -1;
        FUN_100ba0740(param_1,"Can\'t send data to HTTP proxy");
        param_1[1] = -0xe;
        iVar2 = -0xe;
      }
    }
    else {
      lVar6 = *(long *)(param_1 + 0x34);
      *(long *)(param_1 + 0x34) = iVar4 + lVar6;
      iVar2 = 0;
      if (iVar4 + lVar6 == *(long *)(param_1 + 0x30)) {
        piVar7 = param_1 + 0x2e;
        FUN_100c58d60(*(undefined8 *)(param_1 + 0x2c),0xb,0,0);
        *param_1 = 5;
        param_1[0x28] = 0;
        param_1[0x29] = 0;
        piVar15 = param_1 + 0x36;
        if (*(void **)(param_1 + 0x36) != (void *)0x0) {
          _free(*(void **)(param_1 + 0x36));
          param_1[0x3a] = 0;
          param_1[0x3b] = 0;
          param_1[0x38] = 0;
          param_1[0x39] = 0;
          piVar15[0] = 0;
          piVar15[1] = 0;
        }
        param_1[0x3a] = 0;
        param_1[0x3b] = 0;
        param_1[0x38] = 0;
        param_1[0x39] = 0;
        piVar15[0] = 0;
        piVar15[1] = 0;
        if (*(void **)piVar7 != (void *)0x0) {
          _free(*(void **)piVar7);
          param_1[0x32] = 0;
          param_1[0x33] = 0;
          param_1[0x30] = 0;
          param_1[0x31] = 0;
          piVar7[0] = 0;
          piVar7[1] = 0;
        }
        param_1[0x32] = 0;
        param_1[0x33] = 0;
        param_1[0x30] = 0;
        param_1[0x31] = 0;
        piVar7[0] = 0;
        piVar7[1] = 0;
        iVar2 = 0;
      }
    }
    break;
  case 5:
    lVar6 = *(long *)(param_1 + 0x38);
    uVar10 = *(ulong *)(param_1 + 0x3a);
    if (uVar10 - lVar6 < 2) {
      piVar7 = param_1 + 0x36;
      sVar12 = uVar10 + 0x1000;
      if (sVar12 == 0) {
        if ((uVar10 != 0) && (*(void **)piVar7 != (void *)0x0)) {
          _free(*(void **)piVar7);
        }
        param_1[0x3a] = 0;
        param_1[0x3b] = 0;
        param_1[0x38] = 0;
        param_1[0x39] = 0;
        piVar7[0] = 0;
        piVar7[1] = 0;
        uVar10 = 0;
        lVar6 = 0;
      }
      else if (uVar10 < 0xfffffffffffff000) {
        pvVar5 = _realloc(*(void **)piVar7,sVar12);
        if (pvVar5 == (void *)0x0) {
          piVar7 = ___error();
          *piVar7 = 0xc;
          return -2;
        }
        *(void **)(param_1 + 0x36) = pvVar5;
        *(size_t *)(param_1 + 0x3a) = sVar12;
        lVar6 = *(long *)(param_1 + 0x38);
        uVar10 = sVar12;
      }
    }
    iVar2 = FUN_100c588a0(*(undefined8 *)(param_1 + 0x2c),*(long *)(param_1 + 0x36) + lVar6,
                          ((int)uVar10 - (int)lVar6) + -1);
    if (iVar2 == 0) {
      FUN_100ba0740(param_1,"Connection closed by HTTP proxy");
      param_1[0] = -1;
      param_1[1] = -0xf;
      return -0xf;
    }
    if (-1 < iVar2) {
      lVar6 = *(long *)(param_1 + 0x38);
      *(long *)(param_1 + 0x38) = iVar2 + lVar6;
      *(undefined1 *)(*(long *)(param_1 + 0x36) + iVar2 + lVar6) = 0;
      pcVar14 = *(char **)(param_1 + 0x28);
      if (pcVar14 == (char *)0x0) {
        pcVar14 = *(char **)(param_1 + 0x36);
        *(char **)(param_1 + 0x28) = pcVar14;
      }
      if (pcVar14 == (char *)0x0) {
        return 0;
      }
      cVar1 = *pcVar14;
      while( true ) {
        if (cVar1 == '\0') {
          return 0;
        }
        pcVar8 = _strstr(pcVar14,"\r\n");
        if (pcVar8 == (char *)0x0) break;
        if (pcVar14 == pcVar8) {
          *param_1 = 7;
          *pcVar14 = '\0';
          return 0;
        }
        pcVar14 = pcVar8 + 2;
        *(char **)(param_1 + 0x28) = pcVar14;
        cVar1 = pcVar8[2];
      }
      return 0;
    }
    iVar2 = FUN_100c58820(*(undefined8 *)(param_1 + 0x2c),8);
    if (iVar2 != 0) {
      return 0;
    }
    FUN_100ba0740(param_1,"Can\'t receive data from HTTP proxy");
LAB_100ba043a:
    param_1[0] = -1;
    param_1[1] = -0xe;
    iVar2 = -0xe;
    break;
  case 7:
    lVar6 = FUN_100b9f630(*(undefined8 *)(param_1 + 0x36),*(undefined8 *)(param_1 + 0x38));
    if (lVar6 == 0) {
      FUN_100ba0740(param_1,"Bad HTTP response from proxy");
      param_1[1] = -0xf;
      return -0xf;
    }
    iVar2 = *(int *)(lVar6 + 0x58);
    if (iVar2 < 0x197) {
      if (iVar2 != 200) {
        if (iVar2 == 0x194) {
          lVar11 = *(long *)(param_1 + 0x26);
          pcVar14 = "HTTP Proxy: Can\'t find server %s";
        }
        else {
LAB_100ba03f7:
          lVar11 = lVar6 + 0x18;
          pcVar14 = "Can\'t process HTTP response for code %s";
        }
LAB_100ba0405:
        FUN_100ba0740(param_1,pcVar14,lVar11);
        param_1[1] = -0xf;
        iVar4 = -0xf;
        goto LAB_100ba06f4;
      }
      *param_1 = 8;
      iVar2 = 0;
    }
    else {
      if (iVar2 != 0x197) {
        if (iVar2 != 0x1f7) goto LAB_100ba03f7;
        lVar11 = *(long *)(param_1 + 0x26);
        pcVar14 = "HTTP Proxy: service %s unavailable";
        goto LAB_100ba0405;
      }
      if ((*(code **)(param_1 + 0x3c) == (code *)0x0) || ((char)param_1[6] != '\0')) {
LAB_100ba048d:
        if (*(long *)(param_1 + 4) == 0) {
          iVar2 = 0;
          local_60 = (char *)0x0;
          local_50 = (code *)0x0;
          uVar3 = 0;
          plVar13 = (long *)(lVar6 + 0x60);
          pcVar14 = (char *)0x0;
LAB_100ba052d:
          plVar13 = (long *)*plVar13;
          if (plVar13 != (long *)(lVar6 + 0x60)) {
            local_38 = (char *)0x0;
            iVar4 = _strcasecmp((char *)plVar13[2],"Proxy-Authenticate");
            if ((iVar4 == 0) && (*(char *)plVar13[3] != '\0')) {
              pcVar8 = _strdup((char *)plVar13[3]);
              iVar4 = -2;
              if (pcVar8 == (char *)0x0) goto LAB_100ba06da;
              pcVar9 = _strtok_r(pcVar8,"\t \r\n",&local_38);
              if (pcVar9 == (char *)0x0) {
                _free(pcVar8);
                goto LAB_100ba052d;
              }
              iVar2 = iVar2 + 1;
              iVar4 = _strcasecmp(pcVar9,"Basic");
              if (iVar4 == 0 && uVar3 == 0) {
                uVar3 = 1;
                if (pcVar14 != (char *)0x0) {
                  _free(pcVar14);
                }
                pcVar14 = "Basic";
                local_50 = FUN_100ba0970;
              }
              else {
                iVar4 = _strcasecmp(pcVar9,"Digest");
                if ((1 < uVar3) || (iVar4 != 0)) {
                  if (local_50 == (code *)0x0) {
                    if (pcVar14 != (char *)0x0) {
                      _free(pcVar14);
                    }
                    local_60 = local_38;
                    pcVar14 = pcVar8;
                  }
                  goto LAB_100ba052d;
                }
                uVar3 = 2;
                if (pcVar14 != (char *)0x0) {
                  _free(pcVar14);
                }
                pcVar14 = "Digest";
                local_50 = FUN_100ba0ab0;
              }
              local_60 = local_38;
              *(char **)(param_1 + 0x2a) = pcVar14;
              pcVar14 = pcVar8;
            }
            goto LAB_100ba052d;
          }
          if (local_50 == (code *)0x0) {
            if (iVar2 == 0) {
              FUN_100ba0740(param_1,
                            "Bad server response: Can\'t find \'Proxy-Authenticate\' header for 407 response"
                           );
            }
            else {
              FUN_100ba0740(param_1,"Authentication type \'%s\' is not supported",pcVar14);
            }
            param_1[1] = -0xf;
            iVar4 = -0xf;
          }
          else {
            lVar11 = (*local_50)(param_1,local_60);
            *(long *)(param_1 + 4) = lVar11;
            if (lVar11 == 0) {
              iVar4 = param_1[1];
            }
            else {
              *param_1 = 2;
              iVar4 = 0;
              if (*(long *)(param_1 + 0x2c) != 0) {
                iVar4 = 0;
                FUN_100c58d60(*(long *)(param_1 + 0x2c),1,0,0);
              }
            }
          }
LAB_100ba06da:
          if (pcVar14 != (char *)0x0) {
            _free(pcVar14);
          }
          iVar2 = 0;
          if (iVar4 != 0) goto LAB_100ba06f4;
          goto LAB_100ba06fe;
        }
        FUN_100ba0740(param_1,"HTTP Proxy: Access denied");
        param_1[1] = -0x10;
      }
      else {
        iVar2 = (**(code **)(param_1 + 0x3c))
                          (param_1 + 6,0x3f,param_1 + 0x16,0x3f,*(undefined8 *)(param_1 + 2));
        if (iVar2 == 0) {
          if (*(void **)(param_1 + 4) != (void *)0x0) {
            _free(*(void **)(param_1 + 4));
            param_1[4] = 0;
            param_1[5] = 0;
          }
          goto LAB_100ba048d;
        }
        param_1[1] = -0x10;
        FUN_100ba0740(param_1,"HTTP Proxy: Access denied");
      }
      iVar4 = -0x10;
LAB_100ba06f4:
      *param_1 = -1;
      iVar2 = iVar4;
    }
LAB_100ba06fe:
    FUN_100b9fa30(lVar6);
  }
  return iVar2;
}

