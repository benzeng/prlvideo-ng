
void FUN_1004033b0(long param_1,long param_2)

{
  long lVar1;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  char *local_28;
  
  if (0 < DAT_101119c90) {
    local_58 = *(undefined4 *)(param_2 + 0x48);
    uStack_54 = *(undefined4 *)(param_2 + 0x4c);
    uStack_50 = *(undefined4 *)(param_2 + 0x50);
    uStack_4c = *(undefined4 *)(param_2 + 0x54);
    local_48 = *(undefined8 *)(param_2 + 0x58);
    local_38 = FUN_1007d87f0();
    local_40 = FUN_1000b3d20(DAT_1011c3698);
    if (*(long *)(param_2 + 0x20) == -1) {
      local_28 = "FLUSH";
    }
    else if ((*(byte *)(param_2 + 0x30) & 1) == 0) {
      local_28 = " READ";
    }
    else {
      local_28 = "WRITE";
    }
    FUN_1004036f0(param_1,&local_58);
    FUN_1007d9880(param_1 + 0xe0,param_2 + 0x60);
    lVar1 = FUN_1007d99e0(param_1 + 0xe0);
    if (lVar1 == 0) {
      lVar1 = 0x7fffffffffffffff;
    }
    else {
      lVar1 = *(long *)(lVar1 + -0x18);
    }
    if (lVar1 != *(long *)(param_1 + 0xe8)) {
      FUN_100403a80(param_1 + 0xe8);
    }
  }
  return;
}

