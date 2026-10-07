
char * FUN_1004a1790(char *param_1,byte *param_2,uint param_3)

{
  long lVar1;
  undefined *puVar2;
  char *pcVar3;
  char local_78 [64];
  long local_38;
  
  puVar2 = PTR_s_appid____10111c930;
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar1;
  _strlen(PTR_s_appid____10111c930);
  std::string::__init(param_1,(ulong)puVar2);
  pcVar3 = (char *)std::string::append(param_1);
  if ((*param_2 & 1) == 0) {
    param_2 = param_2 + 1;
  }
  else {
    param_2 = *(byte **)(param_2 + 0x10);
  }
  std::string::append(pcVar3,(ulong)param_2);
  pcVar3 = (char *)std::string::append(param_1);
  _sprintf(local_78,"%d",(ulong)param_3);
  std::string::append(pcVar3);
  if (lVar1 == local_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

