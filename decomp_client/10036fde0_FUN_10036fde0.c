
void FUN_10036fde0(undefined8 param_1)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  Connection local_28 [8];
  
  uVar1 = FUN_100152280();
  iVar4 = 0;
  QObject::connect(local_28,uVar1,"2afterServerAdded( CServerWrap& )",param_1,
                   "1onAfterServerAdded( CServerWrap& )",0);
  QMetaObject::Connection::~Connection(local_28);
  uVar1 = FUN_100152280();
  iVar2 = FUN_100154d30(uVar1);
  if (0 < iVar2) {
    do {
      uVar1 = FUN_100152280();
      lVar3 = FUN_100154790(uVar1,iVar4);
      if (lVar3 != 0) {
        FUN_1003702d0(param_1,lVar3);
      }
      iVar4 = iVar4 + 1;
      uVar1 = FUN_100152280();
      iVar2 = FUN_100154d30(uVar1);
    } while (iVar4 < iVar2);
  }
  return;
}

