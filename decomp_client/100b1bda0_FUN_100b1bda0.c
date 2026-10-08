
void FUN_100b1bda0(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x180);
  FUN_100df99c0("","dimg",0,"CCompImage:");
  FUN_100df99c0("","dimg",0,"Compact parameter for callback: %p",
                *(undefined8 *)((long)param_1 + lVar1 + 0x180f8));
  FUN_100b22a70((long)param_1 + lVar1);
  return;
}

