
void FUN_100038c30(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  QArrayData *local_60;
  undefined1 local_58 [39];
  undefined1 local_31;
  
  FUN_100038db0();
  iVar1 = FUN_10078cf30(local_58,param_2,param_3,0x50);
  if (iVar1 == 0) {
    do {
      iVar1 = FUN_10078d0d0(local_58);
      if (iVar1 == 0x200a) {
        pcVar4 = (char *)FUN_10078d0a0(local_58);
        iVar1 = FUN_10078d0c0(local_58);
        if ((pcVar4 != (char *)0x0) && (iVar1 == -1)) {
          _strlen(pcVar4);
        }
        QString::fromUtf8_helper((char *)&local_60,(int)pcVar4);
        FUN_10000c490(param_1,&local_60);
        if (*(int *)local_60 != -1) {
          if (*(int *)local_60 != 0) {
            LOCK();
            *(int *)local_60 = *(int *)local_60 + -1;
            local_31 = *(int *)local_60 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100038d47;
          }
          QArrayData::deallocate(local_60,2,8);
        }
      }
      else if (1 < DAT_1011b55f8) {
        uVar2 = FUN_10078d0d0(local_58);
        uVar3 = FUN_10078d0c0(local_58);
        FUN_1008e3970("PRINTING_TOOL","vm",2,"Unsupported data skipped, type = %u, size = %u",uVar2,
                      uVar3);
      }
LAB_100038d47:
      iVar1 = FUN_10078d020(local_58);
    } while (iVar1 == 0);
  }
  return;
}

