
void FUN_100ada440(long param_1,int param_2,int param_3,undefined4 *param_4,undefined4 *param_5)

{
  long *plVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  undefined8 local_38;
  
  if (*(int *)(param_1 + 0x58) != 0) {
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  if ((param_2 == 1) && (param_3 == 0)) {
    lVar4 = FUN_100319ca0(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x20));
    if (*(char *)(lVar4 + 0x20) == '\0') {
      plVar1 = *(long **)(param_1 + 0x30);
      pcVar2 = *(code **)(*plVar1 + 0xa0);
      local_38 = QCursor::pos();
      iVar3 = (*pcVar2)(plVar1,&local_38);
      if (iVar3 == 0) {
        *param_4 = *(undefined4 *)(param_1 + 0x5c);
        *param_5 = *(undefined4 *)(param_1 + 0x60);
      }
    }
  }
  if ((param_2 == 1) && (param_3 != 0)) {
    *(ulong *)(param_1 + 0x5c) = CONCAT44(*param_5,*param_4);
  }
  return;
}

