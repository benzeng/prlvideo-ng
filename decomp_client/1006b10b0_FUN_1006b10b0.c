
void FUN_1006b10b0(long param_1)

{
  undefined8 uVar1;
  long local_20;
  undefined8 local_18;
  
  FUN_1006b1130(&local_20);
  if (*(long *)(param_1 + 0x18) != local_20) {
    FUN_10056ec80(&local_18,&local_20);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = local_18;
    local_18 = uVar1;
    FUN_10056e3a0(&local_18);
  }
  FUN_10056e3a0(&local_20);
  return;
}

