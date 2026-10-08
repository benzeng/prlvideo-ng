
bool FUN_100c96970(long *param_1,long param_2)

{
  long lVar1;
  bool bVar2;
  
  bVar2 = false;
  if (param_1 != (long *)0x0) {
    if (*(long *)(*param_1 + 8) != param_2) {
      lVar1 = FUN_100c8b1b0(param_2);
      param_2 = 0;
      if (lVar1 != 0) {
        FUN_100c8b2f0(*(undefined8 *)(*param_1 + 8));
        *(long *)(*param_1 + 8) = lVar1;
        param_2 = lVar1;
      }
    }
    bVar2 = param_2 != 0;
  }
  return bVar2;
}

