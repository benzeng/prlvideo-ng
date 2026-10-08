
void FUN_1001f4850(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((*(long *)(param_1 + 0x30) != 0) && (uVar1 = 0, *(int *)(*(long *)(param_1 + 0x30) + 4) != 0))
  {
    uVar1 = *(undefined8 *)(param_1 + 0x38);
  }
  uVar1 = FUN_100161ad0(uVar1);
  FUN_1001f4300(param_1,uVar1,"1onUpdateUserPrefsFinished(PRL_RESULT)");
  return;
}

