
void FUN_100b0dd50(long *param_1,long *param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x198))
                    (param_1,param_1[7] * *param_2,(int)param_2[10],"submit op");
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000100b0dd8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1[1] + 0x50))((long *)param_1[1],param_2);
    return;
  }
  *(byte *)(param_2 + 1) = *(byte *)(param_2 + 1) | 0x20;
  *(undefined4 *)(param_2 + 5) = 0xe;
  FUN_100db6000(param_2);
  return;
}

