
void FUN_1000ecd00(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  QArrayData *local_68;
  undefined *local_60;
  undefined1 local_58 [39];
  undefined1 local_31;
  
  local_60 = PTR_shared_null_1021e15e8;
  iVar1 = FUN_100a68200(local_58,param_2,param_3,0x14);
  do {
    if (iVar1 == -7) {
      FUN_1000ceb30(*(undefined8 *)(param_1 + 0x10),&local_60);
LAB_1000ece64:
      FUN_1000ee530(&local_60);
      return;
    }
    if (iVar1 != 0) {
      if (0 < DAT_10230ffd0) {
        FUN_100df99c0("SGACMD","prl_client_app",1,"Bitbox parsing error %i",iVar1);
      }
      goto LAB_1000ece64;
    }
    iVar1 = FUN_100a683a0(local_58);
    if (iVar1 == 0x2001) {
      iVar1 = FUN_100a68370(local_58);
      FUN_100a68390(local_58);
      QByteArray::fromRawData((char *)&local_68,iVar1);
      FUN_1000ee480(&local_60,&local_68);
      if (*(int *)local_68 != -1) {
        if (*(int *)local_68 != 0) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + -1;
          local_31 = *(int *)local_68 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000ece03;
        }
        QArrayData::deallocate(local_68,1,8);
      }
    }
    else if (1 < DAT_10230ffd0) {
      uVar2 = FUN_100a683a0(local_58);
      uVar3 = FUN_100a68390(local_58);
      FUN_100df99c0("SGACMD","prl_client_app",2,"Unsupported data skipped, type=%u, size=%u",uVar2,
                    uVar3);
    }
LAB_1000ece03:
    iVar1 = FUN_100a682f0(local_58);
  } while( true );
}

