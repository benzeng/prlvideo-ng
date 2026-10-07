
void FUN_100299980(long *param_1)

{
  int iVar1;
  undefined8 uVar2;
  bool bVar3;
  
  uVar2 = 0xffffffff;
  do {
    while (iVar1 = FUN_1002efb70(param_1[8],1,uVar2), iVar1 < 1) {
      switch(iVar1) {
      case -0xffff:
        QMutex::lock();
        FUN_10029a070(param_1);
        QMutex::unlock();
        uVar2 = 0xffffffff;
        break;
      case -0xfffe:
        FUN_100299ab0(param_1,1);
        uVar2 = 0xffffffff;
        break;
      case -0xfffd:
        FUN_100299ab0(param_1,0);
        break;
      case -0xfffc:
        return;
      }
    }
    if (iVar1 == 1) {
      FUN_1002ef6b0(param_1[8]);
      bVar3 = true;
      if (*(int *)(param_1[0x14] + 0x54) == 0) {
        bVar3 = *(int *)(param_1[0x14] + 0x50) == 0;
      }
      FUN_1002998e0(param_1,bVar3);
      (**(code **)(*param_1 + 0x88))(param_1);
      uVar2 = 2000000;
    }
  } while( true );
}

