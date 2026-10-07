
undefined8 FUN_100522eb0(undefined8 param_1,long *param_2)

{
  long lVar1;
  char *pcVar2;
  ulong uVar3;
  ulong uVar4;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  char local_98 [112];
  long local_28;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  local_28 = lVar1;
  if (*param_2 < 0) {
    std::string::assign((char *)&local_b8);
    *param_2 = (long)-(int)*param_2;
  }
  FUN_1007eb0c0(param_2,&local_bc,&local_c0,&local_c4,&local_c8,&local_cc);
  if (local_bc == 0) {
    pcVar2 = "%02i:%02i:%02i.%03i";
    uVar4 = (ulong)local_cc;
    uVar3 = (ulong)local_c8;
    local_bc = local_c0;
  }
  else {
    pcVar2 = "%i %02i:%02i:%02i.%03i";
    uVar3 = (ulong)local_c4;
    uVar4 = (ulong)local_c8;
    local_c4 = local_c0;
  }
  _sprintf(local_98,pcVar2,(ulong)local_bc,(ulong)local_c4,uVar3,uVar4);
  FUN_100523010(param_1,&local_b8,local_98);
  std::string::~string((string *)&local_b8);
  if (lVar1 == local_28) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

