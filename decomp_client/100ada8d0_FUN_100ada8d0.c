
void FUN_100ada8d0(long param_1)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  double local_50;
  double local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  
  *(undefined4 *)(param_1 + 100) = 0;
  cVar2 = FUN_100ad42c0(*(undefined8 *)(param_1 + 0x30));
  if (cVar2 != '\0') {
    lVar1 = *(long *)(param_1 + 0x30);
    uVar3 = QCursor::pos();
    local_50 = (double)((int)uVar3 - *(int *)(lVar1 + 0x9b0));
    local_48 = (double)((int)((ulong)uVar3 >> 0x20) - *(int *)(lVar1 + 0x9b4));
    local_28 = 0;
    local_30 = 0;
    local_38 = 0;
    local_40 = 0;
    local_20 = 1;
    (**(code **)(**(long **)(param_1 + 0x18) + 0xd0))(*(long **)(param_1 + 0x18),&local_50,0);
  }
  return;
}

