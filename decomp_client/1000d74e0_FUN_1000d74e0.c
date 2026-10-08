
void FUN_1000d74e0(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  char cVar2;
  int local_20;
  int local_1c;
  
  cVar2 = FUN_1000d6fb0(param_1,param_2,&local_20);
  if ((cVar2 != '\0') && ((local_1c != 0 || (local_20 != 0)))) {
    lVar1 = *param_3;
    FUN_1000ae810(*(undefined8 *)(param_1 + 0x50),&local_20,0x85,*(long *)(lVar1 + 0x10) + lVar1,
                  *(undefined4 *)(lVar1 + 4));
    return;
  }
  lVar1 = *param_3;
  FUN_1000ae810(*(undefined8 *)(param_1 + 0x50),param_1 + 0x210,0x85,*(long *)(lVar1 + 0x10) + lVar1
                ,*(undefined4 *)(lVar1 + 4));
  lVar1 = *param_3;
  FUN_1000ae810(*(undefined8 *)(param_1 + 0x50),param_1 + 0x218,0x85,*(long *)(lVar1 + 0x10) + lVar1
                ,*(undefined4 *)(lVar1 + 4));
  return;
}

