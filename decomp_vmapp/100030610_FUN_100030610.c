
void FUN_100030610(long param_1,int param_2,uint param_3,ulong param_4)

{
  Node *pNVar1;
  uint uVar2;
  Node *pNVar3;
  int iVar4;
  long *plVar5;
  
  if ((param_3 & 0x3c) == 0) {
    return;
  }
  QMutex::lock();
  pNVar1 = *(Node **)(param_1 + 0x270);
  iVar4 = *(int *)(pNVar1 + 0x20);
  pNVar3 = pNVar1;
  if (iVar4 != 0) {
    plVar5 = *(long **)(pNVar1 + 8);
    do {
      pNVar3 = (Node *)*plVar5;
      if ((Node *)*plVar5 != pNVar1) break;
      iVar4 = iVar4 + -1;
      plVar5 = plVar5 + 1;
      pNVar3 = pNVar1;
    } while (iVar4 != 0);
  }
  if (pNVar3 != pNVar1) {
    do {
      if (param_3 == 0x20) {
LAB_1000306d0:
        if (*(code **)(pNVar3 + 0x10) != (code *)0x0) {
          (**(code **)(pNVar3 + 0x10))(*(undefined8 *)(pNVar3 + 0x18),param_3,param_4);
        }
      }
      else {
        uVar2 = *(uint *)(pNVar3 + 0x20);
        if ((uVar2 & 1) != 0) {
          if ((((uVar2 & 2) == 0) || (*(int *)(pNVar3 + 0xc) == param_2)) || (param_3 == 0x10)) {
            uVar2 = param_3 & uVar2;
          }
          else {
            if ((param_3 != 4) || (1 < param_4)) goto LAB_1000306e6;
            uVar2 = uVar2 & 4;
          }
          if (uVar2 != 0) goto LAB_1000306d0;
        }
      }
LAB_1000306e6:
      pNVar3 = (Node *)QHashData::nextNode(pNVar3);
    } while (pNVar3 != *(Node **)(param_1 + 0x270));
  }
  QMutex::unlock();
  return;
}

