
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_1009c9ec0(void)

{
  long lVar1;
  size_t sVar2;
  uint uVar3;
  pid_t pVar4;
  ulong uVar5;
  undefined4 extraout_var;
  undefined1 in_CL;
  char *pcVar6;
  undefined1 uVar7;
  size_t local_78 [2];
  char *local_68;
  char *pcStack_60;
  char *local_58;
  char *pcStack_50;
  undefined8 local_48;
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  uVar5 = DAT_102313730;
  if ((DAT_102313728 & 1) == 0) {
    uVar5 = (ulong)(DAT_102313728 >> 1);
  }
  pcVar6 = &DAT_102313729;
  if (uVar5 == 0) {
    pcVar6 = (char *)0x0;
  }
  DAT_102313740 = DAT_102313738;
  if ((DAT_102313728 & 1) == 0) {
    DAT_102313740 = pcVar6;
  }
  if (uVar5 == 0) {
    DAT_102313740 = pcVar6;
  }
  local_78[1] = 0;
  local_38 = lVar1;
  pcVar6 = (char *)FUN_1009cee20(local_78 + 1);
  local_78[0] = 0;
  pcStack_50 = (char *)FUN_1009ce9b0(local_78);
  sVar2 = local_78[0];
  if (DAT_102313740 == (char *)0x0) {
    DAT_102313740 = pcVar6;
  }
  uVar3 = _getpid();
  _snprintf(pcStack_50,sVar2,"%d",(ulong)uVar3);
  local_68 = DAT_102313740;
  pcStack_60 = "--crash-report";
  local_48 = 0;
  local_58 = pcVar6;
  pVar4 = _vfork();
  uVar7 = 0;
  if ((pVar4 != -1) && (uVar7 = in_CL, pVar4 == 0)) {
    _execv(DAT_102313740,&local_68);
                    /* WARNING: Subroutine does not return */
    __exit(1);
  }
  if (lVar1 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return CONCAT71((int7)(CONCAT44(extraout_var,pVar4) >> 8),uVar7);
}

