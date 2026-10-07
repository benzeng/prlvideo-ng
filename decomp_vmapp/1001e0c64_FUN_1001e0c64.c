
void FUN_1001e0c64(long param_1)

{
  do {
    if ((**(char **)(param_1 + 8) == '\\') || (**(char **)(param_1 + 8) == '.')) {
      FUN_1001dfda2(param_1);
    }
    else {
      FUN_1001e05e7(param_1);
    }
  } while ((((**(char **)(param_1 + 8) != ']') && (**(char **)(param_1 + 8) != '^')) &&
           (**(char **)(param_1 + 8) != '-')) && (*(int *)(param_1 + 0x10) == 0));
  return;
}

