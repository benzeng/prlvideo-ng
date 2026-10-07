
int FUN_00404140(int param_1)

{
  int iVar1;
  int *piVar2;
  sembuf local_18 [2];
  
  local_18[0].sem_num = 0;
  local_18[0].sem_op = -1;
  local_18[0].sem_flg = 0x1800;
  iVar1 = semop(param_1,local_18,1);
  if (-1 < iVar1) {
    return iVar1;
  }
  piVar2 = __errno_location();
  FUN_0040fffa(&DAT_0041913e,"prlcc",0,"Error: Control Center: %s:%d semop() failed. Err = %d",
               "_SemPost",0x85,*piVar2);
  return iVar1;
}

