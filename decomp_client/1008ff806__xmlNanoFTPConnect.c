
int _xmlNanoFTPConnect(long param_1)

{
  int *piVar1;
  undefined2 uVar2;
  int iVar3;
  ssize_t sVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  sockaddr *psVar8;
  char *pcVar9;
  __uint8_t *p_Var10;
  char *pcVar11;
  addrinfo *paVar12;
  addrinfo local_1e8 [8];
  undefined1 local_59;
  addrinfo *local_50;
  long local_48;
  hostent *local_40;
  uint local_34;
  int local_30;
  socklen_t local_2c;
  addrinfo *local_28;
  int local_1c;
  
  local_2c = 0x10;
  if (param_1 == 0) {
    return -1;
  }
  if (*(long *)(param_1 + 8) == 0) {
    return -1;
  }
  if (DAT_102312c48 == (char *)0x0) {
    local_34 = *(uint *)(param_1 + 0x10);
  }
  else {
    local_34 = DAT_102312c50;
  }
  if (local_34 == 0) {
    local_34 = 0x15;
  }
  local_48 = param_1;
  _memset((void *)(param_1 + 0x30),0,0x80);
  iVar3 = FUN_1008fe4a4();
  if (iVar3 == 0) {
    if (DAT_102312c48 == (char *)0x0) {
      local_40 = _gethostbyname(*(char **)(local_48 + 8));
    }
    else {
      local_40 = _gethostbyname(DAT_102312c48);
    }
    lVar5 = local_48;
    if (local_40 == (hostent *)0x0) {
      ___xmlIOErr(9,0,"gethostbyname failed");
      return -1;
    }
    if (4 < (uint)local_40->h_length) {
      ___xmlIOErr(9,0,"gethostbyname address mismatch");
      return -1;
    }
    *(undefined1 *)(local_48 + 0x31) = 2;
    pcVar9 = *local_40->h_addr_list;
    pcVar11 = (char *)(local_48 + 0x34);
    for (lVar7 = (long)local_40->h_length; lVar7 != 0; lVar7 = lVar7 + -1) {
      *pcVar11 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar11 = pcVar11 + 1;
    }
    uVar2 = FUN_100900561(local_34 & 0xffff);
    *(undefined2 *)(lVar5 + 0x32) = uVar2;
    iVar3 = _socket(2,1,0);
    *(int *)(local_48 + 0xb4) = iVar3;
    local_2c = 0x10;
  }
  else {
    local_50 = (addrinfo *)0x0;
    paVar12 = local_1e8;
    for (lVar5 = 6; lVar5 != 0; lVar5 = lVar5 + -1) {
      paVar12->ai_flags = 0;
      paVar12->ai_family = 0;
      paVar12 = (addrinfo *)&paVar12->ai_socktype;
    }
    local_1e8[0].ai_socktype = 1;
    if (DAT_102312c48 == (char *)0x0) {
      iVar3 = _getaddrinfo(*(char **)(local_48 + 8),(char *)0x0,local_1e8,&local_50);
      if (iVar3 != 0) {
        ___xmlIOErr(9,0,"getaddrinfo failed");
        return -1;
      }
    }
    else {
      iVar3 = _getaddrinfo(DAT_102312c48,(char *)0x0,local_1e8,&local_50);
      if (iVar3 != 0) {
        ___xmlIOErr(9,0,"getaddrinfo failed");
        return -1;
      }
    }
    lVar5 = local_48;
    for (local_28 = local_50;
        ((local_28 != (addrinfo *)0x0 && (local_28->ai_family != 2)) &&
        (local_28->ai_family != 0x1e)); local_28 = local_28->ai_next) {
    }
    if (local_28 == (addrinfo *)0x0) {
      if (local_50 != (addrinfo *)0x0) {
        _freeaddrinfo(local_50);
      }
      ___xmlIOErr(9,0,"getaddrinfo failed");
      return -1;
    }
    if (0x80 < local_28->ai_addrlen) {
      ___xmlIOErr(9,0,"gethostbyname address mismatch");
      return -1;
    }
    if (local_28->ai_family == 0x1e) {
      psVar8 = local_28->ai_addr;
      p_Var10 = (__uint8_t *)(local_48 + 0x30);
      for (uVar6 = (ulong)local_28->ai_addrlen; uVar6 != 0; uVar6 = uVar6 - 1) {
        *p_Var10 = psVar8->sa_len;
        psVar8 = (sockaddr *)&psVar8->sa_family;
        p_Var10 = p_Var10 + 1;
      }
      uVar2 = FUN_100900561(local_34 & 0xffff);
      *(undefined2 *)(lVar5 + 0x32) = uVar2;
      iVar3 = _socket(0x1e,1,0);
      *(int *)(local_48 + 0xb4) = iVar3;
    }
    else {
      psVar8 = local_28->ai_addr;
      p_Var10 = (__uint8_t *)(local_48 + 0x30);
      for (uVar6 = (ulong)local_28->ai_addrlen; uVar6 != 0; uVar6 = uVar6 - 1) {
        *p_Var10 = psVar8->sa_len;
        psVar8 = (sockaddr *)&psVar8->sa_family;
        p_Var10 = p_Var10 + 1;
      }
      uVar2 = FUN_100900561(local_34 & 0xffff);
      *(undefined2 *)(lVar5 + 0x32) = uVar2;
      iVar3 = _socket(2,1,0);
      *(int *)(local_48 + 0xb4) = iVar3;
    }
    local_2c = local_28->ai_addrlen;
    _freeaddrinfo(local_50);
  }
  if (*(int *)(local_48 + 0xb4) < 0) {
    ___xmlIOErr(9,0,"socket failed");
    return -1;
  }
  iVar3 = _connect(*(int *)(local_48 + 0xb4),(sockaddr *)(local_48 + 0x30),local_2c);
  if (iVar3 < 0) {
    ___xmlIOErr(9,0,"Failed to create a connection");
    _close(*(int *)(local_48 + 0xb4));
    *(undefined4 *)(local_48 + 0xb4) = 0xffffffff;
    *(undefined4 *)(local_48 + 0xb4) = 0xffffffff;
    return -1;
  }
  local_30 = _xmlNanoFTPGetResponse(local_48);
  if (local_30 != 2) {
    _close(*(int *)(local_48 + 0xb4));
    *(undefined4 *)(local_48 + 0xb4) = 0xffffffff;
    *(undefined4 *)(local_48 + 0xb4) = 0xffffffff;
    return -1;
  }
  if (DAT_102312c48 == (char *)0x0) goto LAB_1009000c1;
  iVar3 = 2;
  if (DAT_102312c58 != 0) {
    _snprintf((char *)local_1e8,400,"USER %s\r\n",DAT_102312c58);
    local_59 = 0;
    lVar5 = -1;
    paVar12 = local_1e8;
    do {
      if (lVar5 == 0) break;
      lVar5 = lVar5 + -1;
      piVar1 = &paVar12->ai_flags;
      paVar12 = (addrinfo *)((long)&paVar12->ai_flags + 1);
    } while ((char)*piVar1 != '\0');
    local_1c = ~(uint)lVar5 - 1;
    sVar4 = _send(*(int *)(local_48 + 0xb4),local_1e8,(long)local_1c,0);
    local_30 = (int)sVar4;
    if (local_30 < 0) {
      ___xmlIOErr(9,0,"send failed");
      _close(*(int *)(local_48 + 0xb4));
      *(undefined4 *)(local_48 + 0xb4) = 0xffffffff;
      return local_30;
    }
    local_30 = _xmlNanoFTPGetResponse(local_48);
    iVar3 = local_30;
    if (local_30 == 2) {
      if (DAT_102312c60 != 0) goto LAB_1008ffe42;
    }
    else if (local_30 == 3) {
LAB_1008ffe42:
      if (DAT_102312c60 == 0) {
        _snprintf((char *)local_1e8,400,"PASS anonymous@\r\n");
      }
      else {
        _snprintf((char *)local_1e8,400,"PASS %s\r\n",DAT_102312c60);
      }
      local_59 = 0;
      lVar5 = -1;
      paVar12 = local_1e8;
      do {
        if (lVar5 == 0) break;
        lVar5 = lVar5 + -1;
        piVar1 = &paVar12->ai_flags;
        paVar12 = (addrinfo *)((long)&paVar12->ai_flags + 1);
      } while ((char)*piVar1 != '\0');
      local_1c = ~(uint)lVar5 - 1;
      sVar4 = _send(*(int *)(local_48 + 0xb4),local_1e8,(long)local_1c,0);
      local_30 = (int)sVar4;
      if (local_30 < 0) {
        ___xmlIOErr(9,0,"send failed");
        _close(*(int *)(local_48 + 0xb4));
        *(undefined4 *)(local_48 + 0xb4) = 0xffffffff;
        return local_30;
      }
      local_30 = _xmlNanoFTPGetResponse(local_48);
      iVar3 = local_30;
      if (3 < local_30) {
        _close(*(int *)(local_48 + 0xb4));
        *(undefined4 *)(local_48 + 0xb4) = 0xffffffff;
        return -1;
      }
    }
    else if (local_30 != 1) {
      _close(*(int *)(local_48 + 0xb4));
      *(undefined4 *)(local_48 + 0xb4) = 0xffffffff;
      return -1;
    }
  }
  local_30 = iVar3;
  if (-1 < DAT_102312c68) {
    if (DAT_102312c68 < 2) {
      _snprintf((char *)local_1e8,400,"SITE %s\r\n",*(undefined8 *)(local_48 + 8));
      local_59 = 0;
      lVar5 = -1;
      paVar12 = local_1e8;
      do {
        if (lVar5 == 0) break;
        lVar5 = lVar5 + -1;
        piVar1 = &paVar12->ai_flags;
        paVar12 = (addrinfo *)((long)&paVar12->ai_flags + 1);
      } while ((char)*piVar1 != '\0');
      local_1c = ~(uint)lVar5 - 1;
      sVar4 = _send(*(int *)(local_48 + 0xb4),local_1e8,(long)local_1c,0);
      local_30 = (int)sVar4;
      if (local_30 < 0) {
        ___xmlIOErr(9,0,"send failed");
        _close(*(int *)(local_48 + 0xb4));
        *(undefined4 *)(local_48 + 0xb4) = 0xffffffff;
        *(undefined4 *)(local_48 + 0xb4) = 0xffffffff;
        return local_30;
      }
      local_30 = _xmlNanoFTPGetResponse(local_48);
      if (local_30 == 2) {
        DAT_102312c68 = 1;
LAB_1009000c1:
        local_30 = 2;
        local_30 = FUN_1008ff51d(local_48);
        if (local_30 < 0) {
          _close(*(int *)(local_48 + 0xb4));
          *(undefined4 *)(local_48 + 0xb4) = 0xffffffff;
          *(undefined4 *)(local_48 + 0xb4) = 0xffffffff;
          return -1;
        }
        local_30 = _xmlNanoFTPGetResponse(local_48);
        if (local_30 == 2) {
          return 0;
        }
        if (local_30 != 3) {
          _close(*(int *)(local_48 + 0xb4));
          *(undefined4 *)(local_48 + 0xb4) = 0xffffffff;
          *(undefined4 *)(local_48 + 0xb4) = 0xffffffff;
          return -1;
        }
        local_30 = FUN_1008ff61c(local_48);
        if (local_30 < 0) {
          _close(*(int *)(local_48 + 0xb4));
          *(undefined4 *)(local_48 + 0xb4) = 0xffffffff;
          *(undefined4 *)(local_48 + 0xb4) = 0xffffffff;
          return -1;
        }
        local_30 = _xmlNanoFTPGetResponse(local_48);
        if (local_30 != 2) {
          if (local_30 == 3) {
            ___xmlIOErr(9,0x7d2,"FTP server asking for ACCNT on anonymous\n");
          }
          _close(*(int *)(local_48 + 0xb4));
          *(undefined4 *)(local_48 + 0xb4) = 0xffffffff;
          *(undefined4 *)(local_48 + 0xb4) = 0xffffffff;
          return -1;
        }
        return 0;
      }
      if (DAT_102312c68 == 1) {
        _close(*(int *)(local_48 + 0xb4));
        *(undefined4 *)(local_48 + 0xb4) = 0xffffffff;
        *(undefined4 *)(local_48 + 0xb4) = 0xffffffff;
        return -1;
      }
    }
    else if (DAT_102312c68 != 2) goto LAB_1008fff99;
    if (*(long *)(local_48 + 0x20) == 0) {
      _snprintf((char *)local_1e8,400,"USER anonymous@%s\r\n",*(undefined8 *)(local_48 + 8));
    }
    else {
      _snprintf((char *)local_1e8,400,"USER %s@%s\r\n",*(undefined8 *)(local_48 + 0x20),
                *(undefined8 *)(local_48 + 8));
    }
    local_59 = 0;
    lVar5 = -1;
    paVar12 = local_1e8;
    do {
      if (lVar5 == 0) break;
      lVar5 = lVar5 + -1;
      piVar1 = &paVar12->ai_flags;
      paVar12 = (addrinfo *)((long)&paVar12->ai_flags + 1);
    } while ((char)*piVar1 != '\0');
    local_1c = ~(uint)lVar5 - 1;
    sVar4 = _send(*(int *)(local_48 + 0xb4),local_1e8,(long)local_1c,0);
    local_30 = (int)sVar4;
    if (local_30 < 0) {
      ___xmlIOErr(9,0,"send failed");
      _close(*(int *)(local_48 + 0xb4));
      *(undefined4 *)(local_48 + 0xb4) = 0xffffffff;
      *(undefined4 *)(local_48 + 0xb4) = 0xffffffff;
      return local_30;
    }
    local_30 = _xmlNanoFTPGetResponse(local_48);
    if ((local_30 == 1) || (local_30 == 2)) {
      DAT_102312c68 = 2;
      return 0;
    }
    if (*(long *)(local_48 + 0x28) == 0) {
      _snprintf((char *)local_1e8,400,"PASS anonymous@\r\n");
    }
    else {
      _snprintf((char *)local_1e8,400,"PASS %s\r\n",*(undefined8 *)(local_48 + 0x28));
    }
    local_59 = 0;
    lVar5 = -1;
    paVar12 = local_1e8;
    do {
      if (lVar5 == 0) break;
      lVar5 = lVar5 + -1;
      piVar1 = &paVar12->ai_flags;
      paVar12 = (addrinfo *)((long)&paVar12->ai_flags + 1);
    } while ((char)*piVar1 != '\0');
    local_1c = ~(uint)lVar5 - 1;
    sVar4 = _send(*(int *)(local_48 + 0xb4),local_1e8,(long)local_1c,0);
    local_30 = (int)sVar4;
    if (local_30 < 0) {
      ___xmlIOErr(9,0,"send failed");
      _close(*(int *)(local_48 + 0xb4));
      *(undefined4 *)(local_48 + 0xb4) = 0xffffffff;
      *(undefined4 *)(local_48 + 0xb4) = 0xffffffff;
      return local_30;
    }
    local_30 = _xmlNanoFTPGetResponse(local_48);
    if ((local_30 == 1) || (local_30 == 2)) {
      DAT_102312c68 = 2;
      return 0;
    }
    if (DAT_102312c68 == 2) {
      _close(*(int *)(local_48 + 0xb4));
      *(undefined4 *)(local_48 + 0xb4) = 0xffffffff;
      *(undefined4 *)(local_48 + 0xb4) = 0xffffffff;
      return -1;
    }
  }
LAB_1008fff99:
  _close(*(int *)(local_48 + 0xb4));
  *(undefined4 *)(local_48 + 0xb4) = 0xffffffff;
  *(undefined4 *)(local_48 + 0xb4) = 0xffffffff;
  return -1;
}

