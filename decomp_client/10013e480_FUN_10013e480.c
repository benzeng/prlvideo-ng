
long FUN_10013e480(undefined8 *param_1,ulong *param_2)

{
  long lVar1;
  uint *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined4 local_40 [2];
  Data_conflict local_38;
  undefined4 local_30;
  
  puVar2 = (uint *)*param_1;
  if (1 < *puVar2) {
    FUN_10013ec80(param_1);
    puVar2 = (uint *)*param_1;
  }
  if (*(long *)(puVar2 + 4) != 0) {
    lVar1 = *(long *)(puVar2 + 4);
    lVar4 = 0;
    do {
      while (lVar3 = lVar1, uVar5 = *(ulong *)(lVar3 + 0x18), *param_2 <= uVar5) {
        lVar1 = *(long *)(lVar3 + 8);
        lVar4 = lVar3;
        if (*(long *)(lVar3 + 8) == 0) goto LAB_10013e4fa;
      }
      lVar1 = *(long *)(lVar3 + 0x10);
    } while (*(long *)(lVar3 + 0x10) != 0);
    if (lVar4 != 0) {
      uVar5 = *(ulong *)(lVar4 + 0x18);
      lVar3 = lVar4;
LAB_10013e4fa:
      if (uVar5 <= *param_2) goto LAB_10013e533;
    }
  }
  local_40[0] = 0;
  local_30 = 0x80000000;
  local_38.field7 = 0;
  lVar3 = FUN_10013ebc0(param_1,param_2,local_40);
  QVariant::~QVariant((QVariant *)&local_38);
LAB_10013e533:
  return lVar3 + 0x20;
}

