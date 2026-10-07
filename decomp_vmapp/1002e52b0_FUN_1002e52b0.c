
long FUN_1002e52b0(int param_1,undefined4 *param_2,long *param_3,bool param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong *puVar4;
  int *piVar5;
  
  lVar2 = QMapDataBase::createNode(param_1,0x28,(QMapNodeBase *)&DAT_00000008,param_4);
  *(undefined4 *)(lVar2 + 0x18) = *param_2;
  piVar5 = (int *)*param_3;
  if (*piVar5 == 0) {
    uVar3 = QMapDataBase::createData();
    *(undefined8 *)(lVar2 + 0x20) = uVar3;
    if (*(long *)(*param_3 + 0x10) != 0) {
      puVar4 = (ulong *)FUN_1002e53a0(*(long *)(*param_3 + 0x10),uVar3);
      lVar1 = *(long *)(lVar2 + 0x20);
      *(ulong **)(lVar1 + 0x10) = puVar4;
      *puVar4 = *puVar4 & 3 | lVar1 + 8U;
      QMapDataBase::recalcMostLeftNode();
    }
  }
  else {
    if (*piVar5 != -1) {
      LOCK();
      *piVar5 = *piVar5 + 1;
      UNLOCK();
      piVar5 = (int *)*param_3;
    }
    *(int **)(lVar2 + 0x20) = piVar5;
  }
  return lVar2;
}

