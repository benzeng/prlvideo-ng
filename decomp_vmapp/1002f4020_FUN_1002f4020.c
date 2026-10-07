
void FUN_1002f4020(long param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  long local_18;
  
  uVar2 = *(int *)(param_1 + 0x20) + 0x1fffbfa9;
  if ((uVar2 < 0xb) && ((0x481U >> (uVar2 & 0x1f) & 1) != 0)) {
    local_18 = 0;
    uVar2 = (**(code **)(**(long **)(param_1 + 0x28) + 0xa8))
                      (*(long **)(param_1 + 0x28),0,&local_18);
    if ((uVar2 == 0) && (local_18 != 0)) {
      iVar3 = (**(code **)(**(long **)(param_1 + 0x28) + 0xb8))
                        (*(long **)(param_1 + 0x28),*(undefined1 *)(local_18 + 5));
      if (iVar3 == 0) {
        return;
      }
      if (DAT_1011c568c < 0) {
        return;
      }
      lVar1 = *(long *)(param_1 + 8);
      uVar2 = (uint)*(byte *)(local_18 + 5);
      pcVar4 = "[%s] RecoverNullDevDecriptor:: SetConfiguration(%u) FAILED %X";
    }
    else {
      if (DAT_1011c568c < 0) {
        return;
      }
      lVar1 = *(long *)(param_1 + 8);
      pcVar4 = "[%s] RecoverNullDevDecriptor::GetConfigurationDescriptorPtr() FAILED %X";
    }
    FUN_1008e3970("","USB",0,pcVar4,lVar1 + 0x838,uVar2);
  }
  return;
}

