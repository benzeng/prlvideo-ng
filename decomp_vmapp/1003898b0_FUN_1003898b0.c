
void FUN_1003898b0(long *param_1,long param_2,undefined8 param_3,uint param_4,undefined4 param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (*(int *)(param_2 + 0x24) != 5) {
    uVar4 = param_4;
  }
  uVar3 = 0;
  if ((*(ushort *)(param_2 + 0xb0) & 1) == 0) {
    uVar3 = (ulong)uVar4;
  }
  lVar2 = *(long *)(*(long *)(param_2 + 0x40) + uVar3 * 8);
  uVar1 = *(uint *)(lVar2 + 0x1c);
  FUN_10032e340(param_2,uVar4,param_5);
  FUN_10032df60(param_2,uVar4,param_5);
  if (*(int *)(param_2 + 0x24) == 5) {
    if (*(uint *)(&DAT_100b3e3b4 + (ulong)uVar1 * 8) < 0x1000000) {
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
        break;
      case 0x57:
      case 0x58:
      case 0x59:
      case 0x5e:
      case 0x5f:
        break;
      case 0x5a:
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
      }
    }
  }
  (*DAT_1011c5738)(0x8d40,(int)param_1[4]);
  (**(code **)(*param_1 + 0x38))(param_1,lVar2,param_4,param_5);
  FUN_100389b40();
  return;
}

