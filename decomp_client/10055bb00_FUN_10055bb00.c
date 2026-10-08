
void FUN_10055bb00(long param_1,int param_2,undefined4 param_3,long param_4)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined1 local_38 [12];
  
  if (param_2 != 0) {
    return;
  }
  switch(param_3) {
  case 0:
    uVar4 = **(undefined4 **)(param_4 + 0x10);
    uVar3 = 2;
    break;
  case 1:
    cVar1 = **(char **)(param_4 + 8);
    local_38 = FUN_100715260(param_1 + 0x28,2);
    FUN_10055cc50(param_1 + 0x28,local_38);
    uVar2 = FUN_10071bea0(local_38);
    if (cVar1 == '\0') {
LAB_10055bc11:
      uVar2 = uVar2 & 0xfffffffd;
    }
    else {
      uVar2 = uVar2 | 2;
    }
    goto LAB_10055bc14;
  case 2:
    uVar4 = **(undefined4 **)(param_4 + 0x10);
    uVar3 = 4;
    break;
  case 3:
    cVar1 = **(char **)(param_4 + 8);
    local_38 = FUN_100715260(param_1 + 0x28,4);
    FUN_10055cc50(param_1 + 0x28,local_38);
    uVar2 = FUN_10071bea0(local_38);
    if (cVar1 == '\0') goto LAB_10055bc11;
    uVar2 = uVar2 | 2;
LAB_10055bc14:
    FUN_10071bef0(local_38,uVar2);
    goto LAB_10055bc28;
  default:
    goto switchD_10055bb33_default;
  }
  local_38 = FUN_100715260(param_1 + 0x28,uVar3);
  FUN_10055cc50(param_1 + 0x28,local_38);
  FUN_10071bed0(local_38,uVar4);
LAB_10055bc28:
  FUN_10055cf40(param_1 + 0x28,local_38);
  FUN_10083d420(*(undefined8 *)(param_1 + 0x10));
switchD_10055bb33_default:
  return;
}

