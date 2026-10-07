
char * FUN_1007ea5b0(char *param_1,undefined1 *param_2,int param_3)

{
  char *pcVar1;
  char local_68;
  char local_67 [36];
  undefined1 local_43;
  undefined1 local_42;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  pcVar1 = &local_68;
  if (param_3 == 0) {
    pcVar1 = local_67;
  }
  _sprintf(pcVar1,"%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x",
           (ulong)CONCAT31(CONCAT21(CONCAT11(*param_2,param_2[1]),param_2[2]),param_2[3]),
           (ulong)CONCAT11(param_2[4],param_2[5]),(ulong)CONCAT11(param_2[6],param_2[7]),
           (ulong)(byte)param_2[8],(uint)(byte)param_2[9],(uint)(byte)param_2[10],
           (uint)(byte)param_2[0xb],(uint)(byte)param_2[0xc],(uint)(byte)param_2[0xd],
           (uint)(byte)param_2[0xe],(uint)(byte)param_2[0xf]);
  if (param_3 == 0) {
    local_68 = '{';
    local_43 = 0x7d;
    local_42 = 0;
  }
  _strlen(&local_68);
  std::string::__init(param_1,(ulong)&local_68);
  if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

