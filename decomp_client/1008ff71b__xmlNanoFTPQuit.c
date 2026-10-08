
int _xmlNanoFTPQuit(long param_1)

{
  char cVar1;
  ssize_t sVar2;
  long lVar3;
  char *pcVar4;
  int local_f4;
  char local_e8 [208];
  long local_18;
  int local_10;
  int local_c;
  
  if ((param_1 == 0) || (*(int *)(param_1 + 0xb4) < 0)) {
    local_f4 = -1;
  }
  else {
    local_18 = param_1;
    _snprintf(local_e8,200,"QUIT\r\n");
    lVar3 = -1;
    pcVar4 = local_e8;
    do {
      if (lVar3 == 0) break;
      lVar3 = lVar3 + -1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    local_10 = ~(uint)lVar3 - 1;
    sVar2 = _send(*(int *)(local_18 + 0xb4),local_e8,(long)local_10,0);
    local_c = (int)sVar2;
    if (local_c < 0) {
      ___xmlIOErr(9,0,"send failed");
      local_f4 = local_c;
    }
    else {
      local_f4 = 0;
    }
  }
  return local_f4;
}

