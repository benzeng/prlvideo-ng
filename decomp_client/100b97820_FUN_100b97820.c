
char * FUN_100b97820(void)

{
  long lVar1;
  int iVar2;
  char *pcVar3;
  char local_48 [40];
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_20 = lVar1;
  iVar2 = FUN_100bc14f0();
  pcVar3 = (char *)0x0;
  if (0 < iVar2) {
    ___snprintf_chk(local_48,0x20,0,0x20,"%d");
    pcVar3 = _strdup(local_48);
  }
  if (lVar1 == local_20) {
    return pcVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

