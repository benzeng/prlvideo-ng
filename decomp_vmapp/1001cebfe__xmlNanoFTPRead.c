
int _xmlNanoFTPRead(long param_1,void *param_2,int param_3)

{
  ssize_t sVar1;
  int local_30;
  
  if (param_1 == 0) {
    local_30 = -1;
  }
  else if (*(int *)(param_1 + 0xb8) < 0) {
    local_30 = 0;
  }
  else if (param_2 == (void *)0x0) {
    local_30 = -1;
  }
  else if (param_3 < 1) {
    local_30 = 0;
  }
  else {
    sVar1 = _recv(*(int *)(param_1 + 0xb8),param_2,(long)param_3,0);
    local_30 = (int)sVar1;
    if (local_30 < 1) {
      if (local_30 < 0) {
        ___xmlIOErr(9,0,"recv failed");
      }
      _xmlNanoFTPCloseConnection(param_1);
    }
  }
  return local_30;
}

