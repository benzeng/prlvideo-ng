
void FUN_1002659f0(long *param_1,int param_2,QString *param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = operator==(param_3,(QString *)(param_1 + 0x28));
  if ((param_2 < 0) && (cVar1 != '\0')) {
    uVar2 = FUN_100dddcf0(param_2);
    FUN_100df99c0("","prl_client_app",0,
                  "Failed to create a Bootcamp VM. VM registration error %.8X [%s]",param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x000100265a54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xb0))(param_1,param_2);
    return;
  }
  return;
}

