
void FUN_100ada4f0(long param_1,int param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined1 uVar8;
  undefined8 local_38;
  undefined8 local_30;
  
  if (*(int *)(param_1 + 0x58) == 0) {
    *(int *)(param_1 + 0x58) = param_2;
  }
  else if (*(int *)(param_1 + 0x58) == param_2) {
    plVar1 = *(long **)(param_1 + 0x30);
    pcVar2 = *(code **)(*plVar1 + 0xa0);
    local_30 = QCursor::pos();
    iVar5 = (*pcVar2)(plVar1,&local_30);
    if (iVar5 == param_2) {
      lVar3 = *(long *)(param_1 + 0x30);
      uVar6 = QCursor::pos();
      *(ulong *)(param_1 + 0x5c) =
           CONCAT44((int)((ulong)uVar6 >> 0x20) - *(int *)(lVar3 + 0x9b4),
                    (int)uVar6 - *(int *)(lVar3 + 0x9b0));
    }
  }
  local_38 = QCursor::pos();
  cVar4 = CHostDesktop::pointOnBounds((QPoint *)&local_38);
  if (cVar4 == '\0') {
    uVar8 = 0;
  }
  else {
    uVar8 = 1;
    if (*(char *)(param_1 + 0x68) == '\0') {
      uVar7 = QCursor::pos();
      uVar6 = FUN_100319ca0(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x20));
      FUN_100334540(uVar6,0,uVar7 & 0xffffffff,uVar7 >> 0x20,1,1);
    }
  }
  *(undefined1 *)(param_1 + 0x68) = uVar8;
  return;
}

