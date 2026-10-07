
long FUN_10051b730(int param_1,undefined4 *param_2,undefined8 *param_3,bool param_4)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  lVar3 = QMapDataBase::createNode(param_1,0x30,(QMapNodeBase *)&DAT_00000008,param_4);
  *(undefined4 *)(lVar3 + 0x18) = *param_2;
  *(undefined8 *)(lVar3 + 0x20) = *param_3;
  piVar2 = (int *)param_3[1];
  *(int **)(lVar3 + 0x28) = piVar2;
  if (*piVar2 != -1) {
    if (*piVar2 == 0) {
      QListData::detach((int)(long *)(lVar3 + 0x28));
      lVar4 = *(long *)(lVar3 + 0x28);
      iVar1 = *(int *)(lVar4 + 8);
      if (iVar1 != *(int *)(lVar4 + 0xc)) {
        puVar5 = (undefined8 *)(param_3[1] + 0x10 + (long)*(int *)(param_3[1] + 8) * 8);
        puVar6 = (undefined8 *)(lVar4 + 0x10 + (long)iVar1 * 8);
        lVar4 = (long)*(int *)(lVar4 + 0xc) * 8 + (long)iVar1 * -8;
        do {
          piVar2 = (int *)*puVar5;
          *puVar6 = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            UNLOCK();
          }
          puVar6 = puVar6 + 1;
          puVar5 = puVar5 + 1;
          lVar4 = lVar4 + -8;
        } while (lVar4 != 0);
      }
    }
    else {
      LOCK();
      *piVar2 = *piVar2 + 1;
      UNLOCK();
    }
  }
  *(undefined8 *)(lVar3 + 0x20) = *param_3;
  return lVar3;
}

