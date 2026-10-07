
undefined1 FUN_1004f8610(long *param_1,long *param_2)

{
  long lVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 local_60 [8];
  string local_58;
  undefined1 local_57 [7];
  ulong local_50;
  undefined1 *local_48;
  undefined1 local_40 [32];
  
  std::string::__init((char *)&local_58,*(long *)(*param_2 + 0x10) + *param_2);
  if (((byte)local_58 & 1) == 0) {
    local_50 = (ulong)((byte)local_58 >> 1);
  }
  if (local_50 == 0) {
    uVar2 = 0;
  }
  else {
    FUN_100507cb0(local_60);
    lVar1 = *param_1;
    iVar3 = FUN_10078cf30(local_40,*(long *)(lVar1 + 0x10) + lVar1,*(undefined4 *)(lVar1 + 4),0);
    while (iVar3 == 0) {
      iVar3 = FUN_10078d0d0(local_40);
      if (iVar3 == 0x2014) {
        uVar5 = FUN_10078d0a0(local_40);
        uVar4 = FUN_10078d0c0(local_40);
        FUN_1005081e0(local_60,uVar5,uVar4);
      }
      iVar3 = FUN_10078d020(local_40);
    }
    FUN_100508380(local_60,&DAT_1011bc268,&DAT_1011bc260);
    if (((byte)local_58 & 1) == 0) {
      local_48 = local_57;
    }
    uVar2 = FUN_1005083d0(local_60,local_48);
    FUN_1005080f0(local_60);
  }
  std::string::~string(&local_58);
  return uVar2;
}

