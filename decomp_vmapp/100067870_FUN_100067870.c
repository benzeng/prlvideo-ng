
undefined1 FUN_100067870(void)

{
  long lVar1;
  char cVar2;
  long *in_RCX;
  undefined1 uVar3;
  
  cVar2 = FUN_100065780();
  uVar3 = 0;
  FUN_1008e3970("","vm",0,"vmSendQuestionEventHlp returned %d",cVar2);
  if ((cVar2 != '\0') &&
     (((*in_RCX == 0 || (lVar1 = *(long *)(*in_RCX + 0x10), lVar1 == 0)) ||
      (uVar3 = 1, *(int *)(lVar1 + 0x4c) == 0)))) {
    uVar3 = 0;
    FUN_1008e3970("","vm",0,"Invalid response package!");
  }
  return uVar3;
}

