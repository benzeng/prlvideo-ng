
void FUN_1005a77f0(long *param_1,char param_2)

{
  int iVar1;
  char *pcVar2;
  
  *(undefined1 *)((long)param_1 + 0xc9) = 1;
  FUN_1005a5340();
  if (param_2 == '\0') {
    iVar1 = (**(code **)(*param_1 + 0x18))(param_1);
    *(int *)((long)param_1 + 0xcc) = iVar1;
    if (iVar1 < 0) {
      pcVar2 = "Autocommit failed code 0x%x";
    }
    else {
      iVar1 = (**(code **)(*param_1 + 0x20))(param_1);
      *(int *)((long)param_1 + 0xcc) = iVar1;
      if (-1 < iVar1) {
        return;
      }
      pcVar2 = "Finalize failed code 0x%x";
    }
    FUN_1008e3970("","vdisk",0,pcVar2);
    (**(code **)(*param_1 + 0xc0))(param_1,*(undefined4 *)((long)param_1 + 0xcc));
  }
                    /* WARNING: Could not recover jumptable at 0x0001005a7894. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x28))(param_1);
  return;
}

