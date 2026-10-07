
long FUN_10043bc50(int param_1,undefined4 *param_2,undefined8 *param_3,bool param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int *piVar4;
  long *plVar5;
  
  lVar2 = QMapDataBase::createNode(param_1,0x30,(QMapNodeBase *)&DAT_00000008,param_4);
  *(undefined4 *)(lVar2 + 0x18) = *param_2;
  *(undefined8 *)(lVar2 + 0x20) = *param_3;
  plVar5 = (long *)(lVar2 + 0x28);
  piVar4 = (int *)param_3[1];
  if (*piVar4 == 0) {
    if (piVar4[2] < 0) {
      lVar3 = QArrayData::allocate(8,8,piVar4[2] & 0x7fffffff,0);
      *plVar5 = lVar3;
      if (lVar3 == 0) {
        qBadAlloc();
        lVar3 = *plVar5;
      }
      *(byte *)(lVar3 + 0xb) = *(byte *)(lVar3 + 0xb) | 0x80;
    }
    else {
      lVar3 = QArrayData::allocate(8,8,(long)piVar4[1],0);
      *plVar5 = lVar3;
      if (lVar3 == 0) {
        qBadAlloc();
      }
    }
    lVar3 = *plVar5;
    if ((*(uint *)(lVar3 + 8) & 0x7fffffff) != 0) {
      lVar1 = param_3[1];
      _memcpy((void *)(lVar3 + *(long *)(lVar3 + 0x10)),(void *)(*(long *)(lVar1 + 0x10) + lVar1),
              (long)*(int *)(lVar1 + 4) << 3);
      *(undefined4 *)(*plVar5 + 4) = *(undefined4 *)(param_3[1] + 4);
    }
  }
  else {
    if (*piVar4 != -1) {
      LOCK();
      *piVar4 = *piVar4 + 1;
      UNLOCK();
      piVar4 = (int *)param_3[1];
    }
    *plVar5 = (long)piVar4;
  }
  *(undefined8 *)(lVar2 + 0x20) = *param_3;
  return lVar2;
}

