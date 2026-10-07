
void FUN_1002d7930(long *param_1)

{
  if (1 < DAT_1011c568c) {
    FUN_1008e3970("","USB",0,"[%s] ep destroy",(long)param_1 + 0xcf);
  }
  FUN_1002d7b20(param_1,0);
  if (((long *)param_1[0xc] != param_1 + 0xc) && (-1 < DAT_1011c568c)) {
    FUN_1008e3970("","USB",0,"[%s] ep is still on iso_out_list",(long)param_1 + 0xcf);
  }
  if (((long *)param_1[0xe] != param_1 + 0xe) && (-1 < DAT_1011c568c)) {
    FUN_1008e3970("","USB",0,"[%s] ep is still on stale_list",(long)param_1 + 0xcf);
  }
  if (((long *)param_1[0x10] != param_1 + 0x10) && (-1 < DAT_1011c568c)) {
    FUN_1008e3970("","USB",0,"[%s] ep is still on active_list",(long)param_1 + 0xcf);
  }
  if ((((long *)param_1[3] != param_1 + 3) || ((int)param_1[5] != 0)) && (-1 < DAT_1011c568c)) {
    FUN_1008e3970("","USB",0,"[%s] ep.ep_pipe is not empty",(long)param_1 + 0xcf);
  }
  if (((long *)param_1[6] != param_1 + 6) || ((int)param_1[5] != 0)) {
    if (-1 < DAT_1011c568c) {
      FUN_1008e3970("","USB",0,"[%s] ep.ep_stale is not empty",(long)param_1 + 0xcf);
    }
    FUN_1002d7200(param_1,param_1 + 6,param_1 + 0xe);
  }
  if ((((long *)param_1[9] != param_1 + 9) || ((int)param_1[0xb] != 0)) && (-1 < DAT_1011c568c)) {
    FUN_1008e3970("","USB",0,"[%s] ep.iso_out_queue is not empty",(long)param_1 + 0xcf);
  }
  if ((long *)*param_1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001002d7b0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_1 + 8))();
  return;
}

