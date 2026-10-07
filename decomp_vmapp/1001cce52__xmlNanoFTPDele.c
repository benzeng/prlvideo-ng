
int _xmlNanoFTPDele(long param_1,long param_2)

{
  char cVar1;
  int iVar2;
  ssize_t sVar3;
  long lVar4;
  char *pcVar5;
  int local_1bc;
  char local_1a8 [399];
  undefined1 local_19;
  long local_18;
  int local_10;
  int local_c;
  
  if (((param_1 == 0) || (*(int *)(param_1 + 0xb4) < 0)) || (param_2 == 0)) {
    local_1bc = -1;
  }
  else if (param_2 == 0) {
    local_1bc = 0;
  }
  else {
    local_18 = param_1;
    _snprintf(local_1a8,400,"DELE %s\r\n",param_2);
    local_19 = 0;
    lVar4 = -1;
    pcVar5 = local_1a8;
    do {
      if (lVar4 == 0) break;
      lVar4 = lVar4 + -1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    local_10 = ~(uint)lVar4 - 1;
    sVar3 = _send(*(int *)(local_18 + 0xb4),local_1a8,(long)local_10,0);
    local_c = (int)sVar3;
    if (local_c < 0) {
      ___xmlIOErr(9,0,"send failed");
      local_1bc = local_c;
    }
    else {
      iVar2 = _xmlNanoFTPGetResponse(local_18);
      if (iVar2 == 4) {
        local_1bc = -1;
      }
      else if (iVar2 == 2) {
        local_1bc = 1;
      }
      else if (iVar2 == 5) {
        local_1bc = 0;
      }
      else {
        local_1bc = 0;
      }
    }
  }
  return local_1bc;
}

