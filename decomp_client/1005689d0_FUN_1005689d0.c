
undefined1 * FUN_1005689d0(undefined1 *param_1,long param_2,int param_3)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)
            (*(long *)(param_2 + 0x10) + 0x10 +
            ((long)param_3 + (long)*(int *)(*(long *)(param_2 + 0x10) + 8)) * 8);
  *param_1 = *puVar1;
  QKeySequence::QKeySequence((QKeySequence *)(param_1 + 8),(QKeySequence *)(puVar1 + 8));
  *param_1 = *puVar1;
  return param_1;
}

