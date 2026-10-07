
void FUN_0040d3e0(uint param_1)

{
  __pid_t _Var1;
  int __fd;
  uint uVar2;
  char **__argv;
  size_t sVar3;
  char *__dest;
  int *piVar4;
  undefined8 *puVar5;
  long lVar6;
  char **ppcVar7;
  long lVar8;
  ulong uVar9;
  ulong local_38;
  
  uVar9 = (ulong)param_1;
  if (1 < *(int *)PTR___log_level_0061bd30) {
    FUN_0040fffa(&DAT_0041913e,"prlcc",2,"Running \'%s\'",(&DAT_0061d9c0)[uVar9 * 4]);
  }
  lVar8 = 2;
  local_38 = 0x10;
  if ((undefined8 **)DAT_0061d9a0 != &DAT_0061d9a0) {
    lVar6 = 0;
    puVar5 = DAT_0061d9a0;
    do {
      lVar8 = lVar6;
      puVar5 = (undefined8 *)*puVar5;
      lVar6 = lVar8 + 1;
    } while ((undefined8 **)puVar5 != &DAT_0061d9a0);
    lVar8 = lVar8 + 3;
    local_38 = lVar8 * 8;
  }
  __argv = operator_new__(local_38);
  *__argv = (char *)(&DAT_0061d9c0)[uVar9 * 4];
  ppcVar7 = __argv;
  for (puVar5 = DAT_0061d9a0; (undefined8 **)puVar5 != &DAT_0061d9a0; puVar5 = (undefined8 *)*puVar5
      ) {
    sVar3 = strlen((char *)puVar5[2]);
    __dest = operator_new__(sVar3 + 1);
    ppcVar7[1] = __dest;
    ppcVar7 = ppcVar7 + 1;
    strcpy(__dest,(char *)puVar5[2]);
  }
  *(undefined8 *)((long)__argv + (local_38 - 8)) = 0;
  _Var1 = fork();
  (&DAT_0061d9d8)[uVar9 * 8] = _Var1;
  if (_Var1 < 0) {
    FUN_0040fffa(&DAT_0041913e,"prlcc",0,"Error: error: failed to fork");
  }
  else if (_Var1 == 0) {
    __fd = getdtablesize();
    if (2 < __fd) {
      do {
        uVar2 = fcntl(__fd,1);
        if (-1 < (int)uVar2) {
          fcntl(__fd,2,(ulong)(uVar2 | 1));
        }
        __fd = __fd + -1;
      } while (__fd != 2);
    }
    execv((char *)(&DAT_0061d9c0)[uVar9 * 4],__argv);
    piVar4 = __errno_location();
    FUN_0040fffa(&DAT_0041913e,"prlcc",0,"Error: failed to execute subprocess (errno %d)",*piVar4);
                    /* WARNING: Subroutine does not return */
    _exit(-1);
  }
  lVar6 = 2;
  if (1 < lVar8 - 1U) {
    do {
      if (__argv[lVar6 + -1] != (char *)0x0) {
        operator_delete__(__argv[lVar6 + -1]);
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 != lVar8);
  }
  operator_delete__(__argv);
  return;
}

