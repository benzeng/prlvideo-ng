
void FUN_100728b50(long *param_1)

{
  char cVar1;
  long lVar2;
  
  lVar2 = param_1[0xd];
  if (((lVar2 == 0) || (*(int *)(lVar2 + 4) == 0)) || (param_1[0xe] == 0)) {
    FUN_100df99c0("","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]","m_pVm",
                  "CloneVm/CCloneVmParametersDialog.cpp",0xc4,"onCloneVm");
    lVar2 = param_1[0xd];
    if (lVar2 == 0) goto LAB_100728be8;
  }
  if ((*(int *)(lVar2 + 4) != 0) && (param_1[0xe] != 0)) {
    cVar1 = FUN_1007272f0(param_1);
    if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000100728be2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x1b8))(param_1);
      return;
    }
    return;
  }
LAB_100728be8:
                    /* WARNING: Could not recover jumptable at 0x000100728bf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1c0))(param_1);
  return;
}

