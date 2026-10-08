
void FUN_1002455d0(long *param_1,int param_2)

{
  char cVar1;
  long lVar2;
  
  if ((-1 < param_2) && ((*(byte *)(param_1 + 5) & 8) != 0)) {
    lVar2 = 0;
    if ((param_1[3] != 0) && (lVar2 = 0, *(int *)(param_1[3] + 4) != 0)) {
      lVar2 = param_1[4];
    }
    cVar1 = FUN_10061b4d0(lVar2,8);
    if (cVar1 != '\0') {
      CAbstractTask::prependSubTask((int)param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010024562e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb0))(param_1,param_2);
  return;
}

