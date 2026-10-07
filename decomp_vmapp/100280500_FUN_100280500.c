
void FUN_100280500(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  byte *pbVar3;
  long lVar4;
  byte bVar5;
  int iVar6;
  ulong uVar7;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  uint local_70;
  undefined4 local_6c;
  byte *local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  long local_48 [2];
  undefined4 local_38;
  
  local_48[0] = 0;
  local_48[1] = 0;
  local_38 = 0;
  FUN_10008d2d0(local_48,*param_2,*(undefined4 *)(param_2 + 1));
  lVar4 = local_48[0];
  uVar7 = (ulong)*(uint *)((long)param_2 + 0xc);
  uVar1 = *(undefined4 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 0x130) = param_2[3];
  if (param_2 != (undefined8 *)0x0) {
    operator_delete(param_2);
  }
  local_68 = (byte *)0x0;
  uStack_60 = 0;
  local_58 = 0;
  FUN_10008d2d0(&local_68,uVar1,0x32);
  pbVar3 = local_68;
  bVar5 = 0;
  iVar6 = -1;
  if (*local_68 < 5) {
    uVar2 = *(uint *)(local_68 + 4);
    switch(*local_68) {
    default:
      local_70 = uVar2;
      local_6c = *(undefined4 *)(local_68 + 8);
      iVar6 = FUN_100280730(param_1,&local_70,1,local_68);
      break;
    case 1:
      goto switchD_1002805b4_caseD_1;
    case 2:
    case 4:
      local_88 = 0;
      uStack_80 = 0;
      local_78 = 0;
      FUN_10008d2d0(&local_88,*(undefined4 *)(local_68 + 8),uVar2);
      iVar6 = FUN_100280730(param_1,local_88,uVar2 >> 3,pbVar3);
      FUN_10008d3f0(&local_88);
    }
    if (iVar6 + 1U < 2) {
      bVar5 = 0;
    }
    else {
      if (iVar6 == -2) {
        FUN_1000a7de0(DAT_1011c3698);
      }
      bVar5 = 2;
    }
  }
switchD_1002805b4_caseD_1:
  pbVar3[0xf] = bVar5;
  *(undefined4 *)(lVar4 + uVar7) = uVar1;
  *(undefined1 *)(lVar4 + 6 + uVar7) = 0;
  *(undefined1 *)(lVar4 + 4 + uVar7) = 0;
  *(byte *)(lVar4 + 5 + uVar7) = bVar5;
  if (iVar6 == -1) {
    *(undefined1 *)(lVar4 + 7 + uVar7) = 5;
  }
  else if (bVar5 == 0) {
    *(undefined1 *)(lVar4 + 7 + uVar7) = 1;
  }
  else {
    *(undefined1 *)(lVar4 + 7 + uVar7) = 4;
  }
  if (*(long *)(param_1 + 0x128) != 0) {
    FUN_10027fab0(*(long *)(param_1 + 0x128),*(undefined1 *)(param_1 + 0xc9));
  }
  FUN_10008d3f0(&local_68);
  FUN_10008d3f0(local_48);
  return;
}

