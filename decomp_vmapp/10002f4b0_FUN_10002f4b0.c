
void FUN_10002f4b0(void)

{
  long *plVar1;
  
  plVar1 = DAT_1011c35c0;
  if (DAT_1011c35c0 != (long *)0x0) {
    (**(code **)(**(long **)(*DAT_1011c35c0 + 0x1a48) + 0x28))
              (*(long **)(*DAT_1011c35c0 + 0x1a48),10,FUN_10002e720,DAT_1011c35c0);
    FUN_10002e210(plVar1,0);
    operator_delete(plVar1);
    DAT_1011c35c0 = (long *)0x0;
  }
  return;
}

