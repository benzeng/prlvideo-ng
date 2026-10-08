
long * _xmlNanoHTTPMethodRedir
                 (long param_1,char *param_2,long param_3,long *param_4,long *param_5,char *param_6,
                 uint param_7)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  long lVar5;
  long lVar6;
  char *local_58;
  long *local_48;
  char *local_38;
  int local_30;
  int local_2c;
  int local_24;
  long local_20;
  
  local_24 = 0;
  local_20 = 0;
  if (param_1 == 0) {
    return (long *)0x0;
  }
  local_58 = param_2;
  if (param_2 == (char *)0x0) {
    local_58 = "GET";
  }
  _xmlNanoHTTPInit();
  do {
    if (local_20 == 0) {
      local_48 = (long *)FUN_1008fbb01(param_1);
    }
    else {
      local_48 = (long *)FUN_1008fbb01(local_20);
      lVar5 = (*(code *)_xmlMemStrdup)(local_20);
      local_48[0xf] = lVar5;
    }
    if (local_48 == (long *)0x0) {
      return (long *)0x0;
    }
    if ((*local_48 == 0) || (iVar2 = _strcmp((char *)*local_48,"http"), iVar2 != 0)) {
      ___xmlIOErr(10,0x7e4,"Not a valid HTTP URI");
      FUN_1008fbb9c(local_48);
      if (local_20 != 0) {
        (*(code *)_xmlFree)(local_20);
      }
      return (long *)0x0;
    }
    if (local_48[1] == 0) {
      ___xmlIOErr(10,0x7e6,"Failed to identify host in URI");
      FUN_1008fbb9c(local_48);
      if (local_20 != 0) {
        (*(code *)_xmlFree)(local_20);
      }
      return (long *)0x0;
    }
    if (DAT_102312c30 == 0) {
      lVar5 = -1;
      pcVar4 = (char *)local_48[1];
      do {
        if (lVar5 == 0) break;
        lVar5 = lVar5 + -1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      local_30 = ~(uint)lVar5 - 1;
      local_2c = FUN_1008fd0ab(local_48[1],(int)local_48[2]);
    }
    else {
      lVar5 = -1;
      pcVar4 = (char *)local_48[1];
      do {
        if (lVar5 == 0) break;
        lVar5 = lVar5 + -1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      local_30 = (~(uint)lVar5 - 1) * 2 + 0x10;
      local_2c = FUN_1008fd0ab(DAT_102312c30,DAT_102312c38);
    }
    if (local_2c < 0) {
      FUN_1008fbb9c(local_48);
      if (local_20 != 0) {
        (*(code *)_xmlFree)(local_20);
      }
      return (long *)0x0;
    }
    *(int *)(local_48 + 5) = local_2c;
    if (param_3 == 0) {
      param_7 = 0;
    }
    else {
      local_30 = local_30 + 0x24;
    }
    if (param_6 != (char *)0x0) {
      lVar5 = -1;
      pcVar4 = param_6;
      do {
        if (lVar5 == 0) break;
        lVar5 = lVar5 + -1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      local_30 = ~(uint)lVar5 + local_30 + 1;
    }
    if ((param_4 != (long *)0x0) && (*param_4 != 0)) {
      lVar5 = -1;
      pcVar4 = (char *)*param_4;
      do {
        if (lVar5 == 0) break;
        lVar5 = lVar5 + -1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      local_30 = ~(uint)lVar5 + local_30 + 0xf;
    }
    if (local_48[4] != 0) {
      lVar5 = -1;
      pcVar4 = (char *)local_48[4];
      do {
        if (lVar5 == 0) break;
        lVar5 = lVar5 + -1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      local_30 = ~(uint)lVar5 + local_30;
    }
    lVar5 = -1;
    pcVar4 = local_58;
    do {
      if (lVar5 == 0) break;
      lVar5 = lVar5 + -1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    lVar6 = -1;
    pcVar4 = (char *)local_48[3];
    do {
      if (lVar6 == 0) break;
      lVar6 = lVar6 + -1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    iVar2 = ~(uint)lVar5 + ~(uint)lVar6 + local_30 + 0x16;
    pcVar4 = (char *)(*(code *)_xmlMallocAtomic)((long)iVar2);
    if (pcVar4 == (char *)0x0) {
      FUN_1008fbb9c(local_48);
      FUN_1008fb6be("allocating header buffer");
      return (long *)0x0;
    }
    if (DAT_102312c30 == 0) {
      iVar3 = _snprintf(pcVar4,(long)iVar2,"%s %s",local_58,local_48[3]);
      local_38 = pcVar4 + iVar3;
    }
    else if ((int)local_48[2] == 0x50) {
      iVar3 = _snprintf(pcVar4,(long)iVar2,"%s http://%s%s",local_58,local_48[1],local_48[3]);
      local_38 = pcVar4 + iVar3;
    }
    else {
      iVar3 = _snprintf(pcVar4,(long)iVar2,"%s http://%s:%d%s",local_58,local_48[1],
                        (ulong)*(uint *)(local_48 + 2),local_48[3]);
      local_38 = pcVar4 + iVar3;
    }
    if (local_48[4] != 0) {
      iVar3 = _snprintf(local_38,(long)iVar2 - ((long)local_38 - (long)pcVar4),"?%s",local_48[4]);
      local_38 = local_38 + iVar3;
    }
    iVar3 = _snprintf(local_38,(long)iVar2 - ((long)local_38 - (long)pcVar4),
                      " HTTP/1.0\r\nHost: %s\r\n",local_48[1]);
    local_38 = local_38 + iVar3;
    if ((param_4 != (long *)0x0) && (*param_4 != 0)) {
      iVar3 = _snprintf(local_38,(long)iVar2 - ((long)local_38 - (long)pcVar4),
                        "Content-Type: %s\r\n",*param_4);
      local_38 = local_38 + iVar3;
    }
    if (param_6 != (char *)0x0) {
      iVar3 = _snprintf(local_38,(long)iVar2 - ((long)local_38 - (long)pcVar4),"%s",param_6);
      local_38 = local_38 + iVar3;
    }
    if (param_3 == 0) {
      _snprintf(local_38,(long)iVar2 - ((long)local_38 - (long)pcVar4),"\r\n");
    }
    else {
      _snprintf(local_38,(long)iVar2 - ((long)local_38 - (long)pcVar4),"Content-Length: %d\r\n\r\n",
                (ulong)param_7);
    }
    local_48[6] = (long)pcVar4;
    local_48[7] = local_48[6];
    *(undefined4 *)((long)local_48 + 0x2c) = 1;
    lVar5 = -1;
    pcVar4 = (char *)local_48[6];
    do {
      if (lVar5 == 0) break;
      lVar5 = lVar5 + -1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    FUN_1008fbd6d(local_48,local_48[6],~(uint)lVar5 - 1);
    if (param_3 != 0) {
      FUN_1008fbd6d(local_48,param_3,param_7);
    }
    *(undefined4 *)((long)local_48 + 0x2c) = 2;
    while (pcVar4 = (char *)FUN_1008fc413(local_48), pcVar4 != (char *)0x0) {
      if (*pcVar4 == '\0') {
        local_48[9] = local_48[0xb];
        (*(code *)_xmlFree)(pcVar4);
        break;
      }
      FUN_1008fc562(local_48,pcVar4);
      (*(code *)_xmlFree)(pcVar4);
    }
    if (((local_48[0xf] == 0) || ((int)local_48[0xd] < 300)) || (399 < (int)local_48[0xd])) {
      if (param_4 != (long *)0x0) {
        if (local_48[0xe] == 0) {
          *param_4 = 0;
        }
        else {
          lVar5 = (*(code *)_xmlMemStrdup)(local_48[0xe]);
          *param_4 = lVar5;
        }
      }
      if ((param_5 == (long *)0x0) || (local_20 == 0)) {
        if (local_20 != 0) {
          (*(code *)_xmlFree)(local_20);
        }
        if (param_5 != (long *)0x0) {
          *param_5 = 0;
        }
      }
      else {
        *param_5 = local_20;
      }
      return local_48;
    }
    do {
      iVar2 = FUN_1008fbedf(local_48);
    } while (0 < iVar2);
    if (9 < local_24) {
      FUN_1008fbb9c(local_48);
      if (local_20 != 0) {
        (*(code *)_xmlFree)(local_20);
      }
      return (long *)0x0;
    }
    local_24 = local_24 + 1;
    if (local_20 != 0) {
      (*(code *)_xmlFree)(local_20);
    }
    local_20 = (*(code *)_xmlMemStrdup)(local_48[0xf]);
    FUN_1008fbb9c(local_48);
  } while( true );
}

