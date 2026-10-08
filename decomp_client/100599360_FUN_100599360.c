
undefined1 * FUN_100599360(undefined1 *param_1,undefined1 *param_2)

{
  if (param_2 == (undefined1 *)0x0) {
    QKeySequence::QKeySequence((QKeySequence *)(param_1 + 8));
  }
  else {
    *param_1 = *param_2;
    QKeySequence::QKeySequence((QKeySequence *)(param_1 + 8),(QKeySequence *)(param_2 + 8));
    *param_1 = *param_2;
  }
  return param_1;
}

