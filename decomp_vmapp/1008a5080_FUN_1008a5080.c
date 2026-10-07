
void FUN_1008a5080(undefined8 *param_1,ulong *param_2)

{
  undefined8 uVar1;
  undefined4 in_EAX;
  int iVar2;
  int iVar3;
  undefined4 in_register_00000004;
  undefined8 local_38;
  
  local_38 = CONCAT44(in_register_00000004,in_EAX);
  if ((*param_2 & 6) != 0) {
    uVar1 = *param_1;
    iVar2 = FUN_100885600(uVar1);
    if (0 < iVar2) {
      iVar2 = 0;
      do {
        local_38 = FUN_100885620(uVar1,iVar2);
        FUN_1008a4c60(&local_38,param_2[4],0);
        iVar2 = iVar2 + 1;
        iVar3 = FUN_100885600(uVar1);
      } while (iVar2 < iVar3);
    }
    FUN_100884dd0(uVar1);
    *param_1 = 0;
    return;
  }
  FUN_1008a4c60(param_1,param_2[4],(uint)*param_2 & 0x400);
  return;
}

