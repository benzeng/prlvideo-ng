
void FUN_1003b9a60(long *param_1,long param_2,undefined4 param_3,undefined4 param_4)

{
  long lVar1;
  byte *pbVar2;
  
  *param_1 = param_2;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = param_4;
  lVar1 = *(long *)(*(long *)(param_2 + 8) + 0x80);
  pbVar2 = (byte *)(lVar1 + 0x48);
  if (lVar1 == 0) {
    pbVar2 = (byte *)(*(long *)(param_2 + 8) + 0x7c);
  }
  *(uint *)((long)param_1 + 0x14) = (uint)*pbVar2;
  *(undefined4 *)(param_1 + 3) = param_3;
  FUN_10038e870(param_1 + 0x14,(long)param_1 + 0x1c,0x80);
  FUN_10038e870(param_1 + 0x29,param_1 + 0x19,0x80);
  FUN_10038e870(param_1 + 0x3e,param_1 + 0x2e,0x80);
  *(undefined1 *)(param_1 + 0x43) = 1;
  return;
}

