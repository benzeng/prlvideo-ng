
void FUN_10068d3d0(long param_1,ulong param_2,long param_3,long *param_4,undefined4 param_5)

{
  Node *pNVar1;
  ulong uVar2;
  char cVar3;
  Node *pNVar4;
  uint uVar5;
  Node *pNVar6;
  Node *pNVar7;
  uint uVar8;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  ulong local_58;
  long local_50;
  long local_48;
  long local_40;
  undefined4 local_38 [2];
  
  local_38[0] = param_5;
  if (param_2 == 0) {
    FUN_100df99c0("[ACTION_HELPERS]","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "0 != orig","ActionManager/ActionHelpers.cpp",0x45,"addMapping");
  }
  if (param_3 == 0) {
    FUN_100df99c0("[ACTION_HELPERS]","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "0 != clone","ActionManager/ActionHelpers.cpp",0x46,"addMapping");
    return;
  }
  if (param_2 == 0) {
    return;
  }
  pNVar1 = (Node *)(param_1 + 0x10);
  pNVar7 = *(Node **)(param_1 + 0x10);
  uVar8 = *(uint *)(pNVar7 + 0x20);
  pNVar4 = pNVar1;
  if (uVar8 != 0) {
    uVar5 = (uint)(param_2 >> 0x1f) ^ (uint)param_2 ^ *(uint *)(pNVar7 + 0x24);
    uVar2 = (ulong)uVar5 % (ulong)uVar8;
    pNVar4 = (Node *)(*(long *)(pNVar7 + 8) + uVar2 * 8);
    for (pNVar6 = *(Node **)(*(long *)(pNVar7 + 8) + uVar2 * 8);
        (pNVar6 != pNVar7 &&
        ((*(uint *)(pNVar6 + 8) != uVar5 || (param_2 != *(ulong *)(pNVar6 + 0x10)))));
        pNVar6 = *(Node **)pNVar6) {
      pNVar4 = pNVar6;
    }
  }
  pNVar4 = *(Node **)pNVar4;
  if (pNVar4 != pNVar7) {
    do {
      pNVar6 = pNVar7;
      if ((*(ulong *)(pNVar4 + 0x10) != param_2) ||
         (pNVar6 = pNVar4, *(long *)(pNVar4 + 0x18) == param_3)) break;
      pNVar4 = (Node *)QHashData::nextNode(pNVar4);
      pNVar6 = pNVar7;
    } while (pNVar4 != pNVar7);
    pNVar7 = *(Node **)pNVar1;
    if (pNVar6 != pNVar7) goto LAB_10068d68c;
    uVar8 = *(uint *)(pNVar7 + 0x20);
  }
  if (uVar8 != 0) {
    uVar5 = (uint)(param_2 >> 0x1f) ^ (uint)param_2 ^ *(uint *)(pNVar7 + 0x24);
    for (pNVar4 = *(Node **)(*(long *)(pNVar7 + 8) + ((ulong)uVar5 % (ulong)uVar8) * 8);
        pNVar4 != pNVar7; pNVar4 = *(Node **)pNVar4) {
      if ((*(uint *)(pNVar4 + 8) == uVar5) && (param_2 == *(ulong *)(pNVar4 + 0x10))) {
        if (pNVar4 != pNVar7) goto LAB_10068d5e2;
        break;
      }
    }
  }
  QObject::connect(&local_40,param_2,"2changed()",param_1,"1onOriginalChanged()",0);
  if (local_40 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_40);
  QObject::connect(&local_48,param_2,"2destroyed(QObject*)",param_1,"1onOriginalDestroyed(QObject*)"
                   ,0);
  if (local_48 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_48);
LAB_10068d5e2:
  QObject::connect(&local_50,param_3,"2destroyed(QObject*)",param_1,"1onCloneDestroyed(QObject*)",0)
  ;
  if (local_50 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_50);
LAB_10068d62e:
    FUN_100df99c0("[ACTION_HELPERS]","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "bConnect","ActionManager/ActionHelpers.cpp",0x56,"addMapping");
  }
  else {
    cVar3 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_50);
    if (cVar3 == '\0') goto LAB_10068d62e;
  }
  local_60 = param_3;
  local_58 = param_2;
  FUN_10068fe70(pNVar1,&local_58,&local_60);
LAB_10068d68c:
  if (*(int *)(*param_4 + 0xc) == *(int *)(*param_4 + 8)) {
    local_70 = param_3;
    FUN_10068f480(param_1 + 0x18,&local_70);
  }
  else {
    local_68 = param_3;
    FUN_10068f230(param_1 + 0x18,&local_68,param_4);
  }
  local_78 = param_3;
  FUN_10068f670(param_1 + 0x20,&local_78,local_38);
  return;
}

