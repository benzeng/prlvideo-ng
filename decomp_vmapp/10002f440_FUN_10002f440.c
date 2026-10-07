
void FUN_10002f440(long param_1)

{
  long *plVar1;
  
  if (DAT_1011c35c0 == (long *)0x0) {
    plVar1 = operator_new(8);
    *plVar1 = param_1;
    FUN_10002e210(plVar1,0);
    (**(code **)(**(long **)(*plVar1 + 0x1a48) + 0x20))
              (*(long **)(*plVar1 + 0x1a48),10,FUN_10002e720,plVar1);
    DAT_1011c35c0 = plVar1;
  }
  return;
}

