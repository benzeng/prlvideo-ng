
void FUN_100389b40(undefined8 param_1,int *param_2,int param_3,int param_4,uint param_5,int param_6,
                  long param_7)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  
  uVar1 = *(uint *)(&DAT_100b3e3b4 + (ulong)param_5 * 8);
  iVar3 = FUN_10038e380(param_6,param_5);
  uVar4 = FUN_10038e1f0(param_5);
  lVar10 = (ulong)(param_3 * (uVar1 >> 0x18)) + (long)(param_4 * param_6) + param_7;
  (*DAT_1011c66f0)(0xd05,4);
  (*DAT_1011c66f0)(0xd02,iVar3);
  pcVar2 = DAT_1011c68e0;
  if ((param_7 == 0) && (*(char *)(DAT_1011c8478 + 0x68) != '\0')) {
    iVar6 = *param_2;
    iVar9 = param_2[2];
    if (iVar3 != iVar9 - iVar6) {
      uVar5 = FUN_10038e1d0(param_5);
      iVar7 = param_2[1];
      if (param_2[3] == iVar7) {
        return;
      }
      uVar8 = 0;
      do {
        (*DAT_1011c68e0)(*param_2,iVar7 + uVar8,iVar9 - iVar6,1,uVar5,uVar4,lVar10);
        lVar10 = lVar10 + (ulong)(iVar3 * (uVar1 >> 0x18));
        uVar8 = uVar8 + 1;
        iVar7 = param_2[1];
      } while (uVar8 < (uint)(param_2[3] - iVar7));
      return;
    }
  }
  else {
    iVar6 = *param_2;
    iVar9 = param_2[2];
  }
  iVar3 = param_2[1];
  iVar7 = param_2[3];
  uVar5 = FUN_10038e1d0(param_5);
  (*pcVar2)(iVar6,iVar3,iVar9 - iVar6,iVar7 - iVar3,uVar5,uVar4,lVar10);
  return;
}

