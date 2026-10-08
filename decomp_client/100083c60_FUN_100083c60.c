
void FUN_100083c60(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  byte bVar2;
  byte extraout_var;
  undefined8 extraout_RDX;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    if (*(long *)(param_1 + 0x28) == 0) {
      bVar2 = 0;
    }
    else if (*(int *)(*(long *)(param_1 + 0x28) + 4) == 0) {
      bVar2 = 0;
    }
    else if (*(long *)(param_1 + 0x30) == 0) {
      bVar2 = 0;
    }
    else {
      CAbstractTask::getResult();
      bVar2 = extraout_var >> 7 ^ 1;
      param_3 = extraout_RDX;
    }
                    /* WARNING: Could not recover jumptable at 0x000100083cb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,bVar2,param_3,*(code **)(lVar1 + 0x10));
    return;
  }
  return;
}

