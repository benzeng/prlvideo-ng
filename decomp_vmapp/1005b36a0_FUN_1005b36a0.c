
undefined1
FUN_1005b36a0(long param_1,int param_2,undefined8 param_3,byte *param_4,undefined1 *param_5)

{
  int iVar1;
  byte *pbVar2;
  
  *param_5 = 0;
  if (param_2 != 0) {
    iVar1 = *(int *)(param_4 + 8);
    pbVar2 = (byte *)(param_1 + 0x10);
    do {
      if (*(int *)(pbVar2 + -8) == iVar1) {
        if ((*param_4 & *pbVar2) != 0) {
          *pbVar2 = *pbVar2 & ~*param_4;
          *param_5 = 1;
        }
      }
      pbVar2 = pbVar2 + 0x20;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return 1;
}

