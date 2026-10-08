
bool FUN_100abebf0(long param_1,ulong *param_2,undefined4 param_3,int *param_4,QPoint *param_5,
                  ulong *param_6)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulong local_38;
  
  if (param_6 == (ulong *)0x0) {
    param_6 = param_2;
  }
  local_38 = *param_6;
  cVar1 = QRect::contains(param_5,SUB81(&local_38,0));
  if (cVar1 == '\0') {
    if (DAT_10230ffd0 < 2) {
      bVar3 = false;
    }
    else {
      bVar3 = false;
      FUN_100df99c0("","ShellIntClient",2,
                    "the point (%d,%d) doesn\'t hit into guest area (%d,%d,%d,%d)",local_38,
                    local_38 >> 0x20,*(int *)param_5,*(int *)(param_5 + 4),
                    (1 - *(int *)param_5) + *(int *)(param_5 + 8),
                    (1 - *(int *)(param_5 + 4)) + *(int *)(param_5 + 0xc));
    }
  }
  else {
    _local_68 = CONCAT44(param_3,0x12);
    uStack_60 = *(undefined8 *)param_4;
    local_58 = CONCAT44((1 - param_4[1]) + param_4[3],(1 - *param_4) + param_4[2]);
    uStack_50 = *(undefined8 *)param_5;
    local_48 = CONCAT44((1 - *(int *)(param_5 + 4)) + *(int *)(param_5 + 0xc),
                        (1 - *(int *)param_5) + *(int *)(param_5 + 8));
    local_40 = (undefined4)*param_2;
    local_3c = *(undefined4 *)((long)param_2 + 4);
    iVar2 = FUN_100a4a170(param_1 + 0x10,&local_68,0x30);
    bVar3 = iVar2 == 0;
  }
  return bVar3;
}

