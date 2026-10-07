
void FUN_100351620(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    operator_delete__((void *)(*(long *)(param_1 + 8) + -8));
  }
  if (*(void **)(param_1 + 0x270) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x270));
  }
  FUN_1003dd0e0(param_1 + 0x248);
  return;
}

