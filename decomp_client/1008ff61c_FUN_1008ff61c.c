
int FUN_1008ff61c(long param_1)

{
  char cVar1;
  ssize_t sVar2;
  long lVar3;
  char *pcVar4;
  int local_f4;
  char local_e8 [199];
  undefined1 local_21;
  long local_18;
  int local_10;
  int local_c;
  
  local_18 = param_1;
  if (*(long *)(param_1 + 0x28) == 0) {
    _snprintf(local_e8,200,"PASS anonymous@\r\n");
  }
  else {
    _snprintf(local_e8,200,"PASS %s\r\n",*(undefined8 *)(param_1 + 0x28));
  }
  local_21 = 0;
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
  return local_f4;
}

