
undefined8 FUN_100506d10(long param_1,long *param_2)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  lVar3 = *(long *)(param_1 + 0x10);
  if (*(long *)(lVar3 + 0x10) != 0) {
    lVar2 = *(long *)(lVar3 + 0x20);
    while (lVar2 != lVar3 + 8) {
      if (*(uint *)(param_2 + 1) < 8) {
        return 1;
      }
      piVar1 = (int *)*param_2;
      *piVar1 = *(int *)(*(long *)(lVar2 + 0x20) + 4) + 8;
      uVar4 = (int)param_2[1] - 8;
      *(uint *)(param_2 + 1) = uVar4;
      *param_2 = (long)(piVar1 + 2);
      lVar3 = *(long *)(lVar2 + 0x20);
      if (uVar4 < *(uint *)(lVar3 + 4)) {
        return 1;
      }
      piVar1[1] = *(int *)(lVar2 + 0x18);
      _memcpy(piVar1 + 2,(void *)(*(long *)(lVar3 + 0x10) + lVar3),(long)*(int *)(lVar3 + 4));
      lVar3 = *(long *)(lVar2 + 0x20);
      *(int *)(param_2 + 1) = (int)param_2[1] - *(int *)(lVar3 + 4);
      *param_2 = *param_2 + (long)*(int *)(lVar3 + 4);
      lVar2 = QMapNodeBase::nextNode();
      lVar3 = *(long *)(param_1 + 0x10);
    }
  }
  return 0;
}

