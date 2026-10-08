
long FUN_100c4a090(undefined4 param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 local_38;
  
  lVar2 = FUN_100c47360();
  lVar3 = FUN_100c26720();
  uVar4 = 0;
  if ((lVar2 != 0) && (lVar3 != 0)) {
    do {
      if (((param_2 >> (uVar4 & 0x3f) & 1) != 0) &&
         (iVar1 = FUN_100c27200(lVar3,uVar4 & 0xffffffff), iVar1 == 0)) goto LAB_100c4a124;
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < 0x40);
    local_48[0] = 1;
    local_40 = param_4;
    local_38 = param_3;
    iVar1 = FUN_100c46db0(lVar2,param_1,lVar3,local_48);
    if (iVar1 != 0) {
      FUN_100c266b0(lVar3);
      return lVar2;
    }
  }
LAB_100c4a124:
  if (lVar3 != 0) {
    FUN_100c266b0(lVar3);
  }
  if (lVar2 != 0) {
    FUN_100c47630(lVar2);
  }
  return 0;
}

