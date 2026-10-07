
int FUN_004041c0(int param_1)

{
  int iVar1;
  int *piVar2;
  sembuf local_18;
  undefined2 local_12;
  undefined2 local_10;
  undefined2 local_e;
  
  local_18.sem_num = 0;
  local_18.sem_op = 0;
  local_18.sem_flg = 0;
  local_12 = 0;
  local_10 = 1;
  local_e = 0x1000;
  iVar1 = semop(param_1,&local_18,2);
  if (-1 < iVar1) {
    return iVar1;
  }
  piVar2 = __errno_location();
  FUN_0040fffa(&DAT_0041913e,"prlcc",0,"Error: Control Center: %s:%d semop() failed. Err = %d",
               "_SemWait",0x78,*piVar2);
  return iVar1;
}

