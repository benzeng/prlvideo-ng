
void FUN_1006b24a0(long param_1,long *param_2)

{
  undefined8 uVar1;
  undefined8 in_RAX;
  long lVar2;
  undefined8 local_28;
  
  lVar2 = *(long *)(param_1 + 0x10);
  local_28 = in_RAX;
  if (*(long *)(lVar2 + 0x18) != *param_2) {
    FUN_10056ec80(&local_28);
    uVar1 = *(undefined8 *)(lVar2 + 0x18);
    *(undefined8 *)(lVar2 + 0x18) = local_28;
    local_28 = uVar1;
    FUN_10056e3a0(&local_28);
    lVar2 = *(long *)(param_1 + 0x10);
  }
  FUN_1006b21b0(lVar2);
  return;
}

