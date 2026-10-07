
void FUN_10075fe50(long param_1,ulong *param_2,long param_3,long param_4,long param_5,long param_6)

{
  uint *puVar1;
  char cVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong local_40;
  ulong local_38;
  
  local_38 = 0;
  local_40 = 0;
  if (param_4 != 0) {
    cVar2 = FUN_10078c4e0(param_2,*(undefined8 *)(param_1 + 0x90),param_4,&local_38,8);
    if (cVar2 == '\0') {
      FUN_1008e3970("","dbgdump",0,"Failed to read address using va=0x%llx",param_4);
    }
  }
  if (param_5 != 0) {
    cVar2 = FUN_10078c4e0(param_2,*(undefined8 *)(param_1 + 0x90),param_5,&local_40,8);
    if (cVar2 == '\0') {
      FUN_1008e3970("","dbgdump",0,"Failed to read address using va=0x%llx",param_5);
    }
  }
  uVar6 = param_6 + local_38;
  if (local_40 != 0) {
    uVar6 = local_40;
  }
  if (local_38 == 0) {
    uVar6 = local_40;
  }
  if (((local_38 < uVar6) && (local_38 != 0)) && (uVar5 = local_38, uVar6 != 0)) {
    do {
      uVar3 = (*(code *)param_2[4])(param_2,*(undefined8 *)(param_1 + 0x90),uVar5,0);
      if (uVar3 != 0) {
        uVar4 = uVar3 - 0x50000000;
        if (uVar3 >> 0x1c < 0xb) {
          uVar4 = uVar3;
        }
        if (uVar4 < *param_2) {
          puVar1 = (uint *)(param_3 + (uVar4 >> 0xf & 0x1ffffffc));
          *puVar1 = *puVar1 | 1 << ((byte)(uVar4 >> 0xc) & 0x1f);
        }
      }
      uVar5 = uVar5 + 0x1000;
    } while (uVar5 < uVar6);
  }
  return;
}

