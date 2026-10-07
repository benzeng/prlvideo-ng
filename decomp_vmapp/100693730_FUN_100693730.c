
void FUN_100693730(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x180);
  FUN_1008e3970("","dimg",0,"CCompImage:");
  FUN_1008e3970("","dimg",0,"Compact parameter for callback: %p",
                *(undefined8 *)((long)param_1 + lVar1 + 0x180f8));
  FUN_10069a400((long)param_1 + lVar1);
  return;
}

