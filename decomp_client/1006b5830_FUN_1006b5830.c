
QMenuBar * FUN_1006b5830(long param_1,ulong param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  QMenuBar *pQVar4;
  int *piVar5;
  uint uVar6;
  QMenuBar *pQVar7;
  int *local_48;
  QMenuBar *local_40;
  ulong local_38;
  undefined1 local_29;
  
  puVar1 = *(undefined8 **)(*(long *)(param_1 + 0x10) + 0x28);
  local_38 = param_2;
  if ((*(int *)((long)puVar1 + 0x14) != 0) && (*(uint *)(puVar1 + 4) != 0)) {
    uVar6 = (uint)(param_2 >> 0x1f) ^ (uint)param_2 ^ *(uint *)((long)puVar1 + 0x24);
    for (puVar3 = *(undefined8 **)(puVar1[1] + ((ulong)uVar6 % (ulong)*(uint *)(puVar1 + 4)) * 8);
        puVar3 != puVar1; puVar3 = (undefined8 *)*puVar3) {
      if ((*(uint *)(puVar3 + 1) == uVar6) && (puVar3[2] == param_2)) {
        if ((puVar3 != puVar1) && (piVar5 = (int *)puVar3[3], piVar5 != (int *)0x0)) {
          pQVar4 = (QMenuBar *)puVar3[4];
          LOCK();
          *piVar5 = *piVar5 + 1;
          UNLOCK();
          pQVar7 = (QMenuBar *)0x0;
          if (piVar5[1] != 0) {
            pQVar7 = pQVar4;
          }
          LOCK();
          *piVar5 = *piVar5 + -1;
          local_29 = *piVar5 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            operator_delete(piVar5);
          }
          if (pQVar7 != (QMenuBar *)0x0) {
            return pQVar7;
          }
        }
        break;
      }
    }
  }
  pQVar4 = operator_new(0x30);
  QMenuBar::QMenuBar(pQVar4,(QWidget *)0x0);
  QMenuBar::setNativeMenuBar(SUB81(pQVar4,0));
  FUN_1006b4810(*(undefined8 *)(param_1 + 0x10),pQVar4,param_2);
  lVar2 = *(long *)(param_1 + 0x10);
  piVar5 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef((QObject *)pQVar4);
  local_48 = piVar5;
  local_40 = pQVar4;
  FUN_1006b5a40(lVar2 + 0x28,&local_38,&local_48);
  if (piVar5 != (int *)0x0) {
    LOCK();
    *piVar5 = *piVar5 + -1;
    local_29 = *piVar5 != 0;
    UNLOCK();
    if (!(bool)local_29) {
      operator_delete(piVar5);
    }
  }
  return pQVar4;
}

