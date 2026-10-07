
char * FUN_10076f410(char *param_1,bool *param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  size_t local_2d0;
  char local_2c1;
  undefined1 local_2c0 [40];
  int local_298;
  char local_1cd [405];
  int local_38 [4];
  long local_28;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_2c1 = '\0';
  local_28 = lVar1;
  iVar2 = QString::toLongLong(param_2,(int)&local_2c1);
  if (local_2c1 != '\0') {
    local_38[0] = 1;
    local_38[1] = 0xe;
    local_38[2] = 1;
    local_2d0 = 0x288;
    local_38[3] = iVar2;
    iVar3 = _sysctl(local_38,4,local_2c0,&local_2d0,(void *)0x0,0);
    if ((-1 < iVar3) && (local_298 == iVar2)) {
      _strlen(local_1cd);
      QString::fromUtf8_helper(param_1,(int)local_1cd);
      goto LAB_10076f4db;
    }
  }
  uVar4 = QString::fromAscii_helper("",0);
  *(undefined8 *)param_1 = uVar4;
LAB_10076f4db:
  if (lVar1 == local_28) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

