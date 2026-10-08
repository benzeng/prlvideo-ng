
void FUN_100378bc0(long param_1)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  bool bVar5;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (*(long *)(param_1 + 0x30) != 0) {
    cVar2 = FUN_10036a3e0();
    bVar5 = true;
    if (cVar2 != '\0') goto LAB_100378c0e;
  }
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
  }
  uVar4 = FUN_100323dd0(uVar4);
  iVar3 = FUN_10018a9d0(uVar4);
  bVar5 = iVar3 != 0x30000004;
LAB_100378c0e:
  *(bool *)(lVar1 + 0x41) = bVar5;
  return;
}

