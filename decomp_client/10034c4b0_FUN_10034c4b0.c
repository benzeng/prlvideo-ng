
void FUN_10034c4b0(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined4 in_EAX;
  uint uVar3;
  undefined8 uVar4;
  undefined8 in_R8;
  undefined8 in_R9;
  ulong uVar5;
  
  cVar1 = FUN_10034c560();
  if (cVar1 != '\0') {
    uVar5 = (ulong)CONCAT14(*(undefined1 *)(param_1 + 0x30),in_EAX) ^ 0x100000000;
    uVar4 = 0;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
      uVar4 = *(undefined8 *)(param_1 + 0x18);
    }
    uVar4 = FUN_100319c60(uVar4);
    FUN_10033c620(uVar4,0x20,&stack0xffffffffffffffec,4,in_R8,in_R9,uVar5);
  }
  cVar1 = FUN_10034c560(param_1);
  if (cVar1 == '\0') {
    bVar2 = false;
  }
  else {
    uVar4 = 0;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
      uVar4 = *(undefined8 *)(param_1 + 0x18);
    }
    uVar4 = FUN_100319390(uVar4);
    uVar3 = FUN_10018a9d0(uVar4);
    bVar2 = uVar3 == 0x3000000c || (uVar3 & 0xfffffffe) == 0x30000004;
  }
  FUN_100830c00(param_1,bVar2);
  return;
}

