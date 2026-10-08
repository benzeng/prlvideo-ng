
void FUN_100ada350(long param_1,undefined4 param_2)

{
  long *plVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 local_30;
  
  plVar1 = *(long **)(param_1 + 0x30);
  pcVar2 = *(code **)(*plVar1 + 0xa0);
  local_30 = QCursor::pos();
  iVar4 = (*pcVar2)(plVar1,&local_30);
  if ((iVar4 == 0) && (*(int *)(param_1 + 0x58) != 0)) {
    cVar3 = FUN_100ad9150(*(undefined8 *)(param_1 + 0x30),param_2);
    if (cVar3 == '\0') {
      uVar5 = QCursor::pos();
      uVar6 = FUN_100319ca0(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x20));
      FUN_100334540(uVar6,0,uVar5 & 0xffffffff,uVar5 >> 0x20,1,1);
    }
  }
  return;
}

