
void FUN_10040c420(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_100bbfec0;
  if (*(char *)(param_1 + 7) != '\0') {
    FUN_1008e3970("","PrlAudioCore",0,"Destroying in running state");
    FUN_10040c4b0(param_1);
  }
  if (param_1[6] != 0) {
    FUN_1008e3970("","PrlAudioCore",0,"Destroying with attached stream");
    FUN_10040c630(param_1);
  }
  if ((void *)param_1[10] != (void *)0x0) {
    operator_delete__((void *)param_1[10]);
    return;
  }
  return;
}

