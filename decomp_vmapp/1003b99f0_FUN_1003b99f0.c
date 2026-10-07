
void FUN_1003b99f0(long param_1,long param_2,ulong param_3)

{
  long lVar1;
  char *pcVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_2 + 8);
  if (lVar1 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 8);
  }
  else {
    pcVar2 = (char *)(*(long *)(lVar1 + 0x80) + 0x48);
    if (*(long *)(lVar1 + 0x80) == 0) {
      pcVar2 = (char *)(lVar1 + 0x7c);
    }
    uVar3 = *(undefined8 *)(param_1 + 8);
    if (*pcVar2 == '\b') {
      FUN_10038e8e0((double)*(float *)(param_2 + 0x28 + (param_3 & 0xffffffff) * 4),uVar3,"%f");
      return;
    }
  }
  FUN_10038e8e0(uVar3,"%x",*(undefined4 *)(param_2 + 0x28 + (param_3 & 0xffffffff) * 4));
  return;
}

