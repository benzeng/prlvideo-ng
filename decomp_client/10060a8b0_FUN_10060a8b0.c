
void FUN_10060a8b0(long param_1,uint param_2,undefined8 param_3,long *param_4)

{
  Node *pNVar1;
  ulong uVar2;
  char cVar3;
  Node *pNVar4;
  Node *pNVar5;
  Node *pNVar6;
  long lVar7;
  long local_40;
  uint local_34;
  
  local_34 = param_2;
  cVar3 = FUN_10019cd90(param_4);
  if (cVar3 != '\0') {
    pNVar4 = (Node *)FUN_100613170(param_1 + 0x68,param_3);
    pNVar1 = *(Node **)pNVar4;
    pNVar5 = pNVar4;
    if (*(uint *)(pNVar1 + 0x20) != 0) {
      uVar2 = (ulong)(*(uint *)(pNVar1 + 0x24) ^ param_2) % (ulong)*(uint *)(pNVar1 + 0x20);
      pNVar5 = (Node *)(*(long *)(pNVar1 + 8) + uVar2 * 8);
      for (pNVar6 = *(Node **)(*(long *)(pNVar1 + 8) + uVar2 * 8);
          (pNVar6 != pNVar1 &&
          ((*(uint *)(pNVar6 + 8) != (*(uint *)(pNVar1 + 0x24) ^ param_2) ||
           (*(uint *)(pNVar6 + 0xc) != param_2)))); pNVar6 = *(Node **)pNVar6) {
        pNVar5 = pNVar6;
      }
    }
    pNVar5 = *(Node **)pNVar5;
    if (pNVar5 != pNVar1) {
      do {
        pNVar6 = pNVar1;
        if ((*(uint *)(pNVar5 + 0xc) != param_2) ||
           (cVar3 = FUN_100a1e2a0(pNVar5 + 0x10,param_4), pNVar6 = pNVar5, cVar3 != '\0')) break;
        pNVar5 = (Node *)QHashData::nextNode(pNVar5);
        pNVar6 = pNVar1;
      } while (pNVar5 != pNVar1);
      if (pNVar6 != *(Node **)pNVar4) {
        return;
      }
    }
    FUN_100614c50(pNVar4,&local_34,param_4);
    lVar7 = 0;
    if ((*param_4 != 0) && (lVar7 = 0, *(int *)(*param_4 + 4) != 0)) {
      lVar7 = param_4[1];
    }
    QObject::connect(&local_40,lVar7,"2destroyed()",param_1,"1onWatcherDestroyed()",0);
    if (local_40 != 0) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_40);
  }
  return;
}

