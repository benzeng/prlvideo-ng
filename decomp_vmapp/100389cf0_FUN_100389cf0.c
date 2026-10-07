
void FUN_100389cf0(long param_1,long param_2,undefined8 param_3,uint param_4,undefined4 param_5)

{
  uint uVar1;
  long lVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  undefined4 local_60;
  undefined1 local_5c;
  undefined8 local_58;
  undefined4 local_50;
  uint local_48;
  uint local_44;
  uint local_40;
  int local_3c;
  long local_38;
  
  uVar5 = 0;
  if (*(int *)(param_2 + 0x24) != 5) {
    uVar5 = param_4;
  }
  uVar8 = 0;
  if ((*(ushort *)(param_2 + 0xb0) & 1) == 0) {
    uVar8 = (ulong)uVar5;
  }
  uVar1 = *(uint *)(*(long *)(*(long *)(param_2 + 0x40) + uVar8 * 8) + 0x1c);
  iVar4 = FUN_10032e340(param_2,uVar5,param_5);
  lVar2 = *(long *)(*(long *)(param_1 + 8) + 0x920);
  uVar5 = FUN_10032df60(param_2,uVar5,param_5);
  uVar8 = (ulong)uVar5;
  uVar5 = *(uint *)(param_2 + 0x10);
  bVar3 = (byte)param_5;
  if (*(int *)(param_2 + 0x24) == 5) {
    uVar6 = 1;
    if (uVar5 >> (bVar3 & 0x1f) != 0) {
      uVar6 = uVar5 >> (bVar3 & 0x1f);
    }
    if (*(uint *)(&DAT_100b3e3b4 + (ulong)uVar1 * 8) < 0x1000000) {
      uVar7 = 0;
      switch(uVar1) {
      case 0x53:
      case 0x54:
      case 0x55:
      case 0x56:
      case 0x5b:
      case 0x5c:
      case 0x5d:
      case 0x60:
      case 0x61:
      case 0x62:
      case 99:
        uVar7 = uVar6 * iVar4;
        break;
      case 0x57:
      case 0x58:
      case 0x59:
      case 0x5e:
      case 0x5f:
        uVar7 = iVar4 * uVar6 * 3 >> 1;
        break;
      case 0x5a:
        uVar7 = iVar4 * uVar6 * 2;
        break;
      case 0x65:
      case 0x66:
      case 0x67:
      case 0x68:
      case 0x69:
      case 0x6a:
      case 0x6b:
      case 0x6c:
      case 0x6d:
      case 0x6e:
      case 0x87:
      case 0x88:
      case 0x89:
      case 0x8a:
      case 0x8b:
        uVar7 = (uVar6 + 3 & 0xfffffffc) * iVar4 >> 2;
      }
    }
    else {
      uVar7 = uVar6 * iVar4;
    }
    uVar8 = uVar8 + uVar7 * param_4;
  }
  local_38 = lVar2 + uVar8;
  local_44 = *(uint *)(param_2 + 0xc) >> (bVar3 & 0x1f);
  if (*(uint *)(param_2 + 0xc) >> (bVar3 & 0x1f) == 0) {
    local_44 = 1;
  }
  local_40 = uVar5 >> (bVar3 & 0x1f);
  if (uVar5 >> (bVar3 & 0x1f) == 0) {
    local_40 = 1;
  }
  local_60 = 1;
  local_50 = 0;
  local_5c = 0;
  local_58 = 0x8e;
  local_48 = uVar1;
  local_3c = iVar4;
  FUN_100389f90(param_1,param_2,param_3,param_4,param_5,&local_48,param_3,&local_60);
  return;
}

