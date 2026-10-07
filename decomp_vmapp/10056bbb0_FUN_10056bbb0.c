
void FUN_10056bbb0(long param_1)

{
  long *plVar1;
  char cVar2;
  
  plVar1 = *(long **)(param_1 + 0x18);
  while( true ) {
    cVar2 = (**(code **)(*plVar1 + 0x88))(plVar1);
    if (cVar2 == '\0') break;
    (**(code **)(*plVar1 + 0x110))(plVar1,0xffffffff);
  }
                    /* WARNING: Could not recover jumptable at 0x00010056bbfa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x78))
            (*(long **)(param_1 + 0x18),FUN_10056b940,param_1);
  return;
}

