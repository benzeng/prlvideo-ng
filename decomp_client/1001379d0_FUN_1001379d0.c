
long FUN_1001379d0(int param_1,undefined1 *param_2,long *param_3,bool param_4)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = QMapDataBase::createNode(param_1,0x30,(QMapNodeBase *)0x8,param_4);
  *(undefined1 *)(lVar4 + 0x18) = *param_2;
  piVar1 = (int *)*param_3;
  *(int **)(lVar4 + 0x20) = piVar1;
  if (*piVar1 != -1) {
    if (*piVar1 == 0) {
      QListData::detach((int)(long *)(lVar4 + 0x20));
      lVar2 = *(long *)(lVar4 + 0x20);
      lVar5 = (long)*(int *)(lVar2 + 8);
      lVar3 = *param_3;
      if ((lVar3 + (long)*(int *)(lVar3 + 8) * 8 != lVar2 + lVar5 * 8) &&
         (lVar6 = *(int *)(lVar2 + 0xc) - lVar5, lVar6 != 0 && lVar5 <= *(int *)(lVar2 + 0xc))) {
        _memcpy((void *)(lVar2 + 0x10 + lVar5 * 8),
                (void *)(lVar3 + 0x10 + (long)*(int *)(lVar3 + 8) * 8),lVar6 * 8);
      }
    }
    else {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
  }
  *(short *)(lVar4 + 0x28) = (short)param_3[1];
  return lVar4;
}

