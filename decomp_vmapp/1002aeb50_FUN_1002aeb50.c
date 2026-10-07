
void FUN_1002aeb50(long param_1,ulong param_2)

{
  char *pcVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = (param_2 & 0xffffffff) * 0x8f0;
  iVar4 = *(int *)(param_1 + 0x9d0 + lVar6);
  pcVar1 = (char *)(param_1 + 0x968 + lVar6);
  if ((iVar4 != *(int *)(param_1 + 0x9d4 + lVar6)) || (*pcVar1 != '\0')) {
    *pcVar1 = '\0';
    lVar2 = DAT_1011c4a88;
    lVar5 = *(long *)(param_1 + 0x9b8 + lVar6);
    if (lVar5 == 0) {
      lVar5 = *(long *)(param_1 + 0x868);
    }
    if (DAT_1011c4a88 != lVar5) {
      DAT_1011c4a88 = lVar5;
      _CGLSetCurrentContext();
      iVar4 = *(int *)(param_1 + 0x9d0 + lVar6);
    }
    (*DAT_1011c5768)(0xde1,iVar4);
    (*DAT_1011c66f0)(0xd02,*(uint *)(param_1 + 0x934 + lVar6) >> 2);
    (*DAT_1011c66f0)(0xd05,4);
    uVar3 = 0x1908;
    if (*(int *)(param_1 + 0x940 + lVar6) != 0x1f) {
      uVar3 = 0x80e1;
    }
    (*DAT_1011c61d8)(0xde1,0,uVar3,0x8367,
                     (ulong)*(uint *)(param_1 + 0x930 + lVar6) + *(long *)(param_1 + 0x920));
    if (DAT_1011c4a88 != lVar2) {
      DAT_1011c4a88 = lVar2;
      _CGLSetCurrentContext(lVar2);
      return;
    }
  }
  return;
}

