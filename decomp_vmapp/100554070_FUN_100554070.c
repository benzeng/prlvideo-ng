
void FUN_100554070(void *param_1)

{
  _free(*(void **)((long)param_1 + 0x40));
  _free(*(void **)((long)param_1 + 0x48));
  _free(*(void **)((long)param_1 + 0x50));
  _free(param_1);
  return;
}

