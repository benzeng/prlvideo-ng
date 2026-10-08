
void FUN_100226470(long *param_1,uint param_2,int param_3)

{
  char cVar1;
  
  if (((param_1[3] != 0) && (*(int *)(param_1[3] + 4) != 0)) && (param_1[4] != 0)) {
    cVar1 = FUN_10031bab0();
    if (((cVar1 != '\0') && ((param_2 & 0xfffffff7) == 0x30000001)) && (param_3 != 0x30000001)) {
                    /* WARNING: Could not recover jumptable at 0x0001002264d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x98))(param_1,0x80000009);
      return;
    }
  }
  return;
}

