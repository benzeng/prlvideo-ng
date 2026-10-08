
void FUN_10068d970(QObject *param_1,long param_2)

{
  QObject *pQVar1;
  Node *pNVar2;
  undefined8 *puVar3;
  char cVar4;
  Node *pNVar5;
  undefined8 *puVar6;
  uint uVar7;
  int iVar8;
  long *plVar9;
  QObject *pQVar10;
  QObject *local_38;
  long local_30;
  
  pQVar1 = param_1 + 0x10;
  pNVar2 = *(Node **)(param_1 + 0x10);
  iVar8 = *(int *)(pNVar2 + 0x20);
  pQVar10 = (QObject *)0x0;
  local_30 = param_2;
  if (iVar8 != 0) {
    plVar9 = *(long **)(pNVar2 + 8);
    pQVar10 = (QObject *)0x0;
    do {
      pNVar5 = (Node *)*plVar9;
      if (pNVar5 != pNVar2) {
        pQVar10 = (QObject *)0x0;
        goto LAB_10068d9d0;
      }
      iVar8 = iVar8 + -1;
      plVar9 = plVar9 + 1;
    } while (iVar8 != 0);
  }
  goto LAB_10068d9ea;
  while (pNVar5 = (Node *)QHashData::nextNode(pNVar5), pNVar5 != *(Node **)pQVar1) {
LAB_10068d9d0:
    if (*(long *)(pNVar5 + 0x18) == param_2) {
      pQVar10 = *(QObject **)(pNVar5 + 0x10);
      break;
    }
  }
LAB_10068d9ea:
  local_38 = pQVar10;
  FUN_10068f480(param_1 + 0x18,&local_30);
  FUN_10068f900(param_1 + 0x20,&local_30);
  iVar8 = FUN_10068fad0(pQVar1,&local_38,&local_30);
  if (0 < iVar8) {
    puVar3 = *(undefined8 **)pQVar1;
    if (*(uint *)(puVar3 + 4) != 0) {
      uVar7 = (uint)((ulong)pQVar10 >> 0x1f) ^ (uint)pQVar10 ^ *(uint *)((long)puVar3 + 0x24);
      for (puVar6 = *(undefined8 **)(puVar3[1] + ((ulong)uVar7 % (ulong)*(uint *)(puVar3 + 4)) * 8);
          puVar6 != puVar3; puVar6 = (undefined8 *)*puVar6) {
        if ((*(uint *)(puVar6 + 1) == uVar7) && (pQVar10 == (QObject *)puVar6[2])) {
          if (puVar6 != puVar3) {
            return;
          }
          break;
        }
      }
    }
    QObject::disconnect(pQVar10,"2changed()",param_1,"1onOriginalChanged()");
    cVar4 = QObject::disconnect(pQVar10,"2destroyed(QObject*)",param_1,
                                "1onOriginalDestroyed(QObject*)");
    if (cVar4 == '\0') {
      FUN_100df99c0("[ACTION_HELPERS]","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]",
                    "bDisconnect","ActionManager/ActionHelpers.cpp",0x87,"onCloneDestroyed");
    }
  }
  return;
}

