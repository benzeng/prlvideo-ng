
void FUN_1002b30c0(long param_1,int *param_2)

{
  long *plVar1;
  ushort uVar2;
  long lVar3;
  short sVar4;
  int iVar5;
  undefined8 uVar6;
  short sVar7;
  ushort local_64;
  undefined2 local_62;
  int local_60;
  int local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulong local_38;
  uint local_30;
  
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_30 = 0;
  local_38 = 0;
  if ((char)param_2[7] == '\0') {
    local_58 = 1;
    uVar6 = FUN_100097250(DAT_1011c3698);
    FUN_1002b13c0(uVar6,&local_5c,&local_60,&local_62,&local_64);
    local_38 = (ulong)CONCAT24(local_62,(undefined4)local_38);
    local_30 = (uint)local_64;
    local_5c = *param_2 - local_5c;
    local_60 = param_2[1] - local_60;
  }
  else {
    local_5c = *param_2;
    local_60 = param_2[1];
  }
  local_48 = CONCAT44(local_60,local_5c);
  uStack_40 = CONCAT44(-param_2[3],-param_2[2]);
  iVar5 = param_2[6];
  lVar3 = *(long *)(DAT_1011c3698 + 0x1938);
  sVar4 = *(short *)(lVar3 + 0x31888) + 1;
  sVar7 = 1;
  if (sVar4 != 0) {
    sVar7 = sVar4;
  }
  *(short *)(lVar3 + 0x31888) = sVar7;
  uStack_50 = CONCAT62((int6)(CONCAT44(iVar5,(undefined4)uStack_50) >> 0x10),sVar7) & 0x7ffffffff;
  uVar2 = *(ushort *)(lVar3 + 0x31888);
  iVar5 = FUN_1007d72c0(lVar3 + 0x2f350,&local_58,1);
  if (iVar5 != 1) {
    if (0 < DAT_1011b55f8) {
      FUN_1008e3970("","LocalDevices",1,"[%s] event queuing failed",*(undefined8 *)(param_1 + 0xc0))
      ;
    }
    plVar1 = (long *)(*(long *)(param_1 + 0x90) + 0xf0);
    *plVar1 = *plVar1 + 1;
  }
  FUN_1002b2d90(param_1,uVar2 & 0xff,uVar2 >> 8,0,uStack_50._4_1_);
  plVar1 = (long *)(*(long *)(param_1 + 0x98) + 0xf0);
  *plVar1 = *plVar1 + 1;
  return;
}

