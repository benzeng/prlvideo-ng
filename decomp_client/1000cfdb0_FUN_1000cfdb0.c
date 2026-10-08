
void FUN_1000cfdb0(long *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_1000bd150();
  if (cVar1 != '\0') {
    uVar2 = FUN_100152280();
    uVar2 = FUN_1001548f0(uVar2,param_1 + 2);
    uVar2 = FUN_10018c280(uVar2);
    uVar2 = FUN_100319c50(uVar2);
    FUN_100333230(uVar2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001000cfe00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1);
  return;
}

