
undefined8 FUN_100522d60(undefined8 param_1,undefined8 param_2,char param_3)

{
  long lVar1;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  char local_98 [112];
  long local_28;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_28 = lVar1;
  FUN_1007eb5f0(param_2,&local_9c,&local_a0,&local_a4,&local_a8,&local_ac,&local_b0,&local_b4);
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  if (param_3 != '\0') {
    _sprintf(local_98,"%02i:%02i:%02i.%03i ",(ulong)local_a8,(ulong)local_ac,(ulong)local_b0,
             (ulong)local_b4);
    std::string::assign((char *)&local_d8);
  }
  _sprintf(local_98,"%02i.%02i.%04i",(ulong)local_a4,(ulong)local_a0,(ulong)local_9c);
  FUN_100523010(param_1,&local_d8,local_98);
  std::string::~string((string *)&local_d8);
  if (lVar1 == local_28) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

