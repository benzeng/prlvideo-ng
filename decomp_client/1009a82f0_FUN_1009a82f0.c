
void FUN_1009a82f0(long *param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_1009987b0();
  if (iVar2 == 2) {
    cVar1 = FUN_1009a8200(param_1);
    if (cVar1 != '\0') {
      cVar1 = (**(code **)(*param_1 + 0x100))(param_1);
      if (cVar1 != '\0') {
        FUN_100998c50(param_1);
        return;
      }
    }
  }
  return;
}

