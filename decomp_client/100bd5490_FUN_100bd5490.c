
void FUN_100bd5490(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  do {
    *(undefined1 *)(param_2 + lVar1 * 8) = *(undefined1 *)(param_1 + 7 + lVar1 * 8);
    *(undefined1 *)(param_2 + 1 + lVar1 * 8) = *(undefined1 *)(param_1 + 6 + lVar1 * 8);
    *(undefined1 *)(param_2 + 2 + lVar1 * 8) = *(undefined1 *)(param_1 + 5 + lVar1 * 8);
    *(undefined1 *)(param_2 + 3 + lVar1 * 8) = *(undefined1 *)(param_1 + 4 + lVar1 * 8);
    *(undefined1 *)(param_2 + 4 + lVar1 * 8) = *(undefined1 *)(param_1 + 3 + lVar1 * 8);
    *(undefined1 *)(param_2 + 5 + lVar1 * 8) = *(undefined1 *)(param_1 + 2 + lVar1 * 8);
    *(undefined1 *)(param_2 + 6 + lVar1 * 8) = *(undefined1 *)(param_1 + 1 + lVar1 * 8);
    *(undefined1 *)(param_2 + 7 + lVar1 * 8) = *(undefined1 *)(param_1 + lVar1 * 8);
    lVar1 = lVar1 + 1;
  } while (lVar1 != 8);
  return;
}

