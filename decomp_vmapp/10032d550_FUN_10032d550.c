
void FUN_10032d550(long param_1)

{
  if (*(char *)(param_1 + 0x25) != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00010032d587. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_1011c72a8)(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x1c),
                     *(undefined4 *)(param_1 + 0x20),0);
    return;
  }
  (*(code *)DAT_1011c4a88[0x200])
            (*DAT_1011c4a88,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x1c),
             *(undefined4 *)(param_1 + 0x20),*(undefined1 *)(param_1 + 0x24),0,
             **(undefined8 **)(param_1 + 0x10));
  return;
}

