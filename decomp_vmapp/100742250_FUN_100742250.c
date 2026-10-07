
undefined8 FUN_100742250(ulong param_1)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  sembuf local_30;
  
  local_30.sem_num = (ushort)param_1 & 0x7f;
  local_30.sem_op = -1;
  local_30.sem_flg = 0x1000;
  do {
    while( true ) {
      iVar1 = _semop((int)(param_1 >> 7),&local_30,1);
      piVar2 = ___error();
      if (iVar1 != -1) break;
      iVar1 = *piVar2;
      piVar2 = ___error();
      if (iVar1 != 4) {
        pcVar3 = _strerror(*piVar2);
        FUN_10071e690(0xfffffff7,"Can\'t lock mutex - %s",pcVar3);
        return 0xfffffff7;
      }
      *piVar2 = 0;
    }
    *piVar2 = 0;
  } while (iVar1 != 0);
  return 0;
}

