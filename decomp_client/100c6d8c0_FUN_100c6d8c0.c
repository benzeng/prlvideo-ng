
void FUN_100c6d8c0(long param_1)

{
  code *pcVar1;
  int iVar2;
  
  if (param_1 != 0) {
    iVar2 = FUN_100bf2cf0(param_1 + 8,0xffffffff,10,"p_lib.c",0x17f);
    if (iVar2 < 1) {
      if ((*(long *)(param_1 + 0x10) != 0) &&
         (pcVar1 = *(code **)(*(long *)(param_1 + 0x10) + 0xa0), pcVar1 != (code *)0x0)) {
        (*pcVar1)(param_1);
        *(undefined8 *)(param_1 + 0x20) = 0;
      }
      if (*(long *)(param_1 + 0x18) != 0) {
        FUN_100c557e0();
        *(undefined8 *)(param_1 + 0x18) = 0;
      }
      if (*(long *)(param_1 + 0x30) != 0) {
        FUN_100c60790(*(long *)(param_1 + 0x30),FUN_100c7bc60);
      }
      FUN_100bf3910(param_1);
      return;
    }
  }
  return;
}

