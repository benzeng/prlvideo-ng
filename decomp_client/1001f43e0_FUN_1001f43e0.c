
void FUN_1001f43e0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((*(long *)(param_1 + 0x30) != 0) && (uVar1 = 0, *(int *)(*(long *)(param_1 + 0x30) + 4) != 0))
  {
    uVar1 = *(undefined8 *)(param_1 + 0x38);
  }
  uVar1 = FUN_1001605d0(uVar1);
  FUN_1001f4300(param_1,uVar1,"1subTaskCompleted(PRL_RESULT)");
  return;
}

