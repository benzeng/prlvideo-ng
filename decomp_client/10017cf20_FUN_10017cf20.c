
void FUN_10017cf20(QObject *param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 auVar4 [16];
  Connection local_40 [8];
  Connection local_38 [16];
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_1021fd3a0;
  auVar4._8_4_ = (int)PTR_shared_null_1021e15d0;
  auVar4._0_8_ = PTR_shared_null_1021e15d0;
  auVar4._12_4_ = (int)((ulong)PTR_shared_null_1021e15d0 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x10) = auVar4;
  uVar2 = FUN_100152280();
  QObject::connect(local_38,uVar2,"2afterServerAdded( CServerWrap& )",param_1,
                   "1onServerAdded( CServerWrap& )",0);
  QMetaObject::Connection::~Connection(local_38);
  uVar2 = FUN_100152280();
  QObject::connect(local_40,uVar2,"2afterServerRemoved( const QString& )",param_1,
                   "1onServerRemoved( const QString& )",0);
  QMetaObject::Connection::~Connection(local_40);
  uVar2 = FUN_100152280();
  iVar1 = FUN_100154d30(uVar2);
  if (0 < iVar1) {
    iVar3 = 0;
    do {
      uVar2 = FUN_100152280();
      uVar2 = FUN_100154790(uVar2,iVar3);
      FUN_10017d090(param_1,uVar2);
      FUN_10017d3d0(param_1,uVar2);
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  return;
}

