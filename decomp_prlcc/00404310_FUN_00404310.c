
int FUN_00404310(key_t param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = semget(param_1,1,0x7b6);
  iVar3 = iVar1;
  if (iVar1 == -1) {
    piVar2 = __errno_location();
    if (*piVar2 == 0x11) {
      iVar1 = semget(param_1,1,0x1b6);
      if (iVar1 == -1) {
        if ((*piVar2 == 2) || (*(int *)PTR___log_level_0061bd30 < 1)) {
          iVar3 = -1;
        }
        else {
          FUN_0040fffa(&DAT_0041913e,"prlcc",1,"Warning: %s:%d semget() failed. Err = %d","_SemOpen"
                       ,0x3f,*piVar2);
          iVar3 = iVar1;
        }
      }
      else if (-1 < iVar1) {
        iVar3 = iVar1;
      }
    }
    else if (0 < *(int *)PTR___log_level_0061bd30) {
      FUN_0040fffa(&DAT_0041913e,"prlcc",1,"Warning: %s:%d semget() failed. Err = %d","_SemOpen",
                   0x36,*piVar2);
    }
  }
  else {
    iVar3 = -1;
    if (-1 < iVar1) {
      iVar3 = iVar1;
    }
  }
  return iVar3;
}

