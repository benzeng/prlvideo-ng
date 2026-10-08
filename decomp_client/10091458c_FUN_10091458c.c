
void FUN_10091458c(long param_1)

{
  do {
    if ((**(char **)(param_1 + 8) == '\\') || (**(char **)(param_1 + 8) == '.')) {
      FUN_1009136ca(param_1);
    }
    else {
      FUN_100913f0f(param_1);
    }
  } while ((((**(char **)(param_1 + 8) != ']') && (**(char **)(param_1 + 8) != '^')) &&
           (**(char **)(param_1 + 8) != '-')) && (*(int *)(param_1 + 0x10) == 0));
  return;
}

