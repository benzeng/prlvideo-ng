
void FUN_10050c2a0(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 8) == 1) {
    uVar1 = _CFRunLoopGetCurrent();
    _CFRunLoopStop(uVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010050c2c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_1 + 0x10));
  return;
}

